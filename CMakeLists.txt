cmake_minimum_required(VERSION 3.17)
project(printfF C)

set(CMAKE_C_STANDARD 11)

# -->   MAIN
#       Это запуск исполняемого файла из main.c
add_executable(main
        main.c
        includes/ft_printf.h)
target_link_libraries(main ft ftprintf)
target_include_directories(main PUBLIC
        includes/
        Libft/includes)
# <--   MAIN

# -->   LIBFT_PRINTF
#       Это сборка libftprintf.a, добавляй сюда .c
add_library(ftprintf
        src/ft_printf.c
        src/ftp_di.c
        src/ftp_apply_type.c
        src/ftp_utils.c
        src/ftp_parser.c
        src/ftp_c.c
        includes/ft_printf.h)
target_link_libraries(ftprintf
        ft)
target_include_directories(ftprintf PUBLIC
        includes/)
# <--   LIBFT_PRINTF

# -->   LIBFT
#       Это сборка libft.a, добавляй сюда .c
add_library(ft
        Libft/src/ft_memset.c
        Libft/src/ft_bzero.c
        Libft/src/ft_memcpy.c
        Libft/src/ft_memccpy.c
        Libft/src/ft_memmove.c
        Libft/src/ft_memchr.c
        Libft/src/ft_memcmp.c
        Libft/src/ft_strlen.c
        Libft/src/ft_strlcpy.c
        Libft/src/ft_strlcat.c
        Libft/src/ft_strchr.c
        Libft/src/ft_strrchr.c
        Libft/src/ft_strnstr.c
        Libft/src/ft_strncmp.c
        Libft/src/ft_putnbr_fd.c
        Libft/src/ft_atoi.c
        Libft/src/ft_isalpha.c
        Libft/src/ft_isdigit.c
        Libft/src/ft_isalnum.c
        Libft/src/ft_isascii.c
        Libft/src/ft_isprint.c
        Libft/src/ft_toupper.c
        Libft/src/ft_tolower.c
        Libft/src/ft_calloc.c
        Libft/src/ft_strdup.c
        Libft/src/ft_substr.c
        Libft/src/ft_strjoin.c
        Libft/src/ft_strtrim.c
        Libft/src/ft_split.c
        Libft/src/ft_itoa.c
        Libft/src/ft_strmapi.c
        Libft/src/ft_putchar_fd.c
        Libft/src/ft_putstr_fd.c
        Libft/src/ft_putendl_fd.c
        Libft/src/ft_numlen.c
        Libft/src/ft_itoa_base.c
        Libft/includes/libft.h)
target_include_directories(ft PUBLIC
        Libft/includes)
# <--   LIBFT

# -->   TESTS
add_executable(test
        test/test.c
        includes/ft_printf.h
        Libft/includes/libft.h)
target_link_libraries(test ft ftprintf)
target_include_directories(test PUBLIC
        includes/
        Libft/includes)
add_executable(test_di
        test/test_di.c
        includes/ft_printf.h
        Libft/includes/libft.h)
target_link_libraries(test_di ft ftprintf)
target_include_directories(test_di PUBLIC
        includes/
        Libft/includes)
# <--   TESTS