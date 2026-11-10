/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005394c8; name: FUN_005394c8
 */


void FUN_005394c8(undefined8 *param_1,undefined8 *param_2,long param_3,int param_4)

{
  undefined *puVar1;
  char *local_40;
  undefined4 local_38;
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  local_28 = 0;
  if (param_4 == 2) {
                    /* try { // try from 005394fc to 00539503 has its CatchHandler @ 00539594 */
    FUN_00538548(&local_18,param_3 + 0xb0);
    local_28 = local_18;
  }
  local_18 = 0;
                    /* try { // try from 00539520 to 00539527 has its CatchHandler @ 005395a0 */
  local_30[0] = param_4;
  FUN_00536ab8(*param_1,local_30);
  FUN_0052ea88(&local_28);
  puVar1 = PTR_LAB_04374bc0;
  local_38 = 0x17c;
  local_40 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
  param_1[6] = "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
  param_1[3] = param_1;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[2] = puVar1;
  *(undefined4 *)(param_1 + 7) = 0x184;
                    /* try { // try from 00539570 to 0053957b has its CatchHandler @ 00539598 */
  FUN_002f019c(&local_40,param_1 + 1,0);
  FUN_0052ea88(&local_18);
  return;
}


