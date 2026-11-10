/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7c04; name: FUN_02ec7c04
 */


long FUN_02ec7c04(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar3) {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02ec7c80(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar4 <= uVar3) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  lVar2 = *param_1 + (ulong)uVar3 * 0x10;
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(*param_1 + (ulong)uVar3 * 0x10 + 8) = 0;
  return lVar2;
}


