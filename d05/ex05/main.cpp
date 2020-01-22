/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:53:49 by sko               #+#    #+#             */
/*   Updated: 2020/01/21 21:34:15 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

int		main()
{
	CentralBureaucracy	central;

	try {
		central.doBureaucracy();
		central.feedSigner(*new Bureaucrat("sko", 1));
		central.feedSigner(*new Bureaucrat("ban", 13));
		central.feedSigner(*new Bureaucrat("dred", 55));
		central.feedSigner(*new Bureaucrat("kal", 111));
		central.feedSigner(*new Bureaucrat("huchi", 150));

		central.doBureaucracy();

		central.feedExecuter(*new Bureaucrat("Lin", 1));
		central.feedExecuter(*new Bureaucrat("Jeremy", 15));
		central.feedExecuter(*new Bureaucrat("chan", 111));
		central.feedExecuter(*new Bureaucrat("cerrly", 150));

		central.doBureaucracy();
		central.queueUp("sam");
		central.queueUp("sanson");
		central.queueUp("wid");
		central.queueUp("ralp");
		central.queueUp("iruryl");
		central.queueUp("afnider");
		central.queueUp("neckson");
		central.queueUp("clasus");
		central.queueUp("amutart");
		central.queueUp("kim");
		central.queueUp("dokkebi");
		central.queueUp("quleen");
		central.queueUp("slayer");
		central.queueUp("mage");
		central.queueUp("knight");
		central.queueUp("ninja");
		central.queueUp("hot");
		central.queueUp("cold");
		central.queueUp("gold");
		central.queueUp("dragon");
		central.queueUp("dark");
		central.queueUp("sum");
		central.queueUp("minus");
		
		central.doBureaucracy();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
