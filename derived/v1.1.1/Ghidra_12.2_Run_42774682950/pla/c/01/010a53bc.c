/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a53bc; name: FUN_010a53bc
 */


void FUN_010a53bc(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  uint *puVar16;
  ulong uVar17;
  ushort *puVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  uint *puVar23;
  undefined1 *puVar24;
  uint *unaff_x23;
  undefined1 *puVar25;
  uint *puVar26;
  uint *unaff_x26;
  undefined8 uVar27;
  uint *unaff_x27;
  uint *puVar28;
  float fVar29;
  ulong local_250;
  int *local_248;
  int *local_240;
  int *local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  undefined1 *local_210;
  long local_208;
  undefined1 *local_200;
  uint *puStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  long *local_1d8;
  uint *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  long local_1b0;
  float local_1a8;
  long local_1a0;
  undefined1 *local_198;
  uint *puStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  long *local_170;
  uint *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  long local_148;
  float local_140;
  long local_138;
  uint *local_130;
  uint *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  long *local_108;
  uint *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  long local_e0;
  float local_d8;
  long local_d0;
  uint *local_c8;
  uint *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long *local_a0;
  uint *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  float local_70;
  
  puVar16 = *(uint **)(*(long *)(param_1 + 0x58) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    plVar7 = (long *)(param_1 + 0x4af8);
    plVar14 = (long *)(param_1 + 0x4b28);
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar4 = *puVar18;
      if (uVar4 < 5) {
        lVar22 = 0;
        lVar8 = 0;
        uVar17 = 0;
      }
      else {
        iVar6 = 0;
        if ((ulong)puVar18[2] != 0) {
          iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[2]);
        }
        lVar8 = (long)iVar6;
        if (uVar4 < 7) {
          lVar22 = 0;
        }
        else {
          iVar6 = 0;
          if ((ulong)puVar18[3] != 0) {
            iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[3]);
          }
          lVar22 = (long)iVar6;
          if (8 < uVar4) {
            uVar17 = 0;
            if ((ulong)puVar18[4] != 0) {
              uVar17 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar18[4]);
            }
            goto LAB_010a5490;
          }
        }
        uVar17 = 0;
      }
LAB_010a5490:
      unaff_x23 = *(uint **)(param_1 + 0x4b00);
      puVar26 = (uint *)(lVar8 << 0x20 | lVar22 << 0x10 | uVar17);
      if (unaff_x23 == (uint *)0x0) {
LAB_010a5568:
        plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x4b30) + 0x10))
                                   (*(long **)(param_1 + 0x4b30),0x20,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4b30) + 0xb8))();
        }
        unaff_x27 = *(uint **)(param_1 + 0x4b30);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          plVar9[2] = (long)puVar26;
          plVar9[3] = (long)piVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
          *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = unaff_x27;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar9[2] = (long)puVar26;
          plVar9[3] = (long)piVar1;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar9 = 0;
        plVar9[1] = (long)puVar26;
        fVar29 = (float)(*(long *)(param_1 + 0x4b50) + 1);
        if ((unaff_x23 == (uint *)0x0) || (*(float *)(param_1 + 0x4b58) * (float)unaff_x23 < fVar29)
           ) {
          uVar17 = (ulong)(unaff_x23 < (uint *)0x3 || ((ulong)unaff_x23 & (long)unaff_x23 - 1U) != 0
                          ) | (long)unaff_x23 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4b58));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010af9bc(plVar7,uVar20);
          unaff_x23 = *(uint **)(param_1 + 0x4b00);
          if (((ulong)unaff_x23 & (long)unaff_x23 - 1U) == 0) {
            unaff_x26 = (uint *)((long)unaff_x23 - 1U & (ulong)puVar26);
          }
          else if (puVar26 < unaff_x23) {
            unaff_x26 = puVar26;
          }
          else {
            uVar17 = 0;
            if (unaff_x23 != (uint *)0x0) {
              uVar17 = (ulong)puVar26 / (ulong)unaff_x23;
            }
            unaff_x26 = (uint *)((long)puVar26 - uVar17 * (long)unaff_x23);
          }
        }
        plVar10 = *(long **)(*plVar7 + (long)unaff_x26 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = *plVar14;
          *plVar14 = (long)plVar9;
          *(long **)(*plVar7 + (long)unaff_x26 * 8) = plVar14;
          if (*plVar9 != 0) {
            puVar26 = *(uint **)(*plVar9 + 8);
            if (((ulong)unaff_x23 & (long)unaff_x23 - 1U) == 0) {
              puVar26 = (uint *)((ulong)puVar26 & (long)unaff_x23 - 1U);
            }
            else if (unaff_x23 <= puVar26) {
              uVar17 = 0;
              if (unaff_x23 != (uint *)0x0) {
                uVar17 = (ulong)puVar26 / (ulong)unaff_x23;
              }
              puVar26 = (uint *)((long)puVar26 - uVar17 * (long)unaff_x23);
            }
            plVar10 = (long *)(*plVar7 + (long)puVar26 * 8);
            goto LAB_010a561c;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_010a561c:
          *plVar10 = (long)plVar9;
        }
        *(long *)(param_1 + 0x4b50) = *(long *)(param_1 + 0x4b50) + 1;
      }
      else {
        uVar17 = (long)unaff_x23 - ((ulong)unaff_x23 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          unaff_x26 = (uint *)((long)unaff_x23 - 1U & (ulong)puVar26);
        }
        else {
          unaff_x26 = puVar26;
          if (unaff_x23 <= puVar26) {
            uVar20 = 0;
            if (unaff_x23 != (uint *)0x0) {
              uVar20 = (ulong)puVar26 / (ulong)unaff_x23;
            }
            unaff_x26 = (uint *)((long)puVar26 - uVar20 * (long)unaff_x23);
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)unaff_x26 * 8);
        if (plVar9 == (long *)0x0) goto LAB_010a5568;
        if (uVar17 < 2) {
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) ||
               ((uint *)plVar9[1] != puVar26 &&
                (uint *)((ulong)plVar9[1] & (long)unaff_x23 - 1U) != unaff_x26)) goto LAB_010a5568;
          } while ((uint *)plVar9[2] != puVar26);
        }
        else {
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_010a5568;
            puVar11 = (uint *)plVar9[1];
            if (puVar11 != puVar26) {
              if (unaff_x23 <= puVar11) {
                uVar17 = 0;
                if (unaff_x23 != (uint *)0x0) {
                  uVar17 = (ulong)puVar11 / (ulong)unaff_x23;
                }
                puVar11 = (uint *)((long)puVar11 - uVar17 * (long)unaff_x23);
              }
              if (puVar11 != unaff_x26) goto LAB_010a5568;
            }
          } while ((uint *)plVar9[2] != puVar26);
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar12);
  }
  puVar16 = *(uint **)(*(long *)(param_1 + 0x88) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    plVar7 = (long *)(param_1 + 0x4b60);
    plVar14 = (long *)(param_1 + 0x4b90);
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar4 = *puVar18;
      if (uVar4 < 5) {
        lVar22 = 0;
        lVar8 = 0;
        uVar17 = 0;
      }
      else {
        iVar6 = 0;
        if ((ulong)puVar18[2] != 0) {
          iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[2]);
        }
        lVar8 = (long)iVar6;
        if (uVar4 < 7) {
          lVar22 = 0;
        }
        else {
          iVar6 = 0;
          if ((ulong)puVar18[3] != 0) {
            iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[3]);
          }
          lVar22 = (long)iVar6;
          if (8 < uVar4) {
            uVar17 = 0;
            if ((ulong)puVar18[4] != 0) {
              uVar17 = (ulong)(*(char *)((long)piVar1 + (ulong)puVar18[4]) != '\0');
            }
            goto LAB_010a5764;
          }
        }
        uVar17 = 0;
      }
