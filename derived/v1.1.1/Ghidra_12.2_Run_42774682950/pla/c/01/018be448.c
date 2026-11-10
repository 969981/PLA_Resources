/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018be448; name: FUN_018be448
 */


void FUN_018be448(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ushort *puVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  int iVar31;
  long lVar32;
  float fVar33;
  undefined2 local_64;
  
  puVar14 = *(uint **)(*(long *)(param_1 + 0xa0) + 0x250);
  piVar3 = (int *)((long)puVar14 + (ulong)*puVar14);
  uVar22 = (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3));
  puVar4 = (uint *)((long)piVar3 + uVar22);
  uVar24 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar24);
  puVar26 = puVar4 + 1;
  uVar13 = *puVar4;
  if (uVar13 != 0) {
    puVar4 = puVar26 + uVar13;
    plVar1 = (long *)(param_1 + 0x220);
    plVar2 = (long *)(param_1 + 0x250);
    lVar25 = (long)puVar14 + uVar24 + uVar22 + (ulong)*puVar14 + 9;
    do {
      piVar3 = (int *)((long)puVar26 + (ulong)*puVar26);
      puVar19 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar19;
      if (uVar6 < 5) {
        uVar22 = 0;
LAB_018be794:
        uVar24 = 0;
        lVar32 = 0;
LAB_018be52c:
        uVar30 = 0;
      }
      else {
        if ((ulong)puVar19[2] == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(ulong *)((long)piVar3 + (ulong)puVar19[2]);
        }
        if (uVar6 < 7) goto LAB_018be794;
        if ((ulong)puVar19[3] == 0) {
          lVar32 = 0;
        }
        else {
          lVar32 = *(long *)((long)piVar3 + (ulong)puVar19[3]);
        }
        if (uVar6 < 9) {
          uVar24 = 0;
          goto LAB_018be52c;
        }
        if ((ulong)puVar19[4] != 0) {
          uVar24 = (ulong)*(uint *)((long)piVar3 + (ulong)puVar19[4]);
          if (10 < uVar6) goto LAB_018be524;
          goto LAB_018be52c;
        }
        uVar24 = 0;
        if (uVar6 < 0xb) goto LAB_018be52c;
LAB_018be524:
        if ((ulong)puVar19[5] == 0) goto LAB_018be52c;
        uVar30 = *(undefined4 *)((long)piVar3 + (ulong)puVar19[5]);
      }
      puVar14 = (uint *)((long)piVar3 + (ulong)puVar19[6]);
      uVar23 = (ulong)*puVar14;
      bVar27 = *(byte *)((long)puVar14 + uVar23 + 4);
      if (bVar27 == 0) {
LAB_018be5c4:
        piVar11 = (int *)FUN_02c53064(uVar24,uVar30);
        if (*(ushort *)((long)piVar11 - (long)*piVar11) < 0x21) {
          uVar13 = 0;
        }
        else {
          uVar23 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x10];
          if (uVar23 == 0) {
            uVar13 = 0;
          }
          else {
            cVar5 = *(char *)((long)piVar11 + uVar23);
            uVar13 = 2;
            if (cVar5 != -1) {
              uVar13 = (uint)(cVar5 == -2);
            }
          }
        }
      }
      else {
        puVar15 = &DAT_cbf29ce484222645;
        pbVar21 = (byte *)(lVar25 + uVar23 + puVar19[6] + (ulong)*puVar26);
        do {
          puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar27) * 0x100000001b3);
          bVar27 = *pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (bVar27 != 0);
        if (puVar15 == (undefined1 *)0x6734709257deb9f0) {
          uVar13 = 0;
        }
        else if (puVar15 == (undefined1 *)0x394ad5070c8b0f99) {
          uVar13 = 2;
        }
        else {
          if (puVar15 != (undefined1 *)0x610b77a3e72d8719) goto LAB_018be5c4;
          uVar13 = 1;
        }
      }
      puVar19 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar19;
      uVar28 = (undefined4)uVar24;
      if (uVar6 < 0xf) {
        bVar7 = false;
LAB_018be7a4:
        bVar8 = false;
LAB_018be7a8:
        iVar31 = 0;
        bVar27 = 1;
        uVar23 = *(ulong *)(param_1 + 0x228);
joined_r0x018be7b4:
        if (uVar23 == 0) goto LAB_018be804;
LAB_018be694:
        uVar24 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
        uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
        uVar20 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          uVar24 = uVar23 - 1 & uVar22;
        }
        else {
          uVar24 = uVar22;
          if (uVar23 <= uVar22) {
            uVar24 = 0;
            if (uVar23 != 0) {
              uVar24 = uVar22 / uVar23;
            }
            uVar24 = uVar22 - uVar24 * uVar23;
          }
        }
        plVar16 = *(long **)(*plVar1 + uVar24 * 8);
        if (plVar16 == (long *)0x0) goto LAB_018be804;
        if (uVar20 < 2) {
          do {
            plVar16 = (long *)*plVar16;
            if ((plVar16 == (long *)0x0) ||
               (plVar16[1] != uVar22 && (plVar16[1] & uVar23 - 1) != uVar24)) goto LAB_018be804;
          } while (plVar16[2] != uVar22);
        }
        else {
          do {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_018be804;
            uVar20 = plVar16[1];
            if (uVar20 != uVar22) {
              if (uVar23 <= uVar20) {
                uVar18 = 0;
                if (uVar23 != 0) {
                  uVar18 = uVar20 / uVar23;
                }
                uVar20 = uVar20 - uVar18 * uVar23;
              }
              if (uVar20 != uVar24) goto LAB_018be804;
            }
          } while (plVar16[2] != uVar22);
        }
      }
      else {
        if ((ulong)puVar19[7] == 0) {
          bVar7 = false;
        }
        else {
          bVar7 = *(char *)((long)piVar3 + (ulong)puVar19[7]) != '\0';
        }
        if (uVar6 < 0x11) goto LAB_018be7a4;
        if ((ulong)puVar19[8] == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(char *)((long)piVar3 + (ulong)puVar19[8]) != '\0';
        }
        if (uVar6 < 0x13) goto LAB_018be7a8;
        bVar9 = false;
        if ((ulong)puVar19[9] != 0) {
          bVar9 = *(char *)((long)piVar3 + (ulong)puVar19[9]) != '\0';
        }
        bVar27 = bVar9 ^ 1;
        if ((0x14 < uVar6) && ((ulong)puVar19[10] != 0)) {
          iVar31 = *(int *)((long)piVar3 + (ulong)puVar19[10]);
          uVar23 = *(ulong *)(param_1 + 0x228);
          goto joined_r0x018be7b4;
        }
        iVar31 = 0;
        uVar23 = *(ulong *)(param_1 + 0x228);
        if (uVar23 != 0) goto LAB_018be694;
LAB_018be804:
        plVar16 = (long *)(**(code **)(**(long **)(param_1 + 600) + 0x10))
                                    (*(long **)(param_1 + 600),0x38,8);
        if (plVar16 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 600) + 0xb8))();
        }
        uVar29 = *(undefined8 *)(param_1 + 600);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), iVar10 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar12 == 0) {
          plVar16[2] = uVar22;
          plVar16[3] = lVar32;
          *(undefined4 *)(plVar16 + 4) = uVar28;
          *(short *)((long)plVar16 + 0x24) = (short)uVar30;
          *(uint *)(plVar16 + 5) = uVar13;
          *(undefined2 *)((long)plVar16 + 0x26) = local_64;
          *(bool *)((long)plVar16 + 0x2c) = bVar7;
          *(bool *)((long)plVar16 + 0x2d) = bVar8;
          *(byte *)((long)plVar16 + 0x2e) = bVar27;
          *(float *)(plVar16 + 6) = (float)iVar31;
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar29;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *(short *)((long)plVar16 + 0x24) = (short)uVar30;
          plVar16[2] = uVar22;
          plVar16[3] = lVar32;
          *(undefined4 *)(plVar16 + 4) = uVar28;
          *(undefined2 *)((long)plVar16 + 0x26) = local_64;
          *(uint *)(plVar16 + 5) = uVar13;
          *(bool *)((long)plVar16 + 0x2c) = bVar7;
          *(bool *)((long)plVar16 + 0x2d) = bVar8;
          *(byte *)((long)plVar16 + 0x2e) = bVar27;
          *(float *)(plVar16 + 6) = (float)iVar31;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        *plVar16 = 0;
        plVar16[1] = uVar22;
        fVar33 = (float)(*(long *)(param_1 + 0x278) + 1);
        if ((uVar23 == 0) || (*(float *)(param_1 + 0x280) * (float)uVar23 < fVar33)) {
          uVar24 = (ulong)(uVar23 < 3 || (uVar23 & uVar23 - 1) != 0) | uVar23 << 1;
          uVar23 = (ulong)(fVar33 / *(float *)(param_1 + 0x280));
          if (uVar23 <= uVar24) {
            uVar23 = uVar24;
          }
          if (uVar23 - 1 == 0) {
            uVar23 = 2;
          }
          else if ((uVar23 & uVar23 - 1) != 0) {
            uVar23 = std::__next_prime(uVar23);
          }
          uVar24 = *(ulong *)(param_1 + 0x228);
          if (uVar24 < uVar23) {
            uVar20 = uVar23;
LAB_018be9e8:
            FUN_018c3bd8(plVar1,uVar20);
          }
          else if (uVar23 < uVar24) {
            uVar20 = (ulong)((float)*(ulong *)(param_1 + 0x278) / *(float *)(param_1 + 0x280));
            if ((uVar24 < 3) ||
               (uVar18 = uVar24 - (uVar24 >> 1 & 0x5555555555555555),
               uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333),
               1 < (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar20 = std::__next_prime(uVar20);
            }
            else if (1 < uVar20) {
              uVar20 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar20 - 1) & 0x3f);
            }
            if (uVar20 <= uVar23) {
              uVar20 = uVar23;
            }
            if (uVar20 < uVar24) goto LAB_018be9e8;
          }
          uVar23 = *(ulong *)(param_1 + 0x228);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar24 = uVar23 - 1 & uVar22;
          }
          else {
            uVar24 = uVar22;
            if (uVar23 <= uVar22) {
              uVar24 = 0;
              if (uVar23 != 0) {
                uVar24 = uVar22 / uVar23;
              }
              uVar24 = uVar22 - uVar24 * uVar23;
            }
          }
        }
        plVar17 = *(long **)(*plVar1 + uVar24 * 8);
        if (plVar17 == (long *)0x0) {
          *plVar16 = *plVar2;
          *plVar2 = (long)plVar16;
          *(long **)(*plVar1 + uVar24 * 8) = plVar2;
          if (*plVar16 != 0) {
            uVar22 = *(ulong *)(*plVar16 + 8);
            if ((uVar23 & uVar23 - 1) == 0) {
              uVar22 = uVar22 & uVar23 - 1;
            }
            else if (uVar23 <= uVar22) {
              uVar24 = 0;
              if (uVar23 != 0) {
                uVar24 = uVar22 / uVar23;
              }
              uVar22 = uVar22 - uVar24 * uVar23;
            }
            plVar17 = (long *)(*plVar1 + uVar22 * 8);
            goto LAB_018be960;
          }
        }
        else {
          *plVar16 = *plVar17;
LAB_018be960:
          *plVar17 = (long)plVar16;
        }
        *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x278) + 1;
      }
      puVar26 = puVar26 + 1;
      lVar25 = lVar25 + 4;
    } while (puVar26 != puVar4);
  }
  return;
}


