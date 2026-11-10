/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03373040; name: FUN_03373040
 */


void FUN_03373040(int *param_1,uint *param_2,long param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  undefined8 local_e4;
  uint local_a4 [17];
  
  lVar23 = (long)(int)param_4;
  lVar24 = -(lVar23 << 0x20);
  iVar6 = param_4 * 4 + 4;
  puVar25 = local_a4;
  lVar9 = 0;
  do {
    lVar21 = lVar9;
    puVar25 = puVar25 + -1;
    lVar9 = lVar21 + -1;
    lVar24 = lVar24 + 0x100000000;
    iVar6 = iVar6 + -4;
    if (lVar23 + lVar21 < 1) break;
  } while (param_1[(long)(int)param_4 + lVar21 + -1] == 0);
  uVar18 = (uint)lVar9;
  lVar26 = 0;
  lVar27 = 0;
  iVar13 = uVar18 + param_4 + 1;
  lVar10 = lVar21;
  lVar12 = lVar23 << 0x20;
  do {
    lVar7 = lVar12;
    lVar17 = lVar10;
    uVar2 = param_2[lVar23 + lVar27 + -1];
    lVar10 = lVar23 + lVar27;
    lVar27 = lVar27 + -1;
    lVar26 = lVar26 + -4;
    lVar12 = lVar7 + -0x100000000;
    if (lVar10 < 1) break;
    lVar10 = lVar17 + 1;
  } while (uVar2 == 0);
  iVar15 = (int)((ulong)param_4 + lVar27);
  if (iVar15 == -1) {
    return;
  }
  uVar5 = (ulong)param_4 + lVar27 + 1;
  if ((int)uVar5 <= iVar13) {
    if (iVar15 != 0) {
      uVar2 = uVar2 | uVar2 >> 1;
      uVar20 = lVar23 + lVar27;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = uVar2 | uVar2 >> 0x10;
      uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      uVar4 = 0x20 - uVar2;
      iVar13 = (int)(lVar17 + 1);
      lVar10 = lVar7 >> 0x20;
      if (uVar4 == 0) {
        FUN_032c4a00(local_a4,param_1,iVar6);
        *(undefined4 *)((long)local_a4 + (0x100000000 - lVar24 >> 0x1e)) = 0;
        FUN_032c4a00(&local_e4,param_2,(int)lVar26 + param_4 * 4 + 4);
      }
      else {
        *(uint *)((long)local_a4 + (0x100000000 - lVar24 >> 0x1e)) =
             (uint)param_1[(long)(int)param_4 + lVar21 + -1] >> (ulong)(uVar2 & 0x1f);
        if (0 < (int)(param_4 + uVar18)) {
          lVar11 = -lVar24 >> 0x20;
          uVar18 = *(uint *)((long)param_1 + (-lVar24 >> 0x1e));
          lVar21 = lVar11;
          if ((lVar23 + lVar9 & 1U) != 0) {
            lVar21 = lVar11 + -1;
            uVar3 = uVar18 << (ulong)(uVar4 & 0x1f);
            uVar18 = param_1[lVar21];
            *(uint *)((long)&local_e4 + (lVar11 + 0x10) * 4) =
                 uVar18 >> (ulong)(uVar2 & 0x1f) | uVar3;
          }
          if ((int)(lVar23 + lVar9) != 1) {
            puVar19 = (uint *)((long)&local_e4 + (lVar21 + 0x10) * 4);
            puVar16 = (uint *)(param_1 + lVar21 + -1);
            do {
              uVar3 = *puVar16;
              *puVar19 = uVar3 >> (ulong)(uVar2 & 0x1f) | uVar18 << (ulong)(uVar4 & 0x1f);
              uVar18 = puVar16[-1];
              puVar16 = puVar16 + -2;
              lVar21 = lVar21 + -2;
              puVar19[-1] = uVar18 >> (ulong)(uVar2 & 0x1f) | uVar3 << (ulong)(uVar4 & 0x1f);
              puVar19 = puVar19 + -2;
            } while (0 < lVar21);
          }
        }
        local_a4[0] = *param_1 << (ulong)(uVar4 & 0x1f);
        if (0 < iVar15) {
          uVar18 = *(uint *)((long)param_2 + (lVar12 >> 0x1e));
          lVar12 = lVar12 >> 0x20;
          lVar9 = lVar12;
          if ((uVar20 & 1) != 0) {
            lVar9 = lVar12 + -1;
            uVar3 = uVar18 << (ulong)(uVar4 & 0x1f);
            uVar18 = param_2[lVar9];
            *(uint *)((long)&local_e4 + lVar12 * 4) = uVar18 >> (ulong)(uVar2 & 0x1f) | uVar3;
          }
          if ((int)uVar20 != 1) {
            puVar19 = (uint *)((long)&local_e4 + lVar9 * 4);
            puVar16 = param_2 + lVar9 + -1;
            do {
              uVar3 = *puVar16;
              *puVar19 = uVar3 >> (ulong)(uVar2 & 0x1f) | uVar18 << (ulong)(uVar4 & 0x1f);
              uVar18 = puVar16[-1];
              puVar16 = puVar16 + -2;
              lVar9 = lVar9 + -2;
              puVar19[-1] = uVar18 >> (ulong)(uVar2 & 0x1f) | uVar3 << (ulong)(uVar4 & 0x1f);
              puVar19 = puVar19 + -2;
            } while (0 < lVar9);
          }
        }
        local_e4._0_4_ = *param_2 << (ulong)(uVar4 & 0x1f);
      }
      if (-1 < iVar13 + -1) {
        uVar14 = (ulong)*(uint *)((long)&local_e4 + (lVar23 + lVar27) * 4);
        lVar9 = lVar7 + -0x200000000 >> 0x20;
        if ((int)uVar5 < 1) {
          do {
            uVar5 = *(ulong *)((long)&local_e4 + (lVar17 + lVar10 + 0xf) * 4);
            uVar20 = 0;
            if (uVar14 != 0) {
              uVar20 = uVar5 / uVar14;
            }
            uVar5 = uVar5 - uVar20 * uVar14;
            if (uVar20 >> 0x20 == 0) goto LAB_0337361c;
            do {
              do {
                uVar5 = uVar5 + uVar14;
                uVar20 = uVar20 - 1;
                if (uVar5 >> 0x20 != 0) goto LAB_033735d4;
              } while (uVar20 >> 0x20 != 0);
LAB_0337361c:
            } while (((ulong)*(uint *)((long)&local_e4 + (lVar17 + lVar10 + 0xe) * 4) |
                     uVar5 << 0x20) < uVar20 * *(uint *)((long)&local_e4 + lVar9 * 4));
LAB_033735d4:
            *(int *)(param_3 + lVar17 * 4) = (int)uVar20;
            bVar1 = 0 < lVar17;
            lVar17 = lVar17 + -1;
          } while (bVar1);
        }
        else {
          uVar20 = uVar20 + 1;
          lVar26 = (long)puVar25 - lVar26;
          lVar23 = (uVar5 & 0xffffffff) - (uVar5 & 1);
          do {
            lVar21 = lVar17 + lVar10;
            uVar5 = *(ulong *)((long)&local_e4 + (lVar21 + 0xf) * 4);
            uVar22 = 0;
            if (uVar14 != 0) {
              uVar22 = uVar5 / uVar14;
            }
            uVar5 = uVar5 - uVar22 * uVar14;
            if (uVar22 >> 0x20 == 0) goto LAB_033733ac;
            do {
              do {
                uVar5 = uVar5 + uVar14;
                uVar22 = uVar22 - 1;
                if (uVar5 >> 0x20 != 0) goto LAB_033733c4;
              } while (uVar22 >> 0x20 != 0);
LAB_033733ac:
            } while (((ulong)*(uint *)((long)&local_e4 + (lVar21 + 0xe) * 4) | uVar5 << 0x20) <
                     uVar22 * *(uint *)((long)&local_e4 + lVar9 * 4));
LAB_033733c4:
            lVar12 = 0;
            lVar27 = 0;
            lVar7 = lVar12;
            if ((uVar20 & 0xffffffff) != 1) {
              do {
                lVar12 = lVar7 + 2;
                puVar25 = (uint *)(lVar26 + lVar7 * 4);
                uVar8 = uVar22 * *(uint *)((long)&local_e4 + lVar7 * 4);
                lVar27 = ((ulong)*puVar25 - lVar27) - (uVar8 & 0xffffffff);
                uVar5 = uVar22 * *(uint *)((long)&local_e4 + (lVar7 + 1) * 4);
                *puVar25 = (uint)lVar27;
                lVar27 = (((lVar27 >> 0x20) - (uVar8 >> 0x20)) + (ulong)puVar25[1]) -
                         (uVar5 & 0xffffffff);
                puVar25[1] = (uint)lVar27;
                lVar27 = (uVar5 >> 0x20) - (lVar27 >> 0x20);
                lVar7 = lVar12;
              } while (lVar23 != lVar12);
            }
            if ((uVar20 & 1) != 0) {
              uVar5 = uVar22 * *(uint *)((long)&local_e4 + lVar12 * 4);
              lVar27 = ((ulong)*(uint *)((long)&local_e4 + (lVar12 + lVar17 + 0x10) * 4) - lVar27) -
                       (uVar5 & 0xffffffff);
              *(int *)((long)&local_e4 + (lVar12 + lVar17 + 0x10) * 4) = (int)lVar27;
              lVar27 = (uVar5 >> 0x20) - (lVar27 >> 0x20);
            }
            lVar27 = (ulong)*(uint *)((long)&local_e4 + (lVar21 + 0x10) * 4) - lVar27;
            *(int *)((long)&local_e4 + (lVar21 + 0x10) * 4) = (int)lVar27;
            *(int *)(param_3 + lVar17 * 4) = (int)uVar22;
            if (lVar27 < 0) {
              *(int *)(param_3 + lVar17 * 4) = (int)uVar22 + -1;
              lVar12 = 0;
              lVar27 = 0;
              lVar7 = lVar12;
              if ((uVar20 & 0xffffffff) != 1) {
                do {
                  lVar12 = lVar7 + 2;
                  puVar25 = (uint *)(lVar26 + lVar7 * 4);
                  uVar18 = *(uint *)((long)&local_e4 + (lVar7 + 1) * 4);
                  lVar27 = lVar27 + (ulong)*puVar25 + (ulong)*(uint *)((long)&local_e4 + lVar7 * 4);
                  *puVar25 = (uint)lVar27;
                  lVar27 = (ulong)puVar25[1] + (lVar27 >> 0x20) + (ulong)uVar18;
                  puVar25[1] = (uint)lVar27;
                  lVar27 = lVar27 >> 0x20;
                  lVar7 = lVar12;
                } while (lVar23 != lVar12);
              }
              if ((uVar20 & 1) != 0) {
                lVar7 = lVar27 + (ulong)*(uint *)((long)&local_e4 + (lVar12 + lVar17 + 0x10) * 4) +
                        (ulong)*(uint *)((long)&local_e4 + lVar12 * 4);
                lVar27 = lVar7 >> 0x20;
                *(int *)((long)&local_e4 + (lVar12 + lVar17 + 0x10) * 4) = (int)lVar7;
              }
              *(int *)((long)&local_e4 + (lVar21 + 0x10) * 4) =
                   *(int *)((long)&local_e4 + (lVar21 + 0x10) * 4) + (int)lVar27;
            }
            lVar26 = lVar26 + -4;
            bVar1 = 0 < lVar17;
            lVar17 = lVar17 + -1;
          } while (bVar1);
        }
      }
      FUN_032d59e0(param_3 + (0x100000000 - lVar24 >> 0x1e) + lVar10 * -4 + 4,0,
                   (long)(int)(param_4 - iVar13));
      return;
    }
    if (0 < iVar13) {
      uVar5 = (ulong)*param_2;
      lVar23 = 0;
      lVar9 = -lVar24 >> 0x20;
      do {
        uVar20 = (ulong)(uint)param_1[lVar9] | lVar23 << 0x20;
        uVar14 = 0;
        if (uVar5 != 0) {
          uVar14 = uVar20 / uVar5;
        }
        *(int *)(param_3 + lVar9 * 4) = (int)uVar14;
        lVar23 = uVar20 - uVar14 * uVar5;
        bVar1 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar1);
    }
    lVar23 = (long)(int)~uVar18;
    param_3 = param_3 + (0x100000000 - lVar24 >> 0x1e);
  }
  FUN_032d59e0(param_3,0,lVar23);
  return;
}


