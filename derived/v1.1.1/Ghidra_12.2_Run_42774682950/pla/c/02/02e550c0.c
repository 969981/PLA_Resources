/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e550c0; name: FUN_02e550c0
 */


long FUN_02e550c0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar1) {
    uVar3 = FUN_02e55124(param_1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar1 < uVar2) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    return *param_1 + (ulong)uVar1 * 0x10;
  }
  return 0;
}


