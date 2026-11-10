/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bce454; name: FUN_02bce454
 */


undefined8 FUN_02bce454(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  char cVar13;
  long lVar14;
  
  if (param_2 == 0) {
    cVar13 = -1;
  }
  else {
    uVar8 = param_2 | param_2 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = uVar8 | uVar8 >> 0x20;
    uVar8 = (uVar8 >> 1 & 0x5555555555555555) + (uVar8 & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar8 = (uVar8 >> 4 & 0x707070707070707) + (uVar8 & 0x707070707070707);
    uVar8 = (uVar8 >> 8 & 0xf000f000f000f) + (uVar8 & 0xf000f000f000f);
    lVar14 = (uVar8 >> 0x10 & 0x1f0000001f) + (uVar8 & 0x1f0000001f);
    cVar13 = (char)((ulong)lVar14 >> 0x20) + (char)lVar14 + -1;
  }
  uVar5 = (uint)cVar13;
  uVar8 = (uint)~(-1 << (ulong)(uVar5 & 0x1f)) & param_2;
  uVar3 = (uint)(uVar8 << ((ulong)(5 - uVar5) & 0x3f));
  if (4 < (int)uVar5) {
    uVar3 = (uint)(uVar8 >> ((ulong)(uVar5 - 5) & 0x3f));
  }
  bVar4 = (byte)uVar3;
  cVar2 = cVar13;
  if (0x1f < (uVar3 & 0xff)) {
    cVar2 = cVar13 + ((char)bVar4 >> 5);
    bVar4 = bVar4 & 0x1f;
  }
  uVar5 = (int)cVar2 - 3;
  uVar8 = -(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5;
  if ((uint)((long)cVar2 + -3) < 5) {
    lVar14 = uVar8 - *(long *)(&DAT_03a84138 + ((long)cVar2 + -3) * 8);
LAB_02bce55c:
    lVar9 = (long)((int)(char)bVar4 >> (8U - (int)cVar2 & 0x1f));
  }
  else {
    lVar14 = uVar8 - 0x81;
    if ((int)uVar5 < 5) goto LAB_02bce55c;
    lVar9 = (long)(char)bVar4;
  }
  uVar8 = lVar9 + lVar14;
  if ((ulong)param_1[4] <= uVar8) {
    return 0;
  }
  lVar14 = *param_1;
  plVar1 = (long *)(lVar14 + uVar8 * 0x20);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  plVar10 = *(long **)(lVar14 + uVar8 * 0x20 + 0x18);
  if (plVar10 == plVar1 || plVar10 == (long *)0x0) {
    return 0;
  }
  if (param_2 <= *plVar10 - (ulong)*(byte *)((long)plVar10 + 0xd)) goto LAB_02bce658;
  bVar4 = (byte)(uVar3 + 1);
  bVar7 = bVar4;
  if (0x1f < (uVar3 + 1 & 0xff)) {
    bVar7 = bVar4 & 0x1f;
    cVar13 = cVar13 + ((char)bVar4 >> 5);
  }
  uVar3 = (int)cVar13 - 3;
  uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5;
  if ((uint)((long)cVar13 + -3) < 5) {
    lVar9 = uVar8 - *(long *)(&DAT_03a84138 + ((long)cVar13 + -3) * 8);
LAB_02bce614:
    lVar11 = (long)((int)(char)bVar7 >> (8U - (int)cVar13 & 0x1f));
  }
  else {
    lVar9 = uVar8 - 0x81;
    if ((int)uVar3 < 5) goto LAB_02bce614;
    lVar11 = (long)(char)bVar7;
  }
  uVar8 = lVar11 + lVar9;
  if ((uVar8 < (ulong)param_1[4]) &&
     (plVar1 = (long *)(lVar14 + uVar8 * 0x20), plVar1 != (long *)0x0)) {
    plVar12 = *(long **)(lVar14 + uVar8 * 0x20 + 0x18);
    plVar10 = (long *)0x0;
    if (plVar12 != plVar1) {
      plVar10 = plVar12;
    }
    if (plVar10 != (long *)0x0) {
LAB_02bce658:
      lVar14 = param_3;
      if ((param_4 & 1) == 0) {
        lVar14 = 0;
      }
      uVar6 = FUN_02bce678(param_1,plVar10,param_2 - lVar14,param_3);
      return uVar6;
    }
  }
  return 0;
}


