/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050e000; name: FUN_0050e000
 */


void FUN_0050e000(long *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = (long)(PTR_DAT_04374a28 + 0x10);
  if (PTR_DAT_04374a30[0x10] != '\0') {
                    /* try { // try from 0050e078 to 0050e097 has its CatchHandler @ 0050e0a4 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x1eb,1,"[xds_client %p] Destroying xds channel %p",param_1[3],param_1);
  }
                    /* try { // try from 0050e030 to 0050e033 has its CatchHandler @ 0050e0a4 */
  FUN_003e3c20(param_1[4]);
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0050e048 to 0050e04b has its CatchHandler @ 0050e0a0 */
    (**(code **)*puVar1)();
  }
  puVar1 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0050e060 to 0050e063 has its CatchHandler @ 0050e09c */
    (**(code **)*puVar1)();
  }
  FUN_0050df34(param_1 + 3);
  return;
}


