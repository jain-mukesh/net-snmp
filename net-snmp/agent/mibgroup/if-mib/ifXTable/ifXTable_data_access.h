/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.16 $ of : mfd-data-access.m2c,v $
 *
 * $Id$
 */
#ifndef IFXTABLE_DATA_ACCESS_H
#define IFXTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ifXTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * IF-MIB::ifXTable is subid 1 of ifMIBObjects.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.31.1.1, length: 9
     */


    int             ifXTable_init_data(ifXTable_registration *
                                       ifXTable_reg);


    int             ifXTable_row_prep(ifXTable_rowreq_ctx * rowreq_ctx);



#ifdef __cplusplus
}
#endif
#endif                          /* IFXTABLE_DATA_ACCESS_H */
