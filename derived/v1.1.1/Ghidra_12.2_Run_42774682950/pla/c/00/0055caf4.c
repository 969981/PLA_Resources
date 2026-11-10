/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055caf4; name: FUN_0055caf4
 */


void FUN_0055caf4(ulong *param_1)

{
  uint uVar1;
  size_t sVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *__dest;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 local_68;
  
  puVar3 = PTR_FUN_04373078;
  if (param_1[4] < 0x100) {
    uVar8 = (long)(param_1[2] - param_1[1]) >> 3;
    lVar18 = param_1[3] - *param_1;
    if ((ulong)(lVar18 >> 3) <= uVar8) {
      uVar9 = lVar18 >> 2;
      if (lVar18 == 0) {
        uVar9 = 1;
      }
      puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,uVar9 * 8);
      puVar7 = puVar6 + uVar8;
      puVar11 = puVar6 + uVar9;
      uVar19 = FUN_002e2e80(puVar3,0x1000);
      puVar12 = puVar6;
      if (uVar8 == uVar9) {
        if (puVar7 < puVar6 || (long)puVar7 - (long)puVar6 == 0) {
          uVar8 = (long)puVar11 - (long)puVar6 >> 2;
          if ((long)puVar11 - (long)puVar6 == 0) {
            uVar8 = 1;
          }
          puVar12 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,uVar8 * 8);
          puVar7 = (undefined8 *)((long)puVar12 + (uVar8 & 0x7ffffffffffffffc) * 2);
          puVar11 = puVar12 + uVar8;
          if (puVar6 != (undefined8 *)0x0) {
            FUN_002e2ea0(PTR_LAB_04373088,puVar6);
          }
        }
        else {
          lVar18 = (long)puVar7 - (long)puVar6 >> 3;
          uVar8 = lVar18 + 2;
          if (-1 < lVar18 + 1) {
            uVar8 = lVar18 + 1;
          }
          puVar7 = (undefined8 *)((long)puVar7 + (uVar8 & 0x3ffffffffffffffe) * -4);
        }
      }
      *puVar7 = uVar19;
      puVar3 = PTR_FUN_04373078;
      puVar6 = puVar7 + 1;
      if (param_1[2] == param_1[1]) {
LAB_0055cf94:
        uVar8 = *param_1;
        *param_1 = (ulong)puVar12;
        param_1[1] = (ulong)puVar7;
        param_1[2] = (ulong)puVar6;
        param_1[3] = (ulong)puVar11;
        if (uVar8 == 0) {
          return;
        }
        FUN_002e2ea0(PTR_LAB_04373088);
        return;
      }
      puVar20 = (undefined8 *)(param_1[2] - 8);
      puVar14 = puVar12;
      if (puVar7 == puVar12) goto LAB_0055cd78;
      do {
        __dest = puVar7;
        while( true ) {
          puVar7 = __dest + -1;
          *puVar7 = *puVar20;
          if (puVar20 == (undefined8 *)param_1[1]) goto LAB_0055cf94;
          puVar20 = puVar20 + -1;
          puVar14 = puVar12;
          if (puVar7 != puVar12) break;
LAB_0055cd78:
          if (puVar6 < puVar11) {
            lVar18 = (long)puVar11 - (long)puVar6 >> 3;
            uVar8 = lVar18 + 2;
            if (-1 < lVar18 + 1) {
              uVar8 = lVar18 + 1;
            }
            sVar2 = (long)puVar6 - (long)puVar7;
            puVar6 = (undefined8 *)((long)puVar6 + (uVar8 & 0x3ffffffffffffffe) * 4);
            __dest = puVar6;
            if (sVar2 != 0) {
              __dest = (undefined8 *)((long)puVar6 - sVar2);
              memmove(__dest,puVar7,sVar2);
            }
            puVar12 = puVar14;
          }
          else {
            lVar18 = (long)puVar11 - (long)puVar14 >> 2;
            if ((long)puVar11 - (long)puVar14 == 0) {
              lVar18 = 1;
            }
            uVar8 = lVar18 + 3U >> 2;
            puVar12 = (undefined8 *)FUN_002e2e80(puVar3,lVar18 * 8);
            __dest = puVar12 + uVar8;
            puVar11 = puVar12 + lVar18;
            puVar17 = __dest;
            if (puVar7 != puVar6) {
              uVar5 = (long)puVar6 + (-8 - (long)puVar7);
              uVar9 = (uVar5 >> 3) + 1;
              puVar10 = puVar7;
              if (7 < uVar9) {
                uVar5 = uVar5 & 0xfffffffffffffff8;
                if (((undefined8 *)((long)puVar7 + uVar5 + 8) <= puVar12 + uVar8) ||
                   ((undefined8 *)((long)puVar12 + uVar5 + uVar8 * 8 + 8) <= puVar7)) {
                  uVar5 = uVar9 & 0x3ffffffffffffff8;
                  uVar8 = (uVar5 - 8 >> 3) + 1;
                  uVar13 = uVar8 & 1;
                  lVar18 = 0;
                  if (uVar5 - 8 != 0) {
                    lVar15 = uVar13 - uVar8;
                    puVar17 = puVar7 + 8;
                    puVar10 = __dest + 8;
                    do {
                      uVar19 = puVar17[-8];
                      uVar23 = puVar17[-5];
                      uVar22 = puVar17[-6];
                      lVar18 = lVar18 + 0x10;
                      lVar15 = lVar15 + 2;
                      uVar25 = puVar17[-3];
                      uVar24 = puVar17[-4];
                      uVar27 = puVar17[-1];
                      uVar26 = puVar17[-2];
                      puVar10[-7] = puVar17[-7];
                      puVar10[-8] = uVar19;
                      puVar10[-5] = uVar23;
                      puVar10[-6] = uVar22;
                      puVar10[-3] = uVar25;
                      puVar10[-4] = uVar24;
                      puVar10[-1] = uVar27;
                      puVar10[-2] = uVar26;
                      uVar19 = *puVar17;
                      uVar23 = puVar17[3];
                      uVar22 = puVar17[2];
                      uVar25 = puVar17[5];
                      uVar24 = puVar17[4];
                      uVar27 = puVar17[7];
                      uVar26 = puVar17[6];
                      puVar10[1] = puVar17[1];
                      *puVar10 = uVar19;
                      puVar10[3] = uVar23;
                      puVar10[2] = uVar22;
                      puVar17 = puVar17 + 0x10;
                      puVar10[5] = uVar25;
                      puVar10[4] = uVar24;
                      puVar10[7] = uVar27;
                      puVar10[6] = uVar26;
                      puVar10 = puVar10 + 0x10;
                    } while (lVar15 != 0);
                  }
                  puVar17 = __dest + uVar5;
                  puVar10 = puVar7 + uVar5;
                  if (uVar13 != 0) {
                    puVar7 = puVar7 + lVar18;
                    puVar21 = __dest + lVar18;
                    uVar19 = *puVar7;
                    uVar23 = puVar7[3];
                    uVar22 = puVar7[2];
                    uVar25 = puVar7[5];
                    uVar24 = puVar7[4];
                    uVar27 = puVar7[7];
                    uVar26 = puVar7[6];
                    puVar21[1] = puVar7[1];
                    *puVar21 = uVar19;
                    puVar21[3] = uVar23;
                    puVar21[2] = uVar22;
                    puVar21[5] = uVar25;
                    puVar21[4] = uVar24;
                    puVar21[7] = uVar27;
                    puVar21[6] = uVar26;
                  }
                  if (uVar9 == uVar5) goto LAB_0055cf70;
                }
              }
              uVar8 = (long)puVar6 + (-8 - (long)puVar10);
              uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
              if ((uVar1 & 7) != 0) {
                lVar18 = -((ulong)uVar1 & 7);
                puVar7 = puVar10;
                puVar21 = puVar17;
                do {
                  puVar10 = puVar7 + 1;
                  bVar4 = lVar18 != -1;
                  lVar18 = lVar18 + 1;
                  puVar17 = puVar21 + 1;
                  *puVar21 = *puVar7;
                  puVar7 = puVar10;
                  puVar21 = puVar17;
                } while (bVar4);
              }
              if (0x37 < uVar8) {
                do {
                  *puVar17 = *puVar10;
                  puVar17[1] = puVar10[1];
                  puVar17[2] = puVar10[2];
                  puVar17[3] = puVar10[3];
                  puVar17[4] = puVar10[4];
                  puVar17[5] = puVar10[5];
                  puVar17[6] = puVar10[6];
                  puVar7 = puVar10 + 7;
                  puVar10 = puVar10 + 8;
                  puVar17[7] = *puVar7;
                  puVar17 = puVar17 + 8;
                } while (puVar10 != puVar6);
              }
            }
LAB_0055cf70:
            puVar6 = puVar17;
            if (puVar14 != (undefined8 *)0x0) {
              FUN_002e2ea0(PTR_LAB_04373088,puVar14);
            }
          }
        }
      } while( true );
    }
    if (param_1[3] != param_1[2]) {
      local_68 = FUN_002e2e80(PTR_FUN_04373078,0x1000);
      FUN_0055d240(param_1,&local_68);
      return;
    }
    local_68 = FUN_002e2e80(PTR_FUN_04373078,0x1000);
    FUN_0055d440(param_1,&local_68);
    puVar11 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)param_1[1] + 1;
    uVar19 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)puVar7;
    if (puVar11 != (undefined8 *)param_1[3]) goto LAB_0055d0c4;
    puVar12 = (undefined8 *)*param_1;
    lVar18 = (long)puVar7 - (long)puVar12;
    if (puVar12 <= puVar7 && lVar18 != 0) goto LAB_0055cc08;
    lVar18 = (long)param_1[3] - (long)puVar12;
    uVar8 = lVar18 >> 2;
    if (lVar18 == 0) {
      uVar8 = 1;
    }
    uVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar8 * 8);
    puVar12 = (undefined8 *)param_1[1];
    puVar6 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(uVar5 + (uVar8 >> 2) * 8);
    uVar9 = uVar5 + uVar8 * 8;
    if (puVar12 != puVar6) {
      uVar16 = (long)puVar6 + (-8 - (long)puVar12);
      uVar13 = (uVar16 >> 3) + 1;
      puVar11 = puVar7;
      puVar14 = puVar12;
      if (7 < uVar13) {
        uVar16 = uVar16 & 0xfffffffffffffff8;
        lVar18 = (uVar8 >> 2) * 8;
        if (((long)puVar12 + uVar16 + 8 <= uVar5 + lVar18) ||
           ((undefined8 *)(lVar18 + uVar16 + uVar5 + 8) <= puVar12)) {
          uVar16 = uVar13 & 0x3ffffffffffffff8;
          puVar11 = puVar7 + uVar16;
          puVar14 = puVar12 + uVar16;
          puVar12 = puVar12 + 4;
          puVar20 = puVar7 + 4;
          uVar8 = uVar16;
          do {
            uVar22 = puVar12[-4];
            uVar24 = puVar12[-1];
            uVar23 = puVar12[-2];
            uVar8 = uVar8 - 8;
            uVar26 = puVar12[1];
            uVar25 = *puVar12;
            uVar28 = puVar12[3];
            uVar27 = puVar12[2];
            puVar20[-3] = puVar12[-3];
            puVar20[-4] = uVar22;
            puVar20[-1] = uVar24;
            puVar20[-2] = uVar23;
            puVar20[1] = uVar26;
            *puVar20 = uVar25;
            puVar20[3] = uVar28;
            puVar20[2] = uVar27;
            puVar12 = puVar12 + 8;
            puVar20 = puVar20 + 8;
          } while (uVar8 != 0);
          if (uVar13 == uVar16) goto LAB_0055d0a4;
        }
      }
      uVar8 = (long)puVar6 + (-8 - (long)puVar14);
      uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar18 = -((ulong)uVar1 & 3);
        puVar12 = puVar11;
        puVar20 = puVar14;
        do {
          puVar14 = puVar20 + 1;
          bVar4 = lVar18 != -1;
          lVar18 = lVar18 + 1;
          puVar11 = puVar12 + 1;
          *puVar12 = *puVar20;
          puVar12 = puVar11;
          puVar20 = puVar14;
        } while (bVar4);
      }
      if (0x17 < uVar8) {
        do {
          *puVar11 = *puVar14;
          puVar11[1] = puVar14[1];
          puVar11[2] = puVar14[2];
          puVar12 = puVar14 + 3;
          puVar14 = puVar14 + 4;
          puVar11[3] = *puVar12;
          puVar11 = puVar11 + 4;
        } while (puVar14 != puVar6);
      }
      goto LAB_0055d0a4;
    }
