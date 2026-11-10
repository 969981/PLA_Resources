/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00932070; name: FUN_00932070
 */


byte FUN_00932070(long param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x70);
  bVar1 = *(byte *)(lVar6 + 0x2dc);
  bVar2 = (*(byte *)(lVar6 + 0x168) & 7) != 0;
  bVar5 = *(byte *)(lVar6 + 0x2dd);
  bVar3 = bVar5 != 0x12;
  bVar4 = bVar5 == 2;
  if (*(char *)(lVar6 + 0x389) < '\0') {
    if (bVar1 == 0x12 || bVar1 == 2 && bVar2) {
      if (!bVar3 || bVar2 && bVar4) {
        return 0x12;
      }
      goto LAB_009320f0;
    }
    bVar2 = !bVar2 || !bVar4;
  }
  else {
    if (bVar1 == 0x12 || bVar1 == 2 && bVar2) {
      bVar1 = 0;
      if (bVar3 && (!bVar2 || !bVar4)) {
        bVar1 = bVar5;
      }
      return bVar1 & 0x1f;
    }
    bVar2 = !bVar2 || !bVar4;
  }
  if (!bVar3 || !bVar2) {
    bVar5 = bVar1;
  }
LAB_009320f0:
  return bVar5 & 0x1f;
}


