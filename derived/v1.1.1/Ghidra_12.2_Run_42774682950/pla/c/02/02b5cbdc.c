/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5cbdc; name: FUN_02b5cbdc
 */


void FUN_02b5cbdc(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = *param_1;
  lVar7 = param_1[1];
  lVar8 = lVar7 - lVar14 >> 5;
  lVar11 = lVar8 * -0x5555555555555555 - param_2;
  if ((ulong)(lVar8 * -0x5555555555555555) < param_2) {
    plVar10 = param_1 + 3;
    if ((ulong)((param_1[2] - lVar7 >> 5) * -0x5555555555555555) <
        param_2 + lVar8 * 0x5555555555555555) {
      uVar9 = param_1[4];
      if (0x7ffffffffffffffe < uVar9) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = param_1[2] - lVar14 >> 5;
      if ((((ulong)(lVar7 * -0x5555555555555555) < uVar9 >> 1) &&
          (uVar9 = lVar7 * 0x5555555555555556, uVar9 < param_2)) || (param_2 = uVar9, uVar9 != 0)) {
        lVar7 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,param_2 * 0x60,8);
        uVar9 = param_2;
        if (lVar7 == 0) {
          (**(code **)(*(long *)*plVar10 + 0xb8))();
        }
      }
      else {
        lVar7 = 0;
      }
      lVar8 = lVar7 + lVar8 * 0x20;
      lVar14 = lVar8;
      do {
        FUN_02b5ec70(plVar10,lVar14);
        puVar3 = PTR_DAT_04379528;
        puVar2 = PTR_DAT_04379520;
        lVar14 = lVar14 + 0x60;
        bVar4 = lVar11 != -1;
        lVar11 = lVar11 + 1;
      } while (bVar4);
      lVar11 = *param_1;
      lVar13 = param_1[1];
      if (lVar13 == lVar11) {
        lVar13 = lVar11;
      }
      else {
        do {
          while( true ) {
            lVar12 = *plVar10;
            lVar8 = lVar8 + -0x60;
            lVar13 = lVar13 + -0x60;
            if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
              FUN_008a62a4(puVar3);
              FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar2);
            }
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
            if (lVar6 == 0) break;
            if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            FUN_02b5e3b4(lVar8,lVar13);
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            if (lVar11 == lVar13) goto LAB_02b5cf64;
          }
          FUN_02b5e3b4(lVar8,lVar13);
        } while (lVar11 != lVar13);
LAB_02b5cf64:
        lVar11 = param_1[1];
        lVar13 = *param_1;
      }
      lVar12 = param_1[2];
      *param_1 = lVar8;
      param_1[1] = lVar14;
      param_1[2] = lVar7 + uVar9 * 0x60;
      if (lVar11 != lVar13) {
        lVar7 = tpidr_el0;
        lVar14 = *(long *)(lVar11 + -0x40);
        do {
          if (lVar14 != 0) {
            lVar8 = *(long *)(lVar11 + -0x38);
            if (lVar8 == lVar14) {
              lVar8 = lVar14;
            }
            else {
              do {
                plVar1 = (long *)(lVar8 + -0x10);
                lVar8 = lVar8 + -0x28;
                if ((long *)*plVar1 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar1 + 0x20))();
                }
              } while (lVar14 != lVar8);
              lVar8 = *(long *)(lVar11 + -0x40);
            }
            plVar1 = *(long **)(lVar11 + -0x28);
            *(long *)(lVar11 + -0x38) = lVar14;
            lVar14 = *(long *)(lVar11 + -0x30) - lVar8;
            uVar9 = (**(code **)(*plVar1 + 0xc0))(plVar1);
            if ((uVar9 & 1) != 0) {
              if (*(char *)(lVar7 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar7 + 0x38d488) = 1;
                *(undefined8 *)(lVar7 + 0x38d478) = 0;
                *(undefined8 *)(lVar7 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar7 + 0x38d480)) {
                FUN_02bcc824(plVar1,lVar8,lVar14,8);
                goto LAB_02b5d078;
              }
            }
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,lVar14,8);
          }
LAB_02b5d078:
          if (*(long **)(lVar11 + -0x48) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + -0x48) + 0x20))();
          }
          if (lVar11 + -0x60 == lVar13) break;
          lVar14 = *(long *)(lVar11 + -0xa0);
          lVar11 = lVar11 + -0x60;
        } while( true );
      }
      if (lVar13 != 0) {
        plVar10 = (long *)*plVar10;
        uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar9 & 1) != 0) {
          lVar7 = tpidr_el0;
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar13,lVar12 - lVar13,8);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02b5d194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar12 - lVar13,8);
        return;
      }
    }
    else {
      do {
        FUN_02b5ec70(plVar10,lVar7);
        lVar7 = param_1[1] + 0x60;
        bVar4 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        param_1[1] = lVar7;
      } while (bVar4);
    }
  }
  else if (lVar11 != 0) {
    lVar14 = lVar14 + param_2 * 0x60;
    if (lVar14 != lVar7) {
      lVar11 = tpidr_el0;
      lVar8 = *(long *)(lVar7 + -0x40);
      do {
        if (lVar8 != 0) {
          lVar13 = *(long *)(lVar7 + -0x38);
          if (lVar13 == lVar8) {
            lVar13 = lVar8;
          }
          else {
            do {
              plVar10 = (long *)(lVar13 + -0x10);
              lVar13 = lVar13 + -0x28;
              if ((long *)*plVar10 != (long *)0x0) {
                (**(code **)(*(long *)*plVar10 + 0x20))();
              }
            } while (lVar8 != lVar13);
            lVar13 = *(long *)(lVar7 + -0x40);
          }
          plVar10 = *(long **)(lVar7 + -0x28);
          *(long *)(lVar7 + -0x38) = lVar8;
          lVar8 = *(long *)(lVar7 + -0x30) - lVar13;
          uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar13,lVar8,8);
              goto LAB_02b5cde4;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar8,8);
        }
LAB_02b5cde4:
        if (*(long **)(lVar7 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + -0x48) + 0x20))();
        }
        if (lVar7 + -0x60 == lVar14) break;
        lVar8 = *(long *)(lVar7 + -0xa0);
        lVar7 = lVar7 + -0x60;
      } while( true );
    }
    param_1[1] = lVar14;
  }
  return;
}


