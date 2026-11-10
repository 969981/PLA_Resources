/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e2f18; name: FUN_002e2f18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002e2f18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  byte local_98 [16];
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  local_50 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uStack_58 = _UNK_03889b78;
  local_60 = _DAT_03889b70;
  *(ulong *)(local_50 + 0xf) =
       CONCAT71(s_grpc_primary_user_agent_03970d49._16_7_,s_grpc_primary_user_agent_03970d49[0xf]);
  uVar2 = s_grpc_primary_user_agent_03970d49._0_8_;
  uVar1 = CONCAT17(s_grpc_primary_user_agent_03970d49[0xf],s_grpc_primary_user_agent_03970d49._8_7_)
  ;
  local_50[0x17] = '\0';
  *(undefined8 *)(local_50 + 8) = uVar1;
  *(undefined8 *)local_50 = uVar2;
                    /* try { // try from 002e2f7c to 002e2f83 has its CatchHandler @ 002e30a4 */
  FUN_002efa30(local_98);
                    /* try { // try from 002e2f84 to 002e2f9b has its CatchHandler @ 002e307c */
  puVar3 = (ulong *)FUN_002e3e88(local_98,0,"grpc-c++/",9);
  uStack_78 = puVar3[1];
  local_80 = *puVar3;
  local_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 002e2fb4 to 002e2fc3 has its CatchHandler @ 002e3038 */
  FUN_002e3154(param_1,&local_60,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if ((local_98[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  return;
}


