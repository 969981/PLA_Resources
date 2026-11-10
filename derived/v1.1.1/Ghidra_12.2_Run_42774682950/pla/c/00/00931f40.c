/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00931f40; name: FUN_00931f40
 */


uint FUN_00931f40(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(param_1 + 0x70);
  bVar3 = (*(byte *)(lVar6 + 0x168) & 7) != 0;
  bVar1 = *(byte *)(lVar6 + 0x2dc);
  bVar2 = *(byte *)(lVar6 + 0x2dd);
  uVar8 = (uint)bVar2;
  bVar4 = bVar2 != 0x12;
  bVar5 = bVar2 != 2;
  if (*(char *)(lVar6 + 0x389) < '\0') {
    if (bVar1 != 0x12 && (bVar1 != 2 || !bVar3)) goto joined_r0x00931fd4;
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_00931f9c;
    uVar7 = 0x12;
  }
  else {
    if (bVar1 == 0x12 || bVar1 == 2 && bVar3) {
      uVar7 = 0;
      if (bVar4 && (!bVar3 || bVar5)) {
        uVar7 = uVar8;
      }
      uVar8 = uVar7;
LAB_00931f9c:
      uVar7 = uVar8;
      goto LAB_00931fa0;
    }
joined_r0x00931fd4:
    uVar7 = (uint)bVar1;
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_00931fa0;
  }
  uVar8 = uVar7;
  uVar7 = uVar8;
LAB_00931fa0:
  return uVar7 & 0x1f | (uVar8 & 0x1f) << 5 | (*(byte *)(lVar6 + 0x2de) & 0x1f) << 10;
}