LAB_010a5764:
      unaff_x23 = *(uint **)(param_1 + 0x4b68);
      puVar26 = (uint *)(lVar8 << 0x20 | lVar22 << 0x10 | uVar17);
      if (unaff_x23 == (uint *)0x0) {
LAB_010a5838:
        plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x4b98) + 0x10))
                                   (*(long **)(param_1 + 0x4b98),0x20,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4b98) + 0xb8))();
        }
        unaff_x27 = *(uint **)(param_1 + 0x4b98);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          plVar9[2] = (long)puVar26;
          plVar9[3] = (long)piVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
          *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = unaff_x27;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar9[2] = (long)puVar26;
          plVar9[3] = (long)piVar1;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar9 = 0;
        plVar9[1] = (long)puVar26;
        fVar29 = (float)(*(long *)(param_1 + 0x4bb8) + 1);
        if ((unaff_x23 == (uint *)0x0) || (*(float *)(param_1 + 0x4bc0) * (float)unaff_x23 < fVar29)
           ) {
          uVar17 = (ulong)(unaff_x23 < (uint *)0x3 || ((ulong)unaff_x23 & (long)unaff_x23 - 1U) != 0
                          ) | (long)unaff_x23 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4bc0));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010afd68(plVar7,uVar20);
          unaff_x23 = *(uint **)(param_1 + 0x4b68);
          if (((ulong)unaff_x23 & (long)unaff_x23 - 1U) == 0) {
            unaff_x26 = (uint *)((long)unaff_x23 - 1U & (ulong)puVar26);
          }
          else if (puVar26 < unaff_x23) {
            unaff_x26 = puVar26;
          }
          else {
            uVar17 = 0;
            if (unaff_x23 != (uint *)0x0) {
              uVar17 = (ulong)puVar26 / (ulong)unaff_x23;
            }
            unaff_x26 = (uint *)((long)puVar26 - uVar17 * (long)unaff_x23);
          }
        }
        plVar10 = *(long **)(*plVar7 + (long)unaff_x26 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = *plVar14;
          *plVar14 = (long)plVar9;
          *(long **)(*plVar7 + (long)unaff_x26 * 8) = plVar14;
          if (*plVar9 != 0) {
            puVar26 = *(uint **)(*plVar9 + 8);
            if (((ulong)unaff_x23 & (long)unaff_x23 - 1U) == 0) {
              puVar26 = (uint *)((ulong)puVar26 & (long)unaff_x23 - 1U);
            }
            else if (unaff_x23 <= puVar26) {
              uVar17 = 0;
              if (unaff_x23 != (uint *)0x0) {
                uVar17 = (ulong)puVar26 / (ulong)unaff_x23;
              }
              puVar26 = (uint *)((long)puVar26 - uVar17 * (long)unaff_x23);
            }
            plVar10 = (long *)(*plVar7 + (long)puVar26 * 8);
            goto LAB_010a58ec;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_010a58ec:
          *plVar10 = (long)plVar9;
        }
        *(long *)(param_1 + 0x4bb8) = *(long *)(param_1 + 0x4bb8) + 1;
      }
      else {
        uVar17 = (long)unaff_x23 - ((ulong)unaff_x23 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          unaff_x26 = (uint *)((long)unaff_x23 - 1U & (ulong)puVar26);
        }
        else {
          unaff_x26 = puVar26;
          if (unaff_x23 <= puVar26) {
            uVar20 = 0;
            if (unaff_x23 != (uint *)0x0) {
              uVar20 = (ulong)puVar26 / (ulong)unaff_x23;
            }
            unaff_x26 = (uint *)((long)puVar26 - uVar20 * (long)unaff_x23);
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)unaff_x26 * 8);
        if (plVar9 == (long *)0x0) goto LAB_010a5838;
        if (uVar17 < 2) {
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) ||
               ((uint *)plVar9[1] != puVar26 &&
                (uint *)((ulong)plVar9[1] & (long)unaff_x23 - 1U) != unaff_x26)) goto LAB_010a5838;
          } while ((uint *)plVar9[2] != puVar26);
        }
        else {
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_010a5838;
            puVar11 = (uint *)plVar9[1];
            if (puVar11 != puVar26) {
              if (unaff_x23 <= puVar11) {
                uVar17 = 0;
                if (unaff_x23 != (uint *)0x0) {
                  uVar17 = (ulong)puVar11 / (ulong)unaff_x23;
                }
                puVar11 = (uint *)((long)puVar11 - uVar17 * (long)unaff_x23);
              }
              if (puVar11 != unaff_x26) goto LAB_010a5838;
            }
          } while ((uint *)plVar9[2] != puVar26);
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar12);
  }
  puVar16 = *(uint **)(*(long *)(param_1 + 0xb8) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    plVar7 = (long *)(param_1 + 0x4bc8);
    plVar14 = (long *)(param_1 + 0x4bf8);
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((long)piVar1 + uVar17);
      }
      puVar26 = *(uint **)(param_1 + 0x4bd0);
      unaff_x27 = (uint *)(long)iVar6;
      if (puVar26 == (uint *)0x0) {
LAB_010a5a44:
        plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x4c00) + 0x10))
                                   (*(long **)(param_1 + 0x4c00),0x20,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4c00) + 0xb8))();
        }
        uVar27 = *(undefined8 *)(param_1 + 0x4c00);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          *(int *)(plVar9 + 2) = iVar6;
          plVar9[3] = (long)piVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar27;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *(int *)(plVar9 + 2) = iVar6;
          plVar9[3] = (long)piVar1;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar9 = 0;
        plVar9[1] = (long)unaff_x27;
        fVar29 = (float)(*(long *)(param_1 + 0x4c20) + 1);
        if ((puVar26 == (uint *)0x0) || (*(float *)(param_1 + 0x4c28) * (float)puVar26 < fVar29)) {
          uVar17 = (ulong)(puVar26 < (uint *)0x3 || ((ulong)puVar26 & (long)puVar26 - 1U) != 0) |
                   (long)puVar26 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4c28));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b094c(plVar7,uVar20);
          puVar26 = *(uint **)(param_1 + 0x4bd0);
          if (((ulong)puVar26 & (long)puVar26 - 1U) == 0) {
            unaff_x23 = (uint *)((long)puVar26 - 1U & (ulong)unaff_x27);
          }
          else if (unaff_x27 < puVar26) {
            unaff_x23 = unaff_x27;
          }
          else {
            uVar17 = 0;
            if (puVar26 != (uint *)0x0) {
              uVar17 = (ulong)unaff_x27 / (ulong)puVar26;
            }
            unaff_x23 = (uint *)((long)unaff_x27 - uVar17 * (long)puVar26);
          }
        }
        plVar10 = *(long **)(*plVar7 + (long)unaff_x23 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = *plVar14;
          *plVar14 = (long)plVar9;
          *(long **)(*plVar7 + (long)unaff_x23 * 8) = plVar14;
          if (*plVar9 != 0) {
            puVar11 = *(uint **)(*plVar9 + 8);
            if (((ulong)puVar26 & (long)puVar26 - 1U) == 0) {
              puVar11 = (uint *)((ulong)puVar11 & (long)puVar26 - 1U);
            }
            else if (puVar26 <= puVar11) {
              uVar17 = 0;
              if (puVar26 != (uint *)0x0) {
                uVar17 = (ulong)puVar11 / (ulong)puVar26;
              }
              puVar11 = (uint *)((long)puVar11 - uVar17 * (long)puVar26);
            }
            plVar10 = (long *)(*plVar7 + (long)puVar11 * 8);
            goto LAB_010a5b30;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_010a5b30:
          *plVar10 = (long)plVar9;
        }
        *(long *)(param_1 + 0x4c20) = *(long *)(param_1 + 0x4c20) + 1;
      }
      else {
        uVar17 = (long)puVar26 - ((ulong)puVar26 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          unaff_x23 = (uint *)((long)puVar26 - 1U & (ulong)unaff_x27);
        }
        else {
          unaff_x23 = unaff_x27;
          if (puVar26 <= unaff_x27) {
            uVar20 = 0;
            if (puVar26 != (uint *)0x0) {
              uVar20 = (ulong)unaff_x27 / (ulong)puVar26;
            }
            unaff_x23 = (uint *)((long)unaff_x27 - uVar20 * (long)puVar26);
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)unaff_x23 * 8);
        if (plVar9 == (long *)0x0) goto LAB_010a5a44;
        if (uVar17 < 2) {
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) ||
               ((uint *)plVar9[1] != unaff_x27 &&
                (uint *)((ulong)plVar9[1] & (long)puVar26 - 1U) != unaff_x23)) goto LAB_010a5a44;
          } while (*(int *)(plVar9 + 2) != iVar6);
        }
        else {
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_010a5a44;
            puVar11 = (uint *)plVar9[1];
            if (puVar11 != unaff_x27) {
              if (puVar26 <= puVar11) {
                uVar17 = 0;
                if (puVar26 != (uint *)0x0) {
                  uVar17 = (ulong)puVar11 / (ulong)puVar26;
                }
                puVar11 = (uint *)((long)puVar11 - uVar17 * (long)puVar26);
              }
              if (puVar11 != unaff_x23) goto LAB_010a5a44;
            }
          } while ((int)plVar9[2] != iVar6);
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar12);
  }
  puVar16 = *(uint **)(*(long *)(param_1 + 0xe8) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    plVar7 = (long *)(param_1 + 0x4c30);
    plVar14 = (long *)(param_1 + 0x4c60);
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar18 < 5) {
        lVar8 = 0;
        uVar17 = 0;
      }
      else {
        iVar6 = 0;
        if ((ulong)puVar18[2] != 0) {
          iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[2]);
        }
        lVar8 = (long)iVar6;
        if (*puVar18 < 7) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          if ((ulong)puVar18[3] != 0) {
            uVar17 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar18[3]);
          }
        }
      }
      puVar11 = *(uint **)(param_1 + 0x4c38);
      puVar26 = (uint *)(-(uVar17 >> 0x1f) & 0xffff000000000000 | uVar17 << 0x10 | lVar8 << 0x20);
      if (puVar11 == (uint *)0x0) {
LAB_010a5db8:
        plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x4c68) + 0x10))
                                   (*(long **)(param_1 + 0x4c68),0x20,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4c68) + 0xb8))();
        }
        uVar27 = *(undefined8 *)(param_1 + 0x4c68);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          plVar9[2] = (long)puVar26;
          plVar9[3] = (long)piVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar27;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar9[2] = (long)puVar26;
          plVar9[3] = (long)piVar1;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar9 = 0;
        plVar9[1] = (long)puVar26;
        fVar29 = (float)(*(long *)(param_1 + 0x4c88) + 1);
        if ((puVar11 == (uint *)0x0) || (*(float *)(param_1 + 0x4c90) * (float)puVar11 < fVar29)) {
          uVar17 = (ulong)(puVar11 < (uint *)0x3 || ((ulong)puVar11 & (long)puVar11 - 1U) != 0) |
                   (long)puVar11 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4c90));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b0cf0(plVar7,uVar20);
          puVar11 = *(uint **)(param_1 + 0x4c38);
          if (((ulong)puVar11 & (long)puVar11 - 1U) == 0) {
            unaff_x27 = (uint *)((long)puVar11 - 1U & (ulong)puVar26);
          }
          else if (puVar26 < puVar11) {
            unaff_x27 = puVar26;
          }
          else {
            uVar17 = 0;
            if (puVar11 != (uint *)0x0) {
              uVar17 = (ulong)puVar26 / (ulong)puVar11;
            }
            unaff_x27 = (uint *)((long)puVar26 - uVar17 * (long)puVar11);
          }
        }
        plVar10 = *(long **)(*plVar7 + (long)unaff_x27 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = *plVar14;
          *plVar14 = (long)plVar9;
          *(long **)(*plVar7 + (long)unaff_x27 * 8) = plVar14;
          if (*plVar9 != 0) {
            puVar26 = *(uint **)(*plVar9 + 8);
            if (((ulong)puVar11 & (long)puVar11 - 1U) == 0) {
              puVar26 = (uint *)((ulong)puVar26 & (long)puVar11 - 1U);
            }
            else if (puVar11 <= puVar26) {
              uVar17 = 0;
              if (puVar11 != (uint *)0x0) {
                uVar17 = (ulong)puVar26 / (ulong)puVar11;
              }
              puVar26 = (uint *)((long)puVar26 - uVar17 * (long)puVar11);
            }
            plVar10 = (long *)(*plVar7 + (long)puVar26 * 8);
            goto LAB_010a5e6c;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_010a5e6c:
          *plVar10 = (long)plVar9;
        }
        *(long *)(param_1 + 0x4c88) = *(long *)(param_1 + 0x4c88) + 1;
      }
      else {
        uVar17 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          unaff_x27 = (uint *)((ulong)puVar26 & (long)puVar11 - 1U);
        }
        else {
          unaff_x27 = puVar26;
          if (puVar11 <= puVar26) {
            uVar20 = 0;
            if (puVar11 != (uint *)0x0) {
              uVar20 = (ulong)puVar26 / (ulong)puVar11;
            }
            unaff_x27 = (uint *)((long)puVar26 - uVar20 * (long)puVar11);
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)unaff_x27 * 8);
        if (plVar9 == (long *)0x0) goto LAB_010a5db8;
        if (uVar17 < 2) {
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) ||
               ((uint *)plVar9[1] != puVar26 &&
                (uint *)((ulong)plVar9[1] & (long)puVar11 - 1U) != unaff_x27)) goto LAB_010a5db8;
          } while ((uint *)plVar9[2] != puVar26);
        }
        else {
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_010a5db8;
            puVar28 = (uint *)plVar9[1];
            if (puVar28 != puVar26) {
              if (puVar11 <= puVar28) {
                uVar17 = 0;
                if (puVar11 != (uint *)0x0) {
                  uVar17 = (ulong)puVar28 / (ulong)puVar11;
                }
                puVar28 = (uint *)((long)puVar28 - uVar17 * (long)puVar11);
              }
              if (puVar28 != unaff_x27) goto LAB_010a5db8;
            }
          } while ((uint *)plVar9[2] != puVar26);
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar12);
  }
  puVar12 = *(uint **)(*(long *)(param_1 + 0x118) + 0x250);
  piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
  puVar26 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar26 = (uint *)((long)puVar26 + (ulong)*puVar26);
  puVar12 = puVar26 + 1;
  uVar17 = (ulong)*puVar26;
  if (uVar17 != 0) {
    unaff_x27 = puVar12 + uVar17;
    plVar7 = (long *)(param_1 + 0x4c98);
    plVar14 = (long *)(param_1 + 0x4cc8);
    do {
      puVar16 = (uint *)((long)puVar12 + (ulong)*puVar12);
      if ((*(ushort *)((long)puVar16 - (long)(int)*puVar16) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)puVar16 - (long)(int)*puVar16))[2], uVar17 == 0)) {
        lVar8 = 0;
      }
      else {
        puVar26 = (uint *)((long)puVar16 + uVar17);
        lVar8 = (long)puVar26 + (ulong)*puVar26;
      }
      bVar3 = *(byte *)(lVar8 + 4);
      puVar25 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar25 = &DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar8 + 5);
        do {
          puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar3 != 0);
      }
      plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x4cd0) + 0x10))
                                 (*(long **)(param_1 + 0x4cd0),0x20,8);
      if (plVar9 == (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x4cd0) + 0xb8))();
      }
      uVar27 = *(undefined8 *)(param_1 + 0x4cd0);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar8 == 0) {
        plVar9[2] = (long)puVar25;
        plVar9[3] = (long)puVar16;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar27;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        plVar9[2] = (long)puVar25;
        plVar9[3] = (long)puVar16;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar25 = (undefined1 *)plVar9[2];
      }
      *plVar9 = 0;
      plVar9[1] = (long)puVar25;
      puVar13 = *(undefined1 **)(param_1 + 0x4ca0);
      if (puVar13 == (undefined1 *)0x0) {
LAB_010a6164:
        fVar29 = (float)(*(long *)(param_1 + 0x4cf0) + 1);
        if ((puVar13 == (undefined1 *)0x0) ||
           (*(float *)(param_1 + 0x4cf8) * (float)puVar13 < fVar29)) {
          uVar17 = (ulong)(puVar13 < (undefined1 *)0x3 ||
                          ((ulong)puVar13 & (ulong)(puVar13 + -1)) != 0) | (long)puVar13 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4cf8));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b108c(plVar7,uVar20);
          puVar13 = *(undefined1 **)(param_1 + 0x4ca0);
          puVar25 = (undefined1 *)plVar9[1];
        }
        uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar25 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
        }
        else if (puVar13 <= puVar25) {
          uVar20 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar20 = (ulong)puVar25 / (ulong)puVar13;
          }
          puVar25 = puVar25 + -(uVar20 * (long)puVar13);
        }
        plVar10 = *(long **)(*plVar7 + (long)puVar25 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = *plVar14;
          *plVar14 = (long)plVar9;
          *(long **)(*plVar7 + (long)puVar25 * 8) = plVar14;
          if (*plVar9 != 0) {
            puVar25 = *(undefined1 **)(*plVar9 + 8);
            if (uVar17 < 2) {
              puVar25 = (undefined1 *)((ulong)puVar25 & (ulong)(puVar13 + -1));
            }
            else if (puVar13 <= puVar25) {
              uVar17 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar25 / (ulong)puVar13;
              }
              puVar25 = puVar25 + -(uVar17 * (long)puVar13);
            }
            plVar10 = (long *)(*plVar7 + (long)puVar25 * 8);
            goto LAB_010a6218;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_010a6218:
          *plVar10 = (long)plVar9;
        }
        *(long *)(param_1 + 0x4cf0) = *(long *)(param_1 + 0x4cf0) + 1;
      }
      else {
        uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
        }
        else {
          puVar15 = puVar25;
          if (puVar13 <= puVar25) {
            uVar20 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar20 = (ulong)puVar25 / (ulong)puVar13;
            }
            puVar15 = puVar25 + -(uVar20 * (long)puVar13);
          }
        }
        plVar10 = *(long **)(*plVar7 + (long)puVar15 * 8);
        if (plVar10 == (long *)0x0) goto LAB_010a6164;
        if (uVar17 < 2) {
          do {
            plVar10 = (long *)*plVar10;
            if ((plVar10 == (long *)0x0) ||
               ((undefined1 *)(plVar10[1] & (ulong)(puVar13 + -1)) != puVar15)) goto LAB_010a6164;
          } while ((undefined1 *)plVar10[2] != puVar25);
        }
        else {
          do {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_010a6164;
            puVar24 = (undefined1 *)plVar10[1];
            if (puVar13 <= puVar24) {
              uVar17 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar24 / (ulong)puVar13;
              }
              puVar24 = puVar24 + -(uVar17 * (long)puVar13);
            }
            if (puVar24 != puVar15) goto LAB_010a6164;
          } while ((undefined1 *)plVar10[2] != puVar25);
        }
        if (plVar9 != (long *)0x0) {
          plVar10 = *(long **)(param_1 + 0x4cd0);
          uVar17 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar17 & 1) != 0) {
            puVar16 = (uint *)tpidr_el0;
            if ((char)puVar16[0xe3522] == '\0') {
              *(undefined1 *)(puVar16 + 0xe3522) = 1;
              puVar16[0xe351e] = 0;
              puVar16[0xe351f] = 0;
              puVar16[0xe3520] = 0;
              puVar16[0xe3521] = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,puVar16 + 0x2001e,&PTR_LOOP_0411a000);
            }
            if (0 < (int)puVar16[0xe3520]) {
              FUN_02bcc824(plVar10,plVar9,0x20,8);
              goto LAB_010a6228;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x20,8);
        }
      }
