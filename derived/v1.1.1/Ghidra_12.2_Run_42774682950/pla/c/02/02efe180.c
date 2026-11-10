/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efe180; name: FUN_02efe180
 */


long FUN_02efe180(int param_1)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  float fVar19;
  
  lVar17 = (long)param_1;
  uVar2 = lVar17 + 1;
  lVar13 = (&DAT_0440aab0)[uVar2];
  if ((-1 < param_1) && (lVar13 == 0)) {
    uVar1 = param_1 + 2;
    uVar4 = *(uint *)(&DAT_03a9f5cc + lVar17 * 4);
    uVar14 = (ulong)uVar4;
    lVar13 = FUN_02f59e30(0,(ulong)(uVar1 * uVar1 * uVar4) << 2);
    if (lVar13 != 0) {
      lVar15 = 0;
      puVar18 = (&PTR_DAT_042ab758)[lVar17];
      uVar16 = 0;
      do {
        pfVar3 = (float *)(puVar18 + lVar15 * 4);
        FUN_02ef9108(pfVar3[2],-*pfVar3,pfVar3[1],uVar2 & 0xffffffff,uVar4,lVar13 + lVar15);
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 4;
      } while (uVar16 < uVar14);
      if (-1 < (int)uVar2) {
        iVar9 = 0;
        lVar17 = 0;
        iVar10 = 2;
        uVar16 = uVar14;
        uVar11 = uVar14;
        uVar12 = 0;
        do {
          fVar19 = (float)(&DAT_03aa0270)[uVar12] * (float)(&DAT_03a9f3b8)[uVar12] *
                   (float)(&DAT_03aa0270)[uVar12] * (float)(&DAT_03a9f3b8)[uVar12];
          uVar6 = 0;
          do {
            iVar5 = (int)uVar6;
            uVar6 = uVar6 + 1;
            lVar15 = (ulong)(uint)((int)lVar17 + iVar5) * 4;
            *(float *)(lVar13 + lVar15) = *(float *)(lVar13 + lVar15) * fVar19;
          } while (uVar6 < uVar14);
          uVar6 = (ulong)(1 - (int)uVar12);
          if ((long)(1 - uVar12) < (long)uVar12) {
            uVar7 = uVar16;
            do {
              uVar8 = 0;
              do {
                iVar5 = (int)uVar8;
                uVar8 = uVar8 + 1;
                *(undefined4 *)(lVar13 + (ulong)(uint)((int)uVar7 + iVar5) * 4) = 0;
              } while (uVar8 < uVar14);
              uVar6 = (ulong)((int)uVar6 + 1);
              uVar7 = uVar7 + uVar14;
            } while (uVar12 != uVar6);
          }
          uVar7 = uVar12 + 1;
          if (uVar12 == uVar6) {
            uVar12 = 0;
            do {
              iVar5 = (int)uVar12;
              uVar12 = uVar12 + 1;
              lVar15 = (ulong)(uVar4 * ((int)uVar6 + iVar9) + iVar5) * 4;
              *(float *)(lVar13 + lVar15) = *(float *)(lVar13 + lVar15) * fVar19;
            } while (uVar12 < uVar14);
          }
          lVar17 = lVar17 + uVar11;
          uVar16 = uVar16 + uVar11;
          uVar11 = uVar11 + (uVar4 << 1);
          iVar9 = iVar9 + iVar10;
          iVar10 = iVar10 + 2;
          uVar12 = uVar7;
        } while (uVar7 != uVar1);
      }
      (&DAT_0440aab0)[uVar2] = lVar13;
    }
  }
  return lVar13;
}


