#region Local Var
	struct<368> Local_0 = { 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0 } ;
	struct<17> Local_368[32];
	struct<1081> Local_913 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1161527296, 0, 0, 0, 0, 6, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 7, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1994 = 7;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = -1;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	struct<37> Local_2010 = { 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 24;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	float fLocal_2150 = 0f;
	float fLocal_2151 = 0f;
	struct<18> Local_2152 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_2170 = 255;
	var uLocal_2171 = 255;
	var uLocal_2172 = 255;
	var uLocal_2173 = 255;
	var uLocal_2174 = 255;
	var uLocal_2175 = 255;
	var uLocal_2176 = 255;
	var uLocal_2177 = 255;
	var uLocal_2178 = 255;
	var uLocal_2179 = 255;
	var uLocal_2180 = 255;
	var uLocal_2181 = 255;
	var uLocal_2182 = 255;
	var uLocal_2183 = 255;
	var uLocal_2184 = 255;
	var uLocal_2185 = 255;
	var uLocal_2186 = 255;
	var uLocal_2187 = 255;
	var uLocal_2188 = 255;
	var uLocal_2189 = 255;
	var uLocal_2190 = 255;
	var uLocal_2191 = 255;
	var uLocal_2192 = 255;
	var uLocal_2193 = 255;
	var uLocal_2194 = 255;
	var uLocal_2195 = 255;
	var uLocal_2196 = 255;
	var uLocal_2197 = 255;
	var uLocal_2198 = 255;
	var uLocal_2199 = 255;
	var uLocal_2200 = 255;
	var uLocal_2201 = 255;
	struct<6> Local_2202[32];
	struct<1442> Local_2395 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == aggregate_func_3505

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 368, 38);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_0), 368, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_368, 545, 39);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_368[0 /*17*/]), 545, "m_clientData");
}

void func_51()
{
	aggregate_func_4134(-1821940596, "activity/locations/location(id=%x)");
	aggregate_func_4134(-1565098061, "variations/variation(id=%x)");
	aggregate_func_4134(248801409, "spawn_locations/spawn_location(%i)");
	aggregate_func_4134(848477026, "spawn_locations");
	aggregate_func_4134(1569801402, "wagon_spawn_locations/spawn_location(%i)");
	aggregate_func_4134(1402798501, "wagon_spawn_locations");
	aggregate_func_4134(507396013, "volumes/volume(%i)");
	aggregate_func_4134(799854665, ":shape");
	aggregate_func_4134(-271347703, "peds/ped(%i)");
	aggregate_func_4134(2092065245, "peds");
	aggregate_func_4134(-1541287538, ":location");
	aggregate_func_4134(38344341, ":rotation");
	aggregate_func_4134(2083652982, ":scale");
	aggregate_func_4134(1114662700, ":heading");
	aggregate_func_4134(-1444225750, ":model");
	aggregate_func_4134(1973872946, ":type");
	aggregate_func_4134(-1626963905, ":task");
	aggregate_func_4134(-1860090745, ":target_count");
}

void func_64()
{
	Local_913.f_41 = Local_2395.f_3;
	Local_913.f_97 = Local_2395.f_1;
	Local_913.f_1 = func_167();
	Local_913.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
	Local_913.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
	Local_913.f_4 = (Local_913.f_1 - (Local_913.f_2 + Local_913.f_3));
	Local_913.f_1080 = func_168();
	func_169();
	aggregate_func_4310(1229355466);
	aggregate_func_4355(524288);
	Local_2395.f_1420 = 0;
	aggregate_func_4355(131072);
	aggregate_func_4355(1073741824 /* Float: 2f */);
}

void func_72()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		(Local_0.f_67[iVar0 /*40*/])->f_1 = 255;
		(Local_0.f_67[iVar0 /*40*/])->f_2 = 255;
		iVar0++;
	}
	if (Local_0.f_1 == 0)
	{
		Local_0.f_1 = Local_913.f_1;
	}
}

void func_103()
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
	{
		func_327();
	}
}

void func_125()
{
	func_345();
	AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
}

int func_167()
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 3;
	if (func_390(&Var0))
	{
		aggregate_func_3380(Var0, -1860090745, &iVar5, 0);
	}
	return iVar5;
}

int func_168()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_391(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 1)
	{
		return 1;
	}
	return iVar5;
}

void func_169()
{
	int iVar0;

	aggregate_func_6739(1086838518);
	Local_2395.f_1259 = joaat("COLLECT");
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_392(iVar0, 0, 1);
		func_393(iVar0, 1);
		iVar0++;
	}
}

bool func_191()
{
	if (func_402(8192, 1))
	{
		if (!aggregate_func_4281(256))
		{
			func_404();
			return false;
		}
	}
	else
	{
		return false;
	}
	if (!aggregate_func_4281(2))
	{
		if (!func_405())
		{
			return false;
		}
		if (!func_406())
		{
			return false;
		}
		func_407(2);
	}
	return true;
}

bool func_199()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate_func_2736(2);
	iVar1 = aggregate_func_2393(2);
	if (func_416() || iVar0 == iVar1)
	{
		return true;
	}
	iVar2 = Local_0.f_5;
	iVar3 = (Local_0.f_67[iVar2 /*40*/])->f_7;
	if (iVar3 != -1)
	{
		switch (iVar3)
		{
			case 3:
				func_417(iVar2);
				break;
			case 4:
				func_418(iVar2);
				break;
			case 5:
				func_419(iVar2);
				break;
		}
		func_420(iVar2);
	}
	Local_0.f_5++;
	if (Local_0.f_5 >= 7)
	{
		Local_0.f_5 = 0;
	}
	return false;
}

bool func_223()
{
	if (!func_439())
	{
		return false;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("MC_SUSPENSE_HIGH");
	return true;
}

bool func_243()
{
	if (!func_493(8192))
	{
		func_494();
		return false;
	}
	if (!aggregate_func_4281(128))
	{
		func_496();
		aggregate_func_7374(128);
	}
	switch (Local_2395.f_2)
	{
		case -1983139019:
			if (!aggregate_func_4281(512))
			{
				if (aggregate_func_2384(385812466) && aggregate_func_2384(-1201452352))
				{
					aggregate_func_1155(385812466, 0, 0, 0, 1, 0, 0, 0);
					aggregate_func_1155(-1201452352, 0, 0, 0, 1, 0, 0, 0);
					aggregate_func_7374(512);
				}
			}
			break;
	}
	return true;
}

void func_251()
{
	if (MAP::DOES_BLIP_EXIST(Local_2395.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_2395.f_1325));
	}
	func_510();
	func_511();
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_0.f_367), Local_913.f_1056);
	AUDIO::TRIGGER_MUSIC_EVENT("MC_DEFENDING");
}

bool func_257()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = aggregate_func_3301(aggregate_func_4354(-1048906573));
	iVar0 = (iVar0 - Local_2395.f_1280);
	if (iVar0 != (Local_2202[Local_2395.f_1332 /*6*/])->f_4)
	{
		(Local_2202[Local_2395.f_1332 /*6*/])->f_4 = iVar0;
	}
	iVar8 = 0;
	while (iVar8 <= 8)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar7 = Local_2395.f_1389;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar1 = (Local_2202[iVar7 /*6*/])->f_2;
			fVar2 = BUILTIN::TO_FLOAT((Local_2202[iVar7 /*6*/])->f_3);
			fVar3 = BUILTIN::TO_FLOAT((Local_368[iVar7 /*17*/])->f_14);
			fVar4 = (fVar2 + fVar3);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
		}
		aggregate_func_813(&(Local_2395.f_13), fVar1, iVar6, Local_2395.f_971[iVar7], !aggregate_func_6777(iVar7), fVar4, fVar2, 0, fVar3, 0);
		Local_2395.f_1389++;
		if (Local_2395.f_1389 >= 32)
		{
			Local_2395.f_1389 = 0;
		}
		iVar8++;
	}
	func_533(&(Local_2395.f_13));
	return true;
}

void func_261()
{
	int iVar0;
	int iVar1;

	func_539();
	if (aggregate_func_6777(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		func_540();
	}
	else
	{
		func_345();
	}
	func_541();
	iVar0 = Local_913.f_7;
	iVar1 = &Local_913.f_50[iVar0 /*4*/];
	func_542(iVar0);
	if (iVar1 != -1)
	{
		switch (iVar1)
		{
			case 3:
				func_543(iVar0);
				break;
			case 4:
				func_544(iVar0);
				break;
			case 5:
				func_545(iVar0);
				break;
		}
		func_546(iVar0);
	}
	if (iVar1 != (Local_0.f_67[iVar0 /*40*/])->f_7)
	{
		Local_913.f_50[iVar0 /*4*/] = (Local_0.f_67[iVar0 /*40*/])->f_7;
	}
	Local_913.f_7++;
	if (Local_913.f_7 >= 7)
	{
		Local_913.f_7 = 0;
	}
}

bool func_262()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = aggregate_func_3301(aggregate_func_4354(-1048906573));
	iVar0 = (iVar0 - Local_2395.f_1280);
	if (iVar0 != (Local_2202[Local_2395.f_1332 /*6*/])->f_4)
	{
		(Local_2202[Local_2395.f_1332 /*6*/])->f_4 = iVar0;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar1 = (Local_2202[iVar7 /*6*/])->f_2;
			fVar2 = BUILTIN::TO_FLOAT((Local_2202[iVar7 /*6*/])->f_3);
			fVar3 = BUILTIN::TO_FLOAT((Local_368[iVar7 /*17*/])->f_14);
			fVar4 = (fVar2 + fVar3);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
		}
		aggregate_func_813(&(Local_2395.f_13), fVar1, iVar6, Local_2395.f_971[iVar7], !aggregate_func_6777(iVar7), fVar4, fVar2, 0, fVar3, 0);
		iVar7++;
	}
	func_533(&(Local_2395.f_13));
	return true;
}

int func_271()
{
	return 1081345;
}

void func_276()
{
	int iVar0;

	func_571();
	func_345();
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]))))
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/])), false);
		}
		iVar0++;
	}
}

char[] func_307()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_OUTRO_PRIMARY_WON", (Local_2202[Local_2395.f_1332 /*6*/])->f_3);
}

char* func_308()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_OUTRO_PRIMARY_LOST", (Local_368[Local_2395.f_1332 /*17*/])->f_14);
}

char[] func_313(var uParam0, var uParam1, char[4] cParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char[4] cParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_FAILED");
}

bool func_326()
{
	func_571();
	if (aggregate_func_4281(512))
	{
		if (!aggregate_func_2384(385812466) && !aggregate_func_2384(-1201452352))
		{
			aggregate_func_1155(385812466, 1, 0, 0, 1, 0, 0, 0);
			aggregate_func_1155(-1201452352, 1, 0, 0, 1, 0, 0, 0);
		}
	}
	return true;
}

void func_327()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_603(&(Local_0.f_67[iVar0 /*40*/]), iVar0);
		iVar0++;
	}
}

void func_345()
{
	if (!aggregate_func_4281(1))
	{
		func_620();
		func_621();
		func_622();
		aggregate_func_7374(1);
	}
}

bool func_390(var uParam0)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = -1565098061;
		uParam0->f_3 = Local_2395.f_3;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_391(var uParam0)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 1402798501;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

void func_392(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	func_393(iParam0, 0);
	if (!func_687(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam1 == func_688(iParam0))
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return;
	}
	if (iParam1 <= -1 || iParam1 >= 6)
	{
		return;
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_2010.f_36, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 5;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 7;
			break;
		case 5:
			iVar0 = 2;
			break;
	}
	aggregate_func_6492(&(Local_2395.f_1020), iVar0, iParam0);
}

void func_393(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return;
	}
	iVar0 = (Local_2395.f_1020[iParam0 /*34*/])->f_25;
	iVar1 = (Local_2395.f_1020[iParam0 /*34*/])->f_26;
	if (!func_687(iParam0) && !bParam1)
	{
		return;
	}
	iVar2 = 0;
	iVar3 = 0;
	if (func_690(iParam0) || bParam1)
	{
		iVar2 = joaat("blips");
		iVar3 = -907204276; /* GXTEntry: "Bounty Hunting" */
	}
	else
	{
		iVar2 = 672378911;
		iVar3 = -1998058959;
	}
	if (iVar0 == iVar2 && iVar1 == iVar3)
	{
		return;
	}
	aggregate_func_6492(&(Local_2395.f_1020), iVar2, iParam0);
	aggregate_func_6492(&(Local_2395.f_1020), iVar3, iParam0);
}

bool func_396()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_366))
	{
		bVar0 = true;
	}
	iVar1 = Local_2395.f_2;
	if (iVar1 != -1573288601)
	{
		return true;
	}
	if (!bVar0)
	{
		iVar2 = -1772561076;
		vVar3 = { func_693() };
		fVar6 = func_694();
		if (aggregate_func_2053(iVar2))
		{
			if (aggregate_func_260(&(Local_0.f_366), iVar2, vVar3, fVar6, 1, 0, 0, 0))
			{
				iVar7 = NETWORK::NET_TO_VEH(Local_0.f_366);
				VEHICLE::_0x63DC1F22C903B709(iVar7, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar7, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(Local_0.f_366), false);
				func_697(&iVar7, 1);
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

bool func_397()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_367))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		iVar1 = joaat("s_m_m_ambientlawrural_01");
		vVar2 = { func_698() };
		fVar5 = func_699();
		if (aggregate_func_2053(iVar1))
		{
			if (aggregate_func_404(&(Local_0.f_367), iVar1, vVar2, fVar5, 1, 0, 1, 1, 1))
			{
				iVar6 = NETWORK::NET_TO_PED(Local_0.f_367);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, true);
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

bool func_402(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (aggregate_func_1009(iVar0, 1, 1))
		{
			if (bParam1 && aggregate_func_4240((Local_368[iVar0 /*17*/])->f_13, 131072))
			{
			}
			else if (!aggregate_func_4240((Local_368[iVar0 /*17*/])->f_13, iParam0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_404()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	var uVar15[3];
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<4> Var24;
	int iVar33[2];
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	var uVar48;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (aggregate_func_4281(256))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 15;
	if (iVar1 > func_702())
	{
		iVar1 = func_702();
		if (iVar1 < 1)
		{
		}
	}
	if (!aggregate_func_4281(512))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (func_703(&Local_368, iVar0))
			{
				func_704(iVar0);
				Local_0.f_349++;
			}
			iVar0++;
		}
		func_407(512);
		return;
	}
	while (Local_0.f_349 < Local_913.f_1)
	{
		func_704(func_705(Local_0.f_349, iVar1));
		Local_0.f_349++;
		return;
	}
	Var2 = 3;
	Var2.f_1 = 3;
	Var2.f_1.f_4 = 3;
	Var2.f_1.f_4.f_4 = 3;
	iVar19 = -1;
	iVar20 = 0;
	while (iVar20 < Local_913.f_1)
	{
		iVar19 = -1;
		if (iVar20 < Local_913.f_2)
		{
			iVar19 = 0;
			(Local_0.f_67[iVar20 /*40*/])->f_6 = joaat("high");
			(Local_0.f_67[iVar20 /*40*/])->f_39 = MISC::GET_RANDOM_INT_IN_RANGE(5, 7);
		}
		else if (iVar20 < (Local_913.f_2 + Local_913.f_3))
		{
			iVar19 = 1;
			(Local_0.f_67[iVar20 /*40*/])->f_6 = joaat("low");
			(Local_0.f_67[iVar20 /*40*/])->f_39 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
		}
		else
		{
			iVar19 = 2;
			(Local_0.f_67[iVar20 /*40*/])->f_6 = 1866880973;
			(Local_0.f_67[iVar20 /*40*/])->f_39 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
		}
		iVar22 = &uVar15[iVar19];
		(*Var2[iVar19 /*4*/])[iVar22] = iVar20;
		uVar15[iVar19] = &uVar15[iVar19] + 1;
		iVar20++;
	}
	Var24 = 2;
	Var24.f_1 = 3;
	Var24.f_1.f_4 = 3;
	iVar23 = -1 + 1;
	while (iVar23 <= (3 - 1))
	{
		iVar19 = iVar23;
		iVar36 = -1 + 1;
		while (iVar36 <= (2 - 1))
		{
			iVar33[iVar36] = 0;
			iVar36++;
		}
		iVar21 = 0;
		while (iVar21 < 3)
		{
			iVar37 = iVar21;
			switch (iVar19)
			{
				case 0:
					break;
				case 1:
					iVar37 += 5;
					break;
				case 2:
					iVar37 += 10;
					break;
			}
			iVar38 = -1;
			if (func_706(iVar37))
			{
				iVar38 = 1;
			}
			else
			{
				iVar38 = 0;
			}
			iVar39 = &iVar33[iVar38];
			(*Var24[iVar38 /*4*/])[iVar39] = iVar37;
			iVar33[iVar38] = &iVar33[iVar38] + 1;
			iVar21++;
		}
		iVar40 = 0;
		while (iVar40 < &uVar15[iVar19])
		{
			iVar41 = Var2[iVar19 /*4*/][iVar40];
			iVar42 = &iVar33[1];
			iVar43 = &iVar33[0];
			iVar44 = -1;
			if (iVar42 > 0)
			{
				iVar44 = 1;
			}
			else if (iVar43 > 0)
			{
				iVar44 = 0;
			}
			iVar45 = &iVar33[iVar44];
			iVar46 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar45);
			uVar47 = Var24[iVar44 /*4*/][iVar46];
			iVar21 = iVar46;
			while (iVar21 <= (iVar45 - 1))
			{
				if (iVar21 < (iVar45 - 1))
				{
					uVar48 = Var24[iVar44 /*4*/][iVar21 + 1];
					(*Var24[iVar44 /*4*/])[iVar21] = uVar48;
				}
				else
				{
					(*Var24[iVar44 /*4*/])[iVar21] = 0;
				}
				iVar21++;
			}
			iVar33[iVar44] = (&iVar33[iVar44] - 1);
			Local_0.f_350[iVar41] = uVar47;
			iVar40++;
		}
		iVar23++;
	}
	func_407(256);
}

bool func_405()
{
	if (!aggregate_func_4281(256))
	{
		return false;
	}
	if (Local_0.f_360 >= Local_913.f_1)
	{
		return true;
	}
	if (Local_0.f_360 >= 7)
	{
		return true;
	}
	func_707();
	if (Local_0.f_360 >= Local_913.f_1 || Local_0.f_360 >= 7)
	{
	}
	return false;
}

bool func_406()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	while (iVar0 < Local_913.f_2)
	{
		iVar1 = 0;
		while (iVar1 < (Local_0.f_67[iVar0 /*40*/])->f_39)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_0.f_67[iVar0 /*40*/])->f_20[iVar1 /*3*/])))
			{
			}
			else
			{
				Var2 = { func_708(&(Local_0.f_350[iVar0]), iVar1) };
				if (aggregate_func_4745(Var2, 0f, 0f, 0f))
				{
				}
				else
				{
					func_709(iVar0, iVar1, Var2);
					return false;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = Local_913.f_2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_913.f_2 + Local_913.f_3))
	{
		iVar1 = 0;
		while (iVar1 < (Local_0.f_67[iVar0 /*40*/])->f_39)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_0.f_67[iVar0 /*40*/])->f_20[iVar1 /*3*/])))
			{
			}
			else
			{
				Var2 = { func_708(&(Local_0.f_350[iVar0]), iVar1) };
				if (aggregate_func_4745(Var2, 0f, 0f, 0f))
				{
				}
				else
				{
					func_709(iVar0, iVar1, Var2);
					return false;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

void func_407(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!aggregate_func_4240(Local_0.f_348, iParam0))
	{
		aggregate_func_4241(&(Local_0.f_348), iParam0);
	}
}

bool func_416()
{
	if (aggregate_func_4281(8))
	{
		func_407(32);
		return true;
	}
	return false;
}

void func_417(int iParam0)
{
	int iVar0;

	if (aggregate_func_4281(8))
	{
		return;
	}
	if (!aggregate_func_4281(2))
	{
		return;
	}
	func_710(iParam0);
	func_711(iParam0);
	func_712(iParam0);
	if (Local_0.f_1 == 0 || Local_0.f_2 >= 7)
	{
		if (!aggregate_func_4281(8))
		{
			func_407(8);
		}
		return;
	}
	iVar0 = func_713(1, iParam0, 1);
	if (iVar0 != aggregate_func_8088())
	{
		(Local_0.f_67[iParam0 /*40*/])->f_2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		func_715(1, iParam0);
	}
	else
	{
		func_716(1, iParam0);
	}
	if (Local_0.f_3 >= 7)
	{
		if (!aggregate_func_4281(4096))
		{
			func_407(4096);
		}
	}
	else if (aggregate_func_4281(4096))
	{
		func_717(4096);
	}
	func_718(&Local_0, iParam0);
}

void func_418(int iParam0)
{
	aggregate_func_2634(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])));
	aggregate_func_2433(Local_913.f_80[iParam0]);
}

