/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00931fe0; name: FUN_00931fe0
 */


byte FUN_00931fe0(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x70);
  bVar3 = (*(ulong *)(lVar7 + 0x168) & 7) == 0;
  bVar6 = *(byte *)(lVar7 + 0x2dc);
  bVar4 = bVar6 != 2;
  bVar1 = *(byte *)(lVar7 + 0x2dd);
  if (*(char *)(lVar7 + 0x389) < '\0') {
    bVar5 = bVar6 == 0x12;
    if (!bVar4 && !bVar3 || bVar5) {
      bVar6 = 0x12;
    }
    bVar2 = bVar1;
    if ((bVar4 || bVar3) && !bVar5 || (bVar1 == 0x12 || !bVar3 && bVar1 == 2)) goto LAB_00932044;
  }
  else {
    if (bVar6 != 0x12 && (bVar4 || bVar3)) goto LAB_00932044;
    bVar2 = 0;
    if (bVar1 != 0x12 && (bVar3 || bVar1 != 2)) {
      bVar2 = bVar1;
    }
  }
  bVar6 = bVar2;
LAB_00932044:
  return bVar6 & 0x1f;
}


