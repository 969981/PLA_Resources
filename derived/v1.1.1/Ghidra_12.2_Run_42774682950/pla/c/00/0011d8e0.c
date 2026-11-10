/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0011d8e0; name: FUN_0011d8e0
 */


ulong * FUN_0011d8e0(ulong *param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  ulong uVar23;
  uint *puVar24;
  int *piVar25;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  ulong *local_70 [4];
  
  uVar15 = *param_1;
  uVar6 = *(uint *)((long)param_1 + 4);
  local_70[0] = (ulong *)param_1[1];
  piVar22 = param_2 + 2;
  uVar23 = (ulong)*param_2;
  uVar10 = (int)uVar15 - *param_2;
  uVar9 = uVar10 >> 2;
  uVar21 = uVar9;
  if ((uVar10 & 3) != 0) {
    uVar21 = uVar9 + 1;
  }
  uVar2 = uVar21 + uVar9;
  if (1 < (uVar10 & 3)) {
    uVar2 = uVar2 + 1;
  }
  uVar9 = uVar2 + uVar9;
  if ((uVar10 & 3) == 3) {
    uVar9 = uVar9 + 1;
  }
  local_70[1] = local_70[0] + uVar21;
  local_70[2] = local_70[0] + uVar2;
  local_70[3] = local_70[0] + uVar9;
  if (uVar23 != 0) {
    uVar28 = (ulong)~(uint)(0xffffffffL << ((ulong)uVar6 & 0x3f)) & 0xffff |
             (ulong)(uVar6 & 0xff) << 0x20;
    puVar13 = local_70[0] + uVar10;
    piVar26 = piVar22;
    if ((uVar23 & 3) != 0) {
      lVar27 = -(uVar23 & 3);
      piVar25 = piVar22;
      do {
        *puVar13 = uVar28;
        piVar26 = (int *)((long)piVar25 + 1);
        *(char *)((long)puVar13 + 5) = (char)*piVar25;
        puVar13 = puVar13 + 1;
        lVar27 = lVar27 + 1;
        piVar25 = piVar26;
      } while (lVar27 != 0);
    }
    if (2 < uVar23 - 1) {
      do {
        *puVar13 = uVar28;
        iVar20 = *piVar26;
        puVar13[1] = uVar28;
        *(char *)((long)puVar13 + 5) = (char)iVar20;
        uVar7 = *(undefined1 *)((long)piVar26 + 1);
        puVar13[2] = uVar28;
        *(undefined1 *)((long)puVar13 + 0xd) = uVar7;
        uVar7 = *(undefined1 *)((long)piVar26 + 2);
        puVar13[3] = uVar28;
        *(undefined1 *)((long)puVar13 + 0x15) = uVar7;
        puVar1 = (undefined1 *)((long)piVar26 + 3);
        piVar26 = piVar26 + 1;
        *(undefined1 *)((long)puVar13 + 0x1d) = *puVar1;
        puVar13 = puVar13 + 4;
      } while (piVar26 != (int *)((long)piVar22 + uVar23));
    }
  }
  if (((long)param_2[1] & 0x3fffffffffffffffU) != 0) {
    puVar24 = (uint *)(param_2 + 0x42);
    uVar21 = 0;
    puVar3 = puVar24 + param_2[1];
    uVar9 = (int)uVar15 + 0xffff;
    puVar13 = param_1;
    do {
      while( true ) {
        param_1 = local_70[3];
        uVar2 = *puVar24;
        uVar10 = uVar2 & 0xffff;
        if (4 < uVar10) break;
        if (uVar10 != 0) {
          uVar14 = ~(-1 << (ulong)(uVar2 & 0x1f)) << (ulong)(uVar21 & 3);
          uVar14 = uVar14 | uVar14 >> 4;
          puVar13 = (ulong *)0x0;
          do {
            uVar12 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
            uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
            lVar27 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
            puVar18 = local_70[lVar27];
            iVar20 = uVar10 + (int)puVar13;
            uVar12 = (int)puVar13 + 1;
            puVar13 = (ulong *)(ulong)uVar12;
            local_70[lVar27] = puVar18 + 1;
            uVar14 = uVar14 - 1 & uVar14;
            uVar19 = (uVar6 - 0x1f) + (int)LZCOUNT(iVar20);
            *(char *)((long)puVar18 + 5) = (char)(uVar2 >> 0x10);
            *(char *)((long)puVar18 + 4) = (char)uVar19;
            *(uint *)puVar18 = ~(-1 << (ulong)(uVar19 & 0x1f)) & 0xffff;
            *(ushort *)((long)puVar18 + 6) =
                 (ushort)(iVar20 << (ulong)(uVar19 & 0x1f)) & (ushort)uVar9;
          } while (uVar10 != uVar12);
        }
joined_r0x0011e280:
        uVar21 = uVar10 + uVar21;
        puVar24 = puVar24 + 1;
        if (puVar24 == puVar3) {
          return puVar13;
        }
      }
      uVar15 = (ulong)(uVar2 >> 0x10 & 0xff);
      iVar20 = uVar6 + (int)LZCOUNT(uVar10);
      uVar12 = iVar20 - 0x1f;
      uVar14 = 1 << (ulong)(uVar12 & 0x1f);
      iVar8 = 1 << (ulong)(-(int)LZCOUNT(uVar10) & 0x1f);
      uVar28 = (ulong)uVar14 << 0x30;
      uVar23 = (ulong)(uVar14 - 1 >> 1 & 0xffff) | uVar15 << 0x28;
      uVar15 = uVar15 << 0x28 | (ulong)(uVar12 & 0xff) << 0x20 |
               (ulong)(uVar10 << (ulong)(uVar12 & 0x1f) & uVar9) << 0x30 |
               (ulong)(uVar14 - 1 & 0xffff);
      uVar2 = uVar10 + (uVar21 - 1 & 3);
      uVar19 = iVar8 - uVar10;
      uVar11 = uVar2 >> 2;
      uVar17 = uVar19 - uVar11;
      if ((int)uVar19 < (int)uVar11) {
        if (0 < (int)uVar19) {
          uVar2 = uVar19 & 7;
          puVar13 = (ulong *)(ulong)(iVar8 + ~uVar10);
          puVar18 = local_70[0];
          if (6 < iVar8 + ~uVar10) {
            iVar29 = (uVar2 + uVar10) - iVar8;
            do {
              uVar16 = uVar28 + uVar15 + uVar28;
              uVar4 = uVar16 + uVar28;
              *local_70[0] = uVar15;
              local_70[0][1] = uVar15 + uVar28;
              uVar15 = uVar28 + uVar4;
              local_70[0][2] = uVar16;
              local_70[0][3] = uVar4;
              uVar16 = uVar15 + uVar28;
              local_70[0][4] = uVar15;
              local_70[0][5] = uVar16;
              uVar16 = uVar28 + uVar16;
              puVar13 = local_70[0] + 8;
              uVar15 = uVar16 + uVar28;
              iVar29 = iVar29 + 8;
              local_70[0][6] = uVar16;
              local_70[0][7] = uVar15;
              uVar15 = uVar28 + uVar15;
              local_70[0] = puVar13;
              puVar18 = puVar13;
            } while (iVar29 != 0);
          }
          local_70[0] = puVar13;
          if (uVar2 != 0) {
            iVar29 = -uVar2;
            do {
              local_70[0] = puVar18 + 1;
              *puVar18 = uVar15;
              uVar15 = uVar15 + uVar28;
              iVar29 = iVar29 + 1;
              puVar18 = local_70[0];
            } while (iVar29 != 0);
          }
        }
        uVar12 = iVar20 - 0x20;
        uVar15 = uVar23 | (ulong)(uVar12 & 0xff) << 0x20;
        uVar28 = ((ulong)uVar14 & 0xffff) << 0x2f;
        if (0 < (int)(uVar11 - uVar19)) {
          uVar2 = uVar11 - uVar19 & 7;
          if (6 < (uVar11 + uVar10 + -1) - iVar8) {
            iVar20 = ((iVar8 + uVar2) - uVar11) - uVar10;
            puVar13 = local_70[0];
            do {
              uVar16 = uVar28 + uVar15 + uVar28;
              uVar4 = uVar16 + uVar28;
              *puVar13 = uVar15;
              puVar13[1] = uVar15 + uVar28;
              uVar15 = uVar28 + uVar4;
              puVar13[2] = uVar16;
              puVar13[3] = uVar4;
              uVar16 = uVar15 + uVar28;
              puVar13[4] = uVar15;
              puVar13[5] = uVar16;
              uVar16 = uVar28 + uVar16;
              local_70[0] = puVar13 + 8;
              uVar15 = uVar16 + uVar28;
              iVar20 = iVar20 + 8;
              puVar13[6] = uVar16;
              puVar13[7] = uVar15;
              uVar15 = uVar28 + uVar15;
              puVar13 = local_70[0];
            } while (iVar20 != 0);
          }
          if (uVar2 != 0) {
            iVar20 = -uVar2;
            puVar13 = local_70[0];
            do {
              local_70[0] = puVar13 + 1;
              *puVar13 = uVar15;
              uVar15 = uVar15 + uVar28;
              iVar20 = iVar20 + 1;
              puVar13 = local_70[0];
            } while (iVar20 != 0);
          }
        }
        uVar17 = uVar10;
      }
      else {
        uVar14 = uVar2 >> 2 & 7;
        puVar13 = (ulong *)(ulong)uVar2;
        puVar18 = local_70[0];
        if (6 < uVar11 - 1) {
          iVar20 = uVar14 - uVar11;
          do {
            uVar16 = uVar28 + uVar15 + uVar28;
            uVar4 = uVar16 + uVar28;
            *local_70[0] = uVar15;
            local_70[0][1] = uVar15 + uVar28;
            uVar15 = uVar28 + uVar4;
            local_70[0][2] = uVar16;
            local_70[0][3] = uVar4;
            uVar16 = uVar15 + uVar28;
            local_70[0][4] = uVar15;
            local_70[0][5] = uVar16;
            uVar16 = uVar28 + uVar16;
            puVar13 = local_70[0] + 8;
            uVar15 = uVar16 + uVar28;
            iVar20 = iVar20 + 8;
            local_70[0][6] = uVar16;
            local_70[0][7] = uVar15;
            uVar15 = uVar28 + uVar15;
            local_70[0] = puVar13;
            puVar18 = puVar13;
          } while (iVar20 != 0);
        }
        local_70[0] = puVar13;
        if (uVar14 != 0) {
          iVar20 = -uVar14;
          do {
            local_70[0] = puVar18 + 1;
            *puVar18 = uVar15;
            uVar15 = uVar15 + uVar28;
            iVar20 = iVar20 + 1;
            puVar18 = local_70[0];
          } while (iVar20 != 0);
        }
      }
      uVar2 = uVar10 + (uVar21 & 3 ^ 2);
      uVar14 = (uVar21 + 2 & 3) + uVar10 >> 2;
      uVar11 = uVar2 >> 2;
      uVar19 = uVar17 - uVar14;
      if ((int)uVar17 < (int)uVar14) {
        if (0 < (int)uVar17) {
          uVar2 = uVar17 & 7;
          puVar13 = (ulong *)(ulong)(uVar17 - 1);
          puVar18 = local_70[1];
          if (6 < uVar17 - 1) {
            iVar20 = uVar2 - uVar17;
            do {
              uVar16 = uVar28 + uVar15 + uVar28;
              uVar4 = uVar16 + uVar28;
              *local_70[1] = uVar15;
              local_70[1][1] = uVar15 + uVar28;
              uVar15 = uVar28 + uVar4;
              local_70[1][2] = uVar16;
              local_70[1][3] = uVar4;
              uVar16 = uVar15 + uVar28;
              local_70[1][4] = uVar15;
              local_70[1][5] = uVar16;
              uVar16 = uVar28 + uVar16;
              puVar13 = local_70[1] + 8;
              uVar15 = uVar16 + uVar28;
              iVar20 = iVar20 + 8;
              local_70[1][6] = uVar16;
              local_70[1][7] = uVar15;
              uVar15 = uVar28 + uVar15;
              local_70[1] = puVar13;
              puVar18 = puVar13;
            } while (iVar20 != 0);
          }
          local_70[1] = puVar13;
          if (uVar2 != 0) {
            iVar20 = -uVar2;
            do {
              local_70[1] = puVar18 + 1;
              *puVar18 = uVar15;
              uVar15 = uVar15 + uVar28;
              iVar20 = iVar20 + 1;
              puVar18 = local_70[1];
            } while (iVar20 != 0);
          }
        }
        uVar12 = uVar12 - 1;
        uVar15 = uVar23 | (ulong)(uVar12 & 0xff) << 0x20;
        uVar28 = uVar28 >> 1;
        if (0 < (int)(uVar14 - uVar17)) {
          uVar2 = uVar11 - uVar17 & 7;
          if (6 < uVar11 + ~uVar17) {
            iVar20 = (uVar17 + uVar2) - uVar11;
            uVar16 = uVar15;
            puVar13 = local_70[1];
            do {
              uVar15 = uVar16 + uVar28 * 8;
              *puVar13 = uVar16;
              puVar13[1] = uVar28 + uVar16;
              puVar13[2] = uVar28 * 2 + uVar16;
              puVar13[3] = uVar28 * 3 + uVar16;
              puVar13[4] = uVar28 * 4 + uVar16;
              puVar13[5] = uVar28 * 5 + uVar16;
              local_70[1] = puVar13 + 8;
              puVar13[6] = uVar28 * 6 + uVar16;
              puVar13[7] = uVar28 * 7 + uVar16;
              iVar20 = iVar20 + 8;
              uVar16 = uVar15;
              puVar13 = local_70[1];
            } while (iVar20 != 0);
          }
          if (uVar2 != 0) {
            iVar20 = -uVar2;
            puVar13 = local_70[1];
            do {
              local_70[1] = puVar13 + 1;
              *puVar13 = uVar15;
              uVar15 = uVar15 + uVar28;
              iVar20 = iVar20 + 1;
              puVar13 = local_70[1];
            } while (iVar20 != 0);
          }
        }
        uVar19 = uVar10;
      }
      else if (uVar14 != 0) {
        uVar14 = uVar2 >> 2 & 7;
        puVar13 = (ulong *)(ulong)uVar2;
        puVar18 = local_70[1];
        if (6 < uVar11 - 1) {
          iVar20 = uVar14 - uVar11;
          do {
            uVar16 = uVar28 + uVar15 + uVar28;
            uVar4 = uVar16 + uVar28;
            *local_70[1] = uVar15;
            local_70[1][1] = uVar15 + uVar28;
            uVar15 = uVar28 + uVar4;
            local_70[1][2] = uVar16;
            local_70[1][3] = uVar4;
            uVar16 = uVar15 + uVar28;
            local_70[1][4] = uVar15;
            local_70[1][5] = uVar16;
            uVar16 = uVar28 + uVar16;
            puVar13 = local_70[1] + 8;
            uVar15 = uVar16 + uVar28;
            iVar20 = iVar20 + 8;
            local_70[1][6] = uVar16;
            local_70[1][7] = uVar15;
            uVar15 = uVar28 + uVar15;
            local_70[1] = puVar13;
            puVar18 = puVar13;
          } while (iVar20 != 0);
        }
        local_70[1] = puVar13;
        if (uVar14 != 0) {
          iVar20 = -uVar14;
          do {
            local_70[1] = puVar18 + 1;
            *puVar18 = uVar15;
            uVar15 = uVar15 + uVar28;
            iVar20 = iVar20 + 1;
            puVar18 = local_70[1];
          } while (iVar20 != 0);
        }
      }
      uVar2 = uVar10 + (uVar21 + 1 & 3);
      uVar17 = uVar2 >> 2;
      uVar14 = uVar19 - uVar17;
      if ((int)uVar19 < (int)uVar17) {
        if (0 < (int)uVar19) {
          uVar2 = uVar19 & 7;
          puVar13 = (ulong *)(ulong)(uVar19 - 1);
          puVar18 = local_70[2];
          if (6 < uVar19 - 1) {
            iVar20 = uVar2 - uVar19;
            do {
              uVar16 = uVar28 * 2 + uVar15;
              uVar4 = uVar15 + uVar28;
              iVar20 = iVar20 + 8;
              uVar5 = uVar28 + uVar16;
              *local_70[2] = uVar15;
              local_70[2][1] = uVar4;
              uVar15 = uVar28 + uVar5;
              local_70[2][2] = uVar16;
              local_70[2][3] = uVar5;
              uVar16 = uVar28 + uVar15;
              uVar5 = uVar28 + uVar16;
              local_70[2][4] = uVar15;
              local_70[2][5] = uVar16;
              puVar13 = local_70[2] + 8;
              uVar15 = uVar28 + uVar5;
              local_70[2][6] = uVar5;
              local_70[2][7] = uVar15;
              uVar15 = uVar28 + uVar15;
              local_70[2] = puVar13;
            } while (iVar20 != 0);
            uVar15 = uVar4 + uVar28 * 7;
            puVar18 = puVar13;
          }
          local_70[2] = puVar13;
          if (uVar2 != 0) {
            iVar20 = -uVar2;
            do {
              local_70[2] = puVar18 + 1;
              *puVar18 = uVar15;
              uVar15 = uVar15 + uVar28;
              iVar20 = iVar20 + 1;
              puVar18 = local_70[2];
            } while (iVar20 != 0);
          }
        }
        uVar12 = uVar12 - 1;
        uVar15 = uVar23 | (ulong)(uVar12 & 0xff) << 0x20;
        uVar28 = uVar28 >> 1;
        if (0 < (int)(uVar17 - uVar19)) {
          uVar2 = uVar17 - uVar19 & 7;
          if (6 < uVar17 + ~uVar19) {
            iVar20 = (uVar19 + uVar2) - uVar17;
            uVar16 = uVar15;
            puVar13 = local_70[2];
            do {
              *puVar13 = uVar16;
              puVar13[1] = uVar16 + uVar28;
              uVar15 = uVar16 + uVar28 + uVar28 * 7;
              puVar13[2] = uVar28 * 2 + uVar16;
              puVar13[3] = uVar28 * 3 + uVar16;
              local_70[2] = puVar13 + 8;
              puVar13[4] = uVar28 * 4 + uVar16;
              puVar13[5] = uVar28 * 5 + uVar16;
              iVar20 = iVar20 + 8;
              puVar13[6] = uVar28 * 6 + uVar16;
              puVar13[7] = uVar28 * 7 + uVar16;
              uVar16 = uVar15;
              puVar13 = local_70[2];
            } while (iVar20 != 0);
          }
          if (uVar2 != 0) {
            iVar20 = -uVar2;
            puVar13 = local_70[2];
            do {
              local_70[2] = puVar13 + 1;
              *puVar13 = uVar15;
              uVar15 = uVar15 + uVar28;
              iVar20 = iVar20 + 1;
              puVar13 = local_70[2];
            } while (iVar20 != 0);
          }
        }
        uVar14 = uVar10;
      }
      else if (uVar17 != 0) {
        uVar19 = uVar2 >> 2 & 7;
        puVar13 = (ulong *)(ulong)uVar2;
        puVar18 = local_70[2];
        if (6 < uVar17 - 1) {
          iVar20 = uVar19 - uVar17;
          do {
            uVar16 = uVar28 * 2 + uVar15;
            uVar4 = uVar15 + uVar28;
            iVar20 = iVar20 + 8;
            uVar5 = uVar28 + uVar16;
            *local_70[2] = uVar15;
            local_70[2][1] = uVar4;
            uVar15 = uVar28 + uVar5;
            local_70[2][2] = uVar16;
            local_70[2][3] = uVar5;
            uVar16 = uVar28 + uVar15;
            uVar5 = uVar28 + uVar16;
            local_70[2][4] = uVar15;
            local_70[2][5] = uVar16;
            puVar13 = local_70[2] + 8;
            uVar15 = uVar28 + uVar5;
            local_70[2][6] = uVar5;
            local_70[2][7] = uVar15;
            uVar15 = uVar28 + uVar15;
            local_70[2] = puVar13;
          } while (iVar20 != 0);
          uVar15 = uVar4 + uVar28 * 7;
          puVar18 = puVar13;
        }
        local_70[2] = puVar13;
        if (uVar19 != 0) {
          iVar20 = -uVar19;
          do {
            local_70[2] = puVar18 + 1;
            *puVar18 = uVar15;
            uVar15 = uVar15 + uVar28;
            iVar20 = iVar20 + 1;
            puVar18 = local_70[2];
          } while (iVar20 != 0);
        }
      }
      uVar2 = uVar10 + (uVar21 & 3);
      uVar17 = uVar2 >> 2;
      uVar19 = uVar17 - uVar14;
      if (uVar19 != 0 && (int)uVar14 <= (int)uVar17) {
        puVar13 = (ulong *)(ulong)(uVar14 - 1);
        puVar18 = local_70[3];
        if (0 < (int)uVar14) {
          uVar2 = uVar14 & 7;
          if (6 < uVar14 - 1) {
            iVar20 = uVar2 - uVar14;
            do {
              uVar16 = uVar28 * 2 + uVar15;
              uVar4 = uVar15 + uVar28;
              iVar20 = iVar20 + 8;
              uVar5 = uVar28 + uVar16;
              *local_70[3] = uVar15;
              local_70[3][1] = uVar4;
              uVar15 = uVar28 + uVar5;
              local_70[3][2] = uVar16;
              local_70[3][3] = uVar5;
              uVar16 = uVar28 + uVar15;
              uVar5 = uVar28 + uVar16;
              local_70[3][4] = uVar15;
              local_70[3][5] = uVar16;
              puVar13 = local_70[3] + 8;
              uVar15 = uVar28 + uVar5;
              local_70[3][6] = uVar5;
              local_70[3][7] = uVar15;
              uVar15 = uVar28 + uVar15;
              local_70[3] = puVar13;
            } while (iVar20 != 0);
            uVar15 = uVar4 + uVar28 * 7;
          }
          puVar18 = puVar13;
          if (uVar2 != 0) {
            iVar20 = -uVar2;
            do {
              puVar18 = local_70[3] + 1;
              *local_70[3] = uVar15;
              uVar15 = uVar15 + uVar28;
              iVar20 = iVar20 + 1;
              local_70[3] = puVar18;
            } while (iVar20 != 0);
          }
        }
        if (0 < (int)uVar19) {
          uVar23 = uVar23 | (ulong)(uVar12 - 1 & 0xff) << 0x20;
          puVar13 = (ulong *)(ulong)(uVar17 + ~uVar14);
          uVar28 = uVar28 >> 1;
          uVar19 = uVar19 & 7;
          if (6 < uVar17 + ~uVar14) {
            iVar20 = (uVar14 + uVar19) - uVar17;
            uVar15 = uVar23;
            do {
              *puVar18 = uVar15;
              puVar18[1] = uVar15 + uVar28;
              uVar23 = uVar15 + uVar28 + uVar28 * 7;
              puVar18[2] = uVar28 * 2 + uVar15;
              puVar18[3] = uVar28 * 3 + uVar15;
              puVar13 = puVar18 + 8;
              puVar18[4] = uVar28 * 4 + uVar15;
              puVar18[5] = uVar28 * 5 + uVar15;
              iVar20 = iVar20 + 8;
              puVar18[6] = uVar28 * 6 + uVar15;
              puVar18[7] = uVar28 * 7 + uVar15;
              uVar15 = uVar23;
              puVar18 = puVar13;
            } while (iVar20 != 0);
          }
          if (uVar19 != 0) {
            iVar20 = -uVar19;
            do {
              puVar13 = puVar18 + 1;
              *puVar18 = uVar23;
              uVar23 = uVar23 + uVar28;
              iVar20 = iVar20 + 1;
              puVar18 = puVar13;
            } while (iVar20 != 0);
          }
          goto LAB_0011e3ac;
        }
        local_70[3] = puVar18;
        puVar13 = puVar18;
        goto joined_r0x0011e280;
      }
      if (uVar17 != 0) {
        puVar13 = (ulong *)(ulong)(uVar17 - 1);
        uVar2 = uVar2 >> 2 & 7;
        if (6 < uVar17 - 1) {
          iVar20 = uVar2 - uVar17;
          do {
            uVar23 = uVar28 * 2 + uVar15;
            uVar4 = uVar28 + uVar23;
            uVar16 = uVar15 + uVar28;
            local_70[3][2] = uVar23;
            local_70[3][3] = uVar4;
            uVar4 = uVar28 + uVar4;
            *local_70[3] = uVar15;
            local_70[3][1] = uVar16;
            uVar15 = uVar28 + uVar4;
            uVar23 = uVar28 + uVar15;
            local_70[3][4] = uVar4;
            local_70[3][5] = uVar15;
            puVar13 = local_70[3] + 8;
            uVar15 = uVar28 + uVar23;
            iVar20 = iVar20 + 8;
            local_70[3][6] = uVar23;
            local_70[3][7] = uVar15;
            uVar15 = uVar28 + uVar15;
            local_70[3] = puVar13;
          } while (iVar20 != 0);
          uVar15 = uVar16 + uVar28 * 7;
        }
        if (uVar2 != 0) {
          iVar20 = -uVar2;
          do {
            puVar13 = local_70[3] + 1;
            *local_70[3] = uVar15;
            uVar15 = uVar15 + uVar28;
            iVar20 = iVar20 + 1;
            local_70[3] = puVar13;
          } while (iVar20 != 0);
        }
LAB_0011e3ac:
        local_70[3] = puVar13;
        goto joined_r0x0011e280;
      }
      puVar24 = puVar24 + 1;
      uVar21 = uVar10 + uVar21;
      puVar13 = param_1;
    } while (puVar24 != puVar3);
  }
  return param_1;
}


