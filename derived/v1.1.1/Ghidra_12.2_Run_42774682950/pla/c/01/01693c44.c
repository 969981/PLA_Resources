/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01693c44; name: FUN_01693c44
 */


void FUN_01693c44(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *unaff_x25;
  bool bVar23;
  long *plVar24;
  float fVar25;
  int *local_68;
  
  puVar10 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar3 = (int *)((long)puVar10 + (ulong)*puVar10);
  if (((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
      (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar15 != 0)) &&
     (puVar10 = (uint *)((long)piVar3 + uVar15), puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10)
     , puVar10 != (uint *)0x0)) {
    plVar1 = (long *)(param_1 + 0x78);
    fVar25 = (float)NEON_ucvtf(*puVar10);
    FUN_0169745c(plVar1,(long)(fVar25 / *(float *)(param_1 + 0xd8)));
    if (*puVar10 != 0) {
      uVar15 = 0;
      plVar2 = (long *)(param_1 + 0xa8);
      do {
        local_68 = (int *)((long)(puVar10 + uVar15 + 1) + (ulong)puVar10[uVar15 + 1]);
        if (*(ushort *)((long)local_68 - (long)*local_68) < 5) {
          lVar8 = 0;
        }
        else {
          uVar16 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2];
          lVar8 = 0;
          if (uVar16 != 0) {
            puVar4 = (uint *)((long)local_68 + uVar16);
            lVar8 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        bVar5 = *(byte *)(lVar8 + 4);
        plVar21 = (long *)&DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          plVar21 = (long *)&DAT_cbf29ce484222645;
          pbVar17 = (byte *)(lVar8 + 5);
          do {
            plVar21 = (long *)(((ulong)plVar21 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar5 != 0);
        }
        plVar20 = *(long **)(param_1 + 0x80);
        if (plVar20 == (long *)0x0) {
LAB_01693e08:
          plVar24 = (long *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                                      (*(long **)(param_1 + 0xb0),0x50,8);
          if (plVar24 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xb0) + 0xb8))();
          }
          uVar19 = *(undefined8 *)(param_1 + 0xb0);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar8 == 0) {
            bVar23 = true;
          }
          else {
            if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar19;
            bVar23 = false;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          }
          plVar24[2] = (long)plVar21;
          plVar24[3] = 0;
          plVar24[4] = 0;
          plVar24[5] = 0;
          plVar24[6] = 0;
          plVar24[7] = 0;
          plVar24[8] = 0;
          plVar24[9] = 0;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          lVar11 = DAT_043f1798;
          if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
             (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
            lVar22 = tpidr_el0;
            lVar9 = *(long *)(lVar22 + 0x20);
            if (*(long *)(lVar22 + 0x20) == 0) {
              *(long *)(lVar22 + 0x20) = DAT_043f1798;
              lVar9 = lVar11;
            }
          }
          plVar24[6] = lVar9;
          *(undefined4 *)(plVar24 + 9) = 0;
          plVar24[7] = 0x1fffffffffffffff;
          plVar24[8] = 0;
          if (!bVar23) {
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          }
          *plVar24 = 0;
          plVar24[1] = (long)plVar21;
          fVar25 = (float)(*(long *)(param_1 + 0xd0) + 1);
          if ((plVar20 == (long *)0x0) || (*(float *)(param_1 + 0xd8) * (float)plVar20 < fVar25)) {
            uVar16 = (ulong)(plVar20 < (long *)0x3 || ((ulong)plVar20 & (long)plVar20 - 1U) != 0) |
                     (long)plVar20 << 1;
            uVar18 = (ulong)(fVar25 / *(float *)(param_1 + 0xd8));
            if (uVar18 <= uVar16) {
              uVar18 = uVar16;
            }
            FUN_0169745c(plVar1,uVar18);
            plVar20 = *(long **)(param_1 + 0x80);
            if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
              unaff_x25 = (long *)((long)plVar20 - 1U & (ulong)plVar21);
            }
            else if (plVar21 < plVar20) {
              unaff_x25 = plVar21;
            }
            else {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar21 / (ulong)plVar20;
              }
              unaff_x25 = (long *)((long)plVar21 - uVar16 * (long)plVar20);
            }
          }
          plVar21 = *(long **)(*plVar1 + (long)unaff_x25 * 8);
          if (plVar21 == (long *)0x0) {
            *plVar24 = *plVar2;
            *plVar2 = (long)plVar24;
            *(long **)(*plVar1 + (long)unaff_x25 * 8) = plVar2;
            if (*plVar24 != 0) {
              plVar21 = *(long **)(*plVar24 + 8);
              if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
                plVar21 = (long *)((ulong)plVar21 & (long)plVar20 - 1U);
              }
              else if (plVar20 <= plVar21) {
                uVar16 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar16 = (ulong)plVar21 / (ulong)plVar20;
                }
                plVar21 = (long *)((long)plVar21 - uVar16 * (long)plVar20);
              }
              plVar21 = (long *)(*plVar1 + (long)plVar21 * 8);
              goto LAB_01693f7c;
            }
          }
          else {
            *plVar24 = *plVar21;
LAB_01693f7c:
            *plVar21 = (long)plVar24;
          }
          *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
        }
        else {
          uVar16 = (long)plVar20 - ((ulong)plVar20 >> 1 & 0x5555555555555555);
          uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
          uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar16 < 2) {
            unaff_x25 = (long *)((long)plVar20 - 1U & (ulong)plVar21);
          }
          else {
            unaff_x25 = plVar21;
            if (plVar20 <= plVar21) {
              uVar18 = 0;
              if (plVar20 != (long *)0x0) {
                uVar18 = (ulong)plVar21 / (ulong)plVar20;
              }
              unaff_x25 = (long *)((long)plVar21 - uVar18 * (long)plVar20);
            }
          }
          plVar24 = *(long **)(*plVar1 + (long)unaff_x25 * 8);
          if (plVar24 == (long *)0x0) goto LAB_01693e08;
          if (uVar16 < 2) {
            do {
              plVar24 = (long *)*plVar24;
              if ((plVar24 == (long *)0x0) ||
                 ((long *)plVar24[1] != plVar21 &&
                  (long *)((ulong)plVar24[1] & (long)plVar20 - 1U) != unaff_x25)) goto LAB_01693e08;
            } while ((long *)plVar24[2] != plVar21);
          }
          else {
            do {
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_01693e08;
              plVar14 = (long *)plVar24[1];
              if (plVar14 != plVar21) {
                if (plVar20 <= plVar14) {
                  uVar16 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar16 = (ulong)plVar14 / (ulong)plVar20;
                  }
                  plVar14 = (long *)((long)plVar14 - uVar16 * (long)plVar20);
                }
                if (plVar14 != unaff_x25) goto LAB_01693e08;
              }
            } while ((long *)plVar24[2] != plVar21);
          }
        }
        lVar8 = plVar24[4];
        plVar21 = plVar24 + 6;
        if (lVar8 == plVar24[5]) {
          uVar18 = plVar24[7];
          lVar8 = lVar8 - plVar24[3] >> 3;
          uVar16 = lVar8 + 1;
          if (0x7ffffffffffffffe < uVar18) {
            uVar18 = 0x7fffffffffffffff;
          }
          unaff_x25 = plVar24 + 3;
          if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar11 = plVar24[5] - plVar24[3];
          uVar12 = lVar11 >> 2;
          if (uVar16 <= uVar12) {
            uVar16 = uVar12;
          }
          if ((ulong)(lVar11 >> 3) < uVar18 >> 1) {
            uVar18 = uVar16;
          }
          if (uVar18 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,uVar18 << 3,8);
            if (lVar11 == 0) {
              (**(code **)(*(long *)*plVar21 + 0xb8))();
            }
          }
          lVar9 = lVar11 + lVar8 * 8;
          FUN_01697a3c(plVar21,lVar9,&local_68);
          lVar22 = plVar24[3];
          lVar13 = plVar24[4];
          lVar8 = lVar9 + 8;
          if (lVar13 != lVar22) {
            do {
              lVar9 = lVar9 + -8;
              lVar13 = lVar13 + -8;
              FUN_01697b14(plVar21,lVar9,lVar13);
            } while (lVar22 != lVar13);
            lVar22 = *unaff_x25;
          }
          lVar13 = plVar24[5];
          plVar24[5] = lVar11 + uVar18 * 8;
          plVar24[3] = lVar9;
          plVar24[4] = lVar8;
          if (lVar22 != 0) {
            unaff_x25 = (long *)(lVar13 - lVar22);
            plVar21 = (long *)*plVar21;
            uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar16 & 1) != 0) {
              lVar8 = tpidr_el0;
              if (*(char *)(lVar8 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar8 + 0x38d488) = 1;
                *(undefined8 *)(lVar8 + 0x38d478) = 0;
                *(undefined8 *)(lVar8 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar8 + 0x38d480)) {
                FUN_02bcc824(plVar21,lVar22,unaff_x25,8);
                goto LAB_01693d18;
              }
            }
            (**(code **)(*plVar21 + 0x18))(plVar21,lVar22,unaff_x25,8);
          }
        }
        else {
          FUN_01697a3c(plVar21,lVar8,&local_68);
          plVar24[4] = plVar24[4] + 8;
        }
LAB_01693d18:
        uVar15 = uVar15 + 1;
      } while (uVar15 < *puVar10);
    }
  }
  return;
}


