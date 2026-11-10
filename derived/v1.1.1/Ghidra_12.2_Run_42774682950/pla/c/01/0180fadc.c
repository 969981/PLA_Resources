/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0180fadc; name: FUN_0180fadc
 */


void FUN_0180fadc(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  plVar11 = param_1 + 3;
  plVar5 = (long *)(**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,0x30,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)*plVar11 + 0xb8))();
  }
  *plVar5 = 0;
  FUN_018102d8(plVar11,plVar5 + 2,param_2);
  plVar5[1] = (long)param_1;
  lVar6 = *param_1;
  *plVar5 = lVar6;
  *(long **)(lVar6 + 8) = plVar5;
  *param_1 = (long)plVar5;
  param_1[2] = param_1[2] + 1;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379660), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar6 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar6;
  uVar7 = *(ulong *)(lVar6 + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x6c43119d71eecde9;
    }
    else if (uVar7 < 0x6c43119d71eecdea) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x6c43119d71eecde9 / uVar7;
      }
      uVar9 = 0x6c43119d71eecde9 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x6c43119d71eecde9;
    }
    plVar5 = *(long **)(*(long *)(lVar6 + 0x58) + uVar9 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar5[1] == 0x6c43119d71eecde9) {
            if (plVar5[2] == 0x6c43119d71eecde9) goto LAB_0180fc08;
          }
          else if ((plVar5[1] & uVar7 - 1) != uVar9) goto LAB_0180fd04;
          plVar5 = (long *)*plVar5;
          uVar8 = 0;
        } while (plVar5 != (long *)0x0);
        goto LAB_0180fd6c;
      }
      do {
        uVar8 = plVar5[1];
        if (uVar8 == 0x6c43119d71eecde9) {
          if (plVar5[2] == 0x6c43119d71eecde9) goto LAB_0180fc08;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar3 * uVar7;
          }
          if (uVar8 != uVar9) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_0180fd04:
  uVar8 = 0;
LAB_0180fd6c:
  if ((ulong)param_1[2] <= uVar8) {
    return;
  }
  plVar11 = (long *)param_1[1];
  *(long *)(*plVar11 + 8) = plVar11[1];
  *(long *)plVar11[1] = *plVar11;
  plVar5 = (long *)param_1[3];
  param_1[2] = param_1[2] + -1;
  uVar7 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar7 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar5,plVar11,0x30,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0180fe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar11,0x30,0x10);
  return;
LAB_0180fc08:
  plVar5 = (long *)plVar5[3];
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar7 = plVar5[0x14];
    if (uVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x4091d3ffbc20788a;
      }
      else if (uVar7 < 0x4091d3ffbc20788b) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x4091d3ffbc20788a / uVar7;
        }
        uVar9 = 0x4091d3ffbc20788a - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x4091d3ffbc20788a;
      }
      plVar10 = *(long **)(plVar5[0x13] + uVar9 * 8);
      if (plVar10 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          uVar8 = 0;
        }
        else if (uVar8 < 2) {
          do {
            if (plVar10[1] == 0x4091d3ffbc20788a) {
              if (plVar10[2] == 0x4091d3ffbc20788a) goto LAB_0180fd54;
            }
            else if ((plVar10[1] & uVar7 - 1) != uVar9) {
              uVar8 = 0;
              break;
            }
            plVar10 = (long *)*plVar10;
            uVar8 = 0;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar10[1];
            if (uVar8 == 0x4091d3ffbc20788a) {
              if (plVar10[2] == 0x4091d3ffbc20788a) goto LAB_0180fd54;
            }
            else {
              if (uVar7 <= uVar8) {
                uVar3 = 0;
                if (uVar7 != 0) {
                  uVar3 = uVar8 / uVar7;
                }
                uVar8 = uVar8 - uVar3 * uVar7;
              }
              if (uVar8 != uVar9) {
                uVar8 = 0;
                goto LAB_0180fd58;
              }
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
          uVar8 = 0;
        }
      }
    }
    goto LAB_0180fd58;
  }
  goto LAB_0180fd04;
LAB_0180fd54:
  uVar8 = (ulong)(int)plVar10[6];
LAB_0180fd58:
  do {
    iVar4 = (int)*plVar11 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *(int *)plVar11 = iVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  goto LAB_0180fd6c;
}