void func_419(int iParam0)
{
	if (func_721(16, iParam0, 1))
	{
		aggregate_func_7375(-1, iParam0);
	}
}

void func_420(int iParam0)
{
	int iVar0;

	if (!aggregate_func_6777(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (aggregate_func_7239(262144, iParam0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 3;
	}
	else if (aggregate_func_7239(4, iParam0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 1;
	}
	else if (aggregate_func_7239(2, iParam0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 2;
	}
	else if (PED::_0x3AA24CCC0D451379(iVar0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 0;
	}
	else if (PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 4;
	}
	else
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = -1;
	}
}

void func_421(bool bParam0)
{
	if (Local_0.f_2 >= 7)
	{
		*bParam0 = 1;
	}
}

void func_438()
{
	AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
}

bool func_439()
{
	aggregate_func_2053(func_736());
	if (!STREAMING::HAS_MODEL_LOADED(func_736()))
	{
		return false;
	}
	return true;
}

bool func_493(int iParam0)
{
	return aggregate_func_4240((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13, iParam0);
}

void func_494()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (func_493(8192))
	{
		return;
	}
	iVar0 = Local_913.f_44.f_1;
	iVar1 = 0;
	if (iVar0 < 1)
	{
		iVar0 = 5;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (Local_913.f_5 < 15)
	{
		if (Local_913.f_5 >= func_702())
		{
		}
		else
		{
			if (iVar1 >= iVar0)
			{
				return;
			}
			iVar3 = Local_913.f_5;
			iVar2 = 0;
			while (iVar3 >= 32)
			{
				iVar3 = (iVar3 - 32);
				iVar2++;
			}
			if (iVar2 >= 3)
			{
				func_803(8192);
				return;
			}
			vVar4 = { func_804(Local_913.f_5) };
			if (func_805(vVar4))
			{
				MISC::SET_BIT((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_1[iVar2], iVar3);
			}
			Local_913.f_5++;
			iVar1++;
		}
	}
	func_803(8192);
}

void func_496()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar2 = func_806(iVar0);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = func_807(iVar0);
			vVar3 = { aggregate_func_8637(iVar0) };
			vVar6 = { func_809(iVar0) };
			vVar9 = { func_810(iVar0) };
			if (iVar1 == joaat("box"))
			{
				(Local_913.f_16[iVar2 /*4*/])->f_1 = VOLUME::_CREATE_VOLUME_BOX(vVar3, vVar6, vVar9);
			}
			else if (iVar1 == joaat("sphere"))
			{
				(Local_913.f_16[iVar2 /*4*/])->f_1 = VOLUME::_0xB3FB80A32BAE3065(vVar3, vVar6, vVar9);
			}
			else
			{
				(Local_913.f_16[iVar2 /*4*/])->f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar3, vVar6, vVar9);
			}
			Local_913.f_16[iVar2 /*4*/] = iVar2;
		}
		iVar0++;
	}
}

void func_510()
{
	char cVar0[32];
	int iVar4;

	iVar4 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	StringCopy(&cVar0, "FME_SS_REL_EMENY", 32);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Local_913.f_1057));
	aggregate_func_2565(6, Local_913.f_1057, iVar4);
	aggregate_func_2565(6, Local_913.f_1057, Local_913.f_1056);
	StringCopy(&cVar0, "FME_SS_REL_FRIENDLY", 32);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Local_913.f_1056));
	aggregate_func_2565(2, Local_913.f_1056, iVar4);
	aggregate_func_2565(6, Local_913.f_1056, Local_913.f_1057);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Local_913.f_1056);
}

void func_511()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else
		{
			func_829(iVar0);
		}
		iVar0++;
	}
}

void func_533(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	uVar0 = uParam0->f_210;
	iVar1 = 23;
	iVar2 = 1;
	iVar3 = 2;
	iVar4 = 1;
	iVar5 = 2;
	iVar6 = 2;
	iVar7 = 1;
	iVar8 = 3;
	iVar9 = 2;
	iVar10 = 1;
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_210), uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, 0, 0, 0);
}

void func_539()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_843(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_540()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_844();
	func_845();
	func_846(iVar0);
	if (aggregate_func_4281(1))
	{
		aggregate_func_7577(1);
	}
	func_848();
	func_849();
	if (!aggregate_func_4281(1024) && aggregate_func_3482(Local_2395.f_1289))
	{
		Local_2395.f_1289 = aggregate_func_3074("FME_RU_HELP_OBJECTIVE");
		aggregate_func_7374(1024);
	}
	if (aggregate_func_4281(64))
	{
		if (aggregate_func_1501(PLAYER::PLAYER_PED_ID(), func_698(), 1) < 25f)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (aggregate_func_4281(2048))
				{
					if (!func_850())
					{
						Local_2395.f_1289 = aggregate_func_3074("FME_RU_HELP_DROP_APPROCH_ALIVE");
					}
					else
					{
						Local_2395.f_1289 = aggregate_func_3074("FME_RU_HELP_DROP_SAT_ALIVE");
					}
				}
				else if (!func_850())
				{
					Local_2395.f_1289 = aggregate_func_3074("FME_RU_HELP_DROP_APPROCH_DEAD");
				}
				else
				{
					Local_2395.f_1289 = aggregate_func_3074("FME_RU_HELP_DROP_SAT_DEAD");
				}
			}
			else if (!func_850())
			{
				Local_2395.f_1289 = aggregate_func_3074("FME_RU_HELP_DROP_APPROCH_WAGON");
			}
			else
			{
				Local_2395.f_1289 = aggregate_func_3074("FME_RU_HELP_DROP_SAT_WAGON");
			}
		}
	}
}

void func_541()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
		ENTITY::_0xC3ABCFBC7D74AFA5(iVar1, 19, 1);
		iVar0++;
	}
	if (func_851())
	{
	}
}

void func_542(int iParam0)
{
	if (!aggregate_func_3630(16777216, iParam0, -1))
	{
		if (func_853(4194304, iParam0, 1))
		{
			aggregate_func_1617(905156700, 1, 0);
			func_855(16777216, iParam0);
		}
		else if (func_853(8388608, iParam0, 1))
		{
			aggregate_func_1617(-479797100, 1, 0);
			func_855(16777216, iParam0);
		}
	}
}

void func_543(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Local_2152 != 5 || aggregate_func_4281(8))
	{
		return;
	}
	func_856(iParam0);
	func_857(iParam0);
	func_858(iParam0);
	if (!aggregate_func_4281(1))
	{
		func_859(&Local_913, iParam0);
	}
	func_860(&Local_0, &Local_913, iParam0);
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	func_861(iVar1, 1, -1);
	if (func_862(iParam0) || ((((PED::_0x42429C674B61238B(iVar0) && aggregate_func_8638(iVar0) == iVar1) || ((PED::_0x9682F850056C9ADE(iVar1) && PED::_0x0C31C51168E80365(iVar1) == iVar0) && func_864(iVar1, 0))) && func_865(iParam0)) && !aggregate_func_3630(2, iParam0, -1)))
	{
		if (!aggregate_func_3630(1, iParam0, -1))
		{
			Local_913.f_6++;
			func_855(1, iParam0);
		}
	}
	else if (aggregate_func_3630(1, iParam0, -1))
	{
		Local_913.f_6 = (Local_913.f_6 - 1);
		func_866(1, iParam0, -1);
	}
	if (Local_913.f_6 > 0)
	{
		aggregate_func_7374(64);
		if (func_867(iParam0) && aggregate_func_3630(1, iParam0, -1))
		{
			if (!aggregate_func_4281(16384))
			{
				if (MAP::DOES_BLIP_EXIST((Local_913.f_16[0 /*4*/])->f_2))
				{
					aggregate_func_2433(&((Local_913.f_16[0 /*4*/])->f_2));
				}
				if (MAP::DOES_BLIP_EXIST((Local_913.f_16[2 /*4*/])->f_2))
				{
					aggregate_func_2433(&((Local_913.f_16[2 /*4*/])->f_2));
				}
				aggregate_func_7374(16384);
			}
		}
		if (func_864(iVar1, 0))
		{
			if (!aggregate_func_4281(8192))
			{
				aggregate_func_7374(8192);
			}
		}
		if (func_868(PLAYER::PLAYER_PED_ID(), iVar1) || func_869(iParam0))
		{
			if (!func_864(iVar1, 0))
			{
				if (!aggregate_func_4281(2048))
				{
					aggregate_func_7374(2048);
				}
			}
		}
	}
	else
	{
		if (aggregate_func_4281(64))
		{
			aggregate_func_7577(64);
		}
		if (aggregate_func_4281(2048))
		{
			aggregate_func_7577(2048);
		}
		if (aggregate_func_4281(8192))
		{
			aggregate_func_7577(8192);
		}
		if (aggregate_func_4281(16384))
		{
			aggregate_func_7577(16384);
		}
	}
}

void func_544(int iParam0)
{
	int iVar0;

	if (aggregate_func_3630(32, iParam0, -1))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iParam0 /*40*/])))
		{
			iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
			ENTITY::_0x18FF3110CF47115D(iVar0, 1, false);
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, false);
			ENTITY::_0x18FF3110CF47115D(iVar0, 7, false);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_913.f_1056);
			ENTITY::_0x18FF3110CF47115D(iVar0, 1, false);
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, false);
			ENTITY::_0x18FF3110CF47115D(iVar0, 3, false);
			func_870(iVar0, -1);
		}
		aggregate_func_2433(Local_913.f_80[iParam0]);
	}
}

void func_545(int iParam0)
{
	int iVar0;

	if (aggregate_func_3630(32, iParam0, -1))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iParam0 /*40*/])))
		{
			iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
			PED::DELETE_PED(&iVar0);
		}
		func_855(16, iParam0);
	}
}

void func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (!aggregate_func_6777(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return;
	}
	if ((Local_913.f_50[iParam0 /*4*/])->f_1 != (Local_0.f_67[iParam0 /*40*/])->f_8)
	{
		(Local_913.f_50[iParam0 /*4*/])->f_1 = (Local_0.f_67[iParam0 /*40*/])->f_8;
		if ((Local_0.f_67[iParam0 /*40*/])->f_8 == -1)
		{
			return;
		}
		iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
		switch ((Local_0.f_67[iParam0 /*40*/])->f_8)
		{
			case 0:
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PED::_0x3D9F958834AB9C30(iVar0));
				break;
			case 1:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_1;
				func_855(32, iParam0);
				break;
			case 2:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_2;
				func_855(32, iParam0);
				break;
			case 3:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_2;
				func_855(32, iParam0);
				break;
			case 4:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_2;
				func_855(32, iParam0);
				break;
		}
		if ((Local_0.f_67[iParam0 /*40*/])->f_8 == 2 && iVar1 == PLAYER::GET_PLAYER_INDEX())
		{
			aggregate_func_3436("FME_RU_SHARD_UPDATE_LRETURNED", joaat("COLOR_WHITE"), -2, 0, 0, 0, 1);
		}
		else
		{
			sVar2 = aggregate_func_1524(aggregate_func_2320(iVar1), aggregate_func_752(iVar1, 1, -1, 0));
			aggregate_func_3436(MISC::_CREATE_VAR_STRING(42, func_871((Local_0.f_67[iParam0 /*40*/])->f_8), sVar2, func_872(0)), joaat("COLOR_WHITE"), -2, 0, 0, 0, 1);
		}
	}
}

bool func_562(var uParam0, float fParam1, bool bParam2)
{
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
	*fParam1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	*bParam2 = 1;
	return true;
}

void func_571()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			PED::_0x6569F31A01B4C097(iVar1, 0, false);
			ENTITY::_0x18FF3110CF47115D(iVar1, 2, false);
			ENTITY::_0x18FF3110CF47115D(iVar1, 1, false);
		}
		iVar0++;
	}
	func_899();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_736());
}

bool func_576()
{
	struct<8> Var0;
	char* sVar8;
	char* sVar9;
	int iVar10;

	Var0 = { aggregate_func_4941() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_2395.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_2395.f_1338 };
		}
	}
	sVar8 = (Local_2202[Local_2395.f_1332 /*6*/])->f_3;
	sVar9 = (Local_368[Local_2395.f_1332 /*17*/])->f_14;
	iVar10 = (Local_368[Local_2395.f_1332 /*17*/])->f_16;
	if (iVar10 == 0)
	{
		Local_2395.f_1287 = aggregate_func_6830(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_AD", sVar8, sVar9), aggregate_func_4930(), aggregate_func_4352());
	}
	else
	{
		Local_2395.f_1287 = aggregate_func_6830(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_ADL", sVar8, sVar9, iVar10), aggregate_func_4930(), aggregate_func_4352());
	}
	return true;
}

char* func_583()
{
	return "FME_RU_SHARD_OUTRO_PRIMARY_WON";
}

void func_603(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return;
	}
	aggregate_func_1025(&iParam0);
}

void func_620()
{
	int iVar0;

	if (!aggregate_func_4281(256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (MAP::DOES_BLIP_EXIST(&(Local_913.f_80[iVar0])))
		{
			aggregate_func_2433(Local_913.f_80[iVar0]);
		}
		iVar0++;
	}
	aggregate_func_7577(256);
}

void func_621()
{
	if (!aggregate_func_4246(Local_913.f_96))
	{
		return;
	}
	_NAMESPACE71::_0x2F901291EF177B02(Local_913.f_96, 0);
	Local_913.f_96 = 0;
	aggregate_func_7577(8);
}

void func_622()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar0 /*4*/])->f_1))
		{
			if (MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2))
			{
				aggregate_func_2433(&((Local_913.f_16[iVar0 /*4*/])->f_2));
			}
			VOLUME::_0x43F867EF5C463A53((Local_913.f_16[iVar0 /*4*/])->f_1);
		}
		iVar0++;
	}
}

bool func_686(var uParam0)
{
	*uParam0 = Local_2395.f_1391;
	uParam0->f_2 = -1821940596;
	uParam0->f_3 = Local_2395.f_2;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_687(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return false;
	}
	iVar0 = &Local_0.f_67[iParam0 /*40*/];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return true;
}

int func_688(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return -1;
	}
	iVar0 = -1;
	switch ((Local_2395.f_1020[iParam0 /*34*/])->f_23)
	{
		case 1:
			if (!aggregate_func_1557(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 5:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 7:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

bool func_690(int iParam0)
{
	if (!func_687(iParam0))
	{
		return false;
	}
	if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
	{
		return false;
	}
	return true;
}

Vector3 func_693()
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	switch (Local_2395.f_2)
	{
		case -1573288601:
			vVar0 = { -1963.33f, 1138.71f, 172.9959f };
			break;
	}
	return vVar0;
}

float func_694()
{
	float fVar0;

	switch (Local_2395.f_2)
	{
		case -1573288601:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

int func_697(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, aggregate_func_7853(bParam1, 7f, 7.5f, 4f, 4.5f, 4.3f, 4f), aggregate_func_4363(bParam1, "satellite dropoff on vehicle", "satellite dropoff on foot"));
	PED::_0x7C00CFC48A782DC0(iVar0, *iParam0, aggregate_func_7853(bParam1, 0f, -8f, 0f, 0f, -5f, 0f), 0f, 0f, 0f, 2, 1);
	return iVar0;
}

Vector3 func_698()
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	switch (Local_2395.f_2)
	{
		case 2139023747:
			vVar0 = { 1357.169f, -1304.463f, 76.7606f };
			break;
		case -470215764:
			vVar0 = { 2494.148f, -1308.792f, 47.9537f };
			break;
		case -1983139019:
		case 381726250:
			vVar0 = { 2907.412f, 1309.071f, 43.9382f };
			break;
		case 2103232336:
			vVar0 = { -5531.073f, -2928.69f, -2.3609f };
			break;
		case -154861072:
			vVar0 = { -762.9695f, -1266.338f, 43.0505f };
			break;
		case -1573288601:
			vVar0 = { -1965.107f, 1135.891f, 172.7763f };
			break;
		case -809127215:
			vVar0 = { -1811.892f, -351.8727f, 163.6565f };
			break;
	}
	return vVar0;
}

float func_699()
{
	float fVar0;

	switch (Local_2395.f_2)
	{
		case 2139023747:
			fVar0 = 293.8096f;
			break;
		case -470215764:
			fVar0 = 272.1303f;
			break;
		case -1983139019:
		case 381726250:
			fVar0 = 1.8838f;
			break;
		case 2103232336:
			fVar0 = 256.3622f;
			break;
		case -154861072:
			fVar0 = 115.1669f;
			break;
		case -1573288601:
			fVar0 = 134.5537f;
			break;
		case -809127215:
			fVar0 = 277.207f;
			break;
	}
	return fVar0;
}

int func_702()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_1027(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 15)
	{
		return 15;
	}
	return iVar5;
}

bool func_703(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = iParam1;
	while (iVar1 >= 32)
	{
		iVar1 = (iVar1 - 32);
		iVar0++;
	}
	if (iVar0 >= 3)
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		if (!MISC::IS_BIT_SET(&(((*uParam0)[iVar2 /*17*/])->f_1[iVar0]), iVar1))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

void func_704(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	func_1028(&iVar1, &iVar0, iParam0);
	MISC::SET_BIT(Local_0.f_361[iVar0], iVar1);
}

int func_705(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 >= Local_913.f_1)
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = 0;
	iVar2 = iParam1 + 1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
	while (func_706(iVar0) || !aggregate_func_4244())
	{
		if (iVar1 > iVar2)
		{
			iVar0 = -1;
		}
		else
		{
			iVar0++;
			iVar1++;
			if (iVar0 >= iParam1)
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar0 > -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
	while (!aggregate_func_4244())
	{
		if (iVar1 > iVar2)
		{
			iVar0 = -1;
		}
		else
		{
			iVar0++;
			iVar1++;
			if (iVar0 > iParam1)
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar0 > -1)
	{
		return iVar0;
	}
	return iVar0;
}

bool func_706(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	func_1028(&iVar1, &iVar0, iParam0);
	return MISC::IS_BIT_SET(&(Local_0.f_361[iVar0]), iVar1);
}

int func_707()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	iVar0 = Local_0.f_360;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
	{
		return 0;
	}
	if (iVar0 >= Local_913.f_1)
	{
		return 0;
	}
	if (iVar0 >= 7)
	{
		return 0;
	}
	vVar1 = { func_804(&(Local_0.f_350[iVar0])) };
	fVar4 = aggregate_func_4137(&(Local_0.f_350[iVar0]));
	iVar5 = func_1031(&(Local_0.f_350[iVar0]));
	(Local_0.f_67[iVar0 /*40*/])->f_4 = joaat("init");
	func_1032(iVar5, iVar0);
	if (aggregate_func_404(Local_0.f_67[iVar0 /*40*/], func_736(), vVar1, fVar4, 1, 0, 1, 1, 1))
	{
		func_1033(&(Local_0.f_67[iVar0 /*40*/]), (Local_0.f_67[iVar0 /*40*/])->f_6);
		STATS::_0x6B1044FDC2B09101(Local_2395.f_7.f_1, NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/])));
		Local_0.f_360++;
		aggregate_func_7375(3, iVar0);
		return 1;
	}
	return 0;
}

