cmake_minimum_required(VERSION 3.17)
project(printfF C)

set(CMAKE_C_STANDARD 11)

add_executable(printfF
        main.c
        src/ft_printf.c
        src/ftp_parser.c
        src/ftp_apply_type.c
        includes/ft_printf.h
        Libft/ft_bzero.c
        Libft/ft_strchr.c
        Libft/ft_isdigit.c
        Libft/ft_atoi.c
        Libft/ft_strlen.c
        Libft/includes/libft.h)

target_include_directories(printfF PUBLIC
        includes/
        Libft/)

add_executable(test_parser
        test/test_parser.c
        src/ftp_parser.c
        src/ftp_apply_type.c
        Libft/ft_strchr.c
        Libft/ft_atoi.c
        Libft/ft_isdigit.c
        Libft/ft_strlen.c
        includes/ft_printf.h
        Libft/includes/libft.h)

target_include_directories(test_parser PUBLIC
        includes/
        Libft/)
