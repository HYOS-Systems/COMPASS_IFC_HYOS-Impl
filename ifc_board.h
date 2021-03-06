/*
 * ifc_board.h
 *
 *  Created on: Jun 15, 2021
 *      Author: Bayram
 */

#include "ifc_types.h"
#include "ifc_DataHandling.h"

void IFC_BOARD_init(IFC_PeripheralStruct *ifc_PeripheralStruct);
void IFC_BOARD_tick(void);
void IFC_BOARD_logStatus(void);
void IFC_BOARD_canHandle(void *pt);