LAB_010a6228:
      puVar12 = puVar12 + 1;
    } while (puVar12 != unaff_x27);
  }
  puVar12 = *(uint **)(*(long *)(param_1 + 0x148) + 0x250);
  piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
  puVar26 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar26 = (uint *)((long)puVar26 + (ulong)*puVar26);
  puVar12 = puVar26 + 1;
  uVar17 = (ulong)*puVar26;
  if (uVar17 != 0) {
    puVar26 = puVar12 + uVar17;
    plVar7 = (long *)(param_1 + 0x4d00);
    unaff_x27 = (uint *)(param_1 + 0x4d30);
    do {
      piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar18 < 5) {
        lVar8 = 0;
        uVar17 = 0;
      }
      else {
        iVar6 = 0;
        if ((ulong)puVar18[2] != 0) {
          iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[2]);
        }
        lVar8 = (long)iVar6;
        if (*puVar18 < 7) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          if ((ulong)puVar18[3] != 0) {
            uVar17 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar18[3]);
          }
        }
      }
      puVar28 = *(uint **)(param_1 + 0x4d08);
      puVar11 = (uint *)(-(uVar17 >> 0x1f) & 0xffff000000000000 | uVar17 << 0x10 | lVar8 << 0x20);
      if (puVar28 == (uint *)0x0) {
LAB_010a6424:
        plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x4d38) + 0x10))
                                    (*(long **)(param_1 + 0x4d38),0x20,8);
        if (plVar14 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4d38) + 0xb8))();
        }
        uVar27 = *(undefined8 *)(param_1 + 0x4d38);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          plVar14[2] = (long)puVar11;
          plVar14[3] = (long)piVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar27;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar14[2] = (long)puVar11;
          plVar14[3] = (long)piVar1;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar14 = 0;
        plVar14[1] = (long)puVar11;
        fVar29 = (float)(*(long *)(param_1 + 0x4d58) + 1);
        if ((puVar28 == (uint *)0x0) || (*(float *)(param_1 + 0x4d60) * (float)puVar28 < fVar29)) {
          uVar17 = (ulong)(puVar28 < (uint *)0x3 || ((ulong)puVar28 & (long)puVar28 - 1U) != 0) |
                   (long)puVar28 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4d60));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b1430(plVar7,uVar20);
          puVar28 = *(uint **)(param_1 + 0x4d08);
          if (((ulong)puVar28 & (long)puVar28 - 1U) == 0) {
            puVar16 = (uint *)((long)puVar28 - 1U & (ulong)puVar11);
          }
          else {
            puVar16 = puVar11;
            if (puVar28 <= puVar11) {
              uVar17 = 0;
              if (puVar28 != (uint *)0x0) {
                uVar17 = (ulong)puVar11 / (ulong)puVar28;
              }
              puVar16 = (uint *)((long)puVar11 - uVar17 * (long)puVar28);
            }
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)puVar16 * 8);
        if (plVar9 == (long *)0x0) {
          *plVar14 = *(long *)unaff_x27;
          *(long **)unaff_x27 = plVar14;
          *(uint **)(*plVar7 + (long)puVar16 * 8) = unaff_x27;
          if (*plVar14 != 0) {
            puVar11 = *(uint **)(*plVar14 + 8);
            if (((ulong)puVar28 & (long)puVar28 - 1U) == 0) {
              puVar11 = (uint *)((ulong)puVar11 & (long)puVar28 - 1U);
            }
            else if (puVar28 <= puVar11) {
              uVar17 = 0;
              if (puVar28 != (uint *)0x0) {
                uVar17 = (ulong)puVar11 / (ulong)puVar28;
              }
              puVar11 = (uint *)((long)puVar11 - uVar17 * (long)puVar28);
            }
            plVar9 = (long *)(*plVar7 + (long)puVar11 * 8);
            goto LAB_010a64e0;
          }
        }
        else {
          *plVar14 = *plVar9;
LAB_010a64e0:
          *plVar9 = (long)plVar14;
        }
        *(long *)(param_1 + 0x4d58) = *(long *)(param_1 + 0x4d58) + 1;
      }
      else {
        uVar17 = (long)puVar28 - ((ulong)puVar28 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar16 = (uint *)((ulong)puVar11 & (long)puVar28 - 1U);
        }
        else {
          puVar16 = puVar11;
          if (puVar28 <= puVar11) {
            uVar20 = 0;
            if (puVar28 != (uint *)0x0) {
              uVar20 = (ulong)puVar11 / (ulong)puVar28;
            }
            puVar16 = (uint *)((long)puVar11 - uVar20 * (long)puVar28);
          }
        }
        plVar14 = *(long **)(*plVar7 + (long)puVar16 * 8);
        if (plVar14 == (long *)0x0) goto LAB_010a6424;
        if (uVar17 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) ||
               ((uint *)plVar14[1] != puVar11 &&
                (uint *)((ulong)plVar14[1] & (long)puVar28 - 1U) != puVar16)) goto LAB_010a6424;
          } while ((uint *)plVar14[2] != puVar11);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_010a6424;
            puVar23 = (uint *)plVar14[1];
            if (puVar23 != puVar11) {
              if (puVar28 <= puVar23) {
                uVar17 = 0;
                if (puVar28 != (uint *)0x0) {
                  uVar17 = (ulong)puVar23 / (ulong)puVar28;
                }
                puVar23 = (uint *)((long)puVar23 - uVar17 * (long)puVar28);
              }
              if (puVar23 != puVar16) goto LAB_010a6424;
            }
          } while ((uint *)plVar14[2] != puVar11);
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar26);
  }
  puVar12 = *(uint **)(*(long *)(param_1 + 0x178) + 0x250);
  piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
  puVar26 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar26 = (uint *)((long)puVar26 + (ulong)*puVar26);
  puVar12 = puVar26 + 1;
  uVar17 = (ulong)*puVar26;
  if (uVar17 != 0) {
    puVar26 = puVar12 + uVar17;
    plVar7 = (long *)(param_1 + 0x4d68);
    unaff_x27 = (uint *)(param_1 + 0x4d98);
    do {
      piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
        puVar11 = (uint *)0x0;
        puVar28 = *(uint **)(param_1 + 0x4d70);
        if (puVar28 != (uint *)0x0) goto LAB_010a665c;
LAB_010a6740:
        plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x4da0) + 0x10))
                                    (*(long **)(param_1 + 0x4da0),0x20,8);
        if (plVar14 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4da0) + 0xb8))();
        }
        uVar27 = *(undefined8 *)(param_1 + 0x4da0);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          plVar14[2] = (long)puVar11;
          plVar14[3] = (long)piVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar27;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar14[2] = (long)puVar11;
          plVar14[3] = (long)piVar1;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar14 = 0;
        plVar14[1] = (long)puVar11;
        fVar29 = (float)(*(long *)(param_1 + 0x4dc0) + 1);
        if ((puVar28 == (uint *)0x0) || (*(float *)(param_1 + 0x4dc8) * (float)puVar28 < fVar29)) {
          uVar17 = (ulong)(puVar28 < (uint *)0x3 || ((ulong)puVar28 & (long)puVar28 - 1U) != 0) |
                   (long)puVar28 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4dc8));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b17cc(plVar7,uVar20);
          puVar28 = *(uint **)(param_1 + 0x4d70);
          if (((ulong)puVar28 & (long)puVar28 - 1U) == 0) {
            puVar16 = (uint *)((long)puVar28 - 1U & (ulong)puVar11);
          }
          else {
            puVar16 = puVar11;
            if (puVar28 <= puVar11) {
              uVar17 = 0;
              if (puVar28 != (uint *)0x0) {
                uVar17 = (ulong)puVar11 / (ulong)puVar28;
              }
              puVar16 = (uint *)((long)puVar11 - uVar17 * (long)puVar28);
            }
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)puVar16 * 8);
        if (plVar9 == (long *)0x0) {
          *plVar14 = *(long *)unaff_x27;
          *(long **)unaff_x27 = plVar14;
          *(uint **)(*plVar7 + (long)puVar16 * 8) = unaff_x27;
          if (*plVar14 != 0) {
            puVar11 = *(uint **)(*plVar14 + 8);
            if (((ulong)puVar28 & (long)puVar28 - 1U) == 0) {
              puVar11 = (uint *)((ulong)puVar11 & (long)puVar28 - 1U);
            }
            else if (puVar28 <= puVar11) {
              uVar17 = 0;
              if (puVar28 != (uint *)0x0) {
                uVar17 = (ulong)puVar11 / (ulong)puVar28;
              }
              puVar11 = (uint *)((long)puVar11 - uVar17 * (long)puVar28);
            }
            plVar9 = (long *)(*plVar7 + (long)puVar11 * 8);
            goto LAB_010a682c;
          }
        }
        else {
          *plVar14 = *plVar9;
LAB_010a682c:
          *plVar9 = (long)plVar14;
        }
        *(long *)(param_1 + 0x4dc0) = *(long *)(param_1 + 0x4dc0) + 1;
      }
      else {
        puVar11 = *(uint **)((long)piVar1 + uVar17);
        puVar28 = *(uint **)(param_1 + 0x4d70);
        if (puVar28 == (uint *)0x0) goto LAB_010a6740;
LAB_010a665c:
        uVar17 = (long)puVar28 - ((ulong)puVar28 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar16 = (uint *)((long)puVar28 - 1U & (ulong)puVar11);
        }
        else {
          puVar16 = puVar11;
          if (puVar28 <= puVar11) {
            uVar20 = 0;
            if (puVar28 != (uint *)0x0) {
              uVar20 = (ulong)puVar11 / (ulong)puVar28;
            }
            puVar16 = (uint *)((long)puVar11 - uVar20 * (long)puVar28);
          }
        }
        plVar14 = *(long **)(*plVar7 + (long)puVar16 * 8);
        if (plVar14 == (long *)0x0) goto LAB_010a6740;
        if (uVar17 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) ||
               ((uint *)plVar14[1] != puVar11 &&
                (uint *)((ulong)plVar14[1] & (long)puVar28 - 1U) != puVar16)) goto LAB_010a6740;
          } while ((uint *)plVar14[2] != puVar11);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_010a6740;
            puVar23 = (uint *)plVar14[1];
            if (puVar23 != puVar11) {
              if (puVar28 <= puVar23) {
                uVar17 = 0;
                if (puVar28 != (uint *)0x0) {
                  uVar17 = (ulong)puVar23 / (ulong)puVar28;
                }
                puVar23 = (uint *)((long)puVar23 - uVar17 * (long)puVar28);
              }
              if (puVar23 != puVar16) goto LAB_010a6740;
            }
          } while ((uint *)plVar14[2] != puVar11);
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar26);
  }
  puVar26 = *(uint **)(param_1 + 8);
  local_b8 = 0xfffffffffffffff;
  uStack_b0 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1.0;
  local_c8 = (uint *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0xfffffffffffffff;
  uStack_88 = 0;
  puVar16 = *(uint **)(*(long *)(param_1 + 0x238) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  puStack_c0 = puVar26;
  local_98 = puVar26;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
        lVar8 = 0;
      }
      else {
        puVar26 = (uint *)((long)piVar1 + uVar17);
        lVar8 = (long)puVar26 + (ulong)*puVar26;
      }
      bVar3 = *(byte *)(lVar8 + 4);
      puVar26 = (uint *)&DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar26 = (uint *)&DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar8 + 5);
        do {
          puVar26 = (uint *)(((ulong)puVar26 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar3 != 0);
      }
      plVar7 = (long *)(**(code **)(*(long *)local_98 + 0x10))(local_98,0x20,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*(long *)local_98 + 0xb8))();
      }
      unaff_x27 = local_98;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      puVar11 = local_98;
      if (lVar8 == 0) {
        plVar7[2] = (long)puVar26;
        plVar7[3] = (long)piVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
        *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = unaff_x27;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        plVar7[2] = (long)puVar26;
        plVar7[3] = (long)piVar1;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar26 = (uint *)plVar7[2];
      }
      *plVar7 = 0;
      plVar7[1] = (long)puVar26;
      if (local_c8 == (uint *)0x0) {
LAB_010a6af8:
        if ((local_c8 == (uint *)0x0) || (local_70 * (float)local_c8 < (float)(local_78 + 1))) {
          uVar17 = (ulong)(local_c8 < (uint *)0x3 || ((ulong)local_c8 & (long)local_c8 - 1U) != 0) |
                   (long)local_c8 << 1;
          uVar20 = (ulong)((float)(local_78 + 1) / local_70);
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b1b70(&local_d0,uVar20);
          puVar26 = (uint *)plVar7[1];
        }
        uVar17 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar26 = (uint *)((long)local_c8 - 1U & (ulong)puVar26);
        }
        else if (local_c8 <= puVar26) {
          uVar20 = 0;
          if (local_c8 != (uint *)0x0) {
            uVar20 = (ulong)puVar26 / (ulong)local_c8;
          }
          puVar26 = (uint *)((long)puVar26 - uVar20 * (long)local_c8);
        }
        plVar14 = *(long **)(local_d0 + (long)puVar26 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar7 = (long)local_a0;
          *(long ***)(local_d0 + (long)puVar26 * 8) = &local_a0;
          local_a0 = plVar7;
          if (*plVar7 != 0) {
            puVar26 = *(uint **)(*plVar7 + 8);
            if (uVar17 < 2) {
              puVar26 = (uint *)((ulong)puVar26 & (long)local_c8 - 1U);
            }
            else if (local_c8 <= puVar26) {
              uVar17 = 0;
              if (local_c8 != (uint *)0x0) {
                uVar17 = (ulong)puVar26 / (ulong)local_c8;
              }
              puVar26 = (uint *)((long)puVar26 - uVar17 * (long)local_c8);
            }
            plVar14 = (long *)(local_d0 + (long)puVar26 * 8);
            goto LAB_010a6b6c;
          }
        }
        else {
          *plVar7 = *plVar14;
LAB_010a6b6c:
          *plVar14 = (long)plVar7;
        }
        local_78 = local_78 + 1;
      }
      else {
        uVar17 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar28 = (uint *)((long)local_c8 - 1U & (ulong)puVar26);
        }
        else {
          puVar28 = puVar26;
          if (local_c8 <= puVar26) {
            uVar20 = 0;
            if (local_c8 != (uint *)0x0) {
              uVar20 = (ulong)puVar26 / (ulong)local_c8;
            }
            puVar28 = (uint *)((long)puVar26 - uVar20 * (long)local_c8);
          }
        }
        plVar14 = *(long **)(local_d0 + (long)puVar28 * 8);
        if (plVar14 == (long *)0x0) goto LAB_010a6af8;
        if (uVar17 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) || ((uint *)(plVar14[1] & (long)local_c8 - 1U) != puVar28))
            goto LAB_010a6af8;
          } while ((uint *)plVar14[2] != puVar26);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_010a6af8;
            puVar23 = (uint *)plVar14[1];
            if (local_c8 <= puVar23) {
              uVar17 = 0;
              if (local_c8 != (uint *)0x0) {
                uVar17 = (ulong)puVar23 / (ulong)local_c8;
              }
              puVar23 = (uint *)((long)puVar23 - uVar17 * (long)local_c8);
            }
            if (puVar23 != puVar28) goto LAB_010a6af8;
          } while ((uint *)plVar14[2] != puVar26);
        }
        if (plVar7 != (long *)0x0) {
          uVar17 = (**(code **)(*(long *)local_98 + 0xc0))(local_98);
          unaff_x27 = puVar11;
          if ((uVar17 & 1) != 0) {
            lVar8 = tpidr_el0;
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(puVar11,plVar7,0x20,8);
              goto LAB_010a6b7c;
            }
          }
          (**(code **)(*(long *)puVar11 + 0x18))(puVar11,plVar7,0x20,8);
        }
      }
