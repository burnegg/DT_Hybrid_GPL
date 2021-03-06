#ifndef __ATP_CBBID_H__
#define __ATP_CBBID_H__

// Auto generated module ids
enum ATP_MODULE_CATEGORY_EN
{
    ATP_MODULE_SEC=159,
    ATP_MODULE_BHALAPI=133,
    ATP_MODULE_LUACFM=253,
    ATP_MODULE_CFM=3,
    ATP_MODULE_CFMCORE=2,
    ATP_MODULE_CMSCORE=151,
    ATP_MODULE_HTTPCORE=4,
    ATP_MODULE_HTTP=5,
    ATP_MODULE_INTERFACECORE=279,
    ATP_MODULE_DEBUGAPI=342,
    ATP_MODULE_MSGCORE=1,
    ATP_MODULE_LOGUTIL=273,
    ATP_MODULE_WANCORE=278,
    ATP_MODULE_TIMER=131,
    ATP_MODULE_CADAVER=299,
    ATP_MODULE_EBTABLES=44,
    ATP_MODULE_ESMTP=333,
    ATP_MODULE_GPLUTIL=18,
    ATP_MODULE_IPROUTE2=43,
    ATP_MODULE_IPTABLES=43,
    ATP_MODULE_ICONV=19,
    ATP_MODULE_OSIP=210,
    ATP_MODULE_IUPNP=20,
    ATP_MODULE_IXML=21,
    ATP_MODULE_THREADUTIL=22,
    ATP_MODULE_OPENSSL=195,
    ATP_MODULE_ATSERVER=131,
    ATP_MODULE_ATSERVERSDK=379,
    ATP_MODULE_ATCMD=35,
    ATP_MODULE_ATCMDSDK=35,
    ATP_MODULE_DMS=220,
    ATP_MODULE_DMSAPI=224,
    ATP_MODULE_DLNAAPI=239,
    ATP_MODULE_MDBAPI=29,
    ATP_MODULE_MDBCORE=240,
    ATP_MODULE_INOTIFYBASEAPI=225,
    ATP_MODULE_SCANNER=226,
    ATP_MODULE_SCANAPI=227,
    ATP_MODULE_DMSCMS=228,
    ATP_MODULE_KDMS=229,
    ATP_MODULE_LEDSERVICECMS=184,
    ATP_MODULE_NASIOWRAPPER=304,
    ATP_MODULE_NASCENTER=300,
    ATP_MODULE_NASBACKUP=303,
    ATP_MODULE_NASSYNC=302,
    ATP_MODULE_NASCMS=305,
    ATP_MODULE_OAMCMS=233,
    ATP_MODULE_OAM=229,
    ATP_MODULE_PWRMNGCMS=244,
    ATP_MODULE_PWRCTL=337,
    ATP_MODULE_TR143CMS=147,
    ATP_MODULE_USBMNGRCMS=331,
    ATP_MODULE_USBMOUNTCMS=174,
    ATP_MODULE_USBMOUNT=173,
    ATP_MODULE_CUPSCMS=71,
    ATP_MODULE_USBSTORAGECMS=126,
    ATP_MODULE_FTPSERVERCMS=192,
    ATP_MODULE_SAMBACMS=195,
    ATP_MODULE_BFTPD=78,
    ATP_MODULE_NTFS=124,
    ATP_MODULE_CLICMS=156,
    ATP_MODULE_CWMPCMS=112,
    ATP_MODULE_CWMPCORE=63,
    ATP_MODULE_CWMPAPP=64,
    ATP_MODULE_CWMP=65,
    ATP_MODULE_IPPINGCMS=154,
    ATP_MODULE_LOG=75,
    ATP_MODULE_LOGAPI=74,
    ATP_MODULE_LOGCMS=233,
    ATP_MODULE_MICCORE=7,
    ATP_MODULE_MIC=80,
    ATP_MODULE_MICCMS=115,
    ATP_MODULE_KATPCONSOLE=345,
    ATP_MODULE_PORTMNTCMS=322,
    ATP_MODULE_SYSINFOCMS=236,
    ATP_MODULE_TELNETD=76,
    ATP_MODULE_TELNETDCMS=231,
    ATP_MODULE_TR111CMS=117,
    ATP_MODULE_TR111PART2=69,
    ATP_MODULE_TR232CMS=526,
    ATP_MODULE_IPDRAPI=528,
    ATP_MODULE_IPDR=527,
    ATP_MODULE_TR232API=526,
    ATP_MODULE_TRACEROUTECMS=188,
    ATP_MODULE_TRACERTWEB=318,
    ATP_MODULE_UPG=26,
    ATP_MODULE_UPNPAPI=67,
    ATP_MODULE_UPNP=189,
    ATP_MODULE_TR064I2=593,
    ATP_MODULE_RPCSDK=593,
    ATP_MODULE_UPNPCMS=191,
    ATP_MODULE_USERINTFWEB=336,
    ATP_MODULE_WEBCMS=119,
    ATP_MODULE_SIPROXD=211,
    ATP_MODULE_BRIDGECMS=133,
    ATP_MODULE_BRCTL=36,
    ATP_MODULE_BRIDGEPORTCMS=283,
    ATP_MODULE_DDNSCMS=26,
    ATP_MODULE_DDNSC=27,
    ATP_MODULE_DHCP6CCMS=157,
    ATP_MODULE_DHCP6C=53,
    ATP_MODULE_DHCP6SCMS=89,
    ATP_MODULE_DHCP6S=52,
    ATP_MODULE_DHCPC=47,
    ATP_MODULE_DHCPCCORE=47,
    ATP_MODULE_DHCPCCMS=168,
    ATP_MODULE_DHCPSCMS=87,
    ATP_MODULE_DHCPS=48,
    ATP_MODULE_DHCPSAPI=49,
    ATP_MODULE_DHCPSSTACK=50,
    ATP_MODULE_DNSCMS=93,
    ATP_MODULE_DNSDIAGCMS=422,
    ATP_MODULE_DNS=54,
    ATP_MODULE_DNSCORE=148,
    ATP_MODULE_ETHCMD=38,
    ATP_MODULE_ETHSWCTL=374,
    ATP_MODULE_LANETHCMS=134,
    ATP_MODULE_WANETHCMS=142,
    ATP_MODULE_ETHINTFCMS=280,
    ATP_MODULE_ETHLINKCMS=281,
    ATP_MODULE_FIREWALLCMSDT=158,
    ATP_MODULE_ABUSECMD=350,
    ATP_MODULE_FON=298,
    ATP_MODULE_FONCONTRL=298,
    ATP_MODULE_FONCMS=293,
    ATP_MODULE_HYBRID=724,
    ATP_MODULE_HYBRIDCORE=726,
    ATP_MODULE_HYBRIDCMS=725,
    ATP_MODULE_IGMPCMS=98,
    ATP_MODULE_IGMP=56,
    ATP_MODULE_IPCHECKCMS=185,
    ATP_MODULE_IPCHECK=187,
    ATP_MODULE_IPCHECKAPI=186,
    ATP_MODULE_IPINTFCMS=282,
    ATP_MODULE_IPTUNNELCMS=81,
    ATP_MODULE_LANNAMECMS=181,
    ATP_MODULE_LTECMS=283,
    ATP_MODULE_LTEMSG=853,
    ATP_MODULE_MIRROR=251,
    ATP_MODULE_MIRRORCMS=334,
    ATP_MODULE_MLDCMS=100,
    ATP_MODULE_MLD=60,
    ATP_MODULE_NDISCMS=856,
    ATP_MODULE_NEIGHDISCCMS=400,
    ATP_MODULE_OPENWIFICMS=255,
    ATP_MODULE_PPPC=61,
    ATP_MODULE_PPPINTFCMS=287,
    ATP_MODULE_PRIVACYBTNCMS=323,
    ATP_MODULE_BPMCTL=411,
    ATP_MODULE_DTQOSCMS=311,
    ATP_MODULE_FAPCTL=157,
    ATP_MODULE_FCCTL=158,
    ATP_MODULE_IQCTL=412,
    ATP_MODULE_RADVDCMS=110,
    ATP_MODULE_RADVD=62,
    ATP_MODULE_ROUTE6CMS=146,
    ATP_MODULE_ROUTECMS=129,
    ATP_MODULE_ZEBRA=164,
    ATP_MODULE_SNTPCMS=108,
    ATP_MODULE_SNTP=59,
    ATP_MODULE_VLANCTL=242,
    ATP_MODULE_VLANCMS=241,
    ATP_MODULE_WANCMS=104,
    ATP_MODULE_WANVLANCMS=254,
    ATP_MODULE_VLANTERMCMS=314,
    ATP_MODULE_WLANCMS=20,
    ATP_MODULE_WLANBCMCMS=20,
    ATP_MODULE_XDSLCMD=238,
    ATP_MODULE_XTMCMD=246,
    ATP_MODULE_DSLDIAGD=272,
    ATP_MODULE_XDSLCMS=237,
    ATP_MODULE_XTMCMS=245,
    ATP_MODULE_ATMLINKCMS=289,
    ATP_MODULE_DSLCHANNELCMS=291,
    ATP_MODULE_DSLLINECMS=290,
    ATP_MODULE_PTMLINKCMS=288,
    ATP_MODULE_DTVOICECMS=270,
    ATP_MODULE_DTVOICE=213,
    ATP_MODULE_NETPBCMS=269,
    ATP_MODULE_NETPB=212,
    ATP_MODULE_RSSCMS=268,
    ATP_MODULE_EMAILCMS=267,
    ATP_MODULE_FETCHMAIL=250,
    ATP_MODULE_CMS=152,
    ATP_MODULE_ASPMAIN=170,
    ATP_MODULE_ASPCORE=170,
    ATP_MODULE_LUAWEB=292,
    ATP_MODULE_WEB=73,
    ATP_MODULE_WEBSDK=72,
    ATP_MODULE_WEBREDIRECTPROC=167,
    ATP_MODULE_CLI=162,
};

#endif

