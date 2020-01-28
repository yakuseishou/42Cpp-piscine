/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 23:51:26 by kchen2            #+#    #+#             */
/*   Updated: 2020/01/13 23:51:27 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_CLASS_CPP
# define INFO_CLASS_CPP

#include <iomanip>

class fonbk {
    private:
        std::string _fname;
        std::string _lname;
        std::string _nickname;
        std::string _login;
        std::string _postal;
        std::string _email;
        std::string _fonum;
        std::string _bday;
        std::string _favorite;
        std::string _panz;
        std::string _weakness;

    public:
        fonbk( void );
        ~fonbk( void );

        void    init_fname();
        void    init_lname();
        void    init_nickname();
        void    init_login();
        void    init_postal();
        void    init_email();
        void    init_fonum();
        void    init_bday();
        void    init_favorite();
        void    init_panz();
        void    init_weakness();

        std::string    get_fname( void );
        std::string    get_lname( void );
        std::string    get_nickname( void );
        std::string    get_login( void );
        std::string    get_postal( void );
        std::string    get_email( void );
        std::string    get_fonum( void );
        std::string    get_bday( void );
        std::string    get_favorite( void );
        std::string    get_panz( void );
        std::string    get_weakness( void );
};

#endif