LAB_010a6b7c:
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar12);
    puVar26 = *(uint **)(param_1 + 8);
  }
  local_130 = (uint *)0x0;
  local_138 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 1.0;
  local_120 = 0xfffffffffffffff;
  uStack_118 = 0;
  local_108 = (long *)0x0;
  local_f8 = 0xfffffffffffffff;
  uStack_f0 = 0;
  puVar16 = *(uint **)(*(long *)(param_1 + 0x268) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  puStack_128 = puVar26;
  local_100 = puVar26;
  if (uVar17 != 0) {
    unaff_x27 = puVar16 + uVar17;
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
        lVar8 = 0;
      }
      else {
        puVar12 = (uint *)((long)piVar1 + uVar17);
        lVar8 = (long)puVar12 + (ulong)*puVar12;
      }
      bVar3 = *(byte *)(lVar8 + 4);
      puVar12 = (uint *)&DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar12 = (uint *)&DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar8 + 5);
        do {
          puVar12 = (uint *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar3 != 0);
      }
      plVar7 = (long *)(**(code **)(*(long *)local_100 + 0x10))(local_100,0x20,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*(long *)local_100 + 0xb8))();
      }
      puVar26 = local_100;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      puVar11 = local_100;
      if (lVar8 == 0) {
        plVar7[2] = (long)puVar12;
        plVar7[3] = (long)piVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
        *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = puVar26;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        plVar7[2] = (long)puVar12;
        plVar7[3] = (long)piVar1;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar12 = (uint *)plVar7[2];
      }
      *plVar7 = 0;
      plVar7[1] = (long)puVar12;
      if (local_130 == (uint *)0x0) {
LAB_010a6e7c:
        if ((local_130 == (uint *)0x0) || (local_d8 * (float)local_130 < (float)(local_e0 + 1))) {
          uVar17 = (ulong)(local_130 < (uint *)0x3 || ((ulong)local_130 & (long)local_130 - 1U) != 0
                          ) | (long)local_130 << 1;
          uVar20 = (ulong)((float)(local_e0 + 1) / local_d8);
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b1f0c(&local_138,uVar20);
          puVar12 = (uint *)plVar7[1];
        }
        uVar17 = (long)local_130 - ((ulong)local_130 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar12 = (uint *)((long)local_130 - 1U & (ulong)puVar12);
        }
        else if (local_130 <= puVar12) {
          uVar20 = 0;
          if (local_130 != (uint *)0x0) {
            uVar20 = (ulong)puVar12 / (ulong)local_130;
          }
          puVar12 = (uint *)((long)puVar12 - uVar20 * (long)local_130);
        }
        plVar14 = *(long **)(local_138 + (long)puVar12 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar7 = (long)local_108;
          *(long ***)(local_138 + (long)puVar12 * 8) = &local_108;
          local_108 = plVar7;
          if (*plVar7 != 0) {
            puVar12 = *(uint **)(*plVar7 + 8);
            if (uVar17 < 2) {
              puVar12 = (uint *)((ulong)puVar12 & (long)local_130 - 1U);
            }
            else if (local_130 <= puVar12) {
              uVar17 = 0;
              if (local_130 != (uint *)0x0) {
                uVar17 = (ulong)puVar12 / (ulong)local_130;
              }
              puVar12 = (uint *)((long)puVar12 - uVar17 * (long)local_130);
            }
            plVar14 = (long *)(local_138 + (long)puVar12 * 8);
            goto LAB_010a6ef0;
          }
        }
        else {
          *plVar7 = *plVar14;
LAB_010a6ef0:
          *plVar14 = (long)plVar7;
        }
        local_e0 = local_e0 + 1;
      }
      else {
        uVar17 = (long)local_130 - ((ulong)local_130 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar26 = (uint *)((long)local_130 - 1U & (ulong)puVar12);
        }
        else {
          puVar26 = puVar12;
          if (local_130 <= puVar12) {
            uVar20 = 0;
            if (local_130 != (uint *)0x0) {
              uVar20 = (ulong)puVar12 / (ulong)local_130;
            }
            puVar26 = (uint *)((long)puVar12 - uVar20 * (long)local_130);
          }
        }
        plVar14 = *(long **)(local_138 + (long)puVar26 * 8);
        if (plVar14 == (long *)0x0) goto LAB_010a6e7c;
        if (uVar17 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) || ((uint *)(plVar14[1] & (long)local_130 - 1U) != puVar26)
               ) goto LAB_010a6e7c;
          } while ((uint *)plVar14[2] != puVar12);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_010a6e7c;
            puVar28 = (uint *)plVar14[1];
            if (local_130 <= puVar28) {
              uVar17 = 0;
              if (local_130 != (uint *)0x0) {
                uVar17 = (ulong)puVar28 / (ulong)local_130;
              }
              puVar28 = (uint *)((long)puVar28 - uVar17 * (long)local_130);
            }
            if (puVar28 != puVar26) goto LAB_010a6e7c;
          } while ((uint *)plVar14[2] != puVar12);
        }
        if (plVar7 != (long *)0x0) {
          uVar17 = (**(code **)(*(long *)local_100 + 0xc0))(local_100);
          if ((uVar17 & 1) != 0) {
            lVar8 = tpidr_el0;
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(puVar11,plVar7,0x20,8);
              goto LAB_010a6f00;
            }
          }
          (**(code **)(*(long *)puVar11 + 0x18))(puVar11,plVar7,0x20,8);
        }
      }
