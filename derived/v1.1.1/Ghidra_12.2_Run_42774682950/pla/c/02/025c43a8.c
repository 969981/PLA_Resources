/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c43a8; name: FUN_025c43a8
 */


void FUN_025c43a8(long param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *local_68;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  FUN_025c6018(&local_68);
  if (local_68 == (long *)0x0) {
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x1338);
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & param_2;
    }
    else {
      uVar9 = param_2;
      if (uVar6 <= param_2) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = param_2 / uVar6;
        }
        uVar9 = param_2 - uVar9 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x1330) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == param_2) {
            if (plVar10[2] == param_2) goto LAB_025c44d4;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == param_2) {
            if (plVar10[2] == param_2) goto LAB_025c44d4;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar12 = 0;
              if (uVar6 != 0) {
                uVar12 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar12 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_025c44e0:
  if (*(long **)(param_1 + 0x1360) != (long *)0x0) {
    lVar7 = tpidr_el0;
    plVar10 = *(long **)(param_1 + 0x1360);
LAB_025c452c:
    do {
      plVar14 = (long *)*plVar10;
      if ((int)plVar10[3] < 1) {
        uVar9 = *(ulong *)(param_1 + 0x1338);
        uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
        uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
        uVar8 = plVar10[1];
        uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar6 < 2) {
          uVar8 = uVar9 - 1 & uVar8;
        }
        else if (uVar9 <= uVar8) {
          uVar12 = 0;
          if (uVar9 != 0) {
            uVar12 = uVar8 / uVar9;
          }
          uVar8 = uVar8 - uVar12 * uVar9;
        }
        plVar13 = *(long **)(*(long *)(param_1 + 0x1330) + uVar8 * 8);
        do {
          plVar11 = plVar13;
          plVar13 = (long *)*plVar11;
        } while ((long *)*plVar11 != plVar10);
        if (plVar11 == (long *)(param_1 + 0x1360)) {
LAB_025c45c0:
          if (*plVar10 != 0) {
            uVar12 = *(ulong *)(*plVar10 + 8);
            if (uVar6 < 2) {
              uVar12 = uVar12 & uVar9 - 1;
            }
            else if (uVar9 <= uVar12) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar5 * uVar9;
            }
            if (uVar12 == uVar8) goto LAB_025c45e8;
          }
          *(undefined8 *)(*(long *)(param_1 + 0x1330) + uVar8 * 8) = 0;
        }
        else {
          uVar12 = plVar11[1];
          if (uVar6 < 2) {
            uVar12 = uVar12 & uVar9 - 1;
          }
          else if (uVar9 <= uVar12) {
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = uVar12 / uVar9;
            }
            uVar12 = uVar12 - uVar5 * uVar9;
          }
          if (uVar12 != uVar8) goto LAB_025c45c0;
        }
LAB_025c45e8:
        if (*plVar10 != 0) {
          uVar12 = *(ulong *)(*plVar10 + 8);
          if (uVar6 < 2) {
            uVar12 = uVar12 & uVar9 - 1;
          }
          else if (uVar9 <= uVar12) {
            uVar6 = 0;
            if (uVar9 != 0) {
              uVar6 = uVar12 / uVar9;
            }
            uVar12 = uVar12 - uVar6 * uVar9;
          }
          if (uVar12 != uVar8) {
            *(long **)(*(long *)(param_1 + 0x1330) + uVar12 * 8) = plVar11;
          }
        }
        *plVar11 = *plVar10;
        *plVar10 = 0;
        *(long *)(param_1 + 5000) = *(long *)(param_1 + 5000) + -1;
        if (plVar10 != (long *)0x0) {
          plVar13 = *(long **)(param_1 + 0x1368);
          uVar6 = (**(code **)(*plVar13 + 0xc0))(plVar13);
          if ((uVar6 & 1) != 0) {
            if (*(char *)(lVar7 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar7 + 0x38d488) = 1;
              *(undefined8 *)(lVar7 + 0x38d478) = 0;
              *(undefined8 *)(lVar7 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar7 + 0x38d480)) {
              FUN_02bcc824(plVar13,plVar10,0x20,8);
              plVar10 = plVar14;
              if (plVar14 == (long *)0x0) break;
              goto LAB_025c452c;
            }
          }
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar10,0x20,8);
        }
      }
      plVar10 = plVar14;
    } while (plVar14 != (long *)0x0);
  }
  FUN_025c4970(param_1);
  lVar7 = local_68[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x025c47c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_68 + 0x20))(local_68);
    return;
  }
  return;
LAB_025c44d4:
  *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
  goto LAB_025c44e0;
}


