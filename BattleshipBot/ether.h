///* Taken from the Linux networking header files, with slight modifications */

#ifndef __ETHER_H
#define __ETHER_H

//#include "pcap.h"
/*
 *      IEEE 802.3 Ethernet magic constants.  The frame sizes omit the preamble
 *      and FCS/CRC (frame check sequence).
 */

#define ETH_ALEN        6               /* Octets in one ethernet addr   */
#define ETH_HLEN        14              /* Total octets in header.       */
#define ETH_ZLEN        60              /* Min. octets in frame sans FCS */
#define ETH_DATA_LEN    1500            /* Max. octets in payload        */
#define ETH_FRAME_LEN   1514            /* Max. octets in frame sans FCS */
#define ETH_FCS_LEN     4               /* Octets in the FCS             */

/*
 *      These are the defined Ethernet Protocol ID's.
 */
#define ETH_P_LOOP      0x0060          /* Ethernet Loopback packet     */
#define ETH_P_PUP       0x0200          /* Xerox PUP packet             */
#define ETH_P_PUPAT     0x0201          /* Xerox PUP Addr Trans packet  */
#define ETH_P_IP        0x0800          /* Internet Protocol packet     */
#define ETH_P_X25       0x0805          /* CCITT X.25                   */
#define ETH_P_ARP       0x0806          /* Address Resolution packet    */
#define ETH_P_BPQ       0x08FF          /* G8BPQ AX.25 Ethernet Packet  [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_IEEEPUP   0x0a00          /* Xerox IEEE802.3 PUP packet */
#define ETH_P_IEEEPUPAT 0x0a01          /* Xerox IEEE802.3 PUP Addr Trans packet */
#define ETH_P_DEC       0x6000          /* DEC Assigned proto           */
#define ETH_P_DNA_DL    0x6001          /* DEC DNA Dump/Load            */
#define ETH_P_DNA_RC    0x6002          /* DEC DNA Remote Console       */
#define ETH_P_DNA_RT    0x6003          /* DEC DNA Routing              */
#define ETH_P_LAT       0x6004          /* DEC LAT                      */
#define ETH_P_DIAG      0x6005          /* DEC Diagnostics              */
#define ETH_P_CUST      0x6006          /* DEC Customer use             */
#define ETH_P_SCA       0x6007          /* DEC Systems Comms Arch       */
#define ETH_P_TEB       0x6558          /* Trans Ether Bridging         */
#define ETH_P_RARP      0x8035          /* Reverse Addr Res packet      */
#define ETH_P_ATALK     0x809B          /* Appletalk DDP                */
#define ETH_P_AARP      0x80F3          /* Appletalk AARP               */
#define ETH_P_8021Q     0x8100          /* 802.1Q VLAN Extended Header  */
#define ETH_P_IPX       0x8137          /* IPX over DIX                 */
#define ETH_P_IPV6      0x86DD          /* IPv6 over bluebook           */
#define ETH_P_PAUSE     0x8808          /* IEEE Pause frames. See 802.3 31B */
#define ETH_P_SLOW      0x8809          /* Slow Protocol. See 802.3ad 43B */
#define ETH_P_WCCP      0x883E          /* Web-cache coordination protocol
                                         * defined in draft-wilson-wrec-wccp-v2-00.txt */
#define ETH_P_PPP_DISC  0x8863          /* PPPoE discovery messages     */
#define ETH_P_PPP_SES   0x8864          /* PPPoE session messages       */
#define ETH_P_MPLS_UC   0x8847          /* MPLS Unicast traffic         */
#define ETH_P_MPLS_MC   0x8848          /* MPLS Multicast traffic       */
#define ETH_P_ATMMPOA   0x884c          /* MultiProtocol Over ATM       */
#define ETH_P_LINK_CTL  0x886c          /* HPNA, wlan link local tunnel */
#define ETH_P_ATMFATE   0x8884          /* Frame-based ATM Transport
                                         * over Ethernet
                                         */
#define ETH_P_PAE       0x888E          /* Port Access Entity (IEEE 802.1X) */
#define ETH_P_AOE       0x88A2          /* ATA over Ethernet            */
#define ETH_P_TIPC      0x88CA          /* TIPC                         */
#define ETH_P_1588      0x88F7          /* IEEE 1588 Timesync */
#define ETH_P_FCOE      0x8906          /* Fibre Channel over Ethernet  */
#define ETH_P_FIP       0x8914          /* FCoE Initialization Protocol */
#define ETH_P_EDSA      0xDADA          /* Ethertype DSA [ NOT AN OFFICIALLY REGISTERED ID ] */

/*
 *      Non DIX types. Won't clash for 1500 types.
 */

