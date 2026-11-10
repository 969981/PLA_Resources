/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c070; name: FUN_0040c070
 */


int FUN_0040c070(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((int)param_1[1] == 0) {
    return 0;
  }
  iVar8 = (int)param_1[1] + -1;
  uVar3 = *(uint *)(*param_1 + (long)iVar8 * 4);
  uVar1 = (int)-(uVar3 >> 0x10) >> 0x1f;
  uVar5 = uVar3 >> 0x10 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff);
  uVar4 = uVar5 >> 8;
  uVar2 = (int)-uVar4 >> 0x1f;
  uVar6 = uVar4 & uVar2 | uVar5 & (uVar2 ^ 0xffffffff);
  uVar5 = uVar6 >> 4;
  uVar4 = (int)-uVar5 >> 0x1f;
  uVar7 = uVar5 & uVar4 | uVar6 & (uVar4 ^ 0xffffffff);
  uVar6 = uVar7 >> 2;
  uVar5 = (int)-uVar6 >> 0x1f;
  return (uVar1 & 0x10 | (uint)(uVar3 != 0) | uVar2 & 8 | uVar4 & 4 | uVar5 & 2 | iVar8 * 0x20) -
         ((int)-((uVar6 & uVar5 | uVar7 & (uVar5 ^ 0xffffffff)) >> 1) >> 0x1f);
}