struct<4> func_708(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	struct<4> Var4;

	vVar0 = { 0f, 0f, 0f };
	fVar3 = 0f;
	switch (Local_2395.f_2)
	{
		case 2139023747:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1514.836f, -1804.997f, 52.9815f };
							fVar3 = 17.0206f;
							break;
						case 1:
							vVar0 = { 1500.752f, -1815.29f, 52.9437f };
							fVar3 = 132.8386f;
							break;
						case 2:
							vVar0 = { 1524.669f, -1806.541f, 52.3398f };
							fVar3 = 312.6993f;
							break;
						case 3:
							vVar0 = { 1533.585f, -1821.619f, 51.5959f };
							fVar3 = 282.1619f;
							break;
						case 4:
							vVar0 = { 1513.518f, -1792.332f, 53.6426f };
							fVar3 = 359.0301f;
							break;
						case 5:
							vVar0 = { 1499.303f, -1804.466f, 54.0139f };
							fVar3 = 41.8741f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1337.067f, -2299.027f, 48.0877f };
							fVar3 = 185.5839f;
							break;
						case 1:
							vVar0 = { 1335.645f, -2290.635f, 47.8169f };
							fVar3 = 2.6866f;
							break;
						case 2:
							vVar0 = { 1346.554f, -2286.502f, 47.4214f };
							fVar3 = 31.628f;
							break;
						case 3:
							vVar0 = { 1329.959f, -2284.99f, 48.336f };
							fVar3 = 331.6018f;
							break;
						case 4:
							vVar0 = { 1320.854f, -2269.892f, 48.499f };
							fVar3 = 77.5452f;
							break;
						case 5:
							vVar0 = { 1317.62f, -2288.604f, 48.0758f };
							fVar3 = 88.5634f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 975.0677f, -2027.192f, 47.8451f };
							fVar3 = 226.1174f;
							break;
						case 1:
							vVar0 = { 980.3456f, -2013.598f, 47.8187f };
							fVar3 = 8.7681f;
							break;
						case 2:
							vVar0 = { 976.717f, -2035.451f, 47.8559f };
							fVar3 = 122.6928f;
							break;
						case 3:
							vVar0 = { 991.724f, -2018.611f, 46.2066f };
							fVar3 = 281.9839f;
							break;
						case 4:
							vVar0 = { 990.7664f, -2003.876f, 46.436f };
							fVar3 = 314.2335f;
							break;
						case 5:
							vVar0 = { 987.9829f, -2060.592f, 45.6442f };
							fVar3 = 357.8785f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1010.259f, -1768.291f, 50.9903f };
							fVar3 = 198.4137f;
							break;
						case 1:
							vVar0 = { 1010.177f, -1773.366f, 46.582f };
							fVar3 = 346.0927f;
							break;
						case 2:
							vVar0 = { 1009.826f, -1781.674f, 46.605f };
							fVar3 = 204.0034f;
							break;
						case 3:
							vVar0 = { 1009.353f, -1760.553f, 46.6047f };
							fVar3 = 349.4127f;
							break;
						case 4:
							vVar0 = { 1014.208f, -1743.941f, 45.5655f };
							fVar3 = 326.3365f;
							break;
						case 5:
							vVar0 = { 1034.843f, -1794.865f, 45.4987f };
							fVar3 = 236.7888f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1354.341f, -1696.844f, 67.2846f };
							fVar3 = 173.8591f;
							break;
						case 1:
							vVar0 = { 1351.732f, -1689.161f, 66.4748f };
							fVar3 = 296.9333f;
							break;
						case 2:
							vVar0 = { 1366.312f, -1703.133f, 67.035f };
							fVar3 = 266.3787f;
							break;
						case 3:
							vVar0 = { 1343.648f, -1696.144f, 68.1726f };
							fVar3 = 113.4733f;
							break;
						case 4:
							vVar0 = { 1345.914f, -1705.345f, 69.8267f };
							fVar3 = 137.4848f;
							break;
						case 5:
							vVar0 = { 1359.863f, -1690.335f, 66.5718f };
							fVar3 = 323.8889f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 825.4607f, -1914.233f, 41.5056f };
							fVar3 = 222.9966f;
							break;
						case 1:
							vVar0 = { 830.983f, -1911.663f, 41.4258f };
							fVar3 = 276.2956f;
							break;
						case 2:
							vVar0 = { 849.6296f, -1917.258f, 43.1438f };
							fVar3 = 282.1501f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1388.221f, -2079.67f, 51.5663f };
							fVar3 = 43.6713f;
							break;
						case 1:
							vVar0 = { 1384.983f, -2086.389f, 51.6047f };
							fVar3 = 123.5149f;
							break;
						case 2:
							vVar0 = { 1392.317f, -2079.243f, 51.3138f };
							fVar3 = 344.7096f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1115.025f, -1991.227f, 54.3381f };
							fVar3 = 159.6296f;
							break;
						case 1:
							vVar0 = { 1113.916f, -1989.214f, 54.3666f };
							fVar3 = 61.9787f;
							break;
						case 2:
							vVar0 = { 1110.057f, -1991.245f, 53.7992f };
							fVar3 = 234.0163f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1590.174f, -1838.024f, 51.3534f };
							fVar3 = 337.5485f;
							break;
						case 1:
							vVar0 = { 1586.073f, -1845.077f, 57.5321f };
							fVar3 = 118.2057f;
							break;
						case 2:
							vVar0 = { 1592.825f, -1856.356f, 51.3534f };
							fVar3 = 166.3988f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 845.8153f, -1498.8f, 46.1654f };
							fVar3 = 272.1098f;
							break;
						case 1:
							vVar0 = { 840.0987f, -1524.58f, 45.5197f };
							fVar3 = 245.5339f;
							break;
						case 2:
							vVar0 = { 829.4324f, -1497.236f, 45.2258f };
							fVar3 = 322.0186f;
							break;
					}
					break;
			}
			break;
		case -470215764:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2496.246f, -415.5733f, 43.3617f };
							fVar3 = 18.0443f;
							break;
						case 1:
							vVar0 = { 2493.457f, -426.5198f, 43.2534f };
							fVar3 = 185.0916f;
							break;
						case 2:
							vVar0 = { 2487.006f, -405.9165f, 40.4546f };
							fVar3 = 4.743f;
							break;
						case 3:
							vVar0 = { 2487.726f, -432.5307f, 40.6068f };
							fVar3 = 87.3248f;
							break;
						case 4:
							vVar0 = { 2480.711f, -410.6164f, 40.07f };
							fVar3 = 61.1492f;
							break;
						case 5:
							vVar0 = { 2482.325f, -423.9219f, 40.5427f };
							fVar3 = 98.0332f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1777.641f, -400.8726f, 45.9702f };
							fVar3 = 275.9256f;
							break;
						case 1:
							vVar0 = { 1781.979f, -406.4569f, 45.8052f };
							fVar3 = 210.731f;
							break;
						case 2:
							vVar0 = { 1789.623f, -404.0942f, 45.4407f };
							fVar3 = 313.0887f;
							break;
						case 3:
							vVar0 = { 1792.079f, -408.6683f, 44.7279f };
							fVar3 = 151.772f;
							break;
						case 4:
							vVar0 = { 1771.253f, -399.7135f, 46.4016f };
							fVar3 = 52.2962f;
							break;
						case 5:
							vVar0 = { 1796.375f, -421.3922f, 43.8591f };
							fVar3 = 217.2594f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2704.164f, -827.1263f, 41.3535f };
							fVar3 = 190.2017f;
							break;
						case 1:
							vVar0 = { 2710.069f, -821.8253f, 41.307f };
							fVar3 = 264.748f;
							break;
						case 2:
							vVar0 = { 2711.573f, -834.5148f, 41.4272f };
							fVar3 = 332.0651f;
							break;
						case 3:
							vVar0 = { 2694.342f, -827.8898f, 41.3178f };
							fVar3 = 208.5548f;
							break;
						case 4:
							vVar0 = { 2697.292f, -817.3975f, 41.2623f };
							fVar3 = 24.3097f;
							break;
						case 5:
							vVar0 = { 2708.2f, -844.7161f, 41.475f };
							fVar3 = 145.0926f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1872.799f, -769.3138f, 41.4736f };
							fVar3 = 0.5909f;
							break;
						case 1:
							vVar0 = { 1882.502f, -768.1407f, 41.4719f };
							fVar3 = 304.321f;
							break;
						case 2:
							vVar0 = { 1893.13f, -754.0431f, 40.6428f };
							fVar3 = 21.2678f;
							break;
						case 3:
							vVar0 = { 1877.256f, -754.9118f, 40.6195f };
							fVar3 = 180.2412f;
							break;
						case 4:
							vVar0 = { 1892.954f, -733.2559f, 41.05f };
							fVar3 = 0.0481f;
							break;
						case 5:
							vVar0 = { 1879.674f, -744.4146f, 41.0046f };
							fVar3 = 81.3634f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2132.236f, -641.4135f, 41.5769f };
							fVar3 = 91.2924f;
							break;
						case 1:
							vVar0 = { 2138.138f, -630.942f, 41.7049f };
							fVar3 = 333.8898f;
							break;
						case 2:
							vVar0 = { 2148.773f, -639.7931f, 41.5027f };
							fVar3 = 109.5794f;
							break;
						case 3:
							vVar0 = { 2153.102f, -621.8261f, 40.3371f };
							fVar3 = 66.5749f;
							break;
						case 4:
							vVar0 = { 2135.29f, -628.6968f, 40.7344f };
							fVar3 = 42.2975f;
							break;
						case 5:
							vVar0 = { 2140.039f, -645.918f, 41.3095f };
							fVar3 = 152.0109f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1780.327f, -810.1743f, 41.6042f };
							fVar3 = 87.875f;
							break;
						case 1:
							vVar0 = { 1793.938f, -825.9329f, 41.4167f };
							fVar3 = 175.2516f;
							break;
						case 2:
							vVar0 = { 1784.267f, -823.4006f, 41.7233f };
							fVar3 = 126.4825f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2372.287f, -866.6091f, 42.0625f };
							fVar3 = 199.607f;
							break;
						case 1:
							vVar0 = { 2367.851f, -857.1113f, 42.0115f };
							fVar3 = 9.4687f;
							break;
						case 2:
							vVar0 = { 2354.028f, -855.1956f, 40.8824f };
							fVar3 = 262.2177f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2098.952f, -300.7495f, 40.7219f };
							fVar3 = 126.5114f;
							break;
						case 1:
							vVar0 = { 2112.253f, -291.2435f, 40.7496f };
							fVar3 = 245.5425f;
							break;
						case 2:
							vVar0 = { 2107.487f, -278.4344f, 42.0297f };
							fVar3 = 356.0559f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2013.588f, -776.3242f, 41.8528f };
							fVar3 = 186.7821f;
							break;
						case 1:
							vVar0 = { 2024.934f, -770.0481f, 41.8314f };
							fVar3 = 239.1592f;
							break;
						case 2:
							vVar0 = { 2013.59f, -757.0114f, 40.8966f };
							fVar3 = 1.6446f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2304.809f, -346.0838f, 41.7399f };
							fVar3 = 219.308f;
							break;
						case 1:
							vVar0 = { 2309.089f, -341.1837f, 41.4784f };
							fVar3 = 238.749f;
							break;
						case 2:
							vVar0 = { 2306.073f, -336.0251f, 40.9326f };
							fVar3 = 135.7502f;
							break;
					}
					break;
			}
			break;
		case 381726250:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2542.103f, 810.0599f, 74.9698f };
							fVar3 = 117.1484f;
							break;
						case 1:
							vVar0 = { 2544.074f, 804.0596f, 75.1476f };
							fVar3 = 261.933f;
							break;
						case 2:
							vVar0 = { 2535.008f, 784.2309f, 74.2575f };
							fVar3 = 45.8279f;
							break;
						case 3:
							vVar0 = { 2551.162f, 791.5272f, 75.0805f };
							fVar3 = 181.0652f;
							break;
						case 4:
							vVar0 = { 2545.502f, 820.5071f, 74.5961f };
							fVar3 = 13.4655f;
							break;
						case 5:
							vVar0 = { 2531.062f, 797.3389f, 73.9036f };
							fVar3 = 121.8733f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2920.645f, 1378.899f, 55.2255f };
							fVar3 = 253.4611f;
							break;
						case 1:
							vVar0 = { 2923.858f, 1393.125f, 55.1851f };
							fVar3 = 64.8017f;
							break;
						case 2:
							vVar0 = { 2913.329f, 1391.551f, 58.6343f };
							fVar3 = 100.9759f;
							break;
						case 3:
							vVar0 = { 2960.951f, 1370.663f, 52.8466f };
							fVar3 = 66.3481f;
							break;
						case 4:
							vVar0 = { 2961.232f, 1378.97f, 50.2244f };
							fVar3 = 333.4575f;
							break;
						case 5:
							vVar0 = { 2894.841f, 1399.176f, 63.9417f };
							fVar3 = 141.9029f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2787.059f, 1336.744f, 70.3792f };
							fVar3 = 253.3737f;
							break;
						case 1:
							vVar0 = { 2778.879f, 1338.901f, 69.9097f };
							fVar3 = 276.8493f;
							break;
						case 2:
							vVar0 = { 2758.486f, 1333.996f, 68.9937f };
							fVar3 = 296.5949f;
							break;
						case 3:
							vVar0 = { 2750.079f, 1324.922f, 68.896f };
							fVar3 = 308.9105f;
							break;
						case 4:
							vVar0 = { 2744.083f, 1314.847f, 68.9447f };
							fVar3 = 357.9193f;
							break;
						case 5:
							vVar0 = { 2766.225f, 1342.569f, 69.4271f };
							fVar3 = 252.8623f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2627.424f, 1688.614f, 114.418f };
							fVar3 = 99.1369f;
							break;
						case 1:
							vVar0 = { 2629.098f, 1708.882f, 113.0719f };
							fVar3 = 323.6932f;
							break;
						case 2:
							vVar0 = { 2636.091f, 1699.111f, 115.0817f };
							fVar3 = 340.1408f;
							break;
						case 3:
							vVar0 = { 2625.006f, 1702.132f, 113.464f };
							fVar3 = 97.8557f;
							break;
						case 4:
							vVar0 = { 2639.555f, 1692.049f, 115.8638f };
							fVar3 = 56.7707f;
							break;
						case 5:
							vVar0 = { 2646.707f, 1700.648f, 116.4033f };
							fVar3 = 34.8764f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2787.311f, 514.3282f, 66.5908f };
							fVar3 = 171.5207f;
							break;
						case 1:
							vVar0 = { 2794.1f, 548.3551f, 66.6235f };
							fVar3 = 309.0598f;
							break;
						case 2:
							vVar0 = { 2776.248f, 534.4092f, 67.2686f };
							fVar3 = 89.485f;
							break;
						case 3:
							vVar0 = { 2785.942f, 522.0443f, 70.9843f };
							fVar3 = 191.5588f;
							break;
						case 4:
							vVar0 = { 2793.54f, 525.3322f, 67.3702f };
							fVar3 = 300.7604f;
							break;
						case 5:
							vVar0 = { 2776.974f, 522.9463f, 67.1423f };
							fVar3 = 134.2576f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2552.56f, 690.2751f, 79.3809f };
							fVar3 = 200.9846f;
							break;
						case 1:
							vVar0 = { 2534.963f, 716.2883f, 76.6033f };
							fVar3 = 353.1608f;
							break;
						case 2:
							vVar0 = { 2528.161f, 705.7253f, 76.4047f };
							fVar3 = 134.1961f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2682.272f, 913.4138f, 89.301f };
							fVar3 = 101.9489f;
							break;
						case 1:
							vVar0 = { 2677.064f, 890.1603f, 88.1818f };
							fVar3 = 177.4978f;
							break;
						case 2:
							vVar0 = { 2691.229f, 905.1601f, 90.9559f };
							fVar3 = 329.5521f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2905.097f, 1437.474f, 56.6915f };
							fVar3 = 179.5988f;
							break;
						case 1:
							vVar0 = { 2907.386f, 1451.586f, 56.7444f };
							fVar3 = 29.427f;
							break;
						case 2:
							vVar0 = { 2895.643f, 1438.681f, 56.5607f };
							fVar3 = 100.8788f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 3014.996f, 1343.94f, 41.6707f };
							fVar3 = 64.2617f;
							break;
						case 1:
							vVar0 = { 3011.782f, 1328.366f, 41.7387f };
							fVar3 = 65.0606f;
							break;
						case 2:
							vVar0 = { 3017.256f, 1354.161f, 41.7607f };
							fVar3 = 152.0743f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2946.956f, 573.7332f, 43.5868f };
							fVar3 = 16.0192f;
							break;
						case 1:
							vVar0 = { 2955.275f, 597.7873f, 43.4136f };
							fVar3 = 44.8213f;
							break;
						case 2:
							vVar0 = { 2972.683f, 581.3096f, 43.4019f };
							fVar3 = 168.3423f;
							break;
					}
					break;
			}
			break;
		case 2103232336:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5424.692f, -3669.789f, -23.0183f };
							fVar3 = 232.0246f;
							break;
						case 1:
							vVar0 = { -5419.83f, -3645.112f, -23.1393f };
							fVar3 = 322.108f;
							break;
						case 2:
							vVar0 = { -5433.083f, -3652.728f, -23.1529f };
							fVar3 = 75.6402f;
							break;
						case 3:
							vVar0 = { -5411.81f, -3637.557f, -23.1159f };
							fVar3 = 285.262f;
							break;
						case 4:
							vVar0 = { -5396.708f, -3655.968f, -23.1167f };
							fVar3 = 269.2774f;
							break;
						case 5:
							vVar0 = { -5399.69f, -3669.607f, -23.023f };
							fVar3 = 211.8964f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -6042.013f, -3256.127f, -15.3727f };
							fVar3 = 296.5988f;
							break;
						case 1:
							vVar0 = { -6044.615f, -3268.929f, -20.0958f };
							fVar3 = 244.8894f;
							break;
						case 2:
							vVar0 = { -6017.401f, -3252.659f, -22.1478f };
							fVar3 = 259.2538f;
							break;
						case 3:
							vVar0 = { -5996.726f, -3233.114f, -22.1474f };
							fVar3 = 248.6583f;
							break;
						case 4:
							vVar0 = { -6053.581f, -3257.977f, -19.9021f };
							fVar3 = 340.0318f;
							break;
						case 5:
							vVar0 = { -6009.731f, -3260.155f, -22.6422f };
							fVar3 = 336.8328f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5520.072f, -2912.223f, -2.7295f };
							fVar3 = 71.966f;
							break;
						case 1:
							vVar0 = { -5512.906f, -2919.291f, 0.6475f };
							fVar3 = 236.3099f;
							break;
						case 2:
							vVar0 = { -5513.928f, -2902.469f, -2.7513f };
							fVar3 = 153.7765f;
							break;
						case 3:
							vVar0 = { -5540.266f, -2902.239f, -4.0241f };
							fVar3 = 6.2052f;
							break;
						case 4:
							vVar0 = { -5513.043f, -2943.114f, -3.0348f };
							fVar3 = 255.7862f;
							break;
						case 5:
							vVar0 = { -5515.182f, -2926.115f, -3.359f };
							fVar3 = 202.6036f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5828.289f, -3722.912f, -26.8572f };
							fVar3 = 323.9497f;
							break;
						case 1:
							vVar0 = { -5864.29f, -3749.133f, -25.8905f };
							fVar3 = 101.8063f;
							break;
						case 2:
							vVar0 = { -5822.076f, -3733.02f, -27.4921f };
							fVar3 = 0.9976f;
							break;
						case 3:
							vVar0 = { -5853.43f, -3757.583f, -25.9751f };
							fVar3 = 87.2032f;
							break;
						case 4:
							vVar0 = { -5834.481f, -3744.146f, -26.7597f };
							fVar3 = 39.2301f;
							break;
						case 5:
							vVar0 = { -5835.479f, -3705.791f, -26.7554f };
							fVar3 = 302.7016f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -4843.1f, -2649.693f, -12.5893f };
							fVar3 = 17.5378f;
							break;
						case 1:
							vVar0 = { -4856.37f, -2656.361f, -13.1168f };
							fVar3 = 207.7964f;
							break;
						case 2:
							vVar0 = { -4827.085f, -2667.539f, -13.5207f };
							fVar3 = 202.4101f;
							break;
						case 3:
							vVar0 = { -4849.711f, -2668.951f, -13.5659f };
							fVar3 = 202.024f;
							break;
						case 4:
							vVar0 = { -4812.022f, -2705.233f, -13.8164f };
							fVar3 = 211.0205f;
							break;
						case 5:
							vVar0 = { -4849.655f, -2714.315f, -14.6372f };
							fVar3 = 94.4884f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5209.657f, -3462.308f, -22.9748f };
							fVar3 = 65.6154f;
							break;
						case 1:
							vVar0 = { -5208.43f, -3484.55f, -22.8143f };
							fVar3 = 131.8862f;
							break;
						case 2:
							vVar0 = { -5229.941f, -3483.531f, -21.5454f };
							fVar3 = 108.6637f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5508.641f, -3054.602f, -3.6915f };
							fVar3 = 211.0461f;
							break;
						case 1:
							vVar0 = { -5525.595f, -3057.358f, -3.1306f };
							fVar3 = 56.4749f;
							break;
						case 2:
							vVar0 = { -5540.553f, -3044.959f, -2.3009f };
							fVar3 = 358.099f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -6022.786f, -3148.081f, -2.5637f };
							fVar3 = 127.6877f;
							break;
						case 1:
							vVar0 = { -6009.324f, -3142.611f, 9.7212f };
							fVar3 = 12.9387f;
							break;
						case 2:
							vVar0 = { -5988.663f, -3134.936f, -2.871f };
							fVar3 = 26.6928f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5866.676f, -2720.026f, -8.6757f };
							fVar3 = 293.3553f;
							break;
						case 1:
							vVar0 = { -5857.968f, -2734.05f, -8.3397f };
							fVar3 = 320.1053f;
							break;
						case 2:
							vVar0 = { -5873.063f, -2755.414f, -5.6745f };
							fVar3 = 235.6632f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5551.011f, -2402.916f, -9.7466f };
							fVar3 = 200.4867f;
							break;
						case 1:
							vVar0 = { -5539.09f, -2395.507f, -10.0217f };
							fVar3 = 241.6014f;
							break;
						case 2:
							vVar0 = { -5577.439f, -2402.218f, -11.1262f };
							fVar3 = 168.4619f;
							break;
					}
					break;
			}
			break;
		case -154861072:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1975.126f, -1647.219f, 116.1353f };
							fVar3 = 258.3268f;
							break;
						case 1:
							vVar0 = { -1981.584f, -1619.811f, 117.0868f };
							fVar3 = 287.032f;
							break;
						case 2:
							vVar0 = { -1988.031f, -1594.122f, 116.1697f };
							fVar3 = 346.1126f;
							break;
						case 3:
							vVar0 = { -1991.98f, -1611.099f, 117.1152f };
							fVar3 = 109.1858f;
							break;
						case 4:
							vVar0 = { -1971.538f, -1662.767f, 116.495f };
							fVar3 = 239.5132f;
							break;
						case 5:
							vVar0 = { -1985.282f, -1644.812f, 116.0983f };
							fVar3 = 114.9008f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1170.262f, -1936.272f, 41.2959f };
							fVar3 = 153.5316f;
							break;
						case 1:
							vVar0 = { -1154.064f, -1917.983f, 41.2524f };
							fVar3 = 68.2694f;
							break;
						case 2:
							vVar0 = { -1184.381f, -1961.819f, 41.468f };
							fVar3 = 33.6398f;
							break;
						case 3:
							vVar0 = { -1204.927f, -1948.135f, 42.2597f };
							fVar3 = 21.7259f;
							break;
						case 4:
							vVar0 = { -1195.652f, -1940.257f, 42.59f };
							fVar3 = 333.8869f;
							break;
						case 5:
							vVar0 = { -1169.034f, -1913.52f, 43.5825f };
							fVar3 = 84.5862f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1359.025f, -2339.047f, 41.8264f };
							fVar3 = 150.0374f;
							break;
						case 1:
							vVar0 = { -1380.638f, -2338.435f, 41.8373f };
							fVar3 = 66.7274f;
							break;
						case 2:
							vVar0 = { -1388.471f, -2329.768f, 41.8876f };
							fVar3 = 129.5486f;
							break;
						case 3:
							vVar0 = { -1388.124f, -2310.397f, 42.6456f };
							fVar3 = 22.0638f;
							break;
						case 4:
							vVar0 = { -1400.343f, -2315.313f, 45.5993f };
							fVar3 = 91.6431f;
							break;
						case 5:
							vVar0 = { -1389.879f, -2346.02f, 42.0574f };
							fVar3 = 140.8262f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2405.436f, -2380.132f, 60.1755f };
							fVar3 = 95.784f;
							break;
						case 1:
							vVar0 = { -2377.947f, -2358.063f, 61.1794f };
							fVar3 = 221.8708f;
							break;
						case 2:
							vVar0 = { -2386.917f, -2391.858f, 60.5036f };
							fVar3 = 237.3019f;
							break;
						case 3:
							vVar0 = { -2421.78f, -2428.192f, 59.2549f };
							fVar3 = 107.0202f;
							break;
						case 4:
							vVar0 = { -2378.668f, -2423.272f, 62.0657f };
							fVar3 = 269.2876f;
							break;
						case 5:
							vVar0 = { -2342.781f, -2366.134f, 61.0928f };
							fVar3 = 331.4694f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2018.995f, -3032.742f, -10.7271f };
							fVar3 = 20.523f;
							break;
						case 1:
							vVar0 = { -2027.865f, -3024.799f, -11.0817f };
							fVar3 = 326.7342f;
							break;
						case 2:
							vVar0 = { -2005.558f, -3011.951f, -7.9992f };
							fVar3 = 335.0397f;
							break;
						case 3:
							vVar0 = { -2030.931f, -3009.199f, -8.3759f };
							fVar3 = 348.526f;
							break;
						case 4:
							vVar0 = { -2042.997f, -3007.488f, -8.4593f };
							fVar3 = 23.2057f;
							break;
						case 5:
							vVar0 = { -2018.831f, -3046.228f, -12.2055f };
							fVar3 = 5.6306f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1420.908f, -2685.73f, 39.8042f };
							fVar3 = 65.2135f;
							break;
						case 1:
							vVar0 = { -1422.117f, -2665.763f, 41.4895f };
							fVar3 = 94.5139f;
							break;
						case 2:
							vVar0 = { -1436.85f, -2684.076f, 39.6307f };
							fVar3 = 50.3682f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1814.721f, -2392.137f, 42.1581f };
							fVar3 = 31.139f;
							break;
						case 1:
							vVar0 = { -1836.254f, -2399.031f, 44.8137f };
							fVar3 = 107.0837f;
							break;
						case 2:
							vVar0 = { -1825.99f, -2418.442f, 41.568f };
							fVar3 = 178.1437f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2088.384f, -1902.796f, 112.7463f };
							fVar3 = 97.5279f;
							break;
						case 1:
							vVar0 = { -2068.237f, -1904.495f, 111.8485f };
							fVar3 = 268.2897f;
							break;
						case 2:
							vVar0 = { -2069.183f, -1887f, 111.5928f };
							fVar3 = 255.5782f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2581.847f, -1376.982f, 148.3389f };
							fVar3 = 285.9738f;
							break;
						case 1:
							vVar0 = { -2572.343f, -1359.378f, 151.0724f };
							fVar3 = 249.7027f;
							break;
						case 2:
							vVar0 = { -2551.037f, -1377.534f, 149.1154f };
							fVar3 = 299.0706f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1408.899f, -2186.334f, 42.708f };
							fVar3 = 320.3206f;
							break;
						case 1:
							vVar0 = { -1415.032f, -2214.176f, 42.3576f };
							fVar3 = 221.9935f;
							break;
						case 2:
							vVar0 = { -1414.336f, -2201.139f, 42.4092f };
							fVar3 = 241.793f;
							break;
					}
					break;
			}
			break;
		case -1573288601:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1493.746f, 1247.659f, 316.626f };
							fVar3 = 110.2786f;
							break;
						case 1:
							vVar0 = { -1502.063f, 1252.346f, 312.9523f };
							fVar3 = 113.5387f;
							break;
						case 2:
							vVar0 = { -1499.872f, 1239.605f, 311.8705f };
							fVar3 = 102.2303f;
							break;
						case 3:
							vVar0 = { -1507.979f, 1250.614f, 312.9025f };
							fVar3 = 127.6722f;
							break;
						case 4:
							vVar0 = { -1512.267f, 1243.54f, 312.2905f };
							fVar3 = 82.9311f;
							break;
						case 5:
							vVar0 = { -1514.645f, 1234.105f, 310.789f };
							fVar3 = 115.5529f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1904.697f, 1324.891f, 198.473f };
							fVar3 = 178.1938f;
							break;
						case 1:
							vVar0 = { -1887.442f, 1331.05f, 199.2019f };
							fVar3 = 163.0041f;
							break;
						case 2:
							vVar0 = { -1914.343f, 1331.859f, 202.8294f };
							fVar3 = 203.9402f;
							break;
						case 3:
							vVar0 = { -1883.203f, 1343.47f, 199.9668f };
							fVar3 = 163.3788f;
							break;
						case 4:
							vVar0 = { -1907.658f, 1348.672f, 201.263f };
							fVar3 = 185.6952f;
							break;
						case 5:
							vVar0 = { -1896.338f, 1357.386f, 202.4468f };
							fVar3 = 176.3125f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1355.485f, 2387.021f, 305.5567f };
							fVar3 = 144.8075f;
							break;
						case 1:
							vVar0 = { -1345.887f, 2404.979f, 306.0671f };
							fVar3 = 340.931f;
							break;
						case 2:
							vVar0 = { -1354.863f, 2416.639f, 306.3873f };
							fVar3 = 169.3761f;
							break;
						case 3:
							vVar0 = { -1335.882f, 2374.493f, 305.253f };
							fVar3 = 213.1103f;
							break;
						case 4:
							vVar0 = { -1333.04f, 2415.461f, 307.0699f };
							fVar3 = 236.3865f;
							break;
						case 5:
							vVar0 = { -1364.487f, 2404.849f, 306.1805f };
							fVar3 = 154.2199f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -551.4438f, 2692.278f, 318.3365f };
							fVar3 = 111.0552f;
							break;
						case 1:
							vVar0 = { -566.343f, 2702.645f, 319.2391f };
							fVar3 = 146.2004f;
							break;
						case 2:
							vVar0 = { -578.1788f, 2696.318f, 319.4971f };
							fVar3 = 145.0319f;
							break;
						case 3:
							vVar0 = { -560.9117f, 2698.618f, 318.4446f };
							fVar3 = 129.8444f;
							break;
						case 4:
							vVar0 = { -599.7551f, 2691.614f, 322.4026f };
							fVar3 = 163.2025f;
							break;
						case 5:
							vVar0 = { -569.9564f, 2670.313f, 319.1126f };
							fVar3 = 140.1331f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -414.5557f, 1748.556f, 218.2735f };
							fVar3 = 196.7161f;
							break;
						case 1:
							vVar0 = { -417.3984f, 1736.838f, 215.2631f };
							fVar3 = 203.3302f;
							break;
						case 2:
							vVar0 = { -422.0522f, 1724.197f, 215.2587f };
							fVar3 = 241.3378f;
							break;
						case 3:
							vVar0 = { -396.0677f, 1740.16f, 215.253f };
							fVar3 = 228.0825f;
							break;
						case 4:
							vVar0 = { -410.402f, 1714.166f, 215.1549f };
							fVar3 = 225.2057f;
							break;
						case 5:
							vVar0 = { -393.7321f, 1721.262f, 215.0824f };
							fVar3 = 184.9072f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1635.46f, 1216.509f, 351.4236f };
							fVar3 = 30.1849f;
							break;
						case 1:
							vVar0 = { -1632.213f, 1229.244f, 350.9349f };
							fVar3 = 111.3917f;
							break;
						case 2:
							vVar0 = { -1630.01f, 1222.731f, 350.6895f };
							fVar3 = 85.4213f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1958.631f, 2159.651f, 326.1666f };
							fVar3 = 274.4594f;
							break;
						case 1:
							vVar0 = { -1933.233f, 2182.011f, 322.0478f };
							fVar3 = 278.775f;
							break;
						case 2:
							vVar0 = { -1921.19f, 2168.862f, 319.2313f };
							fVar3 = 290.2664f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1575.405f, 3124.052f, 473.589f };
							fVar3 = 227.0358f;
							break;
						case 1:
							vVar0 = { -1548.271f, 3095.831f, 475.8606f };
							fVar3 = 262.0096f;
							break;
						case 2:
							vVar0 = { -1537.886f, 3112.182f, 476.2427f };
							fVar3 = 179.7528f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -975.14f, 2187.308f, 339.5475f };
							fVar3 = 33.5496f;
							break;
						case 1:
							vVar0 = { -949.3162f, 2196.347f, 340.5065f };
							fVar3 = 55.5737f;
							break;
						case 2:
							vVar0 = { -951.804f, 2174.82f, 340.6268f };
							fVar3 = 50.3167f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1004.758f, 1679.81f, 237.5389f };
							fVar3 = 192.8022f;
							break;
						case 1:
							vVar0 = { -1047.167f, 1638.153f, 242.7527f };
							fVar3 = 154.5566f;
							break;
						case 2:
							vVar0 = { -964.7531f, 1629.641f, 246.1476f };
							fVar3 = 202.1798f;
							break;
					}
					break;
			}
			break;
		case -1983139019:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1919.547f, 1962.852f, 261.8922f };
							fVar3 = 79.5327f;
							break;
						case 1:
							vVar0 = { 1938.176f, 1963.839f, 262.3492f };
							fVar3 = 289.004f;
							break;
						case 2:
							vVar0 = { 1963.246f, 1952.842f, 255.795f };
							fVar3 = 310.0172f;
							break;
						case 3:
							vVar0 = { 1937.31f, 1953.04f, 265.0806f };
							fVar3 = 16.6196f;
							break;
						case 4:
							vVar0 = { 1929.283f, 1942.237f, 264.7864f };
							fVar3 = 93.1248f;
							break;
						case 5:
							vVar0 = { 1957.905f, 1972.143f, 258.327f };
							fVar3 = 212.8568f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 136.5897f, 1816.72f, 198.0172f };
							fVar3 = 312.9037f;
							break;
						case 1:
							vVar0 = { 107.6334f, 1809.477f, 200.8272f };
							fVar3 = 67.9633f;
							break;
						case 2:
							vVar0 = { 110.8919f, 1832.54f, 200.6452f };
							fVar3 = 27.9861f;
							break;
						case 3:
							vVar0 = { 157.4484f, 1850.318f, 199.7108f };
							fVar3 = 257.86f;
							break;
						case 4:
							vVar0 = { 155.9167f, 1799.949f, 200.4845f };
							fVar3 = 121.0841f;
							break;
						case 5:
							vVar0 = { 129.9211f, 1837.657f, 199.5524f };
							fVar3 = 350.0315f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 352.2282f, 1461.902f, 182.7836f };
							fVar3 = 230.6504f;
							break;
						case 1:
							vVar0 = { 375.4702f, 1466.297f, 178.5047f };
							fVar3 = 199.7316f;
							break;
						case 2:
							vVar0 = { 356.3458f, 1487.246f, 178.8775f };
							fVar3 = 184.9862f;
							break;
						case 3:
							vVar0 = { 333.2953f, 1485.879f, 178.5664f };
							fVar3 = 274.8094f;
							break;
						case 4:
							vVar0 = { 361.9592f, 1477.832f, 179.0363f };
							fVar3 = 156.3092f;
							break;
						case 5:
							vVar0 = { 352.1274f, 1498.898f, 182.3254f };
							fVar3 = 168.1974f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 192.7915f, 975.1652f, 189.491f };
							fVar3 = 155.828f;
							break;
						case 1:
							vVar0 = { 207.6418f, 965.1176f, 189.7494f };
							fVar3 = 130.9195f;
							break;
						case 2:
							vVar0 = { 232.2335f, 992.6051f, 188.653f };
							fVar3 = 303.2896f;
							break;
						case 3:
							vVar0 = { 199.0457f, 1010.909f, 188.118f };
							fVar3 = 343.778f;
							break;
						case 4:
							vVar0 = { 217.2848f, 1009.722f, 188.1227f };
							fVar3 = 347.1534f;
							break;
						case 5:
							vVar0 = { 224.6208f, 979.3862f, 189.7148f };
							fVar3 = 72.0783f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1582.081f, 2194.556f, 322.8494f };
							fVar3 = 188.1385f;
							break;
						case 1:
							vVar0 = { 1617.941f, 2218.655f, 323.0164f };
							fVar3 = 202.7542f;
							break;
						case 2:
							vVar0 = { 1636.166f, 2197.86f, 319.0998f };
							fVar3 = 186.1312f;
							break;
						case 3:
							vVar0 = { 1594.414f, 2172.619f, 321.5459f };
							fVar3 = 255.2039f;
							break;
						case 4:
							vVar0 = { 1583.123f, 2162.305f, 318.2654f };
							fVar3 = 154.8259f;
							break;
						case 5:
							vVar0 = { 1637.013f, 2149.457f, 314.9684f };
							fVar3 = 214.2432f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 554.4691f, 1716.083f, 185.924f };
							fVar3 = 312.6009f;
							break;
						case 1:
							vVar0 = { 572.3603f, 1688.104f, 186.6339f };
							fVar3 = 310.0391f;
							break;
						case 2:
							vVar0 = { 550.4553f, 1698.799f, 184.7382f };
							fVar3 = 273.4677f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1971.484f, 1194.838f, 170.9499f };
							fVar3 = 14.1604f;
							break;
						case 1:
							vVar0 = { 1971.893f, 1214.184f, 175.0207f };
							fVar3 = 58.9199f;
							break;
						case 2:
							vVar0 = { 1996.232f, 1179.471f, 169.9125f };
							fVar3 = 265.7923f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -18.9909f, 1216.103f, 172.5429f };
							fVar3 = 199.7531f;
							break;
						case 1:
							vVar0 = { -40.5361f, 1235.171f, 171.3429f };
							fVar3 = 355.8777f;
							break;
						case 2:
							vVar0 = { -43.3037f, 1213.736f, 171.111f };
							fVar3 = 116.7676f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 303.963f, 1570.978f, 126.9599f };
							fVar3 = 318.4372f;
							break;
						case 1:
							vVar0 = { 294.4499f, 1558.783f, 125.3673f };
							fVar3 = 122.651f;
							break;
						case 2:
							vVar0 = { 333.4012f, 1567.172f, 129.9671f };
							fVar3 = 309.4404f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1727.365f, 1495.906f, 147.9468f };
							fVar3 = 292.528f;
							break;
						case 1:
							vVar0 = { 1700.307f, 1525.784f, 145.8522f };
							fVar3 = 14.0046f;
							break;
						case 2:
							vVar0 = { 1738.725f, 1518.055f, 151.2234f };
							fVar3 = 278.1904f;
							break;
					}
					break;
			}
			break;
		case -809127215:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2212.414f, 724.7089f, 126.7515f };
							fVar3 = 216.0411f;
							break;
						case 1:
							vVar0 = { -2205.892f, 711.4239f, 121.2721f };
							fVar3 = 222.4545f;
							break;
						case 2:
							vVar0 = { -2198.826f, 730.3317f, 121.7752f };
							fVar3 = 197.2918f;
							break;
						case 3:
							vVar0 = { -2190.371f, 716.6243f, 121.2721f };
							fVar3 = 193.302f;
							break;
						case 4:
							vVar0 = { -2196.507f, 693.5999f, 120.4955f };
							fVar3 = 180.2055f;
							break;
						case 5:
							vVar0 = { -2206.56f, 742.9479f, 122.3204f };
							fVar3 = 29.632f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -607.9711f, -42.1078f, 83.9972f };
							fVar3 = 281.0863f;
							break;
						case 1:
							vVar0 = { -607.9169f, -58.2932f, 83.1622f };
							fVar3 = 50.8448f;
							break;
						case 2:
							vVar0 = { -630.7858f, -53.9832f, 81.8795f };
							fVar3 = 10.797f;
							break;
						case 3:
							vVar0 = { -641.6675f, -29.3282f, 84.1562f };
							fVar3 = 82.0661f;
							break;
						case 4:
							vVar0 = { -620.4811f, -26.2202f, 84.6041f };
							fVar3 = 52.0213f;
							break;
						case 5:
							vVar0 = { -653.2048f, -66.5478f, 80.5644f };
							fVar3 = 200.4979f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1590.753f, -908.2404f, 84.7165f };
							fVar3 = 286.0064f;
							break;
						case 1:
							vVar0 = { -1573.325f, -903.2086f, 83.4278f };
							fVar3 = 294.1614f;
							break;
						case 2:
							vVar0 = { -1595.629f, -883.1f, 85.49f };
							fVar3 = 17.0228f;
							break;
						case 3:
							vVar0 = { -1567.437f, -942.5165f, 83.1093f };
							fVar3 = 256.9207f;
							break;
						case 4:
							vVar0 = { -1581.672f, -937.3138f, 82.8151f };
							fVar3 = 113.6031f;
							break;
						case 5:
							vVar0 = { -1553.918f, -917.5023f, 88.4726f };
							fVar3 = 316.1617f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2332.773f, 84.5654f, 218.5944f };
							fVar3 = 143.0953f;
							break;
						case 1:
							vVar0 = { -2326.548f, 95.2195f, 231.1443f };
							fVar3 = 188.7994f;
							break;
						case 2:
							vVar0 = { -2310.594f, 79.5418f, 228.2424f };
							fVar3 = 110.4288f;
							break;
						case 3:
							vVar0 = { -2321.665f, 63.857f, 221.4385f };
							fVar3 = 103.651f;
							break;
						case 4:
							vVar0 = { -2340.927f, 52.6407f, 215.7958f };
							fVar3 = 80.0317f;
							break;
						case 5:
							vVar0 = { -2303.04f, 65.9811f, 228.5248f };
							fVar3 = 242.1705f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1836.077f, -608.805f, 153.6917f };
							fVar3 = 300.1749f;
							break;
						case 1:
							vVar0 = { -1822.246f, -580.6246f, 154.9772f };
							fVar3 = 242.0027f;
							break;
						case 2:
							vVar0 = { -1835.114f, -590.6755f, 153.8214f };
							fVar3 = 248.1481f;
							break;
						case 3:
							vVar0 = { -1807.424f, -618.5132f, 151.6348f };
							fVar3 = 281.7111f;
							break;
						case 4:
							vVar0 = { -1822.605f, -626.1582f, 154.0592f };
							fVar3 = 184.039f;
							break;
						case 5:
							vVar0 = { -1796.826f, -594.5966f, 153.8835f };
							fVar3 = 243.1725f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1488.443f, -785.7723f, 102.0716f };
							fVar3 = 197.1793f;
							break;
						case 1:
							vVar0 = { -1495.627f, -774.0913f, 103.6215f };
							fVar3 = 348.8232f;
							break;
						case 2:
							vVar0 = { -1521.704f, -789.0545f, 103.7958f };
							fVar3 = 158.4652f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1088.406f, -574.983f, 81.4097f };
							fVar3 = 247.4455f;
							break;
						case 1:
							vVar0 = { -1109.303f, -564.1469f, 85.8275f };
							fVar3 = 36.7213f;
							break;
						case 2:
							vVar0 = { -1093.041f, -570.4258f, 83.9186f };
							fVar3 = 52.1114f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2314.908f, -470.9828f, 143.9977f };
							fVar3 = 5.0725f;
							break;
						case 1:
							vVar0 = { -2312.777f, -496.4884f, 143.0945f };
							fVar3 = 168.7724f;
							break;
						case 2:
							vVar0 = { -2297.21f, -450.67f, 147.3692f };
							fVar3 = 154.0679f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1819.164f, 651.6089f, 130.3378f };
							fVar3 = 242.6035f;
							break;
						case 1:
							vVar0 = { -1806.748f, 662.5937f, 131.4437f };
							fVar3 = 205.6212f;
							break;
						case 2:
							vVar0 = { -1827.652f, 635.7844f, 129.869f };
							fVar3 = 53.5741f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1304.592f, 373.7722f, 95.3481f };
							fVar3 = 316.2443f;
							break;
						case 1:
							vVar0 = { -1333.795f, 388.0508f, 96.2528f };
							fVar3 = 73.6293f;
							break;
						case 2:
							vVar0 = { -1293.587f, 416.8573f, 98.8259f };
							fVar3 = 241.8883f;
							break;
					}
					break;
			}
			break;
	}
	Var4 = { vVar0 };
	Var4.f_3 = fVar3;
	return Var4;
}

