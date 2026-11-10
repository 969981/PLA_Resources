/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0169b250; name: FUN_0169b250
 */


void FUN_0169b250(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  bool bVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined1 *unaff_x26;
  long *plVar24;
  float fVar25;
  int *local_68;
  
  puVar9 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar3 = (int *)((long)puVar9 + (ulong)*puVar9);
  if (((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
      (uVar13 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar13 != 0)) &&
     (puVar9 = (uint *)((long)piVar3 + uVar13), puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9),
     puVar9 != (uint *)0x0)) {
    plVar1 = (long *)(param_1 + 0x78);
    fVar25 = (float)NEON_ucvtf(*puVar9);
    FUN_0169eeec(plVar1,(long)(fVar25 / *(float *)(param_1 + 0xd8)));
    if (*puVar9 != 0) {
      uVar13 = 0;
      plVar2 = (long *)(param_1 + 0xa8);
      do {
        local_68 = (int *)((long)(puVar9 + uVar13 + 1) + (ulong)puVar9[uVar13 + 1]);
        if (*(ushort *)((long)local_68 - (long)*local_68) < 5) {
          lVar17 = 0;
        }
        else {
          uVar14 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2];
          lVar17 = 0;
          if (uVar14 != 0) {
            puVar4 = (uint *)((long)local_68 + uVar14);
            lVar17 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        bVar5 = *(byte *)(lVar17 + 4);
        puVar22 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar22 = &DAT_cbf29ce484222645;
          pbVar15 = (byte *)(lVar17 + 5);
          do {
            puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar5 != 0);
        }
        puVar21 = *(undefined1 **)(param_1 + 0x80);
        if (puVar21 == (undefined1 *)0x0) {
LAB_0169b65c:
          plVar24 = (long *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                                      (*(long **)(param_1 + 0xb0),0x50,8);
          if (plVar24 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xb0) + 0xb8))();
          }
          uVar18 = *(undefined8 *)(param_1 + 0xb0);
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar6 = PTR_DAT_04379528;
            if (iVar7 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar17 == 0) {
            bVar19 = true;
          }
          else {
            if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_0169b9e0:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar18;
            bVar19 = false;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
          }
          plVar24[2] = (long)puVar22;
          plVar24[3] = 0;
          plVar24[4] = 0;
          plVar24[5] = 0;
          plVar24[6] = 0;
          plVar24[7] = 0;
          plVar24[8] = 0;
          plVar24[9] = 0;
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar6 = PTR_DAT_04379528;
            if (iVar7 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          lVar11 = DAT_043f1798;
          if (((lVar20 == 0) || (*(long *)(lVar20 + 0x80) == 0)) ||
             (lVar20 = *(long *)(lVar20 + *(long *)(lVar20 + 0x80) * 8 + -8), lVar20 == 0)) {
            lVar8 = tpidr_el0;
            lVar20 = *(long *)(lVar8 + 0x20);
            if (*(long *)(lVar8 + 0x20) == 0) {
              *(long *)(lVar8 + 0x20) = DAT_043f1798;
              lVar20 = lVar11;
            }
          }
          plVar24[6] = lVar20;
          *(undefined4 *)(plVar24 + 9) = 0;
          plVar24[7] = 0x1fffffffffffffff;
          plVar24[8] = 0;
          if (!bVar19) {
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
          }
          *plVar24 = 0;
          plVar24[1] = (long)puVar22;
          fVar25 = (float)(*(long *)(param_1 + 0xd0) + 1);
          if ((puVar21 == (undefined1 *)0x0) ||
             (*(float *)(param_1 + 0xd8) * (float)puVar21 < fVar25)) {
            uVar14 = (ulong)(puVar21 < (undefined1 *)0x3 ||
                            ((ulong)puVar21 & (ulong)(puVar21 + -1)) != 0) | (long)puVar21 << 1;
            uVar16 = (ulong)(fVar25 / *(float *)(param_1 + 0xd8));
            if (uVar16 <= uVar14) {
              uVar16 = uVar14;
            }
            FUN_0169eeec(plVar1,uVar16);
            puVar21 = *(undefined1 **)(param_1 + 0x80);
            if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
              unaff_x26 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)puVar22);
            }
            else if (puVar22 < puVar21) {
              unaff_x26 = puVar22;
            }
            else {
              uVar14 = 0;
              if (puVar21 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar22 / (ulong)puVar21;
              }
              unaff_x26 = puVar22 + -(uVar14 * (long)puVar21);
            }
          }
          plVar23 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
          if (plVar23 == (long *)0x0) {
            *plVar24 = *plVar2;
            *plVar2 = (long)plVar24;
            *(long **)(*plVar1 + (long)unaff_x26 * 8) = plVar2;
            if (*plVar24 != 0) {
              puVar22 = *(undefined1 **)(*plVar24 + 8);
              if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
                puVar22 = (undefined1 *)((ulong)puVar22 & (ulong)(puVar21 + -1));
              }
              else if (puVar21 <= puVar22) {
                uVar14 = 0;
                if (puVar21 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar22 / (ulong)puVar21;
                }
                puVar22 = puVar22 + -(uVar14 * (long)puVar21);
              }
              plVar23 = (long *)(*plVar1 + (long)puVar22 * 8);
              goto LAB_0169b7d0;
            }
          }
          else {
            *plVar24 = *plVar23;
LAB_0169b7d0:
            *plVar23 = (long)plVar24;
          }
          *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
        }
        else {
          uVar14 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
          uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar14 < 2) {
            unaff_x26 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)puVar22);
          }
          else {
            unaff_x26 = puVar22;
            if (puVar21 <= puVar22) {
              uVar16 = 0;
              if (puVar21 != (undefined1 *)0x0) {
                uVar16 = (ulong)puVar22 / (ulong)puVar21;
              }
              unaff_x26 = puVar22 + -(uVar16 * (long)puVar21);
            }
          }
          plVar24 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
          if (plVar24 == (long *)0x0) goto LAB_0169b65c;
          if (uVar14 < 2) {
            do {
              plVar24 = (long *)*plVar24;
              if ((plVar24 == (long *)0x0) ||
                 ((undefined1 *)plVar24[1] != puVar22 &&
                  (undefined1 *)((ulong)plVar24[1] & (ulong)(puVar21 + -1)) != unaff_x26))
              goto LAB_0169b65c;
            } while ((undefined1 *)plVar24[2] != puVar22);
          }
          else {
            do {
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_0169b65c;
              puVar10 = (undefined1 *)plVar24[1];
              if (puVar10 != puVar22) {
                if (puVar21 <= puVar10) {
                  uVar14 = 0;
                  if (puVar21 != (undefined1 *)0x0) {
                    uVar14 = (ulong)puVar10 / (ulong)puVar21;
                  }
                  puVar10 = puVar10 + -(uVar14 * (long)puVar21);
                }
                if (puVar10 != unaff_x26) goto LAB_0169b65c;
              }
            } while ((undefined1 *)plVar24[2] != puVar22);
          }
        }
        lVar17 = plVar24[4];
        plVar23 = plVar24 + 6;
        if (lVar17 == plVar24[5]) {
          uVar16 = plVar24[7];
          lVar17 = lVar17 - plVar24[3] >> 3;
          uVar14 = lVar17 + 1;
          if (0x7ffffffffffffffe < uVar16) {
            uVar16 = 0x7fffffffffffffff;
          }
          if (uVar16 < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar11 = plVar24[5] - plVar24[3];
          if ((ulong)(lVar11 >> 3) < uVar16 >> 1) {
            uVar12 = lVar11 >> 2;
            uVar16 = uVar14;
            if (uVar14 <= uVar12) {
              uVar16 = uVar12;
            }
          }
          if (uVar16 == 0) {
            unaff_x26 = (undefined1 *)0x0;
          }
          else {
            unaff_x26 = (undefined1 *)
                        (**(code **)(*(long *)*plVar23 + 0x10))((long *)*plVar23,uVar16 << 3,8);
            if (unaff_x26 == (undefined1 *)0x0) {
              (**(code **)(*(long *)*plVar23 + 0xb8))();
            }
          }
          puVar22 = unaff_x26 + lVar17 * 8;
          FUN_0169f4cc(plVar23,puVar22,&local_68);
          lVar17 = plVar24[3];
          lVar11 = plVar24[4];
          puVar21 = puVar22;
          if (lVar11 != lVar17) {
            do {
              lVar20 = *plVar23;
              if (((*PTR_DAT_04379520 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
              lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar8 == 0) {
                *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(lVar11 + -8);
              }
              else {
                if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0169b9e0;
                *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar20;
                *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(lVar11 + -8);
                *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
              }
              lVar11 = lVar11 + -8;
              puVar21 = puVar21 + -8;
            } while (lVar17 != lVar11);
            lVar17 = plVar24[3];
          }
          plVar24[3] = (long)puVar21;
          plVar24[4] = (long)(puVar22 + 8);
          lVar11 = plVar24[5];
          plVar24[5] = (long)(unaff_x26 + uVar16 * 8);
          if (lVar17 != 0) {
            plVar23 = (long *)*plVar23;
            uVar14 = (**(code **)(*plVar23 + 0xc0))(plVar23);
            if ((uVar14 & 1) != 0) {
              lVar20 = tpidr_el0;
              if (*(char *)(lVar20 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar20 + 0x38d488) = 1;
                *(undefined8 *)(lVar20 + 0x38d478) = 0;
                *(undefined8 *)(lVar20 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar20 + 0x38d480)) {
                FUN_02bcc824(plVar23,lVar17,lVar11 - lVar17,8);
                goto LAB_0169b324;
              }
            }
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar11 - lVar17,8);
          }
        }
        else {
          FUN_0169f4cc(plVar23,lVar17,&local_68);
          plVar24[4] = plVar24[4] + 8;
        }
LAB_0169b324:
        uVar13 = uVar13 + 1;
      } while (uVar13 < *puVar9);
    }
  }
  return;
}


