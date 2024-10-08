/* $Id: upnpdescstrings.h,v 1.8 2012/09/27 16:00:10 nanard Exp $ */
/* miniupnp project
 * http://miniupnp.free.fr/ or http://miniupnp.tuxfamily.org/
 * (c) 2006-2013 Thomas Bernard
 * This software is subject to the coditions detailed in
 * the LICENCE file provided within the distribution */
#ifndef UPNPDESCSTRINGS_H_INCLUDED
#define UPNPDESCSTRINGS_H_INCLUDED

#include "config.h"

/* strings used in the root device xml description */
#define ROOTDEV_FRIENDLYNAME		OS_NAME " router"
#define ROOTDEV_MANUFACTURER		OS_NAME
#define ROOTDEV_MANUFACTURERURL		OS_URL
#define ROOTDEV_MODELNAME			OS_NAME " router"
#define ROOTDEV_MODELDESCRIPTION	OS_NAME " router"
#define ROOTDEV_MODELURL			OS_URL

#define WANDEV_FRIENDLYNAME			"WANDevice"
#define WANDEV_MANUFACTURER			"MiniUPnP"
#define WANDEV_MANUFACTURERURL		"https://miniupnp.tuxfamily.org/"
#define WANDEV_MODELNAME			"WAN Device"
#define WANDEV_MODELDESCRIPTION		"WAN Device"
#define WANDEV_MODELNUMBER			MINIUPNPD_DATE
#define WANDEV_MODELURL				"https://miniupnp.tuxfamily.org/"
#define WANDEV_UPC					"000000000000"
/* UPC is 12 digit (barcode) */

#define WANCDEV_FRIENDLYNAME		"WANConnectionDevice"
#define WANCDEV_MANUFACTURER		WANDEV_MANUFACTURER
#define WANCDEV_MANUFACTURERURL		WANDEV_MANUFACTURERURL
#define WANCDEV_MODELNAME			"MiniUPnPd"
#define WANCDEV_MODELDESCRIPTION	"MiniUPnP daemon"
#define WANCDEV_MODELNUMBER			MINIUPNPD_DATE
#define WANCDEV_MODELURL			"https://miniupnp.tuxfamily.org/"
#define WANCDEV_UPC					"000000000000"
/* UPC is 12 digit (barcode) */

#endif

