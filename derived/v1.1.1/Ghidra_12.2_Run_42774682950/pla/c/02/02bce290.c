/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bce290; name: FUN_02bce290
 */


void FUN_02bce290(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  FUN_02bcefa0();
  uVar8 = *param_2 - (ulong)*(byte *)((long)param_2 + 0xd);
  if (uVar8 == 0) {
    return;
  }
  uVar7 = uVar8 | uVar8 >> 1;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  uVar7 = (uVar7 >> 1 & 0x5555555555555555) + (uVar7 & 0x5555555555555555);
  uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
  uVar7 = (uVar7 >> 4 & 0x707070707070707) + (uVar7 & 0x707070707070707);
  uVar7 = (uVar7 >> 8 & 0xf000f000f000f) + (uVar7 & 0xf000f000f000f);
  lVar10 = (uVar7 >> 0x10 & 0x1f0000001f) + (uVar7 & 0x1f0000001f);
  uVar1 = (int)((ulong)lVar10 >> 0x20) + (int)lVar10;
  uVar3 = uVar1 - 1;
  uVar8 = uVar8 & (uint)~(-1 << (ulong)(uVar3 & 0x1f));
  uVar2 = (uint)(uVar8 << ((ulong)(6 - uVar1) & 0x3f));
  if (5 < uVar1) {
    uVar2 = (uint)(uVar8 >> ((ulong)(uVar1 - 6) & 0x3f));
  }
  bVar4 = (byte)uVar2;
  uVar1 = uVar3;
  bVar6 = bVar4;
  if (0x1f < (uVar2 & 0xff)) {
    uVar1 = uVar3 + ((int)(char)bVar4 >> 5);
    bVar6 = bVar4 & 0x1f;
  }
  cVar5 = (char)uVar1;
  uVar1 = (int)cVar5 - 3;
  uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
  if ((uint)((long)cVar5 + -3) < 5) {
    lVar10 = uVar8 - *(long *)(&DAT_03a84138 + ((long)cVar5 + -3) * 8);
  }
  else {
    lVar10 = uVar8 - 0x81;
    if (4 < (int)uVar1) {
      lVar9 = (long)(char)bVar6;
      goto LAB_02bce3c8;
    }
  }
  lVar9 = (long)((int)(char)bVar6 >> (8U - (int)cVar5 & 0x1f));
LAB_02bce3c8:
  if ((ulong)(lVar9 + lVar10) < (ulong)param_1[4]) {
    lVar10 = *param_1 + (lVar9 + lVar10) * 0x20;
  }
  else {
    lVar10 = 0;
  }
  lVar9 = *(long *)(lVar10 + 0x18);
  param_2[2] = lVar10;
  param_2[3] = lVar9;
  *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 0x10;
  *(long **)(lVar9 + 0x10) = param_2;
  *(long **)(lVar10 + 0x18) = param_2;
  *(byte *)(lVar10 + 0xc) = *(byte *)(lVar10 + 0xc) | 0x10;
  *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) & 0xf7;
  param_1[3] = param_1[3] | 1L << ((long)(int)uVar3 & 0x3fU);
  uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
  *(uint *)(param_1[2] + uVar8) =
       *(uint *)(param_1[2] + uVar8) | 1 << (ulong)((int)(char)bVar4 & 0x1f);
  return;
}