void func_709(int iParam0, int iParam1, vector3 vParam2, var uParam5)
{
	int iVar0;

	if (aggregate_func_404((Local_0.f_67[iParam0 /*40*/])->f_20[iParam1 /*3*/], func_736(), vParam2, vParam2.f_3, 1, 0, 1, 1, 1))
	{
		iVar0 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam0 /*40*/])->f_20[iParam1 /*3*/]));
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar0, vParam2, 3f, 0, false, 0);
		PED::SET_PED_COMBAT_ABILITY(iVar0, 2);
		ENTITY::_SET_ENTITY_HEALTH(iVar0, 100, 0);
	}
}

void func_710(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])))
	{
		return;
	}
	if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
	{
		return;
	}
	(Local_0.f_67[iParam0 /*40*/])->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(aggregate_func_5996(), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
}

void func_711(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])))
	{
		return;
	}
	if (!aggregate_func_7239(262144, iParam0))
	{
		if (func_853(262144, iParam0, 1))
		{
			Local_0.f_1 = (Local_0.f_1 - 1);
			func_715(262144, iParam0);
		}
	}
	if (aggregate_func_7239(2, iParam0) || aggregate_func_7239(262144, iParam0))
	{
		return;
	}
	if (func_853(2, iParam0, 1))
	{
		Local_0.f_2++;
		Local_0.f_1 = (Local_0.f_1 - 1);
		func_715(2, iParam0);
		aggregate_func_7375(4, iParam0);
	}
	else if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
	{
		if (!aggregate_func_7239(4, iParam0))
		{
			aggregate_func_2433(Local_913.f_80[iParam0]);
			aggregate_func_3175(&Local_913, iParam0);
		}
		func_715(4, iParam0);
	}
	if (!aggregate_func_7239(65536, iParam0))
	{
		if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0) || func_1036(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]))))
		{
			Local_0.f_3++;
			func_715(65536, iParam0);
		}
	}
	else if (!func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0) && !func_1036(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]))))
	{
		Local_0.f_3 = (Local_0.f_3 - 1);
		func_716(65536, iParam0);
	}
}

void func_712(int iParam0)
{
	if (func_1037(&Local_368, 524288, iParam0))
	{
		if (!aggregate_func_7239(524288, iParam0))
		{
			func_715(524288, iParam0);
		}
	}
	else if (aggregate_func_7239(524288, iParam0))
	{
		func_716(524288, iParam0);
	}
}

int func_713(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_8088();
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (aggregate_func_1009(iVar1, 1, 1))
		{
			if (bParam2 && aggregate_func_4240(&((Local_368[iVar1 /*17*/])->f_5[iParam1]), 131072))
			{
			}
			else if (aggregate_func_4240(&((Local_368[iVar1 /*17*/])->f_5[iParam1]), iParam0))
			{
				iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_715(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!aggregate_func_4240(&(Local_0.f_13[iParam1]), iParam0))
	{
		aggregate_func_4247(Local_0.f_13[iParam1], iParam0);
	}
}

void func_716(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (aggregate_func_4240(&(Local_0.f_13[iParam1]), iParam0))
	{
		aggregate_func_4247(Local_0.f_13[iParam1], iParam0);
	}
}

void func_717(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (aggregate_func_4240(Local_0.f_348, iParam0))
	{
		aggregate_func_4243(&(Local_0.f_348), iParam0);
	}
}

void func_718(var uParam0, int iParam1)
{
	switch ((uParam0->f_67[iParam1 /*40*/])->f_4)
	{
		case joaat("init"):
			func_1038(uParam0, iParam1);
			break;
		case joaat("combat"):
			func_1039(uParam0, iParam1);
			break;
		case -1700571062:
			func_1040(uParam0, iParam1);
			break;
		case joaat("injured"):
			func_1041(uParam0, iParam1);
			break;
		case 1324097645:
			func_1042(uParam0, iParam1);
			break;
		case 1866880973:
			func_1043(uParam0, iParam1);
			break;
		case 1417941668: /* GXTEntry: "Cover To Cover" */
			aggregate_func_9408(uParam0, iParam1);
			break;
		case joaat("low"):
			aggregate_func_9408(uParam0, iParam1);
			break;
		case joaat("high"):
			aggregate_func_9408(uParam0, iParam1);
			break;
		case joaat("flee"):
			func_1047(uParam0, iParam1);
			break;
		case joaat("hide"):
			func_1048(uParam0, iParam1);
			break;
	}
}

bool func_721(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (aggregate_func_1009(iVar0, 1, 1))
		{
			if (bParam2 && aggregate_func_4240(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), 131072))
			{
			}
			else if (!aggregate_func_4240(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), iParam0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_736()
{
	return joaat("a_m_m_unigunslinger_01");
}

bool func_760()
{
	if (aggregate_func_4281(131072) && Local_2395.f_10 >= 4)
	{
		if ((Local_2202[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/])->f_4 > Local_2395.f_1420)
		{
			if (!aggregate_func_6507() == 4)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
				aggregate_func_4556(4);
				return true;
			}
		}
	}
	return false;
}

void func_803(int iParam0)
{
	if (!aggregate_func_4240((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13, iParam0))
	{
		aggregate_func_4241(&((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13), iParam0);
	}
}

Vector3 func_804(var uParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	vVar0 = { -1737.89f, -410f, 154.24f };
	if (func_1108(&Var3, uParam0))
	{
		aggregate_func_3418(Var3, -1541287538, &vVar0, 0);
	}
	return vVar0;
}

bool func_805(vector3 vParam0)
{
	if (aggregate_func_4268(vParam0))
	{
		return false;
	}
	if (!aggregate_func_9390(vParam0, Local_2395.f_1396, Local_2395.f_1294, 500f, 1))
	{
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam0, Local_913.f_44.f_3, Local_913.f_44.f_4))
	{
		return false;
	}
	return true;
}

int func_806(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	if (func_1110(&Var1, iParam0))
	{
		aggregate_func_3012(Var1, 1973872946, &iVar0, 0);
	}
	return func_1111(iVar0);
}

int func_807(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_1110(&Var1, iParam0))
	{
		aggregate_func_3012(Var1, 799854665, &uVar0, 0);
	}
	return uVar0;
}

Vector3 func_809(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_1110(&Var3, iParam0))
	{
		aggregate_func_3418(Var3, 38344341, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_810(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_1110(&Var3, iParam0))
	{
		aggregate_func_3418(Var3, 2083652982, &vVar0, 0);
	}
	return vVar0;
}

void func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	func_1118(iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	aggregate_func_4247(iVar0, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 565, true);
	if (((Local_0.f_67[iParam0 /*40*/])->f_6 == joaat("high") || (Local_0.f_67[iParam0 /*40*/])->f_6 == joaat("low")) || (Local_0.f_67[iParam0 /*40*/])->f_6 == 1866880973)
	{
		func_861(iVar0, 1, -1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_913.f_1057);
	STATS::_0x6B1044FDC2B09101(Local_2395.f_7.f_1, NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])));
	if ((Local_0.f_67[iParam0 /*40*/])->f_39 > 0)
	{
		iVar1 = 0;
		while (iVar1 < (Local_0.f_67[iParam0 /*40*/])->f_39)
		{
			iVar2 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam0 /*40*/])->f_20[iVar1 /*3*/]));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, Local_913.f_1057);
			WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_thrown_tomahawk"), 500, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("group_rifle"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			iVar3 = func_1120();
			if (iVar3 != 0)
			{
				MISC::_0xF63FA29D4A9ACA86(iVar2, "FME_RU_ILO_HENTCH_NAME");
				func_1121(iVar2, "FME_RU_ILO_HENTCH_NAME", 1);
			}
			iVar1++;
		}
	}
}

void func_843(int iParam0)
{
	struct<7> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	func_1125(65536);
	iVar31 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	func_1126(Var0, Var0.f_1);
	if ((!Var0.f_1 == aggregate_func_8651() && !Var0.f_1 == aggregate_func_8652()) && !func_1129(Var0))
	{
		return;
	}
	if (!func_1130(Var0))
	{
		return;
	}
	if (!func_493(16384))
	{
		func_803(16384);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if ((PED::IS_PED_A_PLAYER(iVar33) && Var0.f_3) && !PED::IS_PED_A_PLAYER(iVar32))
	{
		func_803(65536);
		return;
	}
	if (!PED::IS_PED_A_PLAYER(iVar32))
	{
		return;
	}
	iVar34 = func_1131(Var0);
	if (iVar34 != -1)
	{
		if (aggregate_func_2910(Var0.f_5) && Var0.f_6 == 1657716792)
		{
			func_855(16384, iVar34);
		}
	}
	if (Var0.f_3 && !aggregate_func_3630(4, iVar34, -1))
	{
		if (!aggregate_func_1857(iVar33))
		{
			func_856(iVar34);
		}
		func_1133(&Local_913, iVar34);
		func_855(4, iVar34);
	}
}

void func_844()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (Local_2152 < 5 || !aggregate_func_4281(2))
	{
		return;
	}
	if (aggregate_func_6777(iVar0))
	{
		iVar1 = Local_2395.f_1267;
		aggregate_func_367(iVar1, func_271(), BUILTIN::TO_FLOAT(Local_0.f_1), 0, 30000);
	}
	else
	{
		aggregate_func_3452(&(Local_913.f_98));
	}
}

void func_845()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!aggregate_func_4281(2))
		{
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_621();
			aggregate_func_7374(2);
		}
		return;
	}
	else if (aggregate_func_4281(2))
	{
		aggregate_func_7577(2);
	}
	if (Local_2152 == 5)
	{
		if (aggregate_func_6777(iVar0))
		{
			if (aggregate_func_4281(64))
			{
				iVar1 = 2;
			}
			else if (!aggregate_func_4281(4096))
			{
				iVar1 = 1;
			}
			else
			{
				iVar1 = 3;
			}
			func_1134(iVar1);
			aggregate_func_7374(8);
		}
	}
}

