/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00378994; name: FUN_00378994
 */


undefined8 FUN_00378994(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  byte local_38 [16];
  undefined8 local_28;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 2) {
    if ((*(char *)(param_1 + 0xe8) == '\0') && (*(char *)(param_1 + 0xe5) == '\0')) {
      if ((iVar3 != 3) || (*(char *)(param_1 + 0xe6) == '\0')) goto LAB_00378a28;
    }
    else if (iVar3 != 3) {
LAB_00378a28:
      FUN_0034b2f0(local_38,"Expected identifier, got: ",param_1 + 0x30);
                    /* try { // try from 00378a40 to 00378a4b has its CatchHandler @ 00378a78 */
      FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_38)
      ;
      if ((local_38[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_28);
      }
      return 0;
    }
  }
  if (param_1 + 0x30 != param_2) {
    uVar1 = *(ulong *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      lVar2 = param_1 + 0x31;
      uVar1 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    }
    FUN_00291910(param_2,lVar2,uVar1);
  }
  FUN_003a0640(param_1 + 0x28);
  return 1;
}