#define ETH_P_802_3     0x0001          /* Dummy type for 802.3 frames  */
#define ETH_P_AX25      0x0002          /* Dummy protocol id for AX.25  */
#define ETH_P_ALL       0x0003          /* Every packet (be careful!!!) */
#define ETH_P_802_2     0x0004          /* 802.2 frames                 */
#define ETH_P_SNAP      0x0005          /* Internal only                */
#define ETH_P_DDCMP     0x0006          /* DEC DDCMP: Internal only     */
#define ETH_P_WAN_PPP   0x0007          /* Dummy type for WAN PPP frames*/
#define ETH_P_PPP_MP    0x0008          /* Dummy type for PPP MP frames */
#define ETH_P_LOCALTALK 0x0009          /* Localtalk pseudo type        */
#define ETH_P_CAN       0x000C          /* Controller Area Network      */
#define ETH_P_PPPTALK   0x0010          /* Dummy type for Atalk over PPP*/
#define ETH_P_TR_802_2  0x0011          /* 802.2 frames                 */
#define ETH_P_MOBITEX   0x0015          /* Mobitex (kaz@cafe.net)       */
#define ETH_P_CONTROL   0x0016          /* Card specific control frames */
#define ETH_P_IRDA      0x0017          /* Linux-IrDA                   */
#define ETH_P_ECONET    0x0018          /* Acorn Econet                 */
#define ETH_P_HDLC      0x0019          /* HDLC frames                  */
#define ETH_P_ARCNET    0x001A          /* 1A for ArcNet :-)            */
#define ETH_P_DSA       0x001B          /* Distributed Switch Arch.     */
#define ETH_P_TRAILER   0x001C          /* Trailer switch tagging       */
#define ETH_P_PHONET    0x00F5          /* Nokia Phonet frames          */
#define ETH_P_IEEE802154 0x00F6         /* IEEE802.15.4 frame           */
#define ETH_P_CAIF      0x00F7          /* ST-Ericsson CAIF protocol    */

/*
 *      This is an Ethernet frame header.
 */

#pragma pack(1)
struct ethhdr {
        u_char   h_dest[ETH_ALEN];       /* destination eth addr */
        u_char   h_source[ETH_ALEN];     /* source ether addr    */
        u_short  h_proto;                /* packet type ID field */
};

/* This is a name for the 48 bit ethernet address available on many
   systems.  */
#pragma pack(1)
struct ether_addr
{
  u_char ether_addr_octet[ETH_ALEN];
};

/* 10Mb/s ethernet header */
#pragma pack(1)
struct ether_header
{
  u_char  ether_dhost[ETH_ALEN];      /* destination eth addr */
  u_char  ether_shost[ETH_ALEN];      /* source ether addr    */
  u_short ether_type;                 /* packet type ID field */
};

/* Ethernet protocol ID's */
#define ETHERTYPE_PUP           0x0200          /* Xerox PUP */
#define ETHERTYPE_SPRITE        0x0500          /* Sprite */
#define ETHERTYPE_IP            0x0800          /* IP */
#define ETHERTYPE_ARP           0x0806          /* Address resolution */
#define ETHERTYPE_REVARP        0x8035          /* Reverse ARP */
#define ETHERTYPE_AT            0x809B          /* AppleTalk protocol */
#define ETHERTYPE_AARP          0x80F3          /* AppleTalk ARP */
#define ETHERTYPE_VLAN          0x8100          /* IEEE 802.1Q VLAN tagging */
#define ETHERTYPE_IPX           0x8137          /* IPX */
#define ETHERTYPE_IPV6          0x86dd          /* IP protocol version 6 */
#define ETHERTYPE_LOOPBACK      0x9000          /* used to test interfaces */


#define ETHER_ADDR_LEN  ETH_ALEN                 /* size of ethernet addr */
#define ETHER_TYPE_LEN  2                        /* bytes in type field */
#define ETHER_CRC_LEN   4                        /* bytes in CRC field */
#define ETHER_HDR_LEN   ETH_HLEN                 /* total octets in header */
#define ETHER_MIN_LEN   (ETH_ZLEN + ETHER_CRC_LEN) /* min packet length */
#define ETHER_MAX_LEN   (ETH_FRAME_LEN + ETHER_CRC_LEN) /* max packet length */

/* make sure ethenet length is valid */
#define ETHER_IS_VALID_LEN(foo) \
        ((foo) >= ETHER_MIN_LEN && (foo) <= ETHER_MAX_LEN)

/*
 * The ETHERTYPE_NTRAILER packet types starting at ETHERTYPE_TRAIL have
 * (type-ETHERTYPE_TRAIL)*512 bytes of data followed
 * by an ETHER type (as given above) and then the (variable-length) header.
 */
#define ETHERTYPE_TRAIL         0x1000          /* Trailer packet */
#define ETHERTYPE_NTRAILER      16

#define ETHERMTU        ETH_DATA_LEN
#define ETHERMIN        (ETHER_MIN_LEN - ETHER_HDR_LEN - ETHER_CRC_LEN)

#endif