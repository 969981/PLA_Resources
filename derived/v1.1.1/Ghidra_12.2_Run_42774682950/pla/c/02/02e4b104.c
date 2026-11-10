/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b104; name: FUN_02e4b104
 */


long FUN_02e4b104(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN_02e4b174(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar2 < uVar3) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    return *param_1 + (ulong)uVar2 * 8;
  }
  return 0;
}


