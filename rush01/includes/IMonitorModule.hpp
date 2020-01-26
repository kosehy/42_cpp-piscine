/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 12:32:49 by sko               #+#    #+#             */
/*   Updated: 2020/01/25 12:32:50 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include <Gkrellm.hpp>

class IMonitorModule
{
public:

	IMonitorModule(void);
	virtual ~IMonitorModule(void);

	virtual void							tick(void) = 0;
	virtual std::vector<std::string> const	&getOutput(void) const = 0;
	virtual std::string const				&getName(void) const = 0;

private:

	IMonitorModule(IMonitorModule const &obj);
	IMonitorModule	&operator=(IMonitorModule const &r);
};

#endif
