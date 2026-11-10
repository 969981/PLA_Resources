/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029517f0; name: FUN_029517f0
 */


uint FUN_029517f0(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  bVar3 = (*(byte *)(param_1 + 0x168) & 7) != 0;
  bVar1 = *(byte *)(param_1 + 0x2dc);
  bVar2 = *(byte *)(param_1 + 0x2dd);
  uVar7 = (uint)bVar2;
  bVar4 = bVar2 != 0x12;
  bVar5 = bVar2 != 2;
  if (*(char *)(param_1 + 0x389) < '\0') {
    if (bVar1 != 0x12 && (bVar1 != 2 || !bVar3)) goto joined_r0x02951888;
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_0295185c;
    uVar6 = 0x12;
  }
  else {
    if (bVar1 == 0x12 || bVar1 == 2 && bVar3) {
      uVar6 = 0;
      if (bVar4 && (!bVar3 || bVar5)) {
        uVar6 = uVar7;
      }
      uVar7 = uVar6;
LAB_0295185c:
      uVar6 = uVar7;
      goto LAB_0295186c;
    }
joined_r0x02951888:
    uVar6 = (uint)bVar1;
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_0295186c;
  }
  uVar7 = uVar6;
  uVar6 = uVar7;
LAB_0295186c:
  return uVar6 & 0x1f | (uVar7 & 0x1f) << 5 | (*(byte *)(param_1 + 0x2de) & 0x1f) << 10;
}


