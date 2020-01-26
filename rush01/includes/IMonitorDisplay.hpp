/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 12:32:33 by sko               #+#    #+#             */
/*   Updated: 2020/01/25 12:32:36 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

# include <Gkrellm.hpp>

class IMonitorDisplay
{
public:

	IMonitorDisplay(void);
	virtual ~IMonitorDisplay(void);

	virtual void		refreshOutput(void) = 0;
	virtual void		renderOutput(void) = 0;

private:

	IMonitorDisplay(IMonitorDisplay const &obj);
	IMonitorDisplay	&operator=(IMonitorDisplay const &r);
};

#endif
