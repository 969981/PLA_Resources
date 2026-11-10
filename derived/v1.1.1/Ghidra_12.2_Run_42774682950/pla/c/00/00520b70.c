/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00520b70; name: FUN_00520b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520b70(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_04374ae8 + 0x10);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uStack_30 = _UNK_03889ab8;
  local_38 = _DAT_03889ab0;
  param_1[4] = *param_2;
  *param_2 = 0;
  local_40 = 1000;
  local_28 = 120000;
                    /* try { // try from 00520bd8 to 00520bdf has its CatchHandler @ 00520c30 */
  FUN_0053ecc8(param_1 + 5,&local_40);
  puVar1 = PTR_LAB_04374af0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x14] = (long)param_1;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  param_1[0x13] = (long)puVar1;
  param_1[0x17] =
       (long)"external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x24c;
                    /* try { // try from 00520c14 to 00520c1b has its CatchHandler @ 00520c2c */
  FUN_00520d44(param_1);
  return;
}


