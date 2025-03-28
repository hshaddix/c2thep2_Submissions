#include "plot_hvector.h"

int main() {
    std::vector<std::string> files = {
	"hvector_N1000000_F-30000000_Sz50_B1024.root",
 	"hvector_N1000000_F-30000000_Sz50_B128.root",
 	"hvector_N1000000_F-30000000_Sz50_B16.root",
 	"hvector_N1000000_F-30000000_Sz50_B256.root",
 	"hvector_N1000000_F-30000000_Sz50_B32.root",
 	"hvector_N1000000_F-30000000_Sz50_B4.root",
 	"hvector_N1000000_F-30000000_Sz50_B512.root",
 	"hvector_N1000000_F-30000000_Sz50_B64.root",
 	"hvector_N1000000_F-30000000_Sz50_B8.root"
    };

    plotMultipleFiles(files);
    return 0;
}

