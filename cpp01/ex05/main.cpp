/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:13:40 by labderra          #+#    #+#             */
/*   Updated: 2024/12/10 14:18:16 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl customer;

	customer.complain("DEBUG");
	customer.complain("INFO");
	customer.complain("WARNING");
	customer.complain("ERROR");
	customer.complain("PRAISE");
	customer.complain("");
	return (0);
}