void func_846(int iParam0)
{
	if (Local_2152 != 5 || !aggregate_func_6777(iParam0))
	{
		func_622();
		return;
	}
	if (aggregate_func_8639())
	{
		func_1136();
	}
	else
	{
		func_1137();
		func_1138();
	}
}

void func_848()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
		if (aggregate_func_7239(2, iVar0) || aggregate_func_3630(2097152, iVar0, -1))
		{
			func_392(iVar0, 4, 0);
		}
		else if (aggregate_func_7239(262144, iVar0))
		{
			func_392(iVar0, 5, 0);
		}
		else if (func_1139(iVar1))
		{
			func_392(iVar0, 3, 0);
		}
		else if (func_864(iVar1, 0))
		{
			func_392(iVar0, 1, 0);
		}
		else if (func_1036(iVar1))
		{
			func_392(iVar0, 2, 0);
		}
		else
		{
			func_392(iVar0, 0, 0);
		}
		iVar0++;
	}
}

void func_849()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (MISC::GET_FRAME_COUNT() % 7);
	iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (aggregate_func_2923(Local_913.f_12, iVar0))
	{
		if (!func_1139(iVar1))
		{
			aggregate_func_2925(&(Local_913.f_12), iVar0);
		}
	}
	else if (func_1139(iVar1))
	{
		iVar2 = func_1141(iVar0);
		if (aggregate_func_1783(iVar2, 1, 1))
		{
			aggregate_func_8609(MISC::_CREATE_VAR_STRING(10, "FME_RU_TICKER_CAPTURED_TARGET", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iVar2), aggregate_func_752(iVar2, 1, -1, 0))));
			aggregate_func_2882(&(Local_913.f_12), iVar0);
		}
	}
	if (!aggregate_func_2923(Local_913.f_13, iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && func_864(iVar1, 0))
		{
			iVar3 = func_1145(iVar0);
			if (aggregate_func_1783(iVar3, 1, 1))
			{
				aggregate_func_8609(MISC::_CREATE_VAR_STRING(10, "FME_RU_TICKER_KIL_TARGET", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iVar3), aggregate_func_752(iVar3, 1, -1, 0))));
			}
			aggregate_func_2882(&(Local_913.f_13), iVar0);
		}
	}
	if (!aggregate_func_2923(Local_913.f_14, iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
		{
			iVar4 = func_1145(iVar0);
			aggregate_func_8609(MISC::_CREATE_VAR_STRING(10, "FME_RU_TICKER_KNOCKED_OUT_TARGET", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iVar4), aggregate_func_752(iVar4, 1, -1, 0))));
			aggregate_func_2882(&(Local_913.f_14), iVar0);
		}
	}
}

bool func_850()
{
	switch (Local_2395.f_2)
	{
		case -1983139019:
		case -809127215:
		case -470215764:
		case -154861072:
		case 381726250:
		case 2103232336:
		case 2139023747:
			return false;
		case -1573288601:
			return true;
	}
	return false;
}

bool func_851()
{
	return aggregate_func_4281(8192);
}

bool func_853(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (aggregate_func_1009(iVar0, 1, 1))
		{
			if (bParam2 && aggregate_func_4240(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), 131072))
			{
			}
			else if (aggregate_func_4240(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_855(int iParam0, int iParam1)
{
	if (!aggregate_func_4240(&((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_5[iParam1]), iParam0))
	{
		aggregate_func_4247((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_5[iParam1], iParam0);
	}
}

void func_856(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	var uVar4;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	vector3 vVar11;

	iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar2 = ENTITY::_0x61914209C36EFDDB(iVar1);
	if ((((!aggregate_func_3630(2, iParam0, -1) && !aggregate_func_3630(262144, iParam0, -1)) && !aggregate_func_3630(131072, iParam0, -1)) && (Local_0.f_67[iParam0 /*40*/])->f_2 != 255) && (Local_0.f_67[iParam0 /*40*/])->f_2 == PLAYER::GET_PLAYER_INDEX())
	{
		fVar3 = func_1148(PLAYER::GET_PLAYER_INDEX(), &uVar4, iParam0);
		if (!aggregate_func_4278(&Local_2010, 1))
		{
			if (fVar3 < 12f)
			{
				func_1150(iParam0);
				func_1151();
			}
		}
		else if (fVar3 > 20f)
		{
			aggregate_func_225(&Local_2010);
		}
		if (!func_865(iParam0))
		{
		}
		if (iVar2 == 9)
		{
		}
		if (iVar2 == 7)
		{
		}
		if (iVar2 == 8)
		{
		}
		if (((func_865(iParam0) && iVar2 != 9) && iVar2 != 7) && iVar2 != 8)
		{
			iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
			iVar7 = func_1153(iParam0);
			iVar8 = func_1154(iVar0, iParam0);
			if (iVar7 != -1 && iVar8 != -1)
			{
				if (iVar7 == iVar8)
				{
					Local_0.f_6[iVar7] = &Local_0.f_6[iVar7] + 1;
					STATS::_0x262EF7CF49CF1EB9(iVar1);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0f);
					(Local_0.f_67[iParam0 /*40*/])->f_9 = (Local_913.f_16[iVar7 /*4*/])->f_3;
					func_855(2097152, iParam0);
					func_855(131072, iParam0);
				}
			}
		}
	}
	if (aggregate_func_3630(131072, iParam0, -1))
	{
		func_1150(iParam0);
		if (aggregate_func_9392(&Local_2010))
		{
			if (aggregate_func_3630(1, iParam0, -1))
			{
				func_866(1, iParam0, -1);
				Local_913.f_6 = (Local_913.f_6 - 1);
			}
			aggregate_func_225(&Local_2010);
			func_866(131072, iParam0, -1);
		}
		else if (ANIMSCENE::_0xD8254CB2C586412B(Local_2010.f_36, 0))
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), (Local_0.f_67[iParam0 /*40*/])->f_9);
			aggregate_func_2444(0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2010.f_34))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_2010.f_34, true);
			}
		}
		if (!aggregate_func_3630(2, iParam0, -1) && (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_2010.f_36, 0) || ANIMSCENE::_0xD8254CB2C586412B(Local_2010.f_36, 0)))
		{
			fVar9 = func_1157((Local_0.f_67[iParam0 /*40*/])->f_6);
			if (func_864(iVar1, 0))
			{
				fVar9 = (fVar9 / 2f);
			}
			func_1158(NETWORK::PARTICIPANT_ID_TO_INT(), fVar9);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_2395.f_1332)))
			{
				if (!func_864(iVar1, 0))
				{
					(Local_2202[Local_2395.f_1332 /*6*/])->f_3++;
				}
				else
				{
					(Local_368[Local_2395.f_1332 /*17*/])->f_14++;
				}
			}
			iVar10 = func_1159(iVar1);
			if (iVar10 != -1)
			{
				Local_0.f_6[iVar10] = &Local_0.f_6[iVar10] + 1;
			}
			if (aggregate_func_3630(1, iParam0, -1))
			{
				func_866(1, iParam0, -1);
				Local_913.f_6 = (Local_913.f_6 - 1);
			}
			iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
			if ((Local_0.f_67[iParam0 /*40*/])->f_9 != -1f)
			{
				vVar11 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
				vVar11.f_2 = (Local_0.f_67[iParam0 /*40*/])->f_9;
				ENTITY::SET_ENTITY_ROTATION(iVar0, vVar11, 2, true);
			}
			else
			{
				ENTITY::SET_ENTITY_ROTATION(iVar0, func_1160(ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 180f), 2, true);
			}
			aggregate_func_2444(0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2010.f_33))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_2010.f_33, joaat("weapon_unarmed"), true, 0, false, false);
			}
			aggregate_func_2634(iVar1);
			aggregate_func_2433(Local_913.f_80[iParam0]);
			ENTITY::SET_ENTITY_VISIBLE(iVar1, false);
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COORDS(iVar1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, 0f, -10f), true, false, true, true);
			if (func_864(iVar1, 0))
			{
				func_855(4194304, iParam0);
			}
			else
			{
				func_855(8388608, iParam0);
			}
			func_855(2, iParam0);
		}
		else if (Local_2010.f_3 == 2)
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2010.f_31))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_2010.f_31, true, false);
			}
		}
	}
}

void func_857(int iParam0)
{
	if (!aggregate_func_3630(262144, iParam0, -1))
	{
		if (func_1161(iParam0))
		{
			if (!aggregate_func_4260(Local_913.f_1058[iParam0 /*3*/]))
			{
				aggregate_func_4283(Local_913.f_1058[iParam0 /*3*/]);
			}
			else if (aggregate_func_4298(Local_913.f_1058[iParam0 /*3*/]) > 5f)
			{
				(Local_368[Local_2395.f_1332 /*17*/])->f_16++;
				func_855(262144, iParam0);
			}
		}
		else if (aggregate_func_4260(Local_913.f_1058[iParam0 /*3*/]))
		{
			aggregate_func_4313(Local_913.f_1058[iParam0 /*3*/]);
		}
		if (func_1163(iParam0))
		{
			(Local_368[Local_2395.f_1332 /*17*/])->f_16++;
			func_855(262144, iParam0);
		}
	}
}

void func_858(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if ((func_864(iVar0, 0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])))
	{
		return;
	}
	if (func_867(iParam0))
	{
		if (!aggregate_func_3630(1048576, iParam0, -1))
		{
			func_855(1048576, iParam0);
		}
	}
	else if (aggregate_func_3630(1048576, iParam0, -1))
	{
		func_866(1048576, iParam0, -1);
	}
	if (func_867(iParam0))
	{
		if (!aggregate_func_7239(524288, iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iParam0 /*40*/])))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
				func_855(524288, iParam0);
			}
		}
	}
	else if (aggregate_func_3630(524288, iParam0, -1))
	{
		func_866(524288, iParam0, -1);
	}
}

void func_859(var uParam0, int iParam1)
{
	if (!aggregate_func_4281(256))
	{
		aggregate_func_7374(256);
	}
	else
	{
		func_1133(uParam0, iParam1);
	}
}

void func_860(var uParam0, var uParam1, int iParam2)
{
	switch ((uParam1->f_50[iParam2 /*4*/])->f_2)
	{
		case joaat("init"):
			func_1164(uParam0, uParam1, iParam2);
			break;
		case joaat("combat"):
			func_1165(uParam0, uParam1, iParam2);
			break;
		case -1700571062:
			func_1166(uParam0, uParam1, iParam2);
			break;
		case joaat("injured"):
			func_1167(uParam0, uParam1, iParam2);
			break;
		case 1324097645:
			func_1168(uParam0, uParam1, iParam2);
			break;
		case 1866880973:
			func_1169(uParam0, uParam1, iParam2);
			break;
		case 1417941668: /* GXTEntry: "Cover To Cover" */
			func_1170(uParam0, uParam1, iParam2);
			break;
		case joaat("low"):
			func_1171(uParam0, uParam1, iParam2);
			break;
		case joaat("high"):
			func_1172(uParam0, uParam1, iParam2);
			break;
		case joaat("flee"):
			func_1173(uParam0, uParam1, iParam2);
			break;
		case joaat("hide"):
			func_1174(uParam0, uParam1, iParam2);
			break;
	}
	if ((uParam1->f_50[iParam2 /*4*/])->f_2 == -1)
	{
		(uParam1->f_50[iParam2 /*4*/])->f_2 = (uParam0->f_67[iParam2 /*40*/])->f_4;
	}
}

void func_861(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam2);
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PLAYER::_0x0E6846476906C9DD(iVar0, iParam0))
	{
		ENTITY::_0x1AD922AB5038DEF3(iParam0);
		PLAYER::_0x543DFE14BE720027(iVar0, iParam0, iParam1);
		PLAYER::_0xBC02B3D151D3859F(iParam0, 1);
		PLAYER::_0x62ED71E133B6C9F1(iParam0, 255, 0, 0);
		aggregate_func_7374(4096);
	}
}

bool func_862(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	if (!aggregate_func_6777(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return false;
	}
	if (aggregate_func_3630(2, iParam0, -1))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar2 = ENTITY::_0x61914209C36EFDDB(iVar0);
	if (PED::_0x3AA24CCC0D451379(iVar0) || func_864(iVar0, 1))
	{
		if ((iVar2 == 5 || iVar2 == 4) || iVar2 == 6)
		{
			iVar1 = PED::_0x09B83E68DE004CD4(iVar0);
			if (iVar1 == Global_35)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if ((iVar2 == 7 || iVar2 == 9) || iVar2 == 8)
		{
			iVar1 = PED::_0xA033D7E4BBF9844D(iVar0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::GET_MOUNT(Global_35) == iVar1)
				{
					return true;
				}
			}
			else if (((PED::_0xB676EFDA03DADA52(iVar1, 0) == 0 && (Local_0.f_67[iParam0 /*40*/])->f_2 == PLAYER::GET_PLAYER_INDEX()) || PED::_0xB676EFDA03DADA52(iVar1, 0) == Global_35) && aggregate_func_558(Global_35, iVar1, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (func_867(iParam0) && func_1176())
	{
		return true;
	}
	return false;
}

bool func_864(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_FATALLY_INJURED(iParam0))
	{
		return true;
	}
	return false;
}

bool func_865(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (func_867(iParam0) || aggregate_func_4281(16384))
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1))
		{
			if (func_1178((Local_913.f_16[1 /*4*/])->f_1))
			{
				return true;
			}
		}
	}
	else if (func_864(iVar0, 0))
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1))
		{
			if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[2 /*4*/])->f_1, 56, 0))
			{
				return true;
			}
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[0 /*4*/])->f_1))
	{
		if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[0 /*4*/])->f_1, 56, 0))
		{
			return true;
		}
	}
	return false;
}

void func_866(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (aggregate_func_4240(&((Local_368[iParam2 /*17*/])->f_5[iParam1]), iParam0))
	{
		aggregate_func_4247((Local_368[iParam2 /*17*/])->f_5[iParam1], iParam0);
	}
}

bool func_867(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
		if (aggregate_func_4144(iVar1))
		{
			return true;
		}
	}
	return false;
}

int func_868(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_0x09B83E68DE004CD4(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_869(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar2 = ENTITY::_0x61914209C36EFDDB(iVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PED::IS_PED_IN_VEHICLE(iVar0, iVar3, false))
		{
			return 1;
		}
	}
	if ((iVar2 == 7 || iVar2 == 9) || iVar2 == 8)
	{
		iVar1 = PED::_0xA033D7E4BBF9844D(iVar0);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (PED::GET_MOUNT(Global_35) == iVar1)
			{
				return 1;
			}
		}
		else if (((PED::_0xB676EFDA03DADA52(iVar1, 0) == 0 && (Local_0.f_67[iParam0 /*40*/])->f_2 == PLAYER::GET_PLAYER_INDEX()) || PED::_0xB676EFDA03DADA52(iVar1, 0) == Global_35) && aggregate_func_558(Global_35, iVar1, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_870(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam1);
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PLAYER::_0x0E6846476906C9DD(iVar0, iParam0))
	{
		ENTITY::_0x7F20092547B4DDEA(iParam0);
		PLAYER::_0x9DAE1380CC5C6451(iVar0, iParam0);
	}
}

char* func_871(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FME_RU_SHARD_UPDATE_HOGTIED";
		case 1:
			return "FME_RU_SHARD_UPDATE_KILLED";
		case 2:
			return "FME_RU_SHARD_UPDATE_RETURNED";
		case 3:
			return "FME_RU_SHARD_UPDATE_ESCAPED";
		case 4:
			return "FME_RU_SHARD_UPDATE_KNOCKED_OUT";
	}
	return "[FME_SS_GET_SCORETIMER_MESSAGE_STRING]: message type not defined";
}

char* func_872(int iParam0)
{
	var uVar0;

	uVar0 = Local_913.f_41;
	return "FME_RU_OUTLAW_NAME";
}

int func_898()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	iVar0 = (Local_2202[Local_2395.f_1332 /*6*/])->f_3;
	iVar1 = (Local_368[Local_2395.f_1332 /*17*/])->f_14;
	iVar2 = (iVar0 + iVar1);
	iVar3 = Local_0.f_360;
	iVar4 = aggregate_func_4732(&(Local_2152.f_4));
	if (iVar2 < 1)
	{
		return 0;
	}
	Var5.f_1 = 11;
	func_1194(&(Local_2395.f_1362), &Var5, 1, iVar4, iVar0, iVar2, iVar3);
	Local_2395.f_1281++;
	return 1;
}

void func_899()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iVar0 /*40*/])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, -1976316465);
		}
		iVar0++;
	}
}

bool func_1027(var uParam0)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 848477026;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

void func_1028(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = iParam2;
	*iParam1 = 0;
	while (*iParam0 >= 32)
	{
		*iParam0 = (*iParam0 - 32);
		*iParam1++;
	}
}

int func_1031(var uParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = joaat("none");
	if (func_1108(&Var1, uParam0))
	{
		aggregate_func_3012(Var1, -1626963905, &iVar0, 0);
	}
	return iVar0;
}

void func_1032(int iParam0, int iParam1)
{
	if ((Local_0.f_67[iParam1 /*40*/])->f_19 == iParam0)
	{
		return;
	}
	(Local_0.f_67[iParam1 /*40*/])->f_19 = iParam0;
}