LAB_0055d14c:
    uVar8 = *param_1;
    *param_1 = uVar5;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar7;
    param_1[3] = uVar9;
    puVar11 = puVar7;
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    puVar11 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)param_1[1] + 1;
    uVar19 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)puVar7;
    if (puVar11 != (undefined8 *)param_1[3]) goto LAB_0055d0c4;
    puVar12 = (undefined8 *)*param_1;
    lVar18 = (long)puVar7 - (long)puVar12;
    if (puVar12 <= puVar7 && lVar18 != 0) {
LAB_0055cc08:
      lVar18 = lVar18 >> 3;
      lVar15 = lVar18 + 2;
      if (-1 < lVar18 + 1) {
        lVar15 = lVar18 + 1;
      }
      sVar2 = (long)puVar11 - (long)puVar7;
      puVar11 = puVar7 + -(lVar15 >> 1);
      if (sVar2 != 0) {
        memmove(puVar11,puVar7,sVar2);
        puVar7 = (undefined8 *)param_1[1];
      }
      puVar11 = puVar11 + ((long)sVar2 >> 3);
      param_1[1] = (ulong)(puVar7 + -(lVar15 >> 1));
      param_1[2] = (ulong)puVar11;
      goto LAB_0055d0c4;
    }
    lVar18 = (long)param_1[3] - (long)puVar12;
    uVar8 = lVar18 >> 2;
    if (lVar18 == 0) {
      uVar8 = 1;
    }
    uVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar8 * 8);
    puVar12 = (undefined8 *)param_1[1];
    puVar6 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(uVar5 + (uVar8 >> 2) * 8);
    uVar9 = uVar5 + uVar8 * 8;
    if (puVar12 == puVar6) goto LAB_0055d14c;
    uVar16 = (long)puVar6 + (-8 - (long)puVar12);
    uVar13 = (uVar16 >> 3) + 1;
    puVar11 = puVar7;
    puVar14 = puVar12;
    if (7 < uVar13) {
      uVar16 = uVar16 & 0xfffffffffffffff8;
      lVar18 = (uVar8 >> 2) * 8;
      if (((long)puVar12 + uVar16 + 8 <= uVar5 + lVar18) ||
         ((undefined8 *)(lVar18 + uVar16 + uVar5 + 8) <= puVar12)) {
        uVar16 = uVar13 & 0x3ffffffffffffff8;
        puVar11 = puVar7 + uVar16;
        puVar14 = puVar12 + uVar16;
        puVar12 = puVar12 + 4;
        puVar20 = puVar7 + 4;
        uVar8 = uVar16;
        do {
          uVar22 = puVar12[-4];
          uVar24 = puVar12[-1];
          uVar23 = puVar12[-2];
          uVar8 = uVar8 - 8;
          uVar26 = puVar12[1];
          uVar25 = *puVar12;
          uVar28 = puVar12[3];
          uVar27 = puVar12[2];
          puVar20[-3] = puVar12[-3];
          puVar20[-4] = uVar22;
          puVar20[-1] = uVar24;
          puVar20[-2] = uVar23;
          puVar20[1] = uVar26;
          *puVar20 = uVar25;
          puVar20[3] = uVar28;
          puVar20[2] = uVar27;
          puVar12 = puVar12 + 8;
          puVar20 = puVar20 + 8;
        } while (uVar8 != 0);
        if (uVar13 == uVar16) goto LAB_0055d0a4;
      }
    }
    uVar8 = (long)puVar6 + (-8 - (long)puVar14);
    uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar18 = -((ulong)uVar1 & 3);
      puVar12 = puVar11;
      puVar20 = puVar14;
      do {
        puVar14 = puVar20 + 1;
        bVar4 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar11 = puVar12 + 1;
        *puVar12 = *puVar20;
        puVar12 = puVar11;
        puVar20 = puVar14;
      } while (bVar4);
    }
    if (0x17 < uVar8) {
      do {
        *puVar11 = *puVar14;
        puVar11[1] = puVar14[1];
        puVar11[2] = puVar14[2];
        puVar12 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar11[3] = *puVar12;
        puVar11 = puVar11 + 4;
      } while (puVar14 != puVar6);
    }
LAB_0055d0a4:
    uVar8 = *param_1;
    *param_1 = uVar5;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar11;
    param_1[3] = uVar9;
  }
  if (uVar8 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_0055d0c4:
  *puVar11 = uVar19;
  param_1[2] = param_1[2] + 8;
  return;
}


