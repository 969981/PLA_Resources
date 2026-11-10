/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e2a64; name: FUN_006e2a64
 */


void FUN_006e2a64(int *param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  byte *pbVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  void *pvVar20;
  undefined8 *puVar21;
  void *pvVar22;
  long lVar23;
  byte *pbVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long *plStack_68;
  
  if (*param_1 == 2) {
    if ((char)param_1[1] == '\0') {
      puVar19 = *(ulong **)(param_1 + 2);
      if (puVar19 == *(ulong **)(param_1 + 4)) {
        puVar26 = *(undefined8 **)(param_1 + 10);
        puVar13 = *(undefined8 **)(param_1 + 0xc);
        if (puVar26 != puVar13) {
          puVar9 = *(ulong **)(param_1 + 6);
          puVar6 = (ulong *)*puVar26;
          if (puVar19 == puVar9) goto LAB_006e2f58;
          do {
            plVar5 = (long *)FUN_00612290();
            *puVar19 = 0;
            puVar19[1] = 0;
            puVar19[2] = 0;
            puVar19[3] = (ulong)plVar5;
            if ((*puVar6 & 1) == 0) {
              uVar11 = puVar6[1];
              uVar25 = *puVar6;
              puVar19[2] = puVar6[2];
              puVar19[1] = uVar11;
              *puVar19 = uVar25;
            }
            else {
              uVar25 = puVar6[1];
              if (0xffffffffffffffef < uVar25) {
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              pvVar20 = (void *)puVar6[2];
              if (uVar25 < 0x17) {
                pvVar22 = (void *)((long)puVar19 + 1);
                *(char *)puVar19 = (char)((int)uVar25 << 1);
                if (uVar25 != 0) goto LAB_006e2f28;
              }
              else {
                uVar11 = uVar25 + 0x10 & 0xfffffffffffffff0;
                pvVar22 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar11,1);
                puVar19[1] = uVar25;
                puVar19[2] = (ulong)pvVar22;
                *puVar19 = uVar11 | 1;
LAB_006e2f28:
                memcpy(pvVar22,pvVar20,uVar25);
              }
              *(undefined1 *)((long)pvVar22 + uVar25) = 0;
            }
            *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 0x20;
            while( true ) {
              puVar26 = puVar26 + 4;
              if (puVar26 == puVar13) {
                return;
              }
              puVar19 = *(ulong **)(param_1 + 4);
              puVar9 = *(ulong **)(param_1 + 6);
              puVar6 = (ulong *)*puVar26;
              if (puVar19 != puVar9) break;
LAB_006e2f58:
              lVar14 = (long)puVar9 - *(long *)(param_1 + 2);
              uVar11 = lVar14 >> 5;
              uVar25 = uVar11 + 1;
              if (uVar25 >> 0x3b != 0) {
                    /* try { // try from 006e31f4 to 006e3203 has its CatchHandler @ 006e3228 */
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar11 < 0x3ffffffffffffff) {
                uVar10 = lVar14 >> 4;
                if (uVar25 <= uVar10) {
                  uVar25 = uVar10;
                }
                if (uVar25 != 0) goto LAB_006e2f94;
                lVar14 = 0;
              }
              else {
                uVar25 = 0x7ffffffffffffff;
LAB_006e2f94:
                lVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                                   (*(long **)(param_1 + 8),uVar25 << 5,8);
              }
              puVar19 = (ulong *)(lVar14 + uVar11 * 0x20);
              plVar5 = (long *)FUN_00612290();
              *puVar19 = 0;
              puVar19[1] = 0;
              puVar19[2] = 0;
              puVar19[3] = (ulong)plVar5;
              if ((*puVar6 & 1) == 0) {
                uVar10 = puVar6[1];
                uVar11 = *puVar6;
                puVar19[2] = puVar6[2];
                puVar19[1] = uVar10;
                *puVar19 = uVar11;
              }
              else {
                uVar11 = puVar6[1];
                if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 006e3204 to 006e320b has its CatchHandler @ 006e320c */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                pvVar20 = (void *)puVar6[2];
                if (uVar11 < 0x17) {
                  pvVar22 = (void *)((long)puVar19 + 1);
                  *(char *)puVar19 = (char)((int)uVar11 << 1);
                  if (uVar11 != 0) goto LAB_006e3038;
                }
                else {
                  uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
                  pvVar22 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar10,1);
                  *puVar19 = uVar10 | 1;
                  puVar19[1] = uVar11;
                  puVar19[2] = (ulong)pvVar22;
LAB_006e3038:
                  memcpy(pvVar22,pvVar20,uVar11);
                }
                *(undefined1 *)((long)pvVar22 + uVar11) = 0;
              }
              pbVar24 = *(byte **)(param_1 + 2);
              pbVar8 = *(byte **)(param_1 + 4);
              puVar9 = puVar19 + 4;
              if ((long)pbVar8 - (long)pbVar24 == 0) {
                pbVar8 = pbVar24;
              }
              else {
                uVar11 = ((long)pbVar8 - (long)pbVar24) - 0x20;
                uVar1 = ((uint)(uVar11 >> 5) & 0x7ffffff) + 1;
                if ((uVar1 & 3) != 0) {
                  lVar23 = -((ulong)uVar1 & 3);
                  pbVar17 = pbVar8;
                  puVar6 = puVar19;
                  do {
                    uVar10 = *(ulong *)(pbVar17 + -0x20);
                    uVar29 = *(ulong *)(pbVar17 + -8);
                    uVar28 = *(ulong *)(pbVar17 + -0x10);
                    puVar19 = puVar6 + -4;
                    pbVar8 = pbVar17 + -0x20;
                    bVar4 = lVar23 != -1;
                    lVar23 = lVar23 + 1;
                    puVar6[-3] = *(ulong *)(pbVar17 + -0x18);
                    puVar6[-4] = uVar10;
                    puVar6[-1] = uVar29;
                    puVar6[-2] = uVar28;
                    pbVar17[-0x18] = 0;
                    pbVar17[-0x17] = 0;
                    pbVar17[-0x16] = 0;
                    pbVar17[-0x15] = 0;
                    pbVar17[-0x14] = 0;
                    pbVar17[-0x13] = 0;
                    pbVar17[-0x12] = 0;
                    pbVar17[-0x11] = 0;
                    pbVar17[-0x10] = 0;
                    pbVar17[-0xf] = 0;
                    pbVar17[-0xe] = 0;
                    pbVar17[-0xd] = 0;
                    pbVar17[-0xc] = 0;
                    pbVar17[-0xb] = 0;
                    pbVar17[-10] = 0;
                    pbVar17[-9] = 0;
                    pbVar17[-0x20] = 0;
                    pbVar17[-0x1f] = 0;
                    pbVar17[-0x1e] = 0;
                    pbVar17[-0x1d] = 0;
                    pbVar17[-0x1c] = 0;
                    pbVar17[-0x1b] = 0;
                    pbVar17[-0x1a] = 0;
                    pbVar17[-0x19] = 0;
                    pbVar17 = pbVar8;
                    puVar6 = puVar19;
                  } while (bVar4);
                }
                puVar6 = puVar19;
                if (0x5f < uVar11) {
                  do {
                    uVar11 = *(ulong *)(pbVar8 + -0x20);
                    uVar28 = *(ulong *)(pbVar8 + -8);
                    uVar10 = *(ulong *)(pbVar8 + -0x10);
                    puVar6[-3] = *(ulong *)(pbVar8 + -0x18);
                    puVar6[-4] = uVar11;
                    puVar6[-1] = uVar28;
                    puVar6[-2] = uVar10;
                    pbVar8[-0x20] = 0;
                    pbVar8[-0x1f] = 0;
                    pbVar8[-0x1e] = 0;
                    pbVar8[-0x1d] = 0;
                    pbVar8[-0x1c] = 0;
                    pbVar8[-0x1b] = 0;
                    pbVar8[-0x1a] = 0;
                    pbVar8[-0x19] = 0;
                    uVar11 = *(ulong *)(pbVar8 + -0x40);
                    uVar28 = *(ulong *)(pbVar8 + -0x28);
                    uVar10 = *(ulong *)(pbVar8 + -0x30);
                    pbVar8[-0x18] = 0;
                    pbVar8[-0x17] = 0;
                    pbVar8[-0x16] = 0;
                    pbVar8[-0x15] = 0;
                    pbVar8[-0x14] = 0;
                    pbVar8[-0x13] = 0;
                    pbVar8[-0x12] = 0;
                    pbVar8[-0x11] = 0;
                    pbVar8[-0x10] = 0;
                    pbVar8[-0xf] = 0;
                    pbVar8[-0xe] = 0;
                    pbVar8[-0xd] = 0;
                    pbVar8[-0xc] = 0;
                    pbVar8[-0xb] = 0;
                    pbVar8[-10] = 0;
                    pbVar8[-9] = 0;
                    puVar19 = puVar6 + -0x10;
                    puVar6[-7] = *(ulong *)(pbVar8 + -0x38);
                    puVar6[-8] = uVar11;
                    puVar6[-5] = uVar28;
                    puVar6[-6] = uVar10;
                    pbVar8[-0x40] = 0;
                    pbVar8[-0x3f] = 0;
                    pbVar8[-0x3e] = 0;
                    pbVar8[-0x3d] = 0;
                    pbVar8[-0x3c] = 0;
                    pbVar8[-0x3b] = 0;
                    pbVar8[-0x3a] = 0;
                    pbVar8[-0x39] = 0;
                    uVar11 = *(ulong *)(pbVar8 + -0x60);
                    uVar28 = *(ulong *)(pbVar8 + -0x48);
                    uVar10 = *(ulong *)(pbVar8 + -0x50);
                    pbVar8[-0x38] = 0;
                    pbVar8[-0x37] = 0;
                    pbVar8[-0x36] = 0;
                    pbVar8[-0x35] = 0;
                    pbVar8[-0x34] = 0;
                    pbVar8[-0x33] = 0;
                    pbVar8[-0x32] = 0;
                    pbVar8[-0x31] = 0;
                    pbVar8[-0x30] = 0;
                    pbVar8[-0x2f] = 0;
                    pbVar8[-0x2e] = 0;
                    pbVar8[-0x2d] = 0;
                    pbVar8[-0x2c] = 0;
                    pbVar8[-0x2b] = 0;
                    pbVar8[-0x2a] = 0;
                    pbVar8[-0x29] = 0;
                    puVar6[-0xb] = *(ulong *)(pbVar8 + -0x58);
                    puVar6[-0xc] = uVar11;
                    puVar6[-9] = uVar28;
                    puVar6[-10] = uVar10;
                    pbVar8[-0x60] = 0;
                    pbVar8[-0x5f] = 0;
                    pbVar8[-0x5e] = 0;
                    pbVar8[-0x5d] = 0;
                    pbVar8[-0x5c] = 0;
                    pbVar8[-0x5b] = 0;
                    pbVar8[-0x5a] = 0;
                    pbVar8[-0x59] = 0;
                    uVar11 = *(ulong *)(pbVar8 + -0x80);
                    uVar28 = *(ulong *)(pbVar8 + -0x68);
                    uVar10 = *(ulong *)(pbVar8 + -0x70);
                    pbVar8[-0x58] = 0;
                    pbVar8[-0x57] = 0;
                    pbVar8[-0x56] = 0;
                    pbVar8[-0x55] = 0;
                    pbVar8[-0x54] = 0;
                    pbVar8[-0x53] = 0;
                    pbVar8[-0x52] = 0;
                    pbVar8[-0x51] = 0;
                    pbVar8[-0x50] = 0;
                    pbVar8[-0x4f] = 0;
                    pbVar8[-0x4e] = 0;
                    pbVar8[-0x4d] = 0;
                    pbVar8[-0x4c] = 0;
                    pbVar8[-0x4b] = 0;
                    pbVar8[-0x4a] = 0;
                    pbVar8[-0x49] = 0;
                    puVar6[-0xf] = *(ulong *)(pbVar8 + -0x78);
                    puVar6[-0x10] = uVar11;
                    puVar6[-0xd] = uVar28;
                    puVar6[-0xe] = uVar10;
                    pbVar8[-0x70] = 0;
                    pbVar8[-0x6f] = 0;
                    pbVar8[-0x6e] = 0;
                    pbVar8[-0x6d] = 0;
                    pbVar8[-0x6c] = 0;
                    pbVar8[-0x6b] = 0;
                    pbVar8[-0x6a] = 0;
                    pbVar8[-0x69] = 0;
                    pbVar17 = pbVar8 + -0x80;
                    pbVar17[0] = 0;
                    pbVar17[1] = 0;
                    pbVar17[2] = 0;
                    pbVar17[3] = 0;
                    pbVar17[4] = 0;
                    pbVar17[5] = 0;
                    pbVar17[6] = 0;
                    pbVar17[7] = 0;
                    pbVar8[-0x78] = 0;
                    pbVar8[-0x77] = 0;
                    pbVar8[-0x76] = 0;
                    pbVar8[-0x75] = 0;
                    pbVar8[-0x74] = 0;
                    pbVar8[-0x73] = 0;
                    pbVar8[-0x72] = 0;
                    pbVar8[-0x71] = 0;
                    puVar6 = puVar19;
                    pbVar8 = pbVar17;
                  } while (pbVar24 != pbVar17);
                }
                pbVar24 = *(byte **)(param_1 + 4);
                pbVar8 = *(byte **)(param_1 + 2);
              }
              *(ulong **)(param_1 + 2) = puVar19;
              *(ulong **)(param_1 + 4) = puVar9;
              lVar23 = *(long *)(param_1 + 6);
              *(ulong *)(param_1 + 6) = lVar14 + uVar25 * 0x20;
              if (pbVar24 != pbVar8) {
                bVar2 = pbVar24[-0x20];
                pbVar17 = pbVar24 + -0x20;
                while( true ) {
                  pbVar3 = pbVar17;
                  if ((bVar2 & 1) != 0) {
                    (**(code **)(**(long **)(pbVar24 + -8) + 0x18))
                              (*(long **)(pbVar24 + -8),*(undefined8 *)(pbVar24 + -0x10),
                               *(ulong *)(pbVar24 + -0x20) & 0xfffffffffffffffe,1);
                  }
                  if (pbVar8 == pbVar3) break;
                  bVar2 = pbVar3[-0x20];
                  pbVar17 = pbVar3 + -0x20;
                  pbVar24 = pbVar3;
                }
              }
              if (pbVar8 != (byte *)0x0) {
                (**(code **)(**(long **)(param_1 + 8) + 0x18))
                          (*(long **)(param_1 + 8),pbVar8,lVar23 - (long)pbVar8,8);
              }
            }
          } while( true );
        }
      }
    }
    else if (*(long *)(param_1 + 10) == *(long *)(param_1 + 0xc)) {
      puVar19 = *(ulong **)(param_1 + 2);
      puVar9 = *(ulong **)(param_1 + 4);
      if (puVar19 != puVar9) {
        do {
          plStack_68 = (long *)FUN_00612290();
          local_70 = (void *)0x0;
          local_80 = 0;
          uStack_78 = 0;
          if ((*puVar19 & 1) == 0) {
            uStack_78 = puVar19[1];
            local_80 = *puVar19;
            local_70 = (void *)puVar19[2];
          }
          else {
            uVar25 = puVar19[1];
            if (0xffffffffffffffef < uVar25) {
                    /* try { // try from 006e31dc to 006e31e3 has its CatchHandler @ 006e32d0 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar20 = (void *)puVar19[2];
            if (uVar25 < 0x17) {
              local_80 = (ulong)(byte)((int)uVar25 << 1);
              pvVar22 = (void *)((ulong)&local_80 | 1);
              if (uVar25 != 0) goto LAB_006e2b50;
            }
            else {
              uVar11 = uVar25 + 0x10 & 0xfffffffffffffff0;
              pvVar22 = (void *)(**(code **)(*plStack_68 + 0x10))(plStack_68,uVar11,1);
              local_80 = uVar11 | 1;
              uStack_78 = uVar25;
              local_70 = pvVar22;
LAB_006e2b50:
              memcpy(pvVar22,pvVar20,uVar25);
            }
            *(undefined1 *)((long)pvVar22 + uVar25) = 0;
          }
          plVar5 = (long *)FUN_00612290();
          puVar6 = (ulong *)(**(code **)(*plVar5 + 0x10))(plVar5,0x20,8);
          plVar7 = (long *)FUN_00612290();
          pvVar20 = local_70;
          uVar25 = uStack_78;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = (ulong)plVar7;
          if ((local_80 & 1) == 0) {
            puVar6[2] = (ulong)local_70;
            puVar6[1] = uStack_78;
            *puVar6 = local_80;
          }
          else {
            if (0xffffffffffffffef < uStack_78) {
                    /* try { // try from 006e31e4 to 006e31eb has its CatchHandler @ 006e3280 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_78 < 0x17) {
              pvVar22 = (void *)((long)puVar6 + 1);
              *(char *)puVar6 = (char)((int)uStack_78 << 1);
              if (uStack_78 != 0) goto LAB_006e2c04;
            }
            else {
              uVar11 = uStack_78 + 0x10 & 0xfffffffffffffff0;
              pvVar22 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar11,1);
              *puVar6 = uVar11 | 1;
              puVar6[1] = uVar25;
              puVar6[2] = (ulong)pvVar22;
LAB_006e2c04:
              memcpy(pvVar22,pvVar20,uVar25);
            }
            *(undefined1 *)((long)pvVar22 + uVar25) = 0;
          }
          puVar26 = *(undefined8 **)(param_1 + 0xc);
          if (puVar26 < *(undefined8 **)(param_1 + 0xe)) {
            puVar26[2] = puVar6 + 4;
            puVar26[3] = plVar5;
            *puVar26 = puVar6;
            puVar26[1] = puVar6 + 4;
            *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 0x20;
          }
          else {
            lVar14 = *(long *)(param_1 + 10);
            lVar23 = (long)puVar26 - lVar14 >> 5;
            uVar25 = lVar23 + 1;
            if (uVar25 >> 0x3b != 0) {
                    /* try { // try from 006e31ec to 006e31f3 has its CatchHandler @ 006e322c */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar14 = (long)*(undefined8 **)(param_1 + 0xe) - lVar14;
            if ((ulong)(lVar14 >> 5) < 0x3ffffffffffffff) {
              uVar11 = lVar14 >> 4;
              if (uVar25 <= uVar11) {
                uVar25 = uVar11;
              }
              if (uVar25 != 0) goto LAB_006e2c90;
              lVar14 = 0;
            }
            else {
              uVar25 = 0x7ffffffffffffff;
LAB_006e2c90:
              lVar14 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                                 (*(long **)(param_1 + 0x10),uVar25 << 5,8);
            }
            puVar13 = (undefined8 *)(lVar14 + lVar23 * 0x20);
            puVar13[2] = puVar6 + 4;
            puVar13[3] = plVar5;
            *puVar13 = puVar6;
            puVar13[1] = puVar6 + 4;
            puVar18 = *(undefined8 **)(param_1 + 10);
            puVar21 = *(undefined8 **)(param_1 + 0xc);
            puVar26 = puVar13 + 4;
            if ((long)puVar21 - (long)puVar18 == 0) {
              puVar21 = puVar18;
            }
            else {
              uVar11 = ((long)puVar21 - (long)puVar18) - 0x20;
              puVar15 = puVar21;
              if (((uint)uVar11 >> 5 & 1) == 0) {
                puVar12 = puVar13 + -4;
                *puVar12 = 0;
                puVar13[-3] = 0;
                puVar13[-2] = 0;
                puVar13[-1] = puVar21[-1];
                puVar15 = puVar21 + -4;
                uVar27 = *puVar15;
                puVar13[-3] = puVar21[-3];
                *puVar12 = uVar27;
                puVar13[-2] = puVar21[-2];
                puVar21[-2] = 0;
                *puVar15 = 0;
                puVar21[-3] = 0;
                puVar13 = puVar12;
              }
              if (0x1f < uVar11) {
                lVar23 = 0;
                do {
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x10) = 0;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x20) = 0;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x18) = 0;
                  lVar16 = lVar23 + -0x40;
                  *(undefined8 *)((long)puVar13 + lVar23 + -8) =
                       *(undefined8 *)((long)puVar15 + lVar23 + -8);
                  uVar27 = *(undefined8 *)((long)puVar15 + lVar23 + -0x20);
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x18) =
                       *(undefined8 *)((long)puVar15 + lVar23 + -0x18);
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x20) = uVar27;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x10) =
                       *(undefined8 *)((long)puVar15 + lVar23 + -0x10);
                  *(undefined8 *)((long)puVar15 + lVar23 + -0x10) = 0;
                  *(undefined8 *)((long)puVar15 + lVar23 + -0x20) = 0;
                  *(undefined8 *)((long)puVar15 + lVar23 + -0x18) = 0;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x30) = 0;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x40) = 0;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x38) = 0;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x28) =
                       *(undefined8 *)((long)puVar15 + lVar23 + -0x28);
                  uVar27 = *(undefined8 *)((long)puVar15 + lVar23 + -0x40);
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x38) =
                       *(undefined8 *)((long)puVar15 + lVar23 + -0x38);
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x40) = uVar27;
                  *(undefined8 *)((long)puVar13 + lVar23 + -0x30) =
                       *(undefined8 *)((long)puVar15 + lVar23 + -0x30);
                  *(undefined8 *)((long)puVar15 + lVar23 + -0x40) = 0;
                  *(undefined8 *)((long)puVar15 + lVar23 + -0x38) = 0;
                  *(undefined8 *)((long)puVar15 + lVar23 + -0x30) = 0;
                  lVar23 = lVar16;
                } while ((long)puVar18 - (long)puVar15 != lVar16);
                puVar13 = (undefined8 *)((long)puVar13 + lVar16);
              }
              puVar18 = *(undefined8 **)(param_1 + 10);
              puVar21 = *(undefined8 **)(param_1 + 0xc);
            }
            lVar23 = *(long *)(param_1 + 0xe);
            *(ulong *)(param_1 + 0xe) = lVar14 + uVar25 * 0x20;
            *(undefined8 **)(param_1 + 10) = puVar13;
            *(undefined8 **)(param_1 + 0xc) = puVar26;
            if (puVar21 != puVar18) {
              pbVar24 = (byte *)puVar21[-4];
              puVar26 = puVar21 + -4;
              while( true ) {
                puVar13 = puVar26;
                if (pbVar24 != (byte *)0x0) {
                  pbVar8 = (byte *)puVar21[-3];
                  if (pbVar8 == pbVar24) {
                    pbVar8 = pbVar24;
                  }
                  else {
                    bVar2 = pbVar8[-0x20];
                    pbVar17 = pbVar8 + -0x20;
                    while( true ) {
                      if ((bVar2 & 1) != 0) {
                        (**(code **)(**(long **)(pbVar8 + -8) + 0x18))
                                  (*(long **)(pbVar8 + -8),*(undefined8 *)(pbVar8 + -0x10),
                                   *(ulong *)(pbVar8 + -0x20) & 0xfffffffffffffffe,1);
                      }
                      if (pbVar24 == pbVar17) break;
                      bVar2 = pbVar17[-0x20];
                      pbVar8 = pbVar17;
                      pbVar17 = pbVar17 + -0x20;
                    }
                    pbVar8 = (byte *)*puVar13;
                  }
                  puVar21[-3] = pbVar24;
                  (**(code **)(*(long *)puVar21[-1] + 0x18))
                            ((long *)puVar21[-1],pbVar8,puVar21[-2] - (long)pbVar8,8);
                }
                if (puVar13 == puVar18) break;
                pbVar24 = (byte *)puVar13[-4];
                puVar26 = puVar13 + -4;
                puVar21 = puVar13;
              }
            }
            if (puVar18 != (undefined8 *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                        (*(long **)(param_1 + 0x10),puVar18,lVar23 - (long)puVar18,8);
            }
          }
          if ((local_80 & 1) != 0) {
            (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,local_80 & 0xfffffffffffffffe,1);
          }
          puVar19 = puVar19 + 4;
        } while (puVar19 != puVar9);
      }
    }
  }
  return;
}


