#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <exception>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
#include<bits/stdc++.h>

typedef std::vector<std::string> seznam_slov;

void nacti (std::string nazev, seznam_slov & jmena);
void serad (seznam_slov & jmena);
bool zeptej_se_jestli_vypsat();
void vypis (seznam_slov const& jmena);