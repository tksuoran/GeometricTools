// David Eberly, Geometric Tools, Redmond WA 98052
// Copyright (c) 1998-2021
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt
// https://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// Version: 4.0.2021.11.12

#include "Interpolation2DWindow3.h"
#include <iostream>

int main()
{
    try
    {
        Window::Parameters parameters(L"Interpolation2DWindow3", 0, 0, 512, 512);
        auto window = TheWindowSystem.Create<Interpolation2DWindow3>(parameters);
        TheWindowSystem.MessagePump(window, TheWindowSystem.DEFAULT_ACTION);
        TheWindowSystem.Destroy(window);
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
