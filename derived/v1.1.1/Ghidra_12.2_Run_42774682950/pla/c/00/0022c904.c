/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022c904; name: FUN_0022c904
 */


long FUN_0022c904(long param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 < 0) || (*(int *)(param_1 + 0x20) <= param_3)) {
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + (long)param_3 * 0x10 + 8);
  uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = uVar1;
  }
  if (param_2 != (uint *)0x0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)param_3 * 0x10 + 0xc);
    uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar1 = uVar2;
    }
    if (uVar1 < uVar3) {
      return 0;
    }
    *param_2 = uVar3;
    param_2[1] = uVar1 - uVar3;
  }
  return *(long *)(param_1 + 0x28) + (ulong)uVar3;
}