LAB_010a6f00:
      puVar16 = puVar16 + 1;
    } while (puVar16 != unaff_x27);
    puVar26 = *(uint **)(param_1 + 8);
  }
  local_1a0 = 0;
  local_198 = (undefined1 *)0x0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 1.0;
  local_188 = 0xfffffffffffffff;
  uStack_180 = 0;
  local_170 = (long *)0x0;
  local_160 = 0xfffffffffffffff;
  uStack_158 = 0;
  puVar16 = *(uint **)(*(long *)(param_1 + 0x298) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar2 = *puVar12;
  puStack_190 = puVar26;
  local_168 = puVar26;
  if (uVar2 != 0) {
    puVar12 = puVar16 + uVar2;
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
        lVar8 = 0;
      }
      else {
        puVar26 = (uint *)((long)piVar1 + uVar17);
        lVar8 = (long)puVar26 + (ulong)*puVar26;
      }
      bVar3 = *(byte *)(lVar8 + 4);
      puVar25 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar25 = &DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar8 + 5);
        do {
          puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar3 != 0);
      }
      plVar7 = (long *)(**(code **)(*(long *)local_168 + 0x10))(local_168,0x20,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*(long *)local_168 + 0xb8))();
      }
      unaff_x27 = local_168;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      puVar26 = local_168;
      if (lVar8 == 0) {
        plVar7[2] = (long)puVar25;
        plVar7[3] = (long)piVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
        *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = unaff_x27;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        plVar7[2] = (long)puVar25;
        plVar7[3] = (long)piVar1;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar25 = (undefined1 *)plVar7[2];
      }
      *plVar7 = 0;
      plVar7[1] = (long)puVar25;
      if (local_198 == (undefined1 *)0x0) {
LAB_010a71f8:
        if ((local_198 == (undefined1 *)0x0) ||
           (local_140 * (float)local_198 < (float)(local_148 + 1))) {
          uVar17 = (ulong)(local_198 < (undefined1 *)0x3 ||
                          ((ulong)local_198 & (ulong)(local_198 + -1)) != 0) | (long)local_198 << 1;
          uVar20 = (ulong)((float)(local_148 + 1) / local_140);
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b22a8(&local_1a0,uVar20);
          puVar25 = (undefined1 *)plVar7[1];
        }
        uVar17 = (long)local_198 - ((ulong)local_198 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar25 = (undefined1 *)((ulong)(local_198 + -1) & (ulong)puVar25);
        }
        else if (local_198 <= puVar25) {
          uVar20 = 0;
          if (local_198 != (undefined1 *)0x0) {
            uVar20 = (ulong)puVar25 / (ulong)local_198;
          }
          puVar25 = puVar25 + -(uVar20 * (long)local_198);
        }
        plVar14 = *(long **)(local_1a0 + (long)puVar25 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar7 = (long)local_170;
          *(long ***)(local_1a0 + (long)puVar25 * 8) = &local_170;
          local_170 = plVar7;
          if (*plVar7 != 0) {
            puVar25 = *(undefined1 **)(*plVar7 + 8);
            if (uVar17 < 2) {
              puVar25 = (undefined1 *)((ulong)puVar25 & (ulong)(local_198 + -1));
            }
            else if (local_198 <= puVar25) {
              uVar17 = 0;
              if (local_198 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar25 / (ulong)local_198;
              }
              puVar25 = puVar25 + -(uVar17 * (long)local_198);
            }
            plVar14 = (long *)(local_1a0 + (long)puVar25 * 8);
            goto LAB_010a726c;
          }
        }
        else {
          *plVar7 = *plVar14;
LAB_010a726c:
          *plVar14 = (long)plVar7;
        }
        local_148 = local_148 + 1;
      }
      else {
        uVar17 = (long)local_198 - ((ulong)local_198 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar13 = (undefined1 *)((ulong)(local_198 + -1) & (ulong)puVar25);
        }
        else {
          puVar13 = puVar25;
          if (local_198 <= puVar25) {
            uVar20 = 0;
            if (local_198 != (undefined1 *)0x0) {
              uVar20 = (ulong)puVar25 / (ulong)local_198;
            }
            puVar13 = puVar25 + -(uVar20 * (long)local_198);
          }
        }
        plVar14 = *(long **)(local_1a0 + (long)puVar13 * 8);
        if (plVar14 == (long *)0x0) goto LAB_010a71f8;
        if (uVar17 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) ||
               ((undefined1 *)(plVar14[1] & (ulong)(local_198 + -1)) != puVar13)) goto LAB_010a71f8;
          } while ((undefined1 *)plVar14[2] != puVar25);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_010a71f8;
            puVar15 = (undefined1 *)plVar14[1];
            if (local_198 <= puVar15) {
              uVar17 = 0;
              if (local_198 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar15 / (ulong)local_198;
              }
              puVar15 = puVar15 + -(uVar17 * (long)local_198);
            }
            if (puVar15 != puVar13) goto LAB_010a71f8;
          } while ((undefined1 *)plVar14[2] != puVar25);
        }
        if (plVar7 != (long *)0x0) {
          uVar17 = (**(code **)(*(long *)local_168 + 0xc0))(local_168);
          unaff_x27 = puVar26;
          if ((uVar17 & 1) != 0) {
            lVar8 = tpidr_el0;
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(puVar26,plVar7,0x20,8);
              goto LAB_010a727c;
            }
          }
          (**(code **)(*(long *)puVar26 + 0x18))(puVar26,plVar7,0x20,8);
        }
      }
LAB_010a727c:
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar12);
    puVar26 = *(uint **)(param_1 + 8);
  }
  local_200 = (undefined1 *)0x0;
  local_208 = 0;
  local_1e0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 1.0;
  local_1f0 = 0xfffffffffffffff;
  uStack_1e8 = 0;
  local_1d8 = (long *)0x0;
  local_1c8 = 0xfffffffffffffff;
  uStack_1c0 = 0;
  puVar16 = *(uint **)(*(long *)(param_1 + 0x2c8) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  puStack_1f8 = puVar26;
  local_1d0 = puVar26;
  if (uVar17 != 0) {
    unaff_x27 = puVar16 + uVar17;
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
        lVar8 = 0;
      }
      else {
        puVar12 = (uint *)((long)piVar1 + uVar17);
        lVar8 = (long)puVar12 + (ulong)*puVar12;
      }
      bVar3 = *(byte *)(lVar8 + 4);
      puVar25 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar25 = &DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar8 + 5);
        do {
          puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar3 != 0);
      }
      plVar7 = (long *)(**(code **)(*(long *)local_1d0 + 0x10))(local_1d0,0x20,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*(long *)local_1d0 + 0xb8))();
      }
      puVar12 = local_1d0;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      puVar26 = local_1d0;
      if (lVar8 == 0) {
        plVar7[2] = (long)puVar25;
        plVar7[3] = (long)piVar1;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010a9b38;
        *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = puVar12;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        plVar7[2] = (long)puVar25;
        plVar7[3] = (long)piVar1;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar25 = (undefined1 *)plVar7[2];
      }
      *plVar7 = 0;
      plVar7[1] = (long)puVar25;
      if (local_200 == (undefined1 *)0x0) {
LAB_010a75f8:
        if ((local_200 == (undefined1 *)0x0) ||
           (local_1a8 * (float)local_200 < (float)(local_1b0 + 1))) {
          uVar17 = (ulong)(local_200 < (undefined1 *)0x3 ||
                          ((ulong)local_200 & (ulong)(local_200 + -1)) != 0) | (long)local_200 << 1;
          uVar20 = (ulong)((float)(local_1b0 + 1) / local_1a8);
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b2644(&local_208,uVar20);
          puVar25 = (undefined1 *)plVar7[1];
        }
        uVar17 = (long)local_200 - ((ulong)local_200 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar25 = (undefined1 *)((ulong)(local_200 + -1) & (ulong)puVar25);
        }
        else if (local_200 <= puVar25) {
          uVar20 = 0;
          if (local_200 != (undefined1 *)0x0) {
            uVar20 = (ulong)puVar25 / (ulong)local_200;
          }
          puVar25 = puVar25 + -(uVar20 * (long)local_200);
        }
        plVar14 = *(long **)(local_208 + (long)puVar25 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar7 = (long)local_1d8;
          *(long ***)(local_208 + (long)puVar25 * 8) = &local_1d8;
          local_1d8 = plVar7;
          if (*plVar7 != 0) {
            puVar25 = *(undefined1 **)(*plVar7 + 8);
            if (uVar17 < 2) {
              puVar25 = (undefined1 *)((ulong)puVar25 & (ulong)(local_200 + -1));
            }
            else if (local_200 <= puVar25) {
              uVar17 = 0;
              if (local_200 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar25 / (ulong)local_200;
              }
              puVar25 = puVar25 + -(uVar17 * (long)local_200);
            }
            plVar14 = (long *)(local_208 + (long)puVar25 * 8);
            goto LAB_010a766c;
          }
        }
        else {
          *plVar7 = *plVar14;
LAB_010a766c:
          *plVar14 = (long)plVar7;
        }
        local_1b0 = local_1b0 + 1;
      }
      else {
        uVar17 = (long)local_200 - ((ulong)local_200 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar13 = (undefined1 *)((ulong)(local_200 + -1) & (ulong)puVar25);
        }
        else {
          puVar13 = puVar25;
          if (local_200 <= puVar25) {
            uVar20 = 0;
            if (local_200 != (undefined1 *)0x0) {
              uVar20 = (ulong)puVar25 / (ulong)local_200;
            }
            puVar13 = puVar25 + -(uVar20 * (long)local_200);
          }
        }
        plVar14 = *(long **)(local_208 + (long)puVar13 * 8);
        if (plVar14 == (long *)0x0) goto LAB_010a75f8;
        if (uVar17 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) ||
               ((undefined1 *)(plVar14[1] & (ulong)(local_200 + -1)) != puVar13)) goto LAB_010a75f8;
          } while ((undefined1 *)plVar14[2] != puVar25);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_010a75f8;
            puVar15 = (undefined1 *)plVar14[1];
            if (local_200 <= puVar15) {
              uVar17 = 0;
              if (local_200 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar15 / (ulong)local_200;
              }
              puVar15 = puVar15 + -(uVar17 * (long)local_200);
            }
            if (puVar15 != puVar13) goto LAB_010a75f8;
          } while ((undefined1 *)plVar14[2] != puVar25);
        }
        if (plVar7 != (long *)0x0) {
          uVar17 = (**(code **)(*(long *)local_1d0 + 0xc0))(local_1d0);
          if ((uVar17 & 1) != 0) {
            lVar8 = tpidr_el0;
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(puVar26,plVar7,0x20,8);
              goto LAB_010a767c;
            }
          }
          (**(code **)(*(long *)puVar26 + 0x18))(puVar26,plVar7,0x20,8);
        }
      }
