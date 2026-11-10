/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01671108; name: FUN_01671108
 */


void FUN_01671108(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  bool bVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *unaff_x28;
  float fVar26;
  int *local_68;
  
  puVar8 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  piVar3 = (int *)((long)puVar8 + (ulong)*puVar8);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar14 == 0)) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar8 = (uint *)((long)piVar3 + uVar14);
    puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
  }
  plVar1 = (long *)(param_1 + 0x78);
  fVar26 = (float)NEON_ucvtf(*puVar8);
  FUN_01671c60(plVar1,(long)(fVar26 / *(float *)(param_1 + 0xd8)));
  if (*puVar8 != 0) {
    uVar14 = 0;
    plVar2 = (long *)(param_1 + 0xa8);
    do {
      piVar3 = (int *)((long)(puVar8 + uVar14 + 1) + (ulong)puVar8[uVar14 + 1]);
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
        piVar13 = (int *)0x0;
      }
      else {
        uVar9 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        piVar13 = (int *)0x0;
        if (uVar9 != 0) {
          puVar4 = (uint *)((long)piVar3 + uVar9);
          piVar13 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar9 == 0)) {
        plVar24 = (long *)0x0;
        plVar23 = *(long **)(param_1 + 0x80);
        if (plVar23 != (long *)0x0) goto LAB_01671244;
LAB_016714c8:
        plVar25 = (long *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                                    (*(long **)(param_1 + 0xb0),0x50,8);
        if (plVar25 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xb0) + 0xb8))();
        }
        uVar18 = *(undefined8 *)(param_1 + 0xb0);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar5 = PTR_DAT_04379528;
          if (iVar6 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar16 == 0) {
          bVar19 = true;
        }
        else {
          if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_01671878:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar18;
          bVar19 = false;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        }
        plVar25[2] = (long)plVar24;
        plVar25[3] = 0;
        plVar25[4] = 0;
        plVar25[5] = 0;
        plVar25[6] = 0;
        plVar25[7] = 0;
        plVar25[8] = 0;
        plVar25[9] = 0;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar5 = PTR_DAT_04379528;
          if (iVar6 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        lVar11 = DAT_043f1798;
        if (((lVar21 == 0) || (*(long *)(lVar21 + 0x80) == 0)) ||
           (lVar21 = *(long *)(lVar21 + *(long *)(lVar21 + 0x80) * 8 + -8), lVar21 == 0)) {
          lVar17 = tpidr_el0;
          lVar21 = *(long *)(lVar17 + 0x20);
          if (*(long *)(lVar17 + 0x20) == 0) {
            *(long *)(lVar17 + 0x20) = DAT_043f1798;
            lVar21 = lVar11;
          }
        }
        plVar25[6] = lVar21;
        *(undefined4 *)(plVar25 + 9) = 0;
        plVar25[7] = 0x1fffffffffffffff;
        plVar25[8] = 0;
        if (!bVar19) {
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        }
        *plVar25 = 0;
        plVar25[1] = (long)plVar24;
        fVar26 = (float)(*(long *)(param_1 + 0xd0) + 1);
        if ((plVar23 == (long *)0x0) || (*(float *)(param_1 + 0xd8) * (float)plVar23 < fVar26)) {
          uVar9 = (ulong)(plVar23 < (long *)0x3 || ((ulong)plVar23 & (long)plVar23 - 1U) != 0) |
                  (long)plVar23 << 1;
          uVar15 = (ulong)(fVar26 / *(float *)(param_1 + 0xd8));
          if (uVar15 <= uVar9) {
            uVar15 = uVar9;
          }
          FUN_01671c60(plVar1,uVar15);
          plVar23 = *(long **)(param_1 + 0x80);
          if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
            unaff_x28 = (long *)((long)plVar23 - 1U & (ulong)plVar24);
          }
          else if (plVar24 < plVar23) {
            unaff_x28 = plVar24;
          }
          else {
            uVar9 = 0;
            if (plVar23 != (long *)0x0) {
              uVar9 = (ulong)plVar24 / (ulong)plVar23;
            }
            unaff_x28 = (long *)((long)plVar24 - uVar9 * (long)plVar23);
          }
        }
        plVar24 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
        if (plVar24 == (long *)0x0) {
          *plVar25 = *plVar2;
          *plVar2 = (long)plVar25;
          *(long **)(*plVar1 + (long)unaff_x28 * 8) = plVar2;
          if (*plVar25 != 0) {
            plVar24 = *(long **)(*plVar25 + 8);
            if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
              plVar24 = (long *)((ulong)plVar24 & (long)plVar23 - 1U);
            }
            else if (plVar23 <= plVar24) {
              uVar9 = 0;
              if (plVar23 != (long *)0x0) {
                uVar9 = (ulong)plVar24 / (ulong)plVar23;
              }
              plVar24 = (long *)((long)plVar24 - uVar9 * (long)plVar23);
            }
            plVar24 = (long *)(*plVar1 + (long)plVar24 * 8);
            goto LAB_01671640;
          }
        }
        else {
          *plVar25 = *plVar24;
LAB_01671640:
          *plVar24 = (long)plVar25;
        }
        *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
      }
      else {
        plVar24 = *(long **)((long)piVar13 + uVar9);
        plVar23 = *(long **)(param_1 + 0x80);
        if (plVar23 == (long *)0x0) goto LAB_016714c8;
LAB_01671244:
        uVar9 = (long)plVar23 - ((ulong)plVar23 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          unaff_x28 = (long *)((long)plVar23 - 1U & (ulong)plVar24);
        }
        else {
          unaff_x28 = plVar24;
          if (plVar23 <= plVar24) {
            uVar15 = 0;
            if (plVar23 != (long *)0x0) {
              uVar15 = (ulong)plVar24 / (ulong)plVar23;
            }
            unaff_x28 = (long *)((long)plVar24 - uVar15 * (long)plVar23);
          }
        }
        plVar25 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
        if (plVar25 == (long *)0x0) goto LAB_016714c8;
        if (uVar9 < 2) {
          do {
            plVar25 = (long *)*plVar25;
            if ((plVar25 == (long *)0x0) ||
               ((long *)plVar25[1] != plVar24 &&
                (long *)((ulong)plVar25[1] & (long)plVar23 - 1U) != unaff_x28)) goto LAB_016714c8;
          } while ((long *)plVar25[2] != plVar24);
        }
        else {
          do {
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_016714c8;
            plVar10 = (long *)plVar25[1];
            if (plVar10 != plVar24) {
              if (plVar23 <= plVar10) {
                uVar9 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar9 = (ulong)plVar10 / (ulong)plVar23;
                }
                plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar23);
              }
              if (plVar10 != unaff_x28) goto LAB_016714c8;
            }
          } while ((long *)plVar25[2] != plVar24);
        }
      }
      lVar16 = plVar25[4];
      unaff_x28 = plVar25 + 6;
      local_68 = piVar3;
      if (lVar16 == plVar25[5]) {
        uVar15 = plVar25[7];
        lVar16 = lVar16 - plVar25[3] >> 3;
        uVar9 = lVar16 + 1;
        if (0x7ffffffffffffffe < uVar15) {
          uVar15 = 0x7fffffffffffffff;
        }
        if (uVar15 < uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar11 = plVar25[5] - plVar25[3];
        if ((ulong)(lVar11 >> 3) < uVar15 >> 1) {
          uVar12 = lVar11 >> 2;
          uVar15 = uVar9;
          if (uVar9 <= uVar12) {
            uVar15 = uVar12;
          }
        }
        if (uVar15 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = (**(code **)(*(long *)*unaff_x28 + 0x10))((long *)*unaff_x28,uVar15 << 3,8);
          if (lVar11 == 0) {
            (**(code **)(*(long *)*unaff_x28 + 0xb8))();
          }
        }
        lVar16 = lVar11 + lVar16 * 8;
        FUN_01672248(unaff_x28,lVar16,&local_68);
        lVar21 = plVar25[3];
        lVar17 = plVar25[4];
        lVar22 = lVar16;
        if (lVar17 != lVar21) {
          do {
            lVar20 = *unaff_x28;
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar7 == 0) {
              *(undefined8 *)(lVar22 + -8) = *(undefined8 *)(lVar17 + -8);
            }
            else {
              if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01671878;
              *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar20;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
              *(undefined8 *)(lVar22 + -8) = *(undefined8 *)(lVar17 + -8);
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            }
            lVar17 = lVar17 + -8;
            lVar22 = lVar22 + -8;
          } while (lVar21 != lVar17);
          lVar21 = plVar25[3];
        }
        plVar25[3] = lVar22;
        plVar25[4] = lVar16 + 8;
        lVar16 = plVar25[5];
        plVar25[5] = lVar11 + uVar15 * 8;
        if (lVar21 != 0) {
          plVar23 = (long *)*unaff_x28;
          uVar9 = (**(code **)(*plVar23 + 0xc0))(plVar23);
          if ((uVar9 & 1) != 0) {
            lVar11 = tpidr_el0;
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(plVar23,lVar21,lVar16 - lVar21,8);
              goto LAB_016711cc;
            }
          }
          (**(code **)(*plVar23 + 0x18))(plVar23,lVar21,lVar16 - lVar21,8);
        }
      }
      else {
        FUN_01672248(unaff_x28,lVar16,&local_68);
        plVar25[4] = plVar25[4] + 8;
      }
LAB_016711cc:
      uVar14 = uVar14 + 1;
    } while (uVar14 < *puVar8);
  }
  return;
}