void func_1033(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(iParam0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
	if (iParam1 == joaat("high"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_shotgun_doublebarrel"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (iParam1 == 1866880973)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_pistol_semiauto"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (iParam1 == joaat("low"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_pistol_semiauto"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
}

bool func_1036(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::_0x3AA24CCC0D451379(iParam0))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
	{
		return true;
	}
	return false;
}

bool func_1037(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && aggregate_func_4240(&(((*uParam0)[iVar1 /*17*/])->f_5[iParam2]), iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_1038(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar1 = (uParam0->f_67[iParam1 /*40*/])->f_6;
	if (iVar1 == joaat("high"))
	{
		func_1280(uParam0, iParam1, joaat("high"));
	}
	else if (iVar1 == joaat("low"))
	{
		func_1280(uParam0, iParam1, joaat("low"));
	}
	else if (iVar1 == 1866880973)
	{
		func_1280(uParam0, iParam1, 1866880973);
	}
}

void func_1039(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	float fVar6;
	int iVar7;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	fVar1 = -1f;
	iVar2 = PLAYER::GET_PLAYER_PED((uParam0->f_67[iParam1 /*40*/])->f_3);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && aggregate_func_402(iVar2, 0))
	{
		fVar1 = aggregate_func_918(iVar2, iVar0, 1, 1);
	}
	fVar6 = func_1283(iParam1, &uVar3);
	if (func_1037(&Local_368, 256, iParam1))
	{
		(uParam0->f_67[iParam1 /*40*/])->f_3 = 255;
		iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
		if (iVar7 > 30)
		{
			func_1280(uParam0, iParam1, joaat("injured"));
		}
		else
		{
			func_1284(&Local_368, 256, iParam1);
			func_1280(uParam0, iParam1, joaat("escape"));
		}
	}
	else if (((fVar1 == -1f || fVar1 > 7f) || fVar6 < 20f) || func_864(iVar2, 0))
	{
		(uParam0->f_67[iParam1 /*40*/])->f_3 = 255;
		func_1284(&Local_368, 256, iParam1);
		func_1280(uParam0, iParam1, joaat("escape"));
	}
}

void func_1040(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
}

void func_1041(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (aggregate_func_927(iVar0, joaat("SCRIPT_TASK_INTIMIDATED")))
	{
	}
	if (((fVar1 > (45f / 2.5f) || (aggregate_func_4260(&((uParam0->f_67[iParam1 /*40*/])->f_10)) && aggregate_func_4732(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 5500)) || (((!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iVar2, iVar0, 17) && !ENTITY::IS_ENTITY_ON_SCREEN(iVar0)) && aggregate_func_4260(&((uParam0->f_67[iParam1 /*40*/])->f_10))) && aggregate_func_4732(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 3500)) || PED::_0x336B3D200AB007CB(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 7f, false) > 0)
	{
		func_1284(&Local_368, 256, iParam1);
		func_1280(uParam0, iParam1, joaat("escape"));
	}
}

void func_1042(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (func_1037(&Local_368, 256, iParam1))
	{
		func_1284(&Local_368, 64, iParam1);
		func_1280(uParam0, iParam1, joaat("injured"));
	}
	else if ((((fVar1 == -1f || fVar1 > (45f / 2f)) || (aggregate_func_4260(&((uParam0->f_67[iParam1 /*40*/])->f_10)) && aggregate_func_4732(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 5500)) || (((!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iVar2, iVar0, 17) && !ENTITY::IS_ENTITY_ON_SCREEN(iVar0)) && aggregate_func_4260(&((uParam0->f_67[iParam1 /*40*/])->f_10))) && aggregate_func_4732(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 3500)) || PED::_0x336B3D200AB007CB(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 7f, false) > 0)
	{
		func_1284(&Local_368, 64, iParam1);
		func_1280(uParam0, iParam1, joaat("escape"));
	}
	else if (fVar1 < 7f)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
		if (iVar3 > 80 || (fVar1 <= (7f / 2f) && iVar3 > 60))
		{
			func_1284(&Local_368, 64, iParam1);
			func_1280(uParam0, iParam1, joaat("combat"));
		}
	}
}

void func_1043(var uParam0, int iParam1)
{
	if (func_1037(&Local_368, 1024, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("flee"));
	}
}

void func_1047(var uParam0, int iParam1)
{
	if (!func_1037(&Local_368, 2048, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("hide"));
	}
}

void func_1048(var uParam0, int iParam1)
{
	if (func_1037(&Local_368, 2048, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("flee"));
	}
}

bool func_1108(var uParam0, var uParam1)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 248801409;
		uParam0->f_3 = uParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_1110(var uParam0, int iParam1)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 507396013;
		uParam0->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

int func_1111(int iParam0)
{
	switch (iParam0)
	{
		case 1299757696:
			return 0;
		case 327014600:
			return 1;
		case -2061163026:
			return 2;
	}
	return -1;
}

void func_1118(int iParam0)
{
	int iVar0;

	iVar0 = func_1120();
	if (iVar0 != 0)
	{
		MISC::_0xF63FA29D4A9ACA86(iParam0, func_1330());
		func_1121(iParam0, func_1330(), 1);
	}
}

int func_1120()
{
	char* sVar0;
	int iVar1;

	sVar0 = func_1330();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

void func_1121(int iParam0, char* sParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (bParam2)
			{
				PED::_0xC2745D9261664901(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
			}
			else
			{
				PED::_0x19B14E04B009E28B(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), sParam1);
			}
		}
	}
}

void func_1125(int iParam0)
{
	if (aggregate_func_4240((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13, iParam0))
	{
		aggregate_func_4243(&((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13), iParam0);
	}
}

void func_1126(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_1333(iParam1, &uVar0))
	{
		return;
	}
	iVar1 = func_1131(iParam0);
	if (iVar1 < 0)
	{
		return;
	}
	(Local_0.f_67[iVar1 /*40*/])->f_1 = uVar0;
}

bool func_1129(int iParam0)
{
	int iVar0;

	iVar0 = func_1131(iParam0);
	if (iVar0 < 0)
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167((Local_0.f_67[iVar0 /*40*/])->f_1))
	{
		return false;
	}
	if (Local_0.f_67[iVar0 /*40*/])->f_1 != PLAYER::GET_PLAYER_INDEX()
	{
		return false;
	}
	return true;
}

bool func_1130(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else if (iParam0 == NETWORK::NET_TO_ENT(&(Local_0.f_67[iVar0 /*40*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1131(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else if (iParam0 == NETWORK::NET_TO_ENT(&(Local_0.f_67[iVar0 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1133(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;

	iVar0 = &Local_0.f_67[iParam1 /*40*/];
	iVar1 = (Local_0.f_67[iParam1 /*40*/])->f_6;
	fVar2 = func_1157((Local_0.f_67[iParam1 /*40*/])->f_6);
	iVar3 = NETWORK::NET_TO_PED(iVar0);
	if (!aggregate_func_3630(32768, iParam1, -1) && ((Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("combat") || PED::IS_PED_IN_COMBAT(iVar3, 0)))
	{
		if ((Local_0.f_67[iParam1 /*40*/])->f_39 > 0)
		{
			iVar4 = 0;
			while (iVar4 < (Local_0.f_67[iParam1 /*40*/])->f_39)
			{
				iVar5 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam1 /*40*/])->f_20[iVar4 /*3*/]));
				if (!PED::IS_PED_INJURED(iVar5))
				{
					iVar6 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), iVar5);
				}
				if (MAP::DOES_BLIP_EXIST(iVar6))
				{
					MAP::_0x662D364ABF16DE2F(iVar6, -2145527776);
					MAP::_0x662D364ABF16DE2F(iVar6, 287169430);
				}
				iVar4++;
			}
		}
		func_855(32768, iParam1);
	}
	if (func_1036(iVar3))
	{
		if ((Local_0.f_67[iParam1 /*40*/])->f_39 > 0)
		{
			iVar7 = 0;
			while (iVar7 < (Local_0.f_67[iParam1 /*40*/])->f_39)
			{
				iVar8 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam1 /*40*/])->f_20[iVar7 /*3*/]));
				if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iVar8, false))
				{
					PED::SET_PED_CONFIG_FLAG(iVar8, 307, false);
					PED::SET_PED_COMBAT_MOVEMENT(iVar8, 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar8, 55, true);
					PED::REMOVE_PED_DEFENSIVE_AREA(iVar8, false);
				}
				iVar7++;
			}
		}
	}
	if ((aggregate_func_7239(2, iParam1) || (iVar1 == -1 && func_864(iVar3, 0))) || aggregate_func_7239(262144, iParam1))
	{
		if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
		{
			aggregate_func_2433(uParam0->f_80[iParam1]);
		}
		aggregate_func_3175(uParam0, iParam1);
		func_1337(iParam1, 0);
		return;
	}
	if (aggregate_func_7239(1, iParam1))
	{
		if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
		{
			if (func_868(PLAYER::PLAYER_PED_ID(), iVar3) || func_869(iParam1))
			{
				aggregate_func_2433(uParam0->f_80[iParam1]);
			}
		}
		aggregate_func_3175(uParam0, iParam1);
		func_1337(iParam1, 0);
		return;
	}
	if (aggregate_func_4260(&((Local_0.f_67[iParam1 /*40*/])->f_13)))
	{
		if (aggregate_func_4732(&((Local_0.f_67[iParam1 /*40*/])->f_13)) > 4000)
		{
			MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), -750627856);
			aggregate_func_4957(&((Local_0.f_67[iParam1 /*40*/])->f_13));
		}
	}
	if (!func_864(iVar3, 0))
	{
		if ((Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("flee") || (Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("hide"))
		{
			if (((PED::_0x3AA24CCC0D451379(iVar3) && !aggregate_func_3630(2, iParam1, -1)) && !aggregate_func_7239(262144, iParam1)) && !MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
			{
				uParam0->f_80[iParam1] = MAP::_0x23F74C2FDA6E7C61(1629270574, iVar3);
				MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1784012766);
				func_1337(iParam1, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
			}
			if (Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("flee")
			{
				func_866(8192, iParam1, -1);
				aggregate_func_4957(&((Local_0.f_67[iParam1 /*40*/])->f_10));
				if (!aggregate_func_3630(4096, iParam1, -1))
				{
					aggregate_func_2433(uParam0->f_80[iParam1]);
					uParam0->f_80[iParam1] = MAP::_0x23F74C2FDA6E7C61(1629270574, iVar3);
					if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
					{
						func_1337(iParam1, 1);
						MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -750627856);
						MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1784012766);
						aggregate_func_4293(&((Local_0.f_67[iParam1 /*40*/])->f_13), 1);
						MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -1833912565);
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), 197772266);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
					}
					func_855(4096, iParam1);
				}
			}
			if (Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("hide")
			{
				func_866(4096, iParam1, -1);
				if (!aggregate_func_3630(8192, iParam1, -1))
				{
					if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
					{
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), 1784012766);
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), -750627856);
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), -1833912565);
						if (func_1037(&Local_368, 16384, iParam1))
						{
							MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -433875166);
						}
						else
						{
							MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 197772266);
							MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1411832502);
						}
					}
					aggregate_func_4293(&((Local_0.f_67[iParam1 /*40*/])->f_10), 1);
					func_855(8192, iParam1);
				}
				else
				{
					if (func_1037(&Local_368, 16384, iParam1))
					{
						return;
					}
					if (aggregate_func_4260(&((Local_0.f_67[iParam1 /*40*/])->f_10)) && aggregate_func_4732(&((Local_0.f_67[iParam1 /*40*/])->f_10)) > 5000)
					{
						aggregate_func_2433(uParam0->f_80[iParam1]);
						vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) + Vector(0f, 50f, 50f) };
						uParam0->f_80[iParam1] = MAP::_0x45F13B7E0A15C880(953018525, vVar9, 200f);
						if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
						{
							func_1337(iParam1, 1);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
						}
						aggregate_func_4957(&((Local_0.f_67[iParam1 /*40*/])->f_10));
					}
				}
			}
			func_1337(iParam1, 0);
			return;
		}
	}
	if (iVar1 != -1)
	{
		if (PED::IS_PED_DEAD_OR_DYING(iVar3, true) && !MISC::IS_BIT_SET(uParam0->f_9, iParam1))
		{
			aggregate_func_2433(Local_913.f_80[iParam1]);
			aggregate_func_3175(&Local_913, iParam1);
			MISC::SET_BIT(&(uParam0->f_9), iParam1);
		}
		if ((!MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])) || !MAP::_0xE9F676788F8D5E1E(&(uParam0->f_80[iParam1]))) && !MISC::IS_BIT_SET(uParam0->f_8, iParam1))
		{
			aggregate_func_2433(uParam0->f_80[iParam1]);
			if (iVar1 == 1866880973 && !func_864(iVar3, 0))
			{
				vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) + Vector(0f, 50f, 50f) };
				uParam0->f_80[iParam1] = MAP::_0x45F13B7E0A15C880(953018525, vVar12, 200f);
			}
			else
			{
				uParam0->f_80[iParam1] = MAP::_0x23F74C2FDA6E7C61(1629270574, iVar3);
				MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1784012766);
			}
			func_1337(iParam1, 1);
			if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
			}
			if (func_864(iVar3, 0))
			{
				fVar2 = (fVar2 / 2f);
			}
			else
			{
				MAP::ALLOW_SONAR_BLIPS(true);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_0x0C7A2289A5C4D7C9(919052783, iVar3);
				MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -750627856);
				aggregate_func_4293(&((Local_0.f_67[iParam1 /*40*/])->f_13), 1);
			}
			aggregate_func_2862(uParam0, iParam1);
		}
	}
	func_1337(iParam1, 0);
}

void func_1134(int iParam0)
{
	if (iParam0 == Local_913.f_79)
	{
		return;
	}
	if (iParam0 == 2)
	{
		Local_913.f_96 = aggregate_func_3306(MISC::_CREATE_VAR_STRING(10, func_1340(), func_872(1)), -1, 0, 0, 1);
	}
	else if (iParam0 == 1)
	{
		Local_913.f_96 = aggregate_func_3306(MISC::_CREATE_VAR_STRING(10, func_1341(), func_872(1)), -1, 0, 0, 1);
	}
	else
	{
		Local_913.f_96 = aggregate_func_3306(MISC::_CREATE_VAR_STRING(10, func_1342(), func_872(1)), -1, 0, 0, 1);
	}
	Local_913.f_79 = iParam0;
}

void func_1136()
{
	int iVar0;

	if (MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2))
	{
		MAP::_0x662D364ABF16DE2F((Local_913.f_16[iVar0 /*4*/])->f_2, 825788762);
	}
	if (!aggregate_func_4281(16))
	{
		if (!func_1343())
		{
			if (!func_851())
			{
				if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[0 /*4*/])->f_1) && !MAP::DOES_BLIP_EXIST((Local_913.f_16[0 /*4*/])->f_2))
				{
					(Local_913.f_16[0 /*4*/])->f_2 = MAP::_0xA6EF0C54A3443E70(1259054292, (Local_913.f_16[0 /*4*/])->f_1);
				}
			}
			else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1) && !MAP::DOES_BLIP_EXIST((Local_913.f_16[2 /*4*/])->f_2))
			{
				(Local_913.f_16[2 /*4*/])->f_2 = MAP::_0xA6EF0C54A3443E70(1259054292, (Local_913.f_16[2 /*4*/])->f_1);
			}
		}
		else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1) && !MAP::DOES_BLIP_EXIST((Local_913.f_16[1 /*4*/])->f_2))
		{
			(Local_913.f_16[1 /*4*/])->f_2 = MAP::_0xA6EF0C54A3443E70(1259054292, (Local_913.f_16[1 /*4*/])->f_1);
		}
		aggregate_func_7374(16);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2) && VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar0 /*4*/])->f_1)) && &Local_0.f_6[iVar0] >= 8)
			{
				aggregate_func_2433(&((Local_913.f_16[iVar0 /*4*/])->f_2));
			}
			iVar0++;
		}
	}
}

void func_1137()
{
	if (aggregate_func_4281(32))
	{
		aggregate_func_2433(&((Local_913.f_16[3 /*4*/])->f_2));
		aggregate_func_7577(32);
	}
}

void func_1138()
{
	int iVar0;

	if (aggregate_func_4281(16))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar0 /*4*/])->f_1) && MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2))
			{
				aggregate_func_2433(&((Local_913.f_16[iVar0 /*4*/])->f_2));
			}
			iVar0++;
		}
		aggregate_func_7577(16);
	}
}

bool func_1139(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (aggregate_func_4144(iVar0))
		{
			return true;
		}
	}
	iVar1 = ENTITY::_0x61914209C36EFDDB(iParam0);
	if (iVar1 != 0)
	{
	}
	if (((((iVar1 != 2 && iVar1 != 4) && iVar1 != 5) && iVar1 != 7) && iVar1 != 8) && iVar1 != 9)
	{
		return false;
	}
	if (PED::_0xD453BB601D4A606E(iParam0))
	{
		return false;
	}
	return true;
}

int func_1141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 255;
	}
	if (!func_1139(iVar0))
	{
		return 255;
	}
	iVar1 = PED::_0x79443D56C8DF45EE(iVar0);
	if (!aggregate_func_402(iVar1, 0))
	{
		return 255;
	}
	if (!aggregate_func_1556(iVar1))
	{
		if (!PED::IS_PED_A_PLAYER(iVar1))
		{
			return 255;
		}
		return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
	}
	iVar2 = PED::_0xB676EFDA03DADA52(iVar1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return 255;
	}
	if (!aggregate_func_402(iVar2, 0))
	{
		return 255;
	}
	if (!PED::IS_PED_A_PLAYER(iVar2))
	{
		return 255;
	}
	return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
}

int func_1145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 255;
	}
	if (aggregate_func_402(iVar0, 0))
	{
		return 255;
	}
	iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 255;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 255;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (!PED::IS_PED_A_PLAYER(iVar2))
	{
		return 255;
	}
	return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
}

float func_1148(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 10000f;
	iVar2 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam2 /*40*/]));
	if (!func_867(iParam2))
	{
		if (func_864(iVar3, 0))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1))
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), true);
				if (aggregate_func_1578(iVar2, (Local_913.f_16[2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				}
			}
		}
		else
		{
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[0 /*4*/])->f_1) };
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), true);
			if (aggregate_func_1578(iVar2, (Local_913.f_16[0 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
			{
				fVar0 = fVar1;
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[0 /*4*/])->f_1) };
			}
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1))
	{
		*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), true);
		if (aggregate_func_1578(iVar2, (Local_913.f_16[1 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
		}
	}
	return fVar0;
}

void func_1150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;

	if (!aggregate_func_4278(&Local_2010, 2))
	{
		iVar3 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
		iVar0 = func_1345(PLAYER::GET_PLAYER_INDEX(), &uVar5, iParam0);
		iVar1 = func_807(iVar0);
		if (iVar1 == joaat("sphere") || iVar1 == joaat("cylinder"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_366))
				{
					iVar2 = NETWORK::NET_TO_VEH(Local_0.f_366);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
				}
				else
				{
					return;
				}
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_367))
		{
			iVar4 = NETWORK::NET_TO_PED(Local_0.f_367);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
		}
		if (func_864(iVar3, 0))
		{
			aggregate_func_146(&Local_2010, PLAYER::GET_PLAYER_INDEX(), iVar3, func_1346(), iVar2, 0, iVar4, 1);
		}
		else
		{
			aggregate_func_146(&Local_2010, PLAYER::GET_PLAYER_INDEX(), iVar3, func_1346(), iVar2, 0, iVar4, 1);
		}
	}
}

void func_1151()
{
	if (aggregate_func_4278(&Local_2010, 2) && !aggregate_func_4278(&Local_2010, 1))
	{
		aggregate_func_226(&Local_2010);
	}
}

int func_1153(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!func_867(iParam0))
	{
		if (func_864(iVar0, 0))
		{
			if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[2 /*4*/])->f_1, 56, 0))
			{
				return 2;
			}
		}
		else if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[0 /*4*/])->f_1, 56, 0))
		{
			return 0;
		}
	}
	else if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[1 /*4*/])->f_1, 56, 0))
	{
		return 1;
	}
	return -1;
}

