/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec9dc8; name: FUN_01ec9dc8
 */


long * FUN_01ec9dc8(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  
  puVar6 = PTR_DAT_04379528;
  puVar5 = PTR_DAT_04379520;
  plVar16 = (long *)param_1[1];
  if (plVar16 < (long *)param_1[2]) {
    if (param_2 == plVar16) {
      FUN_01ecfba0(param_1 + 3,param_2,param_3);
      param_1[1] = param_1[1] + 8;
      return param_2;
    }
    plVar18 = plVar16 + -1;
    if (plVar18 < plVar16) {
      plVar8 = plVar16;
      do {
        lVar14 = param_1[3];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar12 == 0) {
          lVar14 = *plVar18;
          *plVar18 = 0;
          *plVar8 = lVar14;
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar14;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          lVar14 = *plVar18;
          *plVar18 = 0;
          *plVar8 = lVar14;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        plVar18 = plVar18 + 1;
        plVar8 = (long *)(param_1[1] + 8);
        param_1[1] = (long)plVar8;
      } while (plVar18 < plVar16);
    }
    if ((long)plVar16 - (long)param_2 != 8) {
      plVar18 = (long *)plVar16[-1];
      plVar8 = plVar16 + -2;
      plVar16[-1] = 0;
      if (plVar18 != (long *)0x0) {
        lVar14 = plVar18[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))();
        }
      }
      lVar14 = *plVar8;
      *plVar8 = 0;
      plVar16[-1] = lVar14;
      if (plVar8 != param_2) {
        plVar18 = (long *)plVar16[-2];
        plVar8 = plVar16 + -3;
        plVar16[-2] = 0;
        if (plVar18 != (long *)0x0) {
          lVar14 = plVar18[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))();
          }
        }
        lVar14 = *plVar8;
        *plVar8 = 0;
        plVar16[-2] = lVar14;
        if (plVar8 != param_2) {
          plVar18 = (long *)plVar16[-3];
          plVar8 = plVar16 + -4;
          plVar16[-3] = 0;
          if (plVar18 != (long *)0x0) {
            lVar14 = plVar18[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))();
            }
          }
          lVar14 = *plVar8;
          *plVar8 = 0;
          plVar16[-3] = lVar14;
          if (plVar8 != param_2) {
            plVar18 = (long *)plVar16[-4];
            plVar8 = plVar16 + -5;
            plVar16[-4] = 0;
            if (plVar18 != (long *)0x0) {
              lVar14 = plVar18[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))();
              }
            }
            lVar14 = *plVar8;
            *plVar8 = 0;
            plVar16[-4] = lVar14;
            if (plVar8 != param_2) {
              plVar18 = (long *)plVar16[-5];
              plVar8 = plVar16 + -6;
              plVar16[-5] = 0;
              if (plVar18 != (long *)0x0) {
                lVar14 = plVar18[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar7 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*plVar18 + 0x20))();
                }
              }
              lVar14 = *plVar8;
              *plVar8 = 0;
              plVar16[-5] = lVar14;
              if (plVar8 != param_2) {
                plVar18 = plVar16 + -6;
                plVar8 = (long *)*plVar18;
                plVar16 = plVar16 + -7;
                *plVar18 = 0;
                if (plVar8 != (long *)0x0) {
                  lVar14 = plVar8[0xb];
                  piVar1 = (int *)(lVar14 + 0xc);
                  do {
                    iVar7 = *piVar1 + -1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar7;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') goto joined_r0x01eca28c;
                  } while( true );
                }
                while( true ) {
                  lVar14 = *plVar16;
                  *plVar16 = 0;
                  *plVar18 = lVar14;
                  if (plVar16 == param_2) break;
                  plVar18 = plVar18 + -1;
                  plVar8 = (long *)*plVar18;
                  plVar16 = plVar16 + -1;
                  *plVar18 = 0;
                  if (plVar8 != (long *)0x0) {
                    lVar14 = plVar8[0xb];
                    piVar1 = (int *)(lVar14 + 0xc);
                    do {
                      iVar7 = *piVar1 + -1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar7;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
joined_r0x01eca28c:
                    if (iVar7 == 0) {
                      *(undefined8 *)(lVar14 + 0x18) = 0;
                      (**(code **)(*plVar8 + 0x20))();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((param_3 < param_2) || ((long *)param_1[1] <= param_3)) {
      lVar14 = *param_3;
    }
    else {
      lVar14 = param_3[1];
    }
    if (lVar14 != 0) {
      lVar12 = *(long *)(lVar14 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar16 = (long *)*param_2;
    *param_2 = lVar14;
    if (plVar16 == (long *)0x0) {
      return param_2;
    }
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
      return param_2;
    }
    return param_2;
  }
  lVar14 = *param_1;
  uVar15 = param_1[4];
  uVar10 = ((long)plVar16 - lVar14 >> 3) + 1;
  if (0x7ffffffffffffffe < uVar15) {
    uVar15 = 0x7fffffffffffffff;
  }
  if (uVar15 < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = param_1[2] - lVar14;
  lVar14 = (long)param_2 - lVar14;
  uVar13 = lVar12 >> 2;
  if (uVar10 <= uVar13) {
    uVar10 = uVar13;
  }
  uVar13 = lVar14 >> 3;
  plVar16 = param_1 + 3;
  if ((ulong)(lVar12 >> 3) < uVar15 >> 1) {
    uVar15 = uVar10;
  }
  if (uVar15 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar15 << 3,8);
    if (lVar12 == 0) {
      (**(code **)(*(long *)*plVar16 + 0xb8))();
    }
  }
  plVar18 = (long *)(lVar12 + uVar13 * 8);
  lVar11 = lVar12 + uVar15 * 8;
  if (uVar13 == uVar15) {
    if (lVar14 < 1) {
      uVar10 = lVar14 >> 2;
      if (uVar15 == 0) {
        uVar10 = 1;
      }
      lVar11 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar10 << 3,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xb8))();
      }
      plVar18 = (long *)(lVar11 + (uVar10 >> 2) * 8);
      lVar11 = lVar11 + uVar10 * 8;
      if (lVar12 != 0) {
        plVar8 = (long *)*plVar16;
        uVar10 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar10 & 1) != 0) {
          lVar4 = tpidr_el0;
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar8,lVar12,lVar14,8);
            goto LAB_01ec9e80;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar14,8);
      }
    }
    else {
      uVar10 = uVar13 + 2;
      if (-1 < (long)(uVar13 + 1)) {
        uVar10 = uVar13 + 1;
      }
      plVar18 = (long *)((long)plVar18 + (uVar10 & 0x3ffffffffffffffe) * -4);
    }
  }
