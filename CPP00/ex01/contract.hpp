/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contract.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 19:20:53 by alex              #+#    #+#             */
/*   Updated: 2023/09/02 11:13:54 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTRACT_HPP
# define CONTRACT_HPP

class Contact{
    private:
        int     index;
        std::string  firstName;
        std::string  lastName;
        std::string  nickName;
        std::string  phoneNumber;
        std::string  darkSecret;
    public:
        int getIndex(){
            return (this->index);
        };
        std::string getFirst(){
            return (this->firstName);
        };
        std::string getLast(){
            return (this->lastName);
        };

        std::string getNick(){
            return (this->nickName);
        };

        std::string getPhone(){
            return (this->phoneNumber);
        };

        std::string getDark(){
            return (this->darkSecret);
        };
        void    setInd(int line){
            this->index = line;
        };
        void    setFirst(std::string line){
            this->firstName = line;
        };
        void    setLast(std::string line){
            this->lastName = line;
        };
        void    setNick(std::string line){
            this->nickName = line;
        };
        void    setPhone(std::string line){
            this->phoneNumber = line;
        };
        void    setDark(std::string line){
            this->darkSecret = line;
        };
};
#endif