LAB_010a767c:
      puVar16 = puVar16 + 1;
    } while (puVar16 != unaff_x27);
  }
  puVar16 = *(uint **)(*(long *)(param_1 + 0x1d8) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    plVar7 = (long *)(param_1 + 0x4e38);
    unaff_x27 = (uint *)&local_228;
LAB_010a77b4:
    piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
    puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
    uVar4 = *puVar18;
    if ((uVar4 < 5) || ((ulong)puVar18[2] == 0)) {
      lVar8 = 0;
    }
    else {
      puVar26 = (uint *)((long)piVar1 + (ulong)puVar18[2]);
      lVar8 = (long)puVar26 + (ulong)*puVar26;
    }
    bVar3 = *(byte *)(lVar8 + 4);
    puVar26 = (uint *)&DAT_cbf29ce484222645;
    if (bVar3 != 0) {
      puVar26 = (uint *)&DAT_cbf29ce484222645;
      pbVar19 = (byte *)(lVar8 + 5);
      do {
        puVar26 = (uint *)(((ulong)puVar26 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar3 != 0);
    }
    if (local_130 != (uint *)0x0) {
      uVar17 = (long)local_130 - ((ulong)local_130 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        puVar11 = (uint *)((long)local_130 - 1U & (ulong)puVar26);
      }
      else {
        puVar11 = puVar26;
        if (local_130 <= puVar26) {
          uVar20 = 0;
          if (local_130 != (uint *)0x0) {
            uVar20 = (ulong)puVar26 / (ulong)local_130;
          }
          puVar11 = (uint *)((long)puVar26 - uVar20 * (long)local_130);
        }
      }
      plVar14 = *(long **)(local_138 + (long)puVar11 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if ((uint *)plVar14[1] == puVar26) {
              if ((uint *)plVar14[2] == puVar26) goto LAB_010a78b8;
            }
            else if ((uint *)((ulong)plVar14[1] & (long)local_130 - 1U) != puVar11) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            puVar28 = (uint *)plVar14[1];
            if (puVar28 == puVar26) {
              if ((uint *)plVar14[2] == puVar26) goto LAB_010a78b8;
            }
            else {
              if (local_130 <= puVar28) {
                uVar17 = 0;
                if (local_130 != (uint *)0x0) {
                  uVar17 = (ulong)puVar28 / (ulong)local_130;
                }
                puVar28 = (uint *)((long)puVar28 - uVar17 * (long)local_130);
              }
              if (puVar28 != puVar11) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    if (local_c8 != (uint *)0x0) {
      uVar17 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        puVar11 = (uint *)((long)local_c8 - 1U & (ulong)puVar26);
      }
      else {
        puVar11 = puVar26;
        if (local_c8 <= puVar26) {
          uVar20 = 0;
          if (local_c8 != (uint *)0x0) {
            uVar20 = (ulong)puVar26 / (ulong)local_c8;
          }
          puVar11 = (uint *)((long)puVar26 - uVar20 * (long)local_c8);
        }
      }
      plVar14 = *(long **)(local_d0 + (long)puVar11 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if ((uint *)plVar14[1] == puVar26) {
              if ((uint *)plVar14[2] == puVar26) goto LAB_010a7b10;
            }
            else if ((uint *)((ulong)plVar14[1] & (long)local_c8 - 1U) != puVar11) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            puVar28 = (uint *)plVar14[1];
            if (puVar28 == puVar26) {
              if ((uint *)plVar14[2] == puVar26) goto LAB_010a7b10;
            }
            else {
              if (local_c8 <= puVar28) {
                uVar17 = 0;
                if (local_c8 != (uint *)0x0) {
                  uVar17 = (ulong)puVar28 / (ulong)local_c8;
                }
                puVar28 = (uint *)((long)puVar28 - uVar17 * (long)local_c8);
              }
              if (puVar28 != puVar11) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_010a7f64;
  }
LAB_010a7fc0:
  puVar16 = *(uint **)(*(long *)(param_1 + 0x1a8) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
LAB_010a8028:
    piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
    puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
    if ((*puVar18 < 5) || ((ulong)puVar18[2] == 0)) {
      lVar8 = 0;
    }
    else {
      puVar26 = (uint *)((long)piVar1 + (ulong)puVar18[2]);
      lVar8 = (long)puVar26 + (ulong)*puVar26;
    }
    bVar3 = *(byte *)(lVar8 + 4);
    unaff_x27 = (uint *)&DAT_cbf29ce484222645;
    if (bVar3 != 0) {
      unaff_x27 = (uint *)&DAT_cbf29ce484222645;
      pbVar19 = (byte *)(lVar8 + 5);
      do {
        unaff_x27 = (uint *)(((ulong)unaff_x27 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar3 != 0);
    }
    puVar26 = *(uint **)(param_1 + 0x4e40);
    if (puVar26 != (uint *)0x0) {
      uVar17 = (long)puVar26 - ((ulong)puVar26 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        puVar11 = (uint *)((long)puVar26 - 1U & (ulong)unaff_x27);
      }
      else {
        puVar11 = unaff_x27;
        if (puVar26 <= unaff_x27) {
          uVar20 = 0;
          if (puVar26 != (uint *)0x0) {
            uVar20 = (ulong)unaff_x27 / (ulong)puVar26;
          }
          puVar11 = (uint *)((long)unaff_x27 - uVar20 * (long)puVar26);
        }
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x4e38) + (long)puVar11 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if ((uint *)plVar7[1] == unaff_x27) {
              if ((uint *)plVar7[2] == unaff_x27) goto LAB_010a84d4;
            }
            else if ((uint *)((ulong)plVar7[1] & (long)puVar26 - 1U) != puVar11) break;
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            puVar28 = (uint *)plVar7[1];
            if (puVar28 == unaff_x27) {
              if ((uint *)plVar7[2] == unaff_x27) goto LAB_010a84d4;
            }
            else {
              if (puVar26 <= puVar28) {
                uVar17 = 0;
                if (puVar26 != (uint *)0x0) {
                  uVar17 = (ulong)puVar28 / (ulong)puVar26;
                }
                puVar28 = (uint *)((long)puVar28 - uVar17 * (long)puVar26);
              }
              if (puVar28 != puVar11) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
    if (local_130 != (uint *)0x0) {
      uVar17 = (long)local_130 - ((ulong)local_130 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        puVar26 = (uint *)((long)local_130 - 1U & (ulong)unaff_x27);
      }
      else {
        puVar26 = unaff_x27;
        if (local_130 <= unaff_x27) {
          uVar20 = 0;
          if (local_130 != (uint *)0x0) {
            uVar20 = (ulong)unaff_x27 / (ulong)local_130;
          }
          puVar26 = (uint *)((long)unaff_x27 - uVar20 * (long)local_130);
        }
      }
      plVar7 = *(long **)(local_138 + (long)puVar26 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if ((uint *)plVar7[1] == unaff_x27) {
              if ((uint *)plVar7[2] == unaff_x27) goto LAB_010a8220;
            }
            else if ((uint *)((ulong)plVar7[1] & (long)local_130 - 1U) != puVar26) break;
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            puVar11 = (uint *)plVar7[1];
            if (puVar11 == unaff_x27) {
              if ((uint *)plVar7[2] == unaff_x27) goto LAB_010a8220;
            }
            else {
              if (local_130 <= puVar11) {
                uVar17 = 0;
                if (local_130 != (uint *)0x0) {
                  uVar17 = (ulong)puVar11 / (ulong)local_130;
                }
                puVar11 = (uint *)((long)puVar11 - uVar17 * (long)local_130);
              }
              if (puVar11 != puVar26) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
    goto LAB_010a84d4;
  }
LAB_010a88cc:
  puVar16 = *(uint **)(*(long *)(param_1 + 0x208) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    unaff_x27 = (uint *)0x101010101010101;
LAB_010a8928:
    piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
    puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
    if ((*puVar18 < 5) || ((ulong)puVar18[2] == 0)) {
      lVar8 = 0;
    }
    else {
      puVar26 = (uint *)((long)piVar1 + (ulong)puVar18[2]);
      lVar8 = (long)puVar26 + (ulong)*puVar26;
    }
    bVar3 = *(byte *)(lVar8 + 4);
    puVar25 = &DAT_cbf29ce484222645;
    if (bVar3 != 0) {
      puVar25 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)(lVar8 + 5);
      do {
        puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar3 != 0);
    }
    if (local_198 != (undefined1 *)0x0) {
      uVar17 = (long)local_198 - ((ulong)local_198 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        puVar13 = (undefined1 *)((ulong)(local_198 + -1) & (ulong)puVar25);
      }
      else {
        puVar13 = puVar25;
        if (local_198 <= puVar25) {
          uVar20 = 0;
          if (local_198 != (undefined1 *)0x0) {
            uVar20 = (ulong)puVar25 / (ulong)local_198;
          }
          puVar13 = puVar25 + -(uVar20 * (long)local_198);
        }
      }
      plVar7 = *(long **)(local_1a0 + (long)puVar13 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if ((undefined1 *)plVar7[1] == puVar25) {
              if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a8a88;
            }
            else if ((undefined1 *)((ulong)plVar7[1] & (ulong)(local_198 + -1)) != puVar13) break;
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            puVar15 = (undefined1 *)plVar7[1];
            if (puVar15 == puVar25) {
              if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a8a88;
            }
            else {
              if (local_198 <= puVar15) {
                uVar17 = 0;
                if (local_198 != (undefined1 *)0x0) {
                  uVar17 = (ulong)puVar15 / (ulong)local_198;
                }
                puVar15 = puVar15 + -(uVar17 * (long)local_198);
              }
              if (puVar15 != puVar13) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
    goto LAB_010a8d70;
  }
LAB_010a8d7c:
  FUN_010aecfc(&local_208);
  FUN_010aef90(&local_1a0);
  FUN_010af224(&local_138);
  FUN_010af4b8(&local_d0);
  puVar16 = *(uint **)(*(long *)(param_1 + 0x2f8) + 0x250);
  piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  puVar16 = puVar12 + 1;
  uVar17 = (ulong)*puVar12;
  if (uVar17 != 0) {
    puVar12 = puVar16 + uVar17;
    plVar7 = (long *)(param_1 + 0x4f08);
    plVar14 = (long *)(param_1 + 0x4f38);
    do {
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar4 = *puVar18;
      if (uVar4 < 5) {
        lVar22 = 0;
        lVar8 = 0;
        uVar17 = 0;
      }
      else {
        iVar6 = 0;
        if ((ulong)puVar18[2] != 0) {
          iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[2]);
        }
        lVar8 = (long)iVar6;
        if (uVar4 < 7) {
          lVar22 = 0;
        }
        else {
          iVar6 = 0;
          if ((ulong)puVar18[3] != 0) {
            iVar6 = *(int *)((long)piVar1 + (ulong)puVar18[3]);
          }
          lVar22 = (long)iVar6;
          if (8 < uVar4) {
            uVar17 = 0;
            if ((ulong)puVar18[4] != 0) {
              uVar17 = (ulong)(*(char *)((long)piVar1 + (ulong)puVar18[4]) != '\0');
            }
            goto LAB_010a8e48;
          }
        }
        uVar17 = 0;
      }
LAB_010a8e48:
      puVar26 = *(uint **)(param_1 + 0x4f10);
      puVar11 = (uint *)(lVar8 << 0x20 | lVar22 << 0x10 | uVar17);
      if (puVar26 == (uint *)0x0) {
LAB_010a8ea8:
        plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x4f40) + 0x10))
                                   (*(long **)(param_1 + 0x4f40),0x20,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x4f40) + 0xb8))();
        }
        uVar27 = *(undefined8 *)(param_1 + 0x4f40);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar8 == 0) {
          plVar9[2] = (long)puVar11;
          plVar9[3] = (long)piVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_010a9b38:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar27;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar9[2] = (long)puVar11;
          plVar9[3] = (long)piVar1;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *plVar9 = 0;
        plVar9[1] = (long)puVar11;
        fVar29 = (float)(*(long *)(param_1 + 0x4f60) + 1);
        if ((puVar26 == (uint *)0x0) || (*(float *)(param_1 + 0x4f68) * (float)puVar26 < fVar29)) {
          uVar17 = (ulong)(puVar26 < (uint *)0x3 || ((ulong)puVar26 & (long)puVar26 - 1U) != 0) |
                   (long)puVar26 << 1;
          uVar20 = (ulong)(fVar29 / *(float *)(param_1 + 0x4f68));
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          FUN_010b31e0(plVar7,uVar20);
          puVar26 = *(uint **)(param_1 + 0x4f10);
          if (((ulong)puVar26 & (long)puVar26 - 1U) == 0) {
            unaff_x27 = (uint *)((long)puVar26 - 1U & (ulong)puVar11);
          }
          else if (puVar11 < puVar26) {
            unaff_x27 = puVar11;
          }
          else {
            uVar17 = 0;
            if (puVar26 != (uint *)0x0) {
              uVar17 = (ulong)puVar11 / (ulong)puVar26;
            }
            unaff_x27 = (uint *)((long)puVar11 - uVar17 * (long)puVar26);
          }
        }
        plVar10 = *(long **)(*plVar7 + (long)unaff_x27 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = *plVar14;
          *plVar14 = (long)plVar9;
          *(long **)(*plVar7 + (long)unaff_x27 * 8) = plVar14;
          if (*plVar9 != 0) {
            puVar11 = *(uint **)(*plVar9 + 8);
            if (((ulong)puVar26 & (long)puVar26 - 1U) == 0) {
              puVar11 = (uint *)((ulong)puVar11 & (long)puVar26 - 1U);
            }
            else if (puVar26 <= puVar11) {
              uVar17 = 0;
              if (puVar26 != (uint *)0x0) {
                uVar17 = (ulong)puVar11 / (ulong)puVar26;
              }
              puVar11 = (uint *)((long)puVar11 - uVar17 * (long)puVar26);
            }
            plVar10 = (long *)(*plVar7 + (long)puVar11 * 8);
            goto LAB_010a8f8c;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_010a8f8c:
          *plVar10 = (long)plVar9;
        }
        *(long *)(param_1 + 0x4f60) = *(long *)(param_1 + 0x4f60) + 1;
      }
      else {
        uVar17 = (long)puVar26 - ((ulong)puVar26 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          unaff_x27 = (uint *)((long)puVar26 - 1U & (ulong)puVar11);
        }
        else {
          unaff_x27 = puVar11;
          if (puVar26 <= puVar11) {
            uVar20 = 0;
            if (puVar26 != (uint *)0x0) {
              uVar20 = (ulong)puVar11 / (ulong)puVar26;
            }
            unaff_x27 = (uint *)((long)puVar11 - uVar20 * (long)puVar26);
          }
        }
        plVar9 = *(long **)(*plVar7 + (long)unaff_x27 * 8);
        if (plVar9 == (long *)0x0) goto LAB_010a8ea8;
        if (uVar17 < 2) {
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) ||
               ((uint *)plVar9[1] != puVar11 &&
                (uint *)((ulong)plVar9[1] & (long)puVar26 - 1U) != unaff_x27)) goto LAB_010a8ea8;
          } while ((uint *)plVar9[2] != puVar11);
        }
        else {
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_010a8ea8;
            puVar28 = (uint *)plVar9[1];
            if (puVar28 != puVar11) {
              if (puVar26 <= puVar28) {
                uVar17 = 0;
                if (puVar26 != (uint *)0x0) {
                  uVar17 = (ulong)puVar28 / (ulong)puVar26;
                }
                puVar28 = (uint *)((long)puVar28 - uVar17 * (long)puVar26);
              }
              if (puVar28 != unaff_x27) goto LAB_010a8ea8;
            }
          } while ((uint *)plVar9[2] != puVar11);
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar12);
  }
  return;
LAB_010a78b8:
  if ((uVar4 < 5) || ((ulong)puVar18[2] == 0)) {
    lVar8 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar1 + (ulong)puVar18[2]);
    lVar8 = (long)puVar26 + (ulong)*puVar26;
  }
  bVar3 = *(byte *)(lVar8 + 4);
  puVar25 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar25 = &DAT_cbf29ce484222645;
    pbVar19 = (byte *)(lVar8 + 5);
    do {
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar3 != 0);
  }
  local_210 = puVar25;
  if (local_200 != (undefined1 *)0x0) {
    uVar17 = (long)local_200 - ((ulong)local_200 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar13 = (undefined1 *)((ulong)(local_200 + -1) & (ulong)puVar25);
    }
    else {
      puVar13 = puVar25;
      if (local_200 <= puVar25) {
        uVar20 = 0;
        if (local_200 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)local_200;
        }
        puVar13 = puVar25 + -(uVar20 * (long)local_200);
      }
    }
    plVar9 = *(long **)(local_208 + (long)puVar13 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if ((undefined1 *)plVar9[1] == puVar25) {
            if ((undefined1 *)plVar9[2] == puVar25) goto LAB_010a7dc0;
          }
          else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(local_200 + -1)) != puVar13) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar9[1];
          if (puVar15 == puVar25) {
            if ((undefined1 *)plVar9[2] == puVar25) goto LAB_010a7dc0;
          }
          else {
            if (local_200 <= puVar15) {
              uVar17 = 0;
              if (local_200 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar15 / (ulong)local_200;
              }
              puVar15 = puVar15 + -(uVar17 * (long)local_200);
            }
            if (puVar15 != puVar13) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  FUN_0108c208(&local_250,piVar1);
LAB_010a7ddc:
  FUN_010a9bd4(plVar7,&local_210,&local_250);
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
      (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar17 == 0)) ||
     (uVar2 = *(uint *)((long)piVar1 + uVar17), uVar2 == 0)) goto LAB_010a7f64;
  local_250 = (ulong)uVar2 << 0x20 | 1;
  puVar13 = *(undefined1 **)(param_1 + 0x4e40);
  if (puVar13 == (undefined1 *)0x0) goto LAB_010a7eb8;
  uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar17 < 2) {
    puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
  }
  else {
    puVar15 = puVar25;
    if (puVar13 <= puVar25) {
      uVar20 = 0;
      if (puVar13 != (undefined1 *)0x0) {
        uVar20 = (ulong)puVar25 / (ulong)puVar13;
      }
      puVar15 = puVar25 + -(uVar20 * (long)puVar13);
    }
  }
  puVar21 = *(undefined8 **)(*plVar7 + (long)puVar15 * 8);
  if ((puVar21 == (undefined8 *)0x0) || (plVar14 = (long *)*puVar21, plVar14 == (long *)0x0))
  goto LAB_010a7eb8;
  if (uVar17 < 2) {
    do {
      if ((undefined1 *)plVar14[1] == puVar25) {
        if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a7fb8;
      }
      else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar13 + -1)) != puVar15)
      goto LAB_010a7eb8;
      plVar14 = (long *)*plVar14;
      plVar9 = (long *)0x0;
    } while (plVar14 != (long *)0x0);
  }
  else {
    do {
      puVar24 = (undefined1 *)plVar14[1];
      if (puVar24 == puVar25) {
        if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a7fb8;
      }
      else {
        if (puVar13 <= puVar24) {
          uVar17 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar17 = (ulong)puVar24 / (ulong)puVar13;
          }
          puVar24 = puVar24 + -(uVar17 * (long)puVar13);
        }
        if (puVar24 != puVar15) goto LAB_010a7eb8;
      }
      plVar14 = (long *)*plVar14;
      plVar9 = (long *)0x0;
    } while (plVar14 != (long *)0x0);
  }
  goto LAB_010a7f4c;
