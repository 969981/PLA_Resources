/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037b52c; name: FUN_0037b52c
 */


undefined8 FUN_0037b52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  byte local_58 [16];
  ulong local_48;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar1 = FUN_003a0b5c(param_1 + 0x30,param_3,param_2);
    if ((uVar1 & 1) != 0) {
      FUN_003a0640(param_1 + 0x28);
      return 1;
    }
    FUN_0034b2f0(local_58,"Integer out of range (",param_1 + 0x30);
                    /* try { // try from 0037b5cc to 0037b5df has its CatchHandler @ 0037b674 */
    puVar2 = (ulong *)FUN_002e4094(local_58,&DAT_039a0269,1);
    uStack_38 = puVar2[1];
    local_40 = *puVar2;
    local_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
                    /* try { // try from 0037b5fc to 0037b607 has its CatchHandler @ 0037b64c */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_40);
    if ((local_40 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_30);
    }
    if ((local_58[0] & 1) == 0) {
      return 0;
    }
  }
  else {
    FUN_0034b2f0(&local_40,"Expected integer, got: ",param_1 + 0x30);
                    /* try { // try from 0037b598 to 0037b5a3 has its CatchHandler @ 0037b688 */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_40);
    if ((local_40 & 1) == 0) {
      return 0;
    }
    local_48 = local_30;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_48);
  return 0;
}


