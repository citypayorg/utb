#ifndef UTB_CHAINPARAMSSEEDS_H
#define UTB_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the utb network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
https://www.vultr.com/resources/ipv4-converter/?ip_address=112.157.65.160
 */
static SeedSpec6 pnSeed6_main[] = {
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xdd,0x9c,0x85,0x6e}, 9999},
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xde,0xe7,0x3b,0x1e}, 9999}
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x70,0x9d,0x41,0xa0}, 49999}
};

static SeedSpec6 pnSeed6_test[] = {
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x91,0xef,0xeb,0x19}, 19999},
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xb2,0x3e,0xcb,0xf9}, 19999}
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x70,0x9d,0x41,0xa0}, 29999}
};
#endif // UTB_CHAINPARAMSSEEDS_H
