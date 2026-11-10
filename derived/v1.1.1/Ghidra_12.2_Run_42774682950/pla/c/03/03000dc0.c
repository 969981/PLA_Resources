/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03000dc0; name: FUN_03000dc0
 */


undefined8 FUN_03000dc0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = param_2 & 0xffffff;
  uVar3 = 0x80040200;
  if (uVar1 != 0xffffff) {
    iVar2 = FUN_03000e28((long *)(param_1 + 0x10),uVar1);
    if (-1 < iVar2) {
      uVar3 = 0;
      *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 0xc0 + 0x50) = param_2;
    }
  }
  return uVar3;
}


