/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 10:43:03 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/23 10:43:05 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "eval.h"

void init()
{
  stack.opt_location = stack.opd_location = 0;
}

void optPush(char opt)
{
  stack.operator[stack.opt_location++] = opt;
}
void opdPush(char opt)
{
  stack.operand[stack.opd_location++] = opt;
}

char  optPop()
{
    return (stack.operator[--stack.opt_location]);
}

int  opdPop()
{
    return (stack.operand[--stack.opd_location]);
}

void resetExpression(char Exp[], int len)
{
  int   i;

  i = 0;
  while (i < len)
  {
    Exp[i] = '\0';
    i++;
  }
}
int optCheck(char opt1, char opt2)
{
  if (opt1 == '*' || opt1 == '/' || opt1 == '%')
  {
    if(opt2 == '+' || opt2 == '-' || opt2 == '/' || opt2 == '%')
      return (1);
    else
      return (0);
  }
  else
    return (0);
}

int calFunc(int opd1, int opd2, char opt)
{
  if (opt == '+')
    return (SUM(opd1, opd2));
  if (opt == '*')
    return (MULT(opd1, opd2));
  if (opt == '/')
    return (DIV(opd1, opd2));
  if (opt == '%')
    return (MODUL(opd1, opd2));
  return (0);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void eval_expr(char Exp[])
{
  int   len;

  len = ft_strlen(Exp);
  char tmpExp[MAX] = { 0, };
  char ch;
  char opt;
  int tmpCnt = 0, opd1, opd2, res, flag = 0;

  for (int i = 0; i < len; i++)
  {
    ch = Exp[i];
    opt = 0;
    if (ch == ' ')
      continue;
    else if (ch >= '0' && ch <= '9')
      tmpExp [tmpCnt++] = ch;
      if (Exp[i + 1] == '(' || Exp[i + 1] == ')' || Exp[i + 1] == '+'|| \
      Exp[i + 1] == '-'|| Exp[i + 1] == '*' || Exp[i + 1] == '/' || \
      Exp[i + 1] == '%' || Exp[i + 1] == '=')
      {
        if (flag)
        {
          flag = 0;
          opdPush(-atoi(tmpExp));
        }
        else
          opdPush(atoi(tmpExp));
        resetExpression(tmpExp, tmpCnt);
        tmpCnt = 0;
      }
    else if (Exp[i + 1] == '+'|| Exp[i + 1] == '-'|| Exp[i + 1] == '*' || \
    Exp[i + 1] == '/' || Exp[i + 1] == '%' )
    {
      if (ch == '-')
      {
        flag = 1;
        ch = '+';
      }
      if (stack.opt_location == 0)
        optPush(ch);
      else
      {
        opt = optPop();
        if (optCheck(opt, ch))
        {
          opd2 = opdPop();
          opd1 = opdPop();
          res = calFunc(opd1, opd2, opt);
          optPush(res);
          optPush(ch);
        }
        else
        {
          optPush(opt);
          optPush(ch);
        }
      }
    }
    else if (ch == '(')
      optPush(ch);
    else if (ch == ')')
    {
      while (opt != '(')
      {
        opt = optPop();
        if (opt != '(')
        {
          opd2 = opdPop();
          opd1 = opdPop();
          res = calFunc(opd1, opd2, opt);
          optPush(res);
        }
      }
    }
    else if (ch == '=')
      break;
  }
  while (stack.opt_location != 0)
  {
    opd2 = opdPop();
    opd1 = opdPop();
    opt = optPop();
    res = calFunc(opd1, opd2, opt);
    optPush(res);
  }
}

int main (void)
{
  char Expression[MAX] = { 0, };
  printf("Exp: ");
  gets(Expression);
  eval_expr(Expression);
  printf("Result = %d\n", opdPop());
  return (0);
}
