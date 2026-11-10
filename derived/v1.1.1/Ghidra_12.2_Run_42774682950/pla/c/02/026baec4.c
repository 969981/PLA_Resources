/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026baec4; name: FUN_026baec4
 */


int FUN_026baec4(int param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  char cVar18;
  
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  if (param_1 == 2) {
    uVar16 = 0;
LAB_026baef8:
    if ((param_2 & 1) == 0) {
      iVar7 = 1;
      if (uVar16 != 0) {
        iVar7 = -1;
      }
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      plVar17 = *(long **)(lVar11 + 0x228);
      if (plVar17 != (long *)0x0) {
        lVar11 = plVar17[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_026bb328;
        iVar7 = *(int *)((long)&DAT_0388a690 + (long)(int)(iVar7 + uVar16) * 4);
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar18 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        uVar12 = ((long *)plVar17[0x37])[1];
        if (uVar12 != 0) {
          uVar10 = *(ulong *)(&DAT_03a7dd40 + (long)iVar7 * 8);
          uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            uVar14 = uVar12 - 1 & uVar10;
          }
          else if (uVar10 < uVar12) {
            uVar14 = uVar10;
          }
          else {
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = uVar10 / uVar12;
            }
            uVar14 = uVar10 - uVar14 * uVar12;
          }
          plVar15 = *(long **)(*(long *)plVar17[0x37] + uVar14 * 8);
          if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if (plVar15[1] == uVar10) {
                  if (plVar15[2] == uVar10) goto LAB_026bb22c;
                }
                else if ((plVar15[1] & uVar12 - 1) != uVar14) goto LAB_026bb158;
                plVar15 = (long *)*plVar15;
                cVar18 = '\0';
              } while (plVar15 != (long *)0x0);
              goto LAB_026bb230;
            }
            do {
              uVar13 = plVar15[1];
              if (uVar13 == uVar10) {
                if (plVar15[2] == uVar10) goto LAB_026bb22c;
              }
              else {
                if (uVar12 <= uVar13) {
                  uVar4 = 0;
                  if (uVar12 != 0) {
                    uVar4 = uVar13 / uVar12;
                  }
                  uVar13 = uVar13 - uVar4 * uVar12;
                }
                if (uVar13 != uVar14) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
LAB_026bb158:
        cVar18 = '\0';
        goto LAB_026bb230;
      }
    }
    else {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      plVar17 = *(long **)(lVar11 + 0x228);
      if (plVar17 != (long *)0x0) {
        lVar11 = plVar17[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_026bb328:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        iVar7 = *(int *)((long)&DAT_0388a690 + (ulong)(uVar16 ^ 1) * 4);
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar18 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        uVar12 = ((long *)plVar17[0x37])[1];
        if (uVar12 != 0) {
          uVar10 = *(ulong *)(&DAT_03a7dd40 + (long)iVar7 * 8);
          uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            uVar14 = uVar12 - 1 & uVar10;
          }
          else if (uVar10 < uVar12) {
            uVar14 = uVar10;
          }
          else {
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = uVar10 / uVar12;
            }
            uVar14 = uVar10 - uVar14 * uVar12;
          }
          plVar15 = *(long **)(*(long *)plVar17[0x37] + uVar14 * 8);
          if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if (plVar15[1] == uVar10) {
                  if (plVar15[2] == uVar10) goto LAB_026bb1b4;
                }
                else if ((plVar15[1] & uVar12 - 1) != uVar14) goto LAB_026bb030;
                plVar15 = (long *)*plVar15;
                cVar18 = '\0';
              } while (plVar15 != (long *)0x0);
              goto LAB_026bb1b8;
            }
            do {
              uVar13 = plVar15[1];
              if (uVar13 == uVar10) {
                if (plVar15[2] == uVar10) goto LAB_026bb1b4;
              }
              else {
                if (uVar12 <= uVar13) {
                  uVar4 = 0;
                  if (uVar12 != 0) {
                    uVar4 = uVar13 / uVar12;
                  }
                  uVar13 = uVar13 - uVar4 * uVar12;
                }
                if (uVar13 != uVar14) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
LAB_026bb030:
        cVar18 = '\0';
        goto LAB_026bb1b8;
      }
    }
  }
  else if (param_1 == 3) {
    uVar16 = 1;
    goto LAB_026baef8;
  }
  goto LAB_026bb250;
LAB_026bb22c:
  cVar18 = (char)plVar15[3];
LAB_026bb230:
  lVar11 = plVar17[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto joined_r0x026bb248;
LAB_026bb1b4:
  cVar18 = (char)plVar15[3];
LAB_026bb1b8:
  lVar11 = plVar17[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
joined_r0x026bb248:
  if (iVar8 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (cVar18 == '\0') {
LAB_026bb250:
    iVar7 = param_1;
  }
  return iVar7;
}