LAB_010a7dc0:
  local_218 = plVar9[3];
  local_250 = (ulong)local_250._1_7_ << 8;
  local_248 = (int *)0x0;
  local_238 = (int *)0x0;
  local_230 = 0;
  local_220 = 0;
  local_240 = piVar1;
  local_228 = plVar14[3];
  goto LAB_010a7ddc;
LAB_010a7b10:
  if ((uVar4 < 5) || ((ulong)puVar18[2] == 0)) {
    lVar8 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar1 + (ulong)puVar18[2]);
    lVar8 = (long)puVar26 + (ulong)*puVar26;
  }
  bVar3 = *(byte *)(lVar8 + 4);
  puVar25 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar25 = &DAT_cbf29ce484222645;
    pbVar19 = (byte *)(lVar8 + 5);
    do {
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar3 != 0);
  }
  local_210 = puVar25;
  if (local_200 != (undefined1 *)0x0) {
    uVar17 = (long)local_200 - ((ulong)local_200 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar13 = (undefined1 *)((ulong)(local_200 + -1) & (ulong)puVar25);
    }
    else {
      puVar13 = puVar25;
      if (local_200 <= puVar25) {
        uVar20 = 0;
        if (local_200 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)local_200;
        }
        puVar13 = puVar25 + -(uVar20 * (long)local_200);
      }
    }
    plVar9 = *(long **)(local_208 + (long)puVar13 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if ((undefined1 *)plVar9[1] == puVar25) {
            if ((undefined1 *)plVar9[2] == puVar25) goto LAB_010a7c74;
          }
          else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(local_200 + -1)) != puVar13) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar9[1];
          if (puVar15 == puVar25) {
            if ((undefined1 *)plVar9[2] == puVar25) goto LAB_010a7c74;
          }
          else {
            if (local_200 <= puVar15) {
              uVar17 = 0;
              if (local_200 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar15 / (ulong)local_200;
              }
              puVar15 = puVar15 + -(uVar17 * (long)local_200);
            }
            if (puVar15 != puVar13) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  FUN_0108c220(&local_250,piVar1);
LAB_010a7c94:
  FUN_010a9bd4(plVar7,&local_210,&local_250);
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
      (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar17 == 0)) ||
     (uVar2 = *(uint *)((long)piVar1 + uVar17), uVar2 == 0)) goto LAB_010a7f64;
  local_250 = (ulong)uVar2 << 0x20 | 1;
  puVar13 = *(undefined1 **)(param_1 + 0x4e40);
  if (puVar13 == (undefined1 *)0x0) {
LAB_010a7eb8:
    plVar9 = (long *)0x0;
  }
  else {
    uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
    }
    else {
      puVar15 = puVar25;
      if (puVar13 <= puVar25) {
        uVar20 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)puVar13;
        }
        puVar15 = puVar25 + -(uVar20 * (long)puVar13);
      }
    }
    plVar14 = *(long **)(*plVar7 + (long)puVar15 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_010a7eb8;
    if (uVar17 < 2) {
      do {
        if ((undefined1 *)plVar14[1] == puVar25) {
          if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a7fb8;
        }
        else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar13 + -1)) != puVar15)
        goto LAB_010a7eb8;
        plVar14 = (long *)*plVar14;
        plVar9 = (long *)0x0;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        puVar24 = (undefined1 *)plVar14[1];
        if (puVar24 == puVar25) {
          if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a7fb8;
        }
        else {
          if (puVar13 <= puVar24) {
            uVar17 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar24 / (ulong)puVar13;
            }
            puVar24 = puVar24 + -(uVar17 * (long)puVar13);
          }
          if (puVar24 != puVar15) goto LAB_010a7eb8;
        }
        plVar14 = (long *)*plVar14;
        plVar9 = (long *)0x0;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_010a7f4c:
  FUN_010aa0f8(param_1 + 0x4ea0,&local_250,plVar9 + 3);
LAB_010a7f64:
  puVar16 = puVar16 + 1;
  if (puVar16 == puVar12) goto LAB_010a7fc0;
  goto LAB_010a77b4;
LAB_010a7c74:
  local_218 = plVar9[3];
  local_250 = (ulong)local_250._1_7_ << 8;
  local_248 = (int *)0x0;
  local_238 = (int *)0x0;
  local_228 = 0;
  local_220 = 0;
  local_240 = piVar1;
  local_230 = plVar14[3];
  goto LAB_010a7c94;
LAB_010a7fb8:
  plVar9 = plVar14;
  goto LAB_010a7f4c;
