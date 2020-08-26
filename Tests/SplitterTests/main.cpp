#include <cstdio>
#include <cstdlib>
#include "Resource.h"

static void Fail(const char* msg)
{
    std::printf("FAIL %s\n", msg);
    std::exit(1);
}

int main()
{
    if (IDD_ABOUTBOX != 100)
        Fail("about");
    if (IDD_SPLITTERCONTROLDEMO_DIALOG != 102)
        Fail("dialog");
    if (IDC_SPLITTER1 != 1004)
        Fail("split1");
    if (IDC_SPLITTER2 != 1005)
        Fail("split2");
    if (IDC_TREE != 1001)
        Fail("tree");
    std::printf("OK SplitterTests\n");
    return 0;
}
