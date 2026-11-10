/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040bfd0; name: FUN_0040bfd0
 */


int FUN_0040bfd0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (uint)((ulong)param_1 >> 0x10) & 0xffff;
  uVar1 = (int)-uVar6 >> 0x1f;
  uVar3 = uVar6 & uVar1 | (uint)param_1 & (uVar1 ^ 0xffffffff);
  uVar2 = uVar3 >> 8;
  uVar6 = (int)-uVar2 >> 0x1f;
  uVar4 = uVar2 & uVar6 | uVar3 & (uVar6 ^ 0xffffffff);
  uVar3 = uVar4 >> 4;
  uVar2 = (int)-uVar3 >> 0x1f;
  uVar5 = uVar3 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff);
  uVar4 = uVar5 >> 2;
  uVar3 = (int)-uVar4 >> 0x1f;
  return (uVar1 & 0x10 | (uint)((uint)param_1 != 0) | uVar6 & 8 | uVar2 & 4 | uVar3 & 2) -
         ((int)-((uVar4 & uVar3 | uVar5 & (uVar3 ^ 0xffffffff)) >> 1) >> 0x1f);
}