LAB_010a8220:
  if ((*puVar18 < 5) || ((ulong)puVar18[2] == 0)) {
    lVar8 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar1 + (ulong)puVar18[2]);
    lVar8 = (long)puVar26 + (ulong)*puVar26;
  }
  bVar3 = *(byte *)(lVar8 + 4);
  puVar25 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar25 = &DAT_cbf29ce484222645;
    pbVar19 = (byte *)(lVar8 + 5);
    do {
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar3 != 0);
  }
  local_210 = puVar25;
  if (local_200 != (undefined1 *)0x0) {
    uVar17 = (long)local_200 - ((ulong)local_200 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar13 = (undefined1 *)((ulong)(local_200 + -1) & (ulong)puVar25);
    }
    else {
      puVar13 = puVar25;
      if (local_200 <= puVar25) {
        uVar20 = 0;
        if (local_200 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)local_200;
        }
        puVar13 = puVar25 + -(uVar20 * (long)local_200);
      }
    }
    plVar14 = *(long **)(local_208 + (long)puVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == puVar25) {
            if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a83cc;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(local_200 + -1)) != puVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar14[1];
          if (puVar15 == puVar25) {
            if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a83cc;
          }
          else {
            if (local_200 <= puVar15) {
              uVar17 = 0;
              if (local_200 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar15 / (ulong)local_200;
              }
              puVar15 = puVar15 + -(uVar17 * (long)local_200);
            }
            if (puVar15 != puVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  FUN_0108c1f0(&local_250,piVar1);
LAB_010a83e0:
  FUN_010a9bd4((long *)(param_1 + 0x4e38),&local_210,&local_250);
  if (((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar17 != 0)) &&
     (uVar2 = *(uint *)((long)piVar1 + uVar17), uVar2 != 0)) {
    local_250 = (ulong)uVar2 << 0x20 | 1;
    puVar13 = *(undefined1 **)(param_1 + 0x4dd8);
    if (puVar13 == (undefined1 *)0x0) {
LAB_010a9540:
      plVar14 = (long *)0x0;
    }
    else {
      uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
      }
      else {
        puVar15 = puVar25;
        if (puVar13 <= puVar25) {
          uVar20 = 0;
          if (puVar13 != (undefined1 *)0x0) {
            uVar20 = (ulong)puVar25 / (ulong)puVar13;
          }
          puVar15 = puVar25 + -(uVar20 * (long)puVar13);
        }
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x4dd0) + (long)puVar15 * 8);
      if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
      goto LAB_010a9540;
      if (uVar17 < 2) {
        do {
          if ((undefined1 *)plVar7[1] == puVar25) {
            if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a8854;
          }
          else if ((undefined1 *)((ulong)plVar7[1] & (ulong)(puVar13 + -1)) != puVar15)
          goto LAB_010a9540;
          plVar7 = (long *)*plVar7;
          plVar14 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          puVar24 = (undefined1 *)plVar7[1];
          if (puVar24 == puVar25) {
            if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a8854;
          }
          else {
            if (puVar13 <= puVar24) {
              uVar17 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar24 / (ulong)puVar13;
              }
              puVar24 = puVar24 + -(uVar17 * (long)puVar13);
            }
            if (puVar24 != puVar15) goto LAB_010a9540;
          }
          plVar7 = (long *)*plVar7;
          plVar14 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
    }
LAB_010a84bc:
    FUN_010aa0f8(param_1 + 0x4ea0,&local_250,plVar14 + 3);
  }
LAB_010a84d4:
  if (local_c8 != (uint *)0x0) {
    uVar17 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar26 = (uint *)((long)local_c8 - 1U & (ulong)unaff_x27);
    }
    else {
      puVar26 = unaff_x27;
      if (local_c8 <= unaff_x27) {
        uVar20 = 0;
        if (local_c8 != (uint *)0x0) {
          uVar20 = (ulong)unaff_x27 / (ulong)local_c8;
        }
        puVar26 = (uint *)((long)unaff_x27 - uVar20 * (long)local_c8);
      }
    }
    plVar7 = *(long **)(local_d0 + (long)puVar26 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if ((uint *)plVar7[1] == unaff_x27) {
            if ((uint *)plVar7[2] == unaff_x27) goto LAB_010a85c4;
          }
          else if ((uint *)((ulong)plVar7[1] & (long)local_c8 - 1U) != puVar26) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          puVar11 = (uint *)plVar7[1];
          if (puVar11 == unaff_x27) {
            if ((uint *)plVar7[2] == unaff_x27) goto LAB_010a85c4;
          }
          else {
            if (local_c8 <= puVar11) {
              uVar17 = 0;
              if (local_c8 != (uint *)0x0) {
                uVar17 = (ulong)puVar11 / (ulong)local_c8;
              }
              puVar11 = (uint *)((long)puVar11 - uVar17 * (long)local_c8);
            }
            if (puVar11 != puVar26) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  goto LAB_010a88c0;
LAB_010a83cc:
  FUN_0108c238(&local_250,piVar1,plVar7[3],plVar14[3]);
  goto LAB_010a83e0;
LAB_010a8854:
  plVar14 = plVar7;
  goto LAB_010a84bc;
LAB_010a85c4:
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar1 + uVar17);
    lVar8 = (long)puVar26 + (ulong)*puVar26;
  }
  bVar3 = *(byte *)(lVar8 + 4);
  puVar25 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar25 = &DAT_cbf29ce484222645;
    pbVar19 = (byte *)(lVar8 + 5);
    do {
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar3 != 0);
  }
  local_210 = puVar25;
  if (local_200 != (undefined1 *)0x0) {
    uVar17 = (long)local_200 - ((ulong)local_200 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar13 = (undefined1 *)((ulong)(local_200 + -1) & (ulong)puVar25);
    }
    else {
      puVar13 = puVar25;
      if (local_200 <= puVar25) {
        uVar20 = 0;
        if (local_200 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)local_200;
        }
        puVar13 = puVar25 + -(uVar20 * (long)local_200);
      }
    }
    plVar14 = *(long **)(local_208 + (long)puVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == puVar25) {
            if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a8734;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(local_200 + -1)) != puVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar14[1];
          if (puVar15 == puVar25) {
            if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a8734;
          }
          else {
            if (local_200 <= puVar15) {
              uVar17 = 0;
              if (local_200 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar15 / (ulong)local_200;
              }
              puVar15 = puVar15 + -(uVar17 * (long)local_200);
            }
            if (puVar15 != puVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  FUN_0108c1d8(&local_250,piVar1);
LAB_010a8754:
  FUN_010a9bd4((long *)(param_1 + 0x4dd0),&local_210,&local_250);
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
      (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar17 == 0)) ||
     (iVar6 = *(int *)((long)piVar1 + uVar17), iVar6 == 0)) goto LAB_010a88c0;
  local_250 = (long)iVar6 << 0x20;
  puVar13 = *(undefined1 **)(param_1 + 0x4dd8);
  if (puVar13 == (undefined1 *)0x0) {
LAB_010a889c:
    plVar14 = (long *)0x0;
  }
  else {
    uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
    }
    else {
      puVar15 = puVar25;
      if (puVar13 <= puVar25) {
        uVar20 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)puVar13;
        }
        puVar15 = puVar25 + -(uVar20 * (long)puVar13);
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x4dd0) + (long)puVar15 * 8);
    if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
    goto LAB_010a889c;
    if (uVar17 < 2) {
      do {
        if ((undefined1 *)plVar7[1] == puVar25) {
          if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a88a4;
        }
        else if ((undefined1 *)((ulong)plVar7[1] & (ulong)(puVar13 + -1)) != puVar15)
        goto LAB_010a889c;
        plVar7 = (long *)*plVar7;
        plVar14 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        puVar24 = (undefined1 *)plVar7[1];
        if (puVar24 == puVar25) {
          if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a88a4;
        }
        else {
          if (puVar13 <= puVar24) {
            uVar17 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar24 / (ulong)puVar13;
            }
            puVar24 = puVar24 + -(uVar17 * (long)puVar13);
          }
          if (puVar24 != puVar15) goto LAB_010a889c;
        }
        plVar7 = (long *)*plVar7;
        plVar14 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_010a88a8:
  FUN_010aa0f8(param_1 + 0x4ea0,&local_250,plVar14 + 3);
LAB_010a88c0:
  puVar16 = puVar16 + 1;
  if (puVar16 == puVar12) goto LAB_010a88cc;
  goto LAB_010a8028;
LAB_010a8734:
  local_218 = plVar14[3];
  local_250 = local_250 & 0xffffffffffffff00;
  local_240 = (int *)0x0;
  local_238 = (int *)0x0;
  local_228 = 0;
  local_220 = 0;
  local_248 = piVar1;
  local_230 = plVar7[3];
  goto LAB_010a8754;
LAB_010a88a4:
  plVar14 = plVar7;
  goto LAB_010a88a8;
LAB_010a8a88:
  if ((*puVar18 < 5) || ((ulong)puVar18[2] == 0)) {
    lVar8 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar1 + (ulong)puVar18[2]);
    lVar8 = (long)puVar26 + (ulong)*puVar26;
  }
  bVar3 = *(byte *)(lVar8 + 4);
  puVar25 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar25 = &DAT_cbf29ce484222645;
    pbVar19 = (byte *)(lVar8 + 5);
    do {
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar3 != 0);
  }
  local_210 = puVar25;
  if (local_200 != (undefined1 *)0x0) {
    uVar17 = (long)local_200 - ((ulong)local_200 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar13 = (undefined1 *)((ulong)(local_200 + -1) & (ulong)puVar25);
    }
    else {
      puVar13 = puVar25;
      if (local_200 <= puVar25) {
        uVar20 = 0;
        if (local_200 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)local_200;
        }
        puVar13 = puVar25 + -(uVar20 * (long)local_200);
      }
    }
    plVar14 = *(long **)(local_208 + (long)puVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == puVar25) {
            if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a8bec;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(local_200 + -1)) != puVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar14[1];
          if (puVar15 == puVar25) {
            if ((undefined1 *)plVar14[2] == puVar25) goto LAB_010a8bec;
          }
          else {
            if (local_200 <= puVar15) {
              uVar17 = 0;
              if (local_200 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar15 / (ulong)local_200;
              }
              puVar15 = puVar15 + -(uVar17 * (long)local_200);
            }
            if (puVar15 != puVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  FUN_0108c250(&local_250,piVar1);
LAB_010a8c0c:
  FUN_010a9bd4((long *)(param_1 + 0x4dd0),&local_210,&local_250);
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
      (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar17 == 0)) ||
     (uVar2 = *(uint *)((long)piVar1 + uVar17), uVar2 == 0)) goto LAB_010a8d70;
  local_250 = (ulong)uVar2 << 0x20;
  puVar13 = *(undefined1 **)(param_1 + 0x4dd8);
  if (puVar13 == (undefined1 *)0x0) {
LAB_010a8d4c:
    plVar14 = (long *)0x0;
  }
  else {
    uVar17 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
    }
    else {
      puVar15 = puVar25;
      if (puVar13 <= puVar25) {
        uVar20 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar20 = (ulong)puVar25 / (ulong)puVar13;
        }
        puVar15 = puVar25 + -(uVar20 * (long)puVar13);
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x4dd0) + (long)puVar15 * 8);
    if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
    goto LAB_010a8d4c;
    if (uVar17 < 2) {
      do {
        if ((undefined1 *)plVar7[1] == puVar25) {
          if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a8d54;
        }
        else if ((undefined1 *)((ulong)plVar7[1] & (ulong)(puVar13 + -1)) != puVar15)
        goto LAB_010a8d4c;
        plVar7 = (long *)*plVar7;
        plVar14 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        puVar24 = (undefined1 *)plVar7[1];
        if (puVar24 == puVar25) {
          if ((undefined1 *)plVar7[2] == puVar25) goto LAB_010a8d54;
        }
        else {
          if (puVar13 <= puVar24) {
            uVar17 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar24 / (ulong)puVar13;
            }
            puVar24 = puVar24 + -(uVar17 * (long)puVar13);
          }
          if (puVar24 != puVar15) goto LAB_010a8d4c;
        }
        plVar7 = (long *)*plVar7;
        plVar14 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_010a8d58:
  FUN_010aa0f8(param_1 + 0x4ea0,&local_250,plVar14 + 3);
LAB_010a8d70:
  puVar16 = puVar16 + 1;
  if (puVar16 == puVar12) goto LAB_010a8d7c;
  goto LAB_010a8928;
LAB_010a8bec:
  local_218 = plVar14[3];
  local_248 = (int *)0x0;
  local_240 = (int *)0x0;
  local_230 = 0;
  local_228 = 0;
  local_250 = CONCAT71(local_250._1_7_,1);
  local_238 = piVar1;
  local_220 = plVar7[3];
  goto LAB_010a8c0c;
LAB_010a8d54:
  plVar14 = plVar7;
  goto LAB_010a8d58;
}


