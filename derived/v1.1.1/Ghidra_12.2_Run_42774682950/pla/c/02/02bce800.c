/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bce800; name: FUN_02bce800
 */


long FUN_02bce800(long *param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  char cVar11;
  
  if (param_2 == 0) {
    cVar3 = -1;
  }
  else {
    uVar4 = param_2 | param_2 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    uVar4 = (uVar4 >> 1 & 0x5555555555555555) + (uVar4 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = (uVar4 >> 4 & 0x707070707070707) + (uVar4 & 0x707070707070707);
    uVar4 = (uVar4 >> 8 & 0xf000f000f000f) + (uVar4 & 0xf000f000f000f);
    lVar5 = (uVar4 >> 0x10 & 0x1f0000001f) + (uVar4 & 0x1f0000001f);
    cVar3 = (char)((ulong)lVar5 >> 0x20) + (char)lVar5 + -1;
  }
  uVar1 = (uint)cVar3;
  param_2 = (uint)~(-1 << (ulong)(uVar1 & 0x1f)) & param_2;
  cVar11 = (char)(param_2 << ((ulong)(5 - uVar1) & 0x3f));
  if (4 < (int)uVar1) {
    cVar11 = (char)(param_2 >> ((ulong)(uVar1 - 5) & 0x3f));
  }
  uVar1 = -1 << (ulong)((int)cVar11 + 1U & 0x1f) & *(uint *)(param_1[2] + (long)cVar3 * 4);
  if ((int)cVar11 + 1U < 0x20 && uVar1 != 0) {
    uVar4 = (ulong)uVar1 | (ulong)uVar1 << 1;
    uVar4 = uVar4 | uVar4 << 2;
    uVar4 = uVar4 | uVar4 << 4;
    uVar4 = uVar4 | uVar4 << 8;
    uVar4 = uVar4 | uVar4 << 0x10;
    uVar4 = uVar4 | uVar4 << 0x20;
    uVar4 = (uVar4 >> 1 & 0x5555555555555555) + (uVar4 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = (uVar4 >> 4 & 0x707070707070707) + (uVar4 & 0x707070707070707);
    uVar4 = (uVar4 >> 8 & 0xf000f000f000f) + (uVar4 & 0xf000f000f000f);
    lVar5 = (uVar4 >> 0x10 & 0x1f0000001f) + (uVar4 & 0x1f0000001f);
    uVar1 = 0x40 - ((int)((ulong)lVar5 >> 0x20) + (int)lVar5);
    bVar2 = 0x1f < (uVar1 & 0xff);
    bVar8 = (byte)uVar1;
    if (bVar2) {
      cVar3 = cVar3 + ((char)bVar8 >> 5);
    }
    if (bVar2) {
      bVar8 = bVar8 & 0x1f;
    }
    iVar10 = (int)cVar3;
    uVar1 = iVar10 - 3;
    uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
    if (4 < (uint)((long)cVar3 + -3)) goto joined_r0x02bceac0;
    lVar5 = uVar4 - *(long *)(&DAT_03a84138 + ((long)cVar3 + -3) * 8);
  }
  else {
    uVar4 = param_1[3] & -1L << ((ulong)((int)cVar3 + 1) & 0x3f);
    if (uVar4 == 0) {
      return 0;
    }
    uVar4 = uVar4 | uVar4 << 1;
    uVar4 = uVar4 | uVar4 << 2;
    uVar4 = uVar4 | uVar4 << 4;
    uVar4 = uVar4 | uVar4 << 8;
    uVar4 = uVar4 | uVar4 << 0x10;
    uVar4 = uVar4 | uVar4 << 0x20;
    uVar4 = (uVar4 >> 1 & 0x5555555555555555) + (uVar4 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = (uVar4 >> 4 & 0x707070707070707) + (uVar4 & 0x707070707070707);
    uVar4 = (uVar4 >> 8 & 0xf000f000f000f) + (uVar4 & 0xf000f000f000f);
    lVar5 = (uVar4 >> 0x10 & 0x1f0000001f) + (uVar4 & 0x1f0000001f);
    cVar3 = '@' - ((char)((ulong)lVar5 >> 0x20) + (char)lVar5);
    uVar1 = *(uint *)(param_1[2] + (long)cVar3 * 4);
    if (uVar1 == 0) {
      bVar7 = 0xff;
LAB_02bceacc:
      bVar8 = bVar7 & 0x1f;
      cVar3 = cVar3 + ((char)bVar7 >> 5);
    }
    else {
      uVar4 = (ulong)uVar1 | (ulong)uVar1 << 1;
      uVar4 = uVar4 | uVar4 << 2;
      uVar4 = uVar4 | uVar4 << 4;
      uVar4 = uVar4 | uVar4 << 8;
      uVar4 = uVar4 | uVar4 << 0x10;
      uVar4 = uVar4 | uVar4 << 0x20;
      uVar4 = (uVar4 >> 1 & 0x5555555555555555) + (uVar4 & 0x5555555555555555);
      uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
      uVar4 = (uVar4 >> 4 & 0x707070707070707) + (uVar4 & 0x707070707070707);
      uVar4 = (uVar4 >> 8 & 0xf000f000f000f) + (uVar4 & 0xf000f000f000f);
      lVar5 = (uVar4 >> 0x10 & 0x1f0000001f) + (uVar4 & 0x1f0000001f);
      uVar1 = 0x40 - ((int)((ulong)lVar5 >> 0x20) + (int)lVar5);
      bVar8 = (byte)uVar1;
      bVar7 = bVar8;
      if (0x1f < (uVar1 & 0xff)) goto LAB_02bceacc;
    }
    iVar10 = (int)cVar3;
    uVar1 = iVar10 - 3;
    uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
    if ((uint)((long)cVar3 + -3) < 5) {
      lVar5 = uVar4 - *(long *)(&DAT_03a84138 + ((long)cVar3 + -3) * 8);
    }
    else {
joined_r0x02bceac0:
      lVar5 = uVar4 - 0x81;
      if (4 < (int)uVar1) {
        lVar9 = (long)(char)bVar8;
        goto LAB_02bceb30;
      }
    }
  }
  lVar9 = (long)((int)(char)bVar8 >> (8U - iVar10 & 0x1f));
LAB_02bceb30:
  uVar4 = lVar9 + lVar5;
  if (uVar4 < (ulong)param_1[4]) {
    lVar5 = *param_1 + uVar4 * 0x20;
    if (lVar5 != 0) {
      lVar6 = *(long *)(*param_1 + uVar4 * 0x20 + 0x18);
      lVar9 = 0;
      if (lVar6 != lVar5) {
        lVar9 = lVar6;
      }
      return lVar9;
    }
  }
  return 0;
}


