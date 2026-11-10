/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053c458; name: FUN_0053c458
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053c458(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long *param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04374bf0;
  puVar2 = PTR_DAT_04374be8;
  param_1[4] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)puVar2;
  param_1[2] = 1;
  param_1[3] = param_2;
  param_1[4] = *param_3;
  *param_3 = 0;
  param_1[5] = param_4;
  param_1[6] = 0;
  plVar1 = param_1 + 7;
  param_1[6] = *param_5;
  *param_5 = 0;
                    /* try { // try from 0053c4b4 to 0053c4bb has its CatchHandler @ 0053c5a8 */
  FUN_002ef6d0(plVar1);
  param_1[0xb] = 0;
  param_1[0xb] = *param_6;
  *param_6 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  local_50 = 1000;
  local_38 = 120000;
  uStack_40 = _UNK_03889ab8;
  local_48 = _DAT_03889ab0;
                    /* try { // try from 0053c4f8 to 0053c4ff has its CatchHandler @ 0053c5a4 */
  FUN_0053ecc8(param_1 + 0xe,&local_50);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (puVar2[0x10] != '\0') {
                    /* try { // try from 0053c568 to 0053c587 has its CatchHandler @ 0053c5b8 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x45,1,"created HealthCheckClient %p",param_1);
  }
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  puVar2 = PTR_LAB_04374bf8;
  param_1[0x20] =
       (long)
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
  ;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x48;
  param_1[0x1c] = (long)puVar2;
  param_1[0x1d] = (long)param_1;
                    /* try { // try from 0053c53c to 0053c543 has its CatchHandler @ 0053c5b8 */
  FUN_002ef750(plVar1);
                    /* try { // try from 0053c544 to 0053c54b has its CatchHandler @ 0053c590 */
  FUN_0053cf58(param_1);
                    /* try { // try from 0053c54c to 0053c553 has its CatchHandler @ 0053c58c */
  FUN_002ef790(plVar1);
  return;
}