LAB_01ec9e80:
  FUN_01ecfba0(plVar16,plVar18,param_3);
  plVar20 = (long *)*param_1;
  plVar8 = plVar18 + 1;
  plVar19 = plVar18;
  if (plVar20 != param_2) {
    plVar17 = param_2;
    do {
      plVar19 = plVar19 + -1;
      plVar17 = plVar17 + -1;
      FUN_01ecfba0(plVar16,plVar19,plVar17);
    } while (plVar20 != plVar17);
  }
  plVar20 = (long *)param_1[1];
  if (plVar20 != param_2) {
    do {
      FUN_01ecfba0(plVar16,plVar8,param_2);
      param_2 = param_2 + 1;
      plVar8 = plVar8 + 1;
    } while (plVar20 != param_2);
    param_2 = (long *)param_1[1];
  }
  plVar20 = (long *)*param_1;
  *param_1 = (long)plVar19;
  param_1[1] = (long)plVar8;
  lVar14 = param_1[2];
  param_1[2] = lVar11;
  while (param_2 != plVar20) {
    param_2 = param_2 + -1;
    plVar8 = (long *)*param_2;
    if (plVar8 != (long *)0x0) {
      lVar12 = plVar8[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
  }
  if (plVar20 == (long *)0x0) {
    return plVar18;
  }
  plVar16 = (long *)*plVar16;
  uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  if ((uVar10 & 1) != 0) {
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar12 + 0x38d480)) {
      FUN_02bcc824(plVar16,plVar20,lVar14 - (long)plVar20,8);
      return plVar18;
    }
  }
  (**(code **)(*plVar16 + 0x18))(plVar16,plVar20,lVar14 - (long)plVar20,8);
  return plVar18;
}


