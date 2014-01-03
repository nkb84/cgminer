/*
 * Copyright 2014 Con Kolivas
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.  See COPYING for more details.
 */

#ifndef MCP2210_H
#define MCP2210_H

#define MCP2210_BUFFER_LENGTH		64

#define MCP2210_GPIO_OUTPUT		0
#define MCP2210_GPIO_INPUT		1

#define MCP2210_GET_GPIO_SETTING	0x20
#define MCP2210_SET_GPIO_SETTING	0x21
#define MCP2210_SET_GPIO_PIN_VAL	0x30
#define MCP2210_GET_GPIO_PIN_VAL	0x31
#define MCP2210_SET_GPIO_PIN_DIR	0x32
#define MCP2210_GET_GPIO_PIN_DIR	0x33
#define MCP2210_SET_SPI_SETTING		0X40
#define MCP2210_GET_SPI_SETTING		0X41
#define MCP2210_SPI_TRANSFER		0x42

#define MCP2210_SPI_TRANSFER_SUCCESS	0x00
#define MCP2210_SPI_TRANSFER_ERROR_NA	0xF7	// SPI not available due to external owner
#define MCP2210_SPI_TRANSFER_ERROR_IP	0xF8	// SPI not available due to transfer in progress

bool mcp2210_send_recv(struct cgpu_info *cgpu, char *buf, enum usb_cmds send_cmd,
		       enum usb_cmds recv_cmd);
#endif /* MCP2210_H */
