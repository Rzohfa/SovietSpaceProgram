# Soviet Space Program

Jest to gra opowiadająca o wyścigu kosmicznym z perspektywy ZSRR.



# Instrukcja

1. Pobierz bibliotekę SFML 2.4.2 (kod zawarty w namespace ctx może nie być zgodny z nowszymi wersjami).
   <https://www.sfml-dev.org/download/sfml/2.4.2/>
2. Jeśli chcesz korzystać z Visual Studio nowszego niż 2015 lub innego kompilatora niezgodnego z tą wersją SFML musisz samemu skompilować Source Code biblioteki.
   <https://www.sfml-dev.org/tutorials/2.4/compile-with-cmake.php>
3. W CMake'u ustaw SFML_USE_STATIC_STD_LIBS na TRUE i BUILD_SHARED_LIBS na FALSE jeśli chcesz korzystać z bibliotek statycznych. Ustaw również wersję kompilatora. Source Code to ścieżka do kodu źródłowego pobranego wcześniej, Build to ścieżka do przygotowanych plików do kompilacji, a CMAKE_INSTALL_PREFIX to lokalizacja zbudowanej już biblioteki.
4. Z folderu Build otwórz INSTALL i skompiluj (w przypadku VS najlepiej po prostu odpalić) INSTALL w trybie Debug i Release.
5. TADAM, w folderze CMAKE_INSTALL_PREFIX masz gotową swoją własną bibliotekę gotową do użycia w wybranym przez Ciebie kompilatorze.