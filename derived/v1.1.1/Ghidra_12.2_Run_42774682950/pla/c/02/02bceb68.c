/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bceb68; name: FUN_02bceb68
 */


long FUN_02bceb68(long *param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar5 = param_1[3];
  if (uVar5 == 0) {
    return 0;
  }
  uVar5 = uVar5 | uVar5 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  uVar5 = (uVar5 >> 1 & 0x5555555555555555) + (uVar5 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar5 = (uVar5 >> 4 & 0x707070707070707) + (uVar5 & 0x707070707070707);
  uVar5 = (uVar5 >> 8 & 0xf000f000f000f) + (uVar5 & 0xf000f000f000f);
  lVar6 = (uVar5 >> 0x10 & 0x1f0000001f) + (uVar5 & 0x1f0000001f);
  iVar4 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = iVar4 + -1;
  uVar8 = *(uint *)(param_1[2] + (long)iVar4 * 4);
  if (uVar8 == 0) {
    uVar8 = 0xff;
LAB_02bcec7c:
    cVar3 = (char)uVar8;
    uVar8 = uVar8 & 0x1f;
    iVar4 = iVar4 + ((int)cVar3 >> 5);
  }
  else {
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar5 = ((ulong)(uVar8 >> 1) & 0x5555555555555555) + ((ulong)uVar8 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = (uVar5 >> 4 & 0x707070707070707) + (uVar5 & 0x707070707070707);
    uVar5 = (uVar5 >> 8 & 0xf000f000f000f) + (uVar5 & 0xf000f000f000f);
    uVar8 = (int)((uVar5 >> 0x10) + (uVar5 & 0x1f0000001f)) - 1;
    if (0x1f < (uVar8 & 0xff)) goto LAB_02bcec7c;
  }
  cVar3 = (char)iVar4;
  uVar2 = (int)cVar3 - 3;
  uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5;
  if ((uint)((long)cVar3 + -3) < 5) {
    lVar6 = uVar5 - *(long *)(&DAT_03a84138 + ((long)cVar3 + -3) * 8);
  }
  else {
    lVar6 = uVar5 - 0x81;
    if (4 < (int)uVar2) goto LAB_02bcecd0;
  }
  uVar8 = (int)uVar8 >> (8U - (int)cVar3 & 0x1f);
LAB_02bcecd0:
  uVar5 = (int)uVar8 + lVar6;
  if (uVar5 < (ulong)param_1[4]) {
    lVar6 = *param_1 + uVar5 * 0x20;
    if (lVar6 != 0) {
      lVar7 = *(long *)(*param_1 + uVar5 * 0x20 + 0x18);
      lVar1 = 0;
      if (lVar7 != lVar6) {
        lVar1 = lVar7;
      }
      return lVar1;
    }
  }
  return 0;
}


