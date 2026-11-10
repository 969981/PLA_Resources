/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2afe4; name: FUN_02f2afe4
 */


/* WARNING: Removing unreachable block (ram,0x02f2b038) */

void FUN_02f2afe4(float param_1,long param_2,long *param_3)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  float *__s;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  __s = *(float **)(param_2 + 0x30);
  if (__s == (float *)0x0) {
    return;
  }
  bVar2 = *(byte *)(param_3 + 1);
  if (param_1 <= 0.0) {
    if (bVar2 == 0) {
      return;
    }
    memset(__s,0,(ulong)bVar2 << 2);
    return;
  }
  uVar3 = *(ushort *)(param_3 + 2);
  uVar8 = (ulong)uVar3;
  if (uVar8 == 0) {
    uVar8 = 0;
    fVar9 = -2.1474836e+09;
    goto LAB_02f2b0d0;
  }
  if (uVar3 == 1) {
    fVar11 = -2.1474836e+09;
    uVar6 = 0;
    lVar7 = 0;
    fVar9 = -2.1474836e+09;
LAB_02f2b0b8:
    fVar12 = *(float *)(*param_3 + lVar7 * 4);
    uVar5 = (uint)lVar7;
    if (ABS(fVar12) <= fVar11) {
      uVar5 = uVar6;
      fVar12 = fVar9;
    }
    fVar9 = fVar12;
    uVar6 = uVar5;
  }
  else {
    fVar9 = -2.1474836e+09;
    lVar7 = 0;
    fVar12 = -2.1474836e+09;
    uVar5 = 0;
    do {
      pfVar1 = (float *)(*param_3 + lVar7 * 4);
      fVar10 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar14 = ABS(fVar10);
      if (fVar14 <= fVar12) {
        fVar10 = fVar9;
      }
      fVar11 = ABS(fVar13);
      uVar6 = (uint)lVar7;
      if (fVar14 <= fVar12) {
        uVar6 = uVar5;
      }
      if (fVar11 <= fVar14) {
        fVar9 = fVar10;
      }
      else {
        uVar6 = (uint)lVar7 + 1;
        fVar9 = fVar13;
      }
      lVar7 = lVar7 + 2;
      fVar12 = fVar11;
      uVar5 = uVar6;
    } while (uVar8 - (uVar8 & 1) != lVar7);
    if ((uVar3 & 1) != 0) goto LAB_02f2b0b8;
  }
  uVar8 = (ulong)uVar6;
LAB_02f2b0d0:
  *__s = fVar9 * param_1 * 1.0009619;
  if (1 < bVar2) {
    lVar4 = (ulong)bVar2 - 1;
    lVar7 = 4;
    do {
      lVar4 = lVar4 + -1;
      *(float *)(*(long *)(param_2 + 0x30) + lVar7) =
           *(float *)(*param_3 + lVar7 * (ulong)*(ushort *)(param_3 + 2) + uVar8 * 4) *
           param_1 * 1.0009619;
      lVar7 = lVar7 + 4;
    } while (lVar4 != 0);
  }
  return;
}