int func_1154(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam1 /*40*/]));
	if (!func_867(iParam1))
	{
		if (func_864(iVar0, 0))
		{
			if (aggregate_func_1578(iParam0, (Local_913.f_16[2 /*4*/])->f_1, 56, 0))
			{
				return 2;
			}
		}
		else if (aggregate_func_1578(iParam0, (Local_913.f_16[0 /*4*/])->f_1, 56, 0))
		{
			return 0;
		}
	}
	else if (aggregate_func_1578(iParam0, (Local_913.f_16[1 /*4*/])->f_1, 56, 0))
	{
		return 1;
	}
	return -1;
}

float func_1157(int iParam0)
{
	float fVar0;

	fVar0 = 20f;
	switch (iParam0)
	{
		case -1:
			return fVar0;
		case joaat("high"):
			return fVar0;
		case 1866880973:
			return fVar0;
		case joaat("low"):
			return fVar0;
		default:
			break;
	}
	return fVar0;
}

void func_1158(int iParam0, float fParam1)
{
	AUDIO::PLAY_SOUND(func_1354(), aggregate_func_5405(), false, 0, true, 0);
	aggregate_func_7436(fParam1);
}

int func_1159(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (aggregate_func_1578(iParam0, (Local_913.f_16[iVar0 /*4*/])->f_1, 56, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1160(vector3 vParam0, float fParam3)
{
	float fVar0;

	fVar0 = (vParam0.z + fParam3);
	if (fVar0 >= 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return vParam0.x, vParam0.y, fVar0;
}

bool func_1161(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	fVar1 = aggregate_func_2912(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), Local_2395.f_1396);
	if (fVar1 >= Local_2395.f_1294)
	{
		return true;
	}
	return false;
}

bool func_1163(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	bool bVar8;
	int iVar9;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (aggregate_func_1857(iVar0))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar0) < 0.9f)
	{
		return false;
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iVar0, 21030, 0f, 0f, 0f) };
	vVar4 = { vVar1.x, vVar1.y, (vVar1.z + 100f) };
	bVar8 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar4, 0, &fVar7);
	if (bVar8 != 1)
	{
		return false;
	}
	if (vVar1.z >= (fVar7 - 0.25f))
	{
		return false;
	}
	iVar9 = 0;
	if (ENTITY::_0x383F64263F946E45(&iVar9, iVar0, 4, PLAYER::PLAYER_PED_ID(), 0, 4))
	{
		return false;
	}
	return true;
}

void func_1164(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
	if (!PED::IS_PED_USING_ACTION_MODE(iVar0))
	{
		PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
	}
}

void func_1165(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar0 = (uParam0->f_67[iParam2 /*40*/])->f_6;
	vVar1 = { func_804(&(Local_0.f_350[iParam2])) };
	if (uParam0->f_67[iParam2 /*40*/])->f_4 != joaat("combat")
	{
		func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	}
	iVar4 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar4, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar4, 416, true);
	if (iVar0 == joaat("high") || iVar0 == joaat("low"))
	{
		PED::SET_PED_COMBAT_ABILITY(iVar4, 2);
		ENTITY::_SET_ENTITY_HEALTH(iVar4, 160, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar4, 13, true);
		PED::SET_PED_COMBAT_MOVEMENT(iVar4, 1);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar4, vVar1, 10f, 0, false, 0);
	}
	else if (iVar0 == 1866880973)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar4, 15, true);
		PED::SET_PED_COMBAT_MOVEMENT(iVar4, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar4, false);
	if (!aggregate_func_927(iVar4, -1442466670) || !aggregate_func_927(iVar4, -2117564886))
	{
		TASK::TASK_COMBAT_HATED_TARGETS(iVar4, -1082130432 /* Float: -1f */);
	}
}

void func_1166(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
}

void func_1167(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (uParam0->f_67[iParam2 /*40*/])->f_4 != joaat("injured")
	{
		func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &uVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (!aggregate_func_927(iVar0, joaat("SCRIPT_TASK_INTIMIDATED")))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		PED::_0x8B3CB08158E98481(iVar0, 1);
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		TASK::_TASK_INTIMIDATED_2(iVar0, iVar2, 1, 1, 1, 0, 0, 0, 0);
	}
}

void func_1168(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if ((uParam0->f_67[iParam2 /*40*/])->f_4 != 1324097645)
	{
		func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (!aggregate_func_927(iVar0, -1519143300))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		if (fVar1 < 7f || aggregate_func_140(iVar0, 1, 1, 1, 0, 0))
		{
			TASK::TASK_HANDS_UP(iVar0, 3000, iVar2, -1, false);
		}
		else
		{
			TASK::TASK_HANDS_UP(iVar0, 3000, 0, -1, false);
		}
	}
	if ((PED::_0x947E43F544B6AB34(iVar0, PLAYER::PLAYER_ID(), 4, 4000) || PED::_0x947E43F544B6AB34(iVar0, PLAYER::PLAYER_ID(), 26, 4000)) || PED::_0x947E43F544B6AB34(iVar0, PLAYER::PLAYER_ID(), 13, 4000))
	{
		func_855(256, iParam2);
	}
}

void func_1169(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (!aggregate_func_927(iVar0, 474215631))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			WEAPON::_0x94A3C1B804D291EC(iVar0, 1, 0, 1, 1);
			TASK::TASK_COWER(iVar0, -1, 0, 0);
		}
	}
	iVar1 = 0;
	if (func_1360(uParam0, iParam2, 5f))
	{
		iVar1 = 1;
	}
	if (aggregate_func_1417(iVar0, PLAYER::PLAYER_PED_ID(), 1, 35f, 0))
	{
		iVar1 = 1;
	}
	if (iVar1 == 1)
	{
		func_855(1024, iParam2);
		func_855(2048, iParam2);
	}
}

void func_1170(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (!aggregate_func_927(iVar0, 1910705116))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		}
	}
	if (func_1360(uParam0, iParam2, 30f))
	{
		func_855(512, iParam2);
	}
}

void func_1171(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (!aggregate_func_927(iVar0, 1910705116))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		}
	}
	if (func_1360(uParam0, iParam2, 30f))
	{
		func_855(512, iParam2);
	}
}

void func_1172(var uParam0, var uParam1, int iParam2)
{
	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	if (func_1360(uParam0, iParam2, 25f))
	{
		func_855(512, iParam2);
	}
}

void func_1173(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (!aggregate_func_927(iVar0, 518218985))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar2, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if (!PED::_0x3AA24CCC0D451379(iVar0))
	{
		if (aggregate_func_1116(iVar0, 100f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || fVar1 < 50f)
		{
			func_855(2048, iParam2);
		}
		else
		{
			func_866(2048, iParam2, -1);
		}
	}
}

void func_1174(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	if (!aggregate_func_927(iVar0, 474215631))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::TASK_COWER(iVar0, -1, 0, 0);
		}
	}
	if (aggregate_func_1116(iVar0, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		func_855(2048, iParam2);
	}
	else
	{
		func_866(2048, iParam2, -1);
	}
}

bool func_1176()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		if (aggregate_func_4144(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_1178(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
	}
	if (aggregate_func_4144(iVar0))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iParam0, false, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1194(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	float fVar0;
	var uVar1;
	var uVar2;

	fVar0 = aggregate_func_4333(((BUILTIN::TO_FLOAT(iParam3) / 1000f) / 60f), 0.5f, 30f);
	func_1392(iParam1, &uVar1, &uVar2, 0, fVar0);
	func_1393(iParam1, 0, bParam2);
	func_1394(iParam1, 0, iParam4, iParam5);
	func_1395(iParam1, 0, iParam6);
	aggregate_func_4575(iParam1, -1907392798);
	aggregate_func_6360(-1484013733, uParam0, iParam1, 0, 255, 0, 1);
}

void func_1280(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_67[iParam1 /*40*/])->f_5 = (uParam0->f_67[iParam1 /*40*/])->f_4;
	(uParam0->f_67[iParam1 /*40*/])->f_4 = iParam2;
	aggregate_func_4957(&((uParam0->f_67[iParam1 /*40*/])->f_10));
}

float func_1283(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 10000f;
	iVar2 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar3 /*4*/])->f_1))
		{
		}
		else if (!func_867(iParam0))
		{
			if (func_864(iVar2, 0))
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
				if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				}
			}
			else
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar3 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
				if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[iVar3 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar3 /*4*/])->f_1) };
				}
			}
		}
		else
		{
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
			if (aggregate_func_1578(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[1 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
			{
				fVar0 = fVar1;
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
			}
		}
		iVar3++;
	}
	return fVar0;
}

void func_1284(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && aggregate_func_4240(&(((*uParam0)[iVar1 /*17*/])->f_5[iParam2]), iParam1))
		{
			aggregate_func_4243(((*uParam0)[iVar1 /*17*/])->f_5[iParam2], iParam1);
		}
		iVar1++;
	}
}

int func_1285(vector3 vParam0, int iParam3, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = fParam4;
	iVar3 = 255;
	*iParam3 = fParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
		}
		else
		{
			iVar4 = PLAYER::GET_PLAYER_PED(iVar2);
			if (iParam6 == 0 || PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam5, iVar4) == iParam6)
			{
				fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), vParam0);
				if (fVar1 < *iParam3)
				{
					iVar3 = iVar2;
					*iParam3 = fVar1;
				}
			}
		}
		iVar0++;
	}
	if (*iParam3 == fParam4 && iVar3 == 255)
	{
		*iParam3 = -1f;
	}
	return iVar3;
}

char* func_1330()
{
	return "FME_RU_ILO_NAME";
}

bool func_1333(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!PED::IS_PED_A_PLAYER(iVar0))
	{
		if (PED::_0x2D64376CF437363E(iVar0))
		{
			iVar0 = PED::_0xB676EFDA03DADA52(iVar0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_A_PLAYER(iVar0))
			{
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	if (iVar1 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
	{
		return false;
	}
	iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
	{
		return false;
	}
	*uParam1 = iVar2;
	return true;
}

void func_1337(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!MAP::DOES_BLIP_EXIST(&(Local_913.f_80[iParam0])))
	{
		aggregate_func_6393(iParam0, 0);
		return;
	}
	iVar0 = func_1524(iParam0);
	if (&Local_913.f_88[iParam0] == iVar0 && !bParam1)
	{
		return;
	}
	iVar1 = func_1525(iVar0);
	if (iVar1 == 0)
	{
		aggregate_func_6393(iParam0, 0);
		return;
	}
	iVar2 = 0 + 1;
	while (iVar2 <= (5 - 1))
	{
		iVar3 = iVar2;
		iVar4 = func_1525(iVar3);
		if (iVar4 != 0)
		{
			MAP::_0xB059D7BD3D78C16F(&(Local_913.f_80[iParam0]), iVar4);
		}
		iVar2++;
	}
	MAP::_0x662D364ABF16DE2F(&(Local_913.f_80[iParam0]), iVar1);
	aggregate_func_6393(iParam0, iVar0);
}

char* func_1338()
{
	var uVar0;

	uVar0 = Local_913.f_41;
	return "FME_RU_OUTLAW_BLIP_NAME";
}

char* func_1340()
{
	if (Local_913.f_41 == joaat("targets"))
	{
		return "FME_RU_OBJ_RETURN";
	}
	return "FME_RU_OBJ_RETURN";
}

char* func_1341()
{
	return "FME_RU_OBJ_CAPTURE";
}

char* func_1342()
{
	return "FME_RU_OBJ_CAPTURE_WAIT";
}

bool func_1343()
{
	return aggregate_func_4281(16384);
}

int func_1345(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar0 = 10000f;
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar5 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam2 /*40*/]));
	if (!func_867(iParam2))
	{
		if (func_864(iVar5, 0))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1))
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), true);
				if (aggregate_func_1578(iVar4, (Local_913.f_16[2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
					iVar3 = iVar2;
				}
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (!VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar2 /*4*/])->f_1))
				{
				}
				else
				{
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar2 /*4*/])->f_1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), true);
					if (aggregate_func_1578(iVar4, (Local_913.f_16[iVar2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar2 /*4*/])->f_1) };
						iVar3 = iVar2;
					}
				}
				iVar2++;
			}
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1))
	{
		*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), true);
		if (aggregate_func_1578(iVar4, (Local_913.f_16[1 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
			iVar3 = iVar2;
		}
	}
	return iVar3;
}

int func_1346()
{
	switch (Local_2395.f_2)
	{
		case 2139023747:
			return 1;
		case -470215764:
			return 5;
		case 381726250:
			return 6;
		case 2103232336:
			return 4;
		case -154861072:
			return 8;
		case -1573288601:
			return 0;
		case -1983139019:
			return 6;
		case -809127215:
			return 7;
		default:
			break;
	}
	return 0;
}

char* func_1354()
{
	return "SCORE_INCREASE";
}

void func_1358(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_50[iParam1 /*4*/])->f_2 != iParam2)
	{
		(uParam0->f_50[iParam1 /*4*/])->f_2 = iParam2;
		(uParam0->f_50[iParam1 /*4*/])->f_3 = (uParam0->f_50[iParam1 /*4*/])->f_2;
	}
}

bool func_1360(var uParam0, int iParam1, float fParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	iVar2 = func_1285(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &uVar0, 1176255488 /* Float: 9999f */, iVar1, 0);
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	iVar4 = aggregate_func_1979(iVar3, 0, 1, 0);
	bVar5 = false;
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 4, 1000))
	{
		bVar5 = true;
	}
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 26, 1000))
	{
		bVar5 = true;
	}
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 13, 1000))
	{
		bVar5 = true;
	}
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 2, 1000))
	{
		bVar5 = true;
	}
	if (aggregate_func_918(iVar1, PLAYER::PLAYER_PED_ID(), 1, 1) < fParam2)
	{
		bVar5 = true;
	}
	if ((aggregate_func_140(iVar1, 1, 1, 1, 0, 0) && aggregate_func_1417(iVar1, PLAYER::PLAYER_PED_ID(), 1, 35f, 0)) && ((iVar4 != joaat("weapon_unarmed") && !WEAPON::_0x6E4E1A82081EABED(iVar4)) && WEAPON::GET_AMMO_IN_PED_WEAPON(iVar3, iVar4) > 0))
	{
		bVar5 = true;
	}
	if ((uParam0->f_67[iParam1 /*40*/])->f_39 > 0)
	{
		iVar6 = 0;
		while (iVar6 < (uParam0->f_67[iParam1 /*40*/])->f_39)
		{
			iVar7 = NETWORK::NET_TO_PED(&((uParam0->f_67[iParam1 /*40*/])->f_20[iVar6 /*3*/]));
			if (PED::IS_PED_IN_COMBAT(iVar7, PLAYER::PLAYER_PED_ID()))
			{
				bVar5 = true;
			}
			else
			{
				iVar6++;
			}
		}
	}
	if (bVar5)
	{
		return true;
	}
	return false;
}

void func_1392(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	aggregate_func_5045(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				aggregate_func_4575(iParam0, -2031147264);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -1731638604);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -1434522081);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1961919243);
					break;
				case 1:
					*uParam1 = 691643721;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -2026035292);
					break;
				case 1:
					*uParam1 = 691643721;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -1730983216);
					break;
				case 1:
					*uParam1 = 691643721;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1101765762);
					break;
				case 1:
					*uParam1 = 1618908114;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1132503084);
					break;
				case 1:
					*uParam1 = 1618908114;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1448625627);
					break;
				case 1:
					*uParam1 = 1618908114;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1747347831);
					break;
				case 1:
					*uParam1 = 1440317064;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 435612048);
					break;
				case 1:
					*uParam1 = 1440317064;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1197163612);
					break;
				case 1:
					*uParam1 = 1440317064;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -53235894);
					break;
				case 1:
					*uParam1 = -1208221388;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -1261396155);
					break;
				case 1:
					*uParam1 = -1208221388;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -484344858);
					break;
				case 1:
					*uParam1 = -1208221388;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 271832586);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -1098075459);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 2048469463);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1869681799);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -591073487);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -1760271659);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1051931144);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -1853991011);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1664678675);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 771395735);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -170418082);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1204077611);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 441149765);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, -326595136);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1328370356);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					aggregate_func_4575(iParam0, 1113247900);
					break;
				case 1:
					*uParam1 = 364561192;
					break;
			}
			break;
	}
}

void func_1393(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
		{
			switch (iParam1)
			{
				case 0:
					aggregate_func_4575(iParam0, 2008023596);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					aggregate_func_4575(iParam0, 1839456265);
					break;
			}
		}
	}
}

void func_1394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iParam2 = aggregate_func_5045(iParam2, 0, 7);
			iParam3 = aggregate_func_5045(iParam3, 0, 7);
			iVar0 = 0;
			while (iVar0 <= (iParam3 - 1))
			{
				if (iVar0 <= (iParam2 - 1))
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 1;
				}
				iVar1 = func_1577(iVar0, iVar2);
				if (iVar1 != 0)
				{
					aggregate_func_4575(iParam0, iVar1);
				}
				iVar0++;
			}
			break;
	}
}

void func_1395(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 1:
					aggregate_func_4575(iParam0, 880047714);
					break;
				case 2:
					aggregate_func_4575(iParam0, 1339993398);
					break;
				case 3:
					aggregate_func_4575(iParam0, 45912819);
					break;
				case 4:
					aggregate_func_4575(iParam0, 45912819);
					break;
				case 5:
					aggregate_func_4575(iParam0, -1951423269);
					break;
				case 6:
					aggregate_func_4575(iParam0, -1951423269);
					break;
				case 7:
					aggregate_func_4575(iParam0, 1039599975);
					break;
			}
			break;
	}
}

int func_1524(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (aggregate_func_7239(2, iParam0) || aggregate_func_7239(262144, iParam0))
	{
		return 0;
	}
	if (func_1139(iVar0))
	{
		if (func_1695(iVar0, PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_864(iVar0, 0))
	{
		return 2;
	}
	if (func_1036(iVar0))
	{
		return 3;
	}
	return 4;
}

int func_1525(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar0 = -1445216292;
			break;
		case 2:
			iVar0 = -2145527776;
			break;
		case 3:
			iVar0 = -2145527776;
			break;
		case 4:
			iVar0 = -2145527776;
			break;
	}
	return iVar0;
}

int func_1577(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1502579962;
				case 1:
					return -665914289;
				case 2:
					return 2073971721;
				case 3:
					return 1143965641;
				case 4:
					return -926614481;
				case 5:
					return -732639941;
				case 6:
					return -1711391918;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 313364772;
				case 1:
					return 1854795734;
				case 2:
					return -1515449371;
				case 3:
					return 1218626465;
				case 4:
					return -550409463;
				case 5:
					return -1091236409;
				case 6:
					return -340381424;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_1695(int iParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!aggregate_func_402(iParam1, 0))
	{
		return false;
	}
	if (!PED::_0xA911EE21EDF69DAF(iParam1))
	{
		return false;
	}
	iVar2 = aggregate_func_563(iParam1, &uVar0, 1);
	if (iVar2 != 1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uVar0[0])))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(&(uVar0[0])))
	{
		return false;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uVar0[0]));
	if (iVar3 != iParam0)
	{
		return false;
	}
	return true;
}

