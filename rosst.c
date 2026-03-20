/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rosst.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tragot <tragot@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:50:02 by tragot            #+#    #+#             */
/*   Updated: 2026/03/20 13:59:53 by tragot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void    rosetta_stone(int nbr)
{
    int essehoupas;

	essehoupas = nbr;
    if (nbr < 0)
    {
        write(1, "moins", 5);
        nbr = -nbr;
    }
    if (nbr >= 1000000000)
    {
        if (nbr / 1000000000 == 2)
            write(1, "deux-milliard",13);
        else
            write(1, "un-milliard", 11);
        while (nbr >= 1000000000)
        {
            nbr = nbr - 1000000000;
        }
    }
    if (nbr >= 100000000)
    {
        if (nbr / 100000000 == 9)
            write(1, "-neuf-cent", 10);
        else  if (nbr / 100000000 == 8)
            write(1, "-huit-cent", 10);
        else  if (nbr / 100000000 == 7)
            write(1, "-sept-cent", 10);
        else  if (nbr / 100000000 == 6)
            write(1, "-six-cent", 9);
        else  if (nbr / 100000000 == 5)
            write(1, "-cinq-cent", 10);
        else  if (nbr / 100000000 == 4)
            write(1, "-quatre-cent", 12);
        else  if (nbr / 100000000 == 3)
            write(1, "-trois-cent", 11);
        else  if (nbr / 100000000 == 2)
            write(1, "-deux-cent", 10);
        else  if (nbr / 100000000 == 1)
            write(1, "-cent", 5);
        while (nbr > 1000000000)
        {
            nbr = nbr - 1000000000;
        }
    }
    if (nbr > 10000000)
    {
        if (nbr / 10000000 == 9 && nbr / 1000000 < 97 && nbr / 1000000 > 90)
        {
            if (nbr / 1000000 == 91)
                write(1, "-quatre-vingt-onze-million", 26 );
            else if (nbr / 1000000 == 92)
                write(1, "-quatre-vingt-douze-million", 27);
            else if (nbr / 1000000 == 93)
                write(1, "-quatre-vingt-treize-million", 28);
            else if (nbr / 1000000 == 94)
                write(1, "-quatre-vingt-quatorze-million", 30);
            else if (nbr / 1000000 == 95)
                write(1, "-quatre-vingt-quinze-million", 28);
            else if (nbr / 1000000 == 96)
                write(1, "-quatre-vingt-seize-million", 27);
            while (nbr >= 1000000)
            {
                nbr = nbr - 1000000;
            }
		}
	}
    if  (nbr / 10000000 == 7 && nbr / 1000000 < 77 && nbr / 1000000 > 70)
    {
        if (nbr / 1000000 == 71)
            write(1, "-soixante-et-onze-million", 25 );
        else if (nbr / 1000000 == 72)
            write(1, "-soixante-douze-million", 23);
        else if (nbr / 1000000 == 73)
            write(1, "-soixante-treize-million", 24);
        else if (nbr / 1000000 == 74)
            write(1, "-soixante-quatorze-million", 26);
        else if (nbr / 1000000 == 75)
            write(1, "-soixante-quinze-million", 24);
        else if (nbr / 1000000 == 76)
            write(1, "-soixante-seize-million", 23);
        while (nbr >= 1000000)
        {
            nbr = nbr - 1000000;
        }
    }
    if (nbr / 10000000 == 1 && nbr / 1000000 < 17 && nbr / 1000000 > 10)
    {
        if (nbr / 1000000 == 11)
            write(1, "-onze-million", 13 );
        else if (nbr / 1000000 == 12)
            write(1, "-douze-million", 14);
        else if (nbr / 1000000 == 13)
            write(1, "-treize-million", 15);
        else if (nbr / 1000000 == 14)
			write(1, "-quatorze-million", 17);
        else if (nbr / 1000000 == 15)
                write(1, "-quinze-million", 15);
        else if (nbr / 1000000 == 96)
            write(1, "-seize-million", 14);
        while (nbr >= 1000000)
		{
            nbr = nbr - 1000000;
        }
	}
    if (nbr % 10000000 == 1 && nbr / 1000000 < 62)
    {
        if (nbr / 1000000 == 21)
            write(1, "-vingt-et-un-million", 19);
		if (nbr / 1000000 == 31)
            write(1, "-trente-et-un-million", 20);
        if (nbr / 1000000 == 41)
            write(1, "-quarante-et-un-million", 22);
		if (nbr / 1000000 == 51)
            write(1, "-cinq-et-un-million", 18);
		if (nbr / 1000000 == 21)
            write(1, "-soixante-et-un-million", 22);
        while (nbr >= 1000000)
        {
           nbr = nbr - 1000000;
        }
    }
    else if (nbr >= 10000000 && -nbr / 10000000 <= 9)
    {
		if (nbr / 10000000 == 9)
            write(1, "-quatre-vingt-dix", 17);
        if (nbr / 10000000 == 8)
            write(1, "-quatre-vingt", 13);
        if (nbr / 10000000 == 6)
            write(1, "-soixante", 9);
        if (nbr / 10000000 == 5)
            write(1, "-cinquante", 10);
        if (nbr / 10000000 == 4)
            write(1, "-quarante", 9);
        if (nbr / 10000000 == 3)
            write(1, "-trente", 7);
        if (nbr / 10000000 == 2)
            write(1, "-vingt", 6);
        if (nbr / 10000000 == 1)
            write(1, "-dix", 4);
        while (nbr >= 10000000)
        {
            nbr = nbr - 10000000;
        }
	}
    if (nbr >= 1000000)
    {
        if (nbr / 1000000 == 9)
           write(1, "-neuf-million", 13);
        if (nbr / 1000000 == 8)
            write(1, "-huit-million", 13);
        if (nbr / 1000000 == 6)
            write(1, "-six-million", 12);
        if (nbr / 1000000 == 5)
            write(1, "-cinq-million", 13);
        if (nbr / 1000000 == 4)
            write(1, "-quatre-million", 15);
        if (nbr / 1000000 == 3)
            write(1, "-trois-million", 14);
        if (nbr / 1000000 == 2)
            write(1, "-deux-million", 13);
        if (nbr / 1000000 == 1)
            write(1, "-un-million", 11);
		if (nbr / 1000000 == 0)
			write(1, "-million", 8);
        while (nbr >= 1000000)
        {
           nbr = nbr - 1000000;
        }
	}
    if (nbr >= 100000)
    {
        if (nbr / 100000 == 9)
            write(1, "-neuf-cent", 10);
        else  if (nbr / 100000 == 8)
            write(1, "-huit-cent", 10);
        else  if (nbr / 100000 == 7)
            write(1, "-sept-cent", 10);
        else  if (nbr / 100000 == 6)
            write(1, "-six-cent", 9);
        else  if (nbr / 100000 == 5)
            write(1, "-cinq-cent", 10);
        else  if (nbr / 100000 == 4)
            write(1, "-quatre-cent", 12);
        else  if (nbr / 100000 == 3)
            write(1, "-trois-cent", 11);
        else  if (nbr / 100000 == 2)
            write(1, "-deux-cent", 10);
        else  if (nbr / 100000 == 1)
            write(1, "-cent", 5);
        while (nbr >= 100000)
        {
            nbr = nbr - 100000;
        }
    }
    if (nbr >= 1000)
    {
        if (nbr / 10000 == 9 && nbr / 1000 < 97 && nbr / 1000 > 90)
        {
            if (nbr / 1000 == 91)
                write(1, "-quatre-vingt-onze-mille", 24 );
            else if (nbr / 1000 == 92)
                write(1, "-quatre-vingt-douze-mille", 25);
            else if (nbr / 1000 == 93)
                write(1, "-quatre-vingt-treize-mille", 26);
            else if (nbr / 1000 == 94)
                write(1, "-quatre-vingt-quatorze-mille", 28);
            else if (nbr / 1000 == 95)
                write(1, "-quatre-vingt-quinze-mille", 26);
            else if (nbr / 1000 == 96)
                write(1, "-quatre-vingt-seize-mille", 25);
            while (nbr >= 1000)
            {
                nbr = nbr - 1000;
            }
		}
	}
    if  (nbr / 10000 == 7 && nbr / 1000 < 77 && nbr / 1000 > 70)
    {
        if (nbr / 1000 == 71)
            write(1, "-soixante-et-onze-mille", 23 );
        else if (nbr / 1000 == 72)
            write(1, "-soixante-douze-mille", 21);
        else if (nbr / 1000 == 73)
            write(1, "-soixante-treize-mille", 22);
        else if (nbr / 1000 == 74)
            write(1, "-soixante-quatorze-mille", 24);
        else if (nbr / 1000 == 75)
            write(1, "-soixante-quinze-mille", 22);
        else if (nbr / 1000 == 76)
            write(1, "-soixante-seize-mille", 21);
        while (nbr >= 1000)
        {
			nbr = nbr - 1000;
        }
    }
    if (nbr / 10000 == 1 && nbr / 1000 < 17 && nbr / 1000 > 10)
    {
        if (nbr / 1000 == 11)
            write(1, "-onze-mille", 11 );
        else if (nbr / 1000 == 12)
            write(1, "-douze-mille", 12);
        else if (nbr / 1000 == 13)
            write(1, "-treize-mille", 13);
        else if (nbr / 1000 == 14)
            write(1, "-quatorze-mille", 15);
        else if (nbr / 1000 == 15)
            write(1, "-quinze-mille", 13);
        else if (nbr / 1000 == 16)
            write(1, "-seize-mille", 13);
        while (nbr >= 1000)
        {
            nbr = nbr - 1000;
		}
    }
    if (nbr % 10000 == 1 && nbr / 1000 < 62)
    {
        if (nbr / 1000 == 21)
			write(1, "-vingt-et-un-mille", 17 );
		if (nbr / 1000 == 31)
			write(1, "-trente-et-un-mille", 18);
        if (nbr / 1000 == 41)
            write(1, "-quarante-et-un-mille", 20);
		if (nbr / 1000 == 51)
            write(1, "-cinq-et-un-mille", 16);
		if (nbr / 1000 == 21)
            write(1, "-soixante-et-un-mille", 20);
        while (nbr >= 1000)
		{
                nbr = nbr - 1000;
        }
    }
    else if (nbr >= 10000 && -nbr / 10000 <= 9)
    {
        if (nbr / 10000 == 9)
            write(1, "-quatre-vingt-dix", 17);
        if (nbr / 10000 == 8)
            write(1, "-quatre-vingt", 13);
        if (nbr / 10000 == 6)
            write(1, "-soixante", 9);
		if (nbr / 10000 == 5)
            write(1, "-cinquante", 10);
        if (nbr / 10000 == 4)
            write(1, "-quarante", 9);
        if (nbr / 10000 == 3)
            write(1, "-trente", 7);
        if (nbr / 10000 == 2)
            write(1, "-vingt", 6);
        if (nbr / 10000 == 1)
			write(1, "-dix", 4);
        while (nbr >= 10000)
        {
            nbr = nbr - 10000;
        }
	}
    if (nbr >= 1000)
    {
        if (nbr / 1000 == 9)
            write(1, "-neuf-mille", 11);
        if (nbr / 1000 == 8)
            write(1, "-huit-mille", 11);
        if (nbr / 1000 == 6)
            write(1, "-six-mille", 10);
        if (nbr / 1000 == 5)
            write(1, "-cinq-mille", 11);
        if (nbr / 1000 == 4)
            write(1, "-quatre-mille", 14);
        if (nbr / 1000 == 3)
            write(1, "-trois-mille", 12);
        if (nbr / 1000 == 2)
            write(1, "-deux-mille", 11);
		if (nbr / 1000 == 1)
            write(1, "-un-mille", 9);
		if (nbr / 1000 == 0)
			write(1, "-mille", 6);
        while (nbr >= 1000)
        {
            nbr = nbr - 1000;
        }
	}
	if (nbr >= 100)
	{
		if (nbr / 100 == 9)
			write(1, "-neuf-cent", 10);
		else  if (nbr / 100 == 8)
			write(1, "-huit-cent", 10);
		else  if (nbr / 100 == 7)
			write(1, "-sept-cent", 10);
		else  if (nbr / 100 == 6)
			write(1, "-six-cent", 9);
		else  if (nbr / 100 == 5)
			write(1, "-cinq-cent", 10);
		else  if (nbr / 100 == 4)
			write(1, "-quatre-cent", 12);
		else  if (nbr / 100 == 3)
			write(1, "-trois-cent", 11);
		else  if (nbr / 100 == 2)
			write(1, "-deux-cent", 10);
		else  if (nbr / 100 == 1)
			write(1, "-cent", 5);
		while (nbr >= 100)
		{
			nbr = nbr - 100;
		}
	}
    if (nbr >= 10)
    {
        if (nbr / 10 == 9 && nbr / 1 < 97 && nbr / 1 > 90)
        {
            if (nbr / 1 == 91)
                write(1, "-quatre-vingt-onze", 18);
            else if (nbr / 1 == 92)
                write(1, "-quatre-vingt-douze", 19);
            else if (nbr / 1 == 93)
                write(1, "-quatre-vingt-treize", 20);
			else if (nbr / 1 == 94)
                write(1, "-quatre-vingt-quatorze", 22);
            else if (nbr / 1 == 95)
                write(1, "-quatre-vingt-quinze", 20);
            else if (nbr / 1 == 96)
                write(1, "-quatre-vingt-seize", 19);
            while (nbr >= 1)
            {
                nbr = nbr - 1;
            }
		}
	}
	if  (nbr / 10 == 7 && nbr / 1 < 77 && nbr / 1 > 70)
    {
		if (nbr / 1 == 71)
            write(1, "-soixante-et-onze", 18 );
        else if (nbr / 1 == 72)
            write(1, "-soixante-douze", 16);
		else if (nbr / 1 == 73)
            write(1, "-soixante-treize", 17);
        else if (nbr / 1 == 74)
            write(1, "-soixante-quatorze", 19);
        else if (nbr / 1 == 75)
            write(1, "-soixante-quinze", 17);
        else if (nbr / 1 == 76)
            write(1, "-soixante-seize", 16);
        while (nbr >= 1)
        {
            nbr = nbr - 1;
        }
    }
    if (nbr / 10 == 1 && nbr / 1 < 17 && nbr / 1 > 10)
    {
        if (nbr / 1 == 11)
            write(1, "-onze", 5 );
        else if (nbr / 1 == 12)
            write(1, "-douze", 6);
        else if (nbr / 1 == 13)
            write(1, "-treize", 7);
        else if (nbr / 1 == 14)
            write(1, "-quatorze", 9);
        else if (nbr / 1 == 15)
            write(1, "-quinze", 7);
		else if (nbr / 1 == 16)
            write(1, "-seize", 7);
        while (nbr >= 1)
        {
            nbr = nbr - 1;
        }
    }
    if (nbr % 10 == 1 && nbr / 1 < 62)
    {
        if (nbr / 1 == 21)
            write(1, "-vingt-et-un", 12);
		if (nbr / 1 == 31)
            write(1, "-trente-et-un", 13);
        if (nbr / 1 == 41)
            write(1, "-quarante-et-un", 15);
		if (nbr / 1 == 51)
            write(1, "-cinq-et-un", 11);
		if (nbr / 1 == 21)
            write(1, "-soixante-et-un", 15);
        while (nbr >= 1)
        {
            nbr = nbr - 1;
        }
    }
    else if (nbr > 10 && -nbr / 10 <= 9)
    {
        if (nbr / 10 == 9)
            write(1, "-quatre-vingt-dix", 17);
        if (nbr / 10 == 8)
            write(1, "-quatre-vingt", 13);
        if (nbr / 10 == 6)
            write(1, "-soixante", 9);
        if (nbr / 10 == 5)
            write(1, "-cinquante", 10);
        if (nbr / 10 == 4)
            write(1, "-quarante", 9);
        if (nbr / 10 == 3)
            write(1, "-trente", 7);
        if (nbr / 10 == 2)
            write(1, "-vingt", 6);
        if (nbr / 10 == 1)
            write(1, "-dix", 4);
        while (nbr >= 10)
        {
            nbr = nbr - 10;
		}
	}
	if (nbr >= 1)
	{
        if (nbr / 1 == 9)
            write(1, "-neuf", 5);
        if (nbr / 1 == 8)
            write(1, "-huit", 5);
        if (nbr / 1 == 6)
            write(1, "-six", 4);
		if (nbr / 1 == 5)
            write(1, "-cinq", 5);
        if (nbr / 1 == 4)
            write(1, "-quatre", 7);
        if (nbr / 1 == 3)
            write(1, "-trois", 6);
        if (nbr / 1 == 2)
            write(1, "-deux", 5);
        if (nbr / 1 == 1)
            write(1, "-un", 3);
        while (nbr >= 1)
        {
            nbr = nbr - 1;
        }
	}
}
int main(void)
{
	rosetta_stone(-551);
	return 0;
}
