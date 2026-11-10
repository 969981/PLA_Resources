/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290e8a8; name: FUN_0290e8a8
 */


void FUN_0290e8a8(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  if (param_2 == 0) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      lVar14 = param_1[1];
      plVar8 = (long *)param_1[2];
      uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar7 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar6,lVar14 << 3,8);
          goto LAB_0290ea28;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar14 << 3,8);
    }
LAB_0290ea28:
    param_1[1] = 0;
    return;
  }
  lVar6 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar14 = *param_1;
  *param_1 = lVar6;
  if (lVar14 != 0) {
    lVar6 = param_1[1];
    plVar8 = (long *)param_1[2];
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar14,lVar6 << 3,8);
        goto LAB_0290e980;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar14,lVar6 << 3,8);
  }
LAB_0290e980:
  uVar10 = param_2 - 1;
  uVar7 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar10 < 3) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar14 = lVar6 * 8;
      lVar6 = lVar6 + 4;
      *(undefined8 *)(*param_1 + lVar14) = 0;
      *(undefined8 *)(*param_1 + lVar14 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar14 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar14 + 0x18) = 0;
    } while (param_2 - uVar7 != lVar6);
  }
  if (uVar7 != 0) {
    lVar6 = lVar6 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar6) = 0;
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 != 0);
  }
  plVar8 = (long *)param_1[6];
  if (plVar8 != (long *)0x0) {
    uVar7 = param_2 - (param_2 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar9 = plVar8[1];
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar10;
    }
    else if (param_2 <= uVar9) {
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = uVar9 / param_2;
      }
      uVar9 = uVar9 - uVar3 * param_2;
    }
    *(long **)(*param_1 + uVar9 * 8) = param_1 + 6;
    puVar5 = PTR_DAT_04379c88;
    plVar11 = (long *)*plVar8;
    if (plVar11 != (long *)0x0) {
      if (uVar7 < 2) {
        do {
          uVar7 = plVar11[1] & uVar10;
          if (uVar7 != uVar9) {
            plVar13 = plVar11;
            if (*(long *)(*param_1 + uVar7 * 8) == 0) {
              *(long **)(*param_1 + uVar7 * 8) = plVar8;
              uVar9 = uVar7;
            }
            else {
              do {
                plVar12 = plVar13;
                plVar13 = (long *)*plVar12;
                if (plVar13 == (long *)0x0) break;
                plVar1 = (long *)puVar5;
                if (plVar11[2] != 0) {
                  plVar1 = (long *)(plVar11[2] + 0x58);
                }
                plVar2 = (long *)puVar5;
                if (plVar13[2] != 0) {
                  plVar2 = (long *)(plVar13[2] + 0x58);
                }
              } while (*plVar1 == *plVar2);
              *plVar8 = (long)plVar13;
              *plVar12 = **(long **)(*param_1 + uVar7 * 8);
              **(undefined8 **)(*param_1 + uVar7 * 8) = plVar11;
              plVar11 = plVar8;
            }
          }
          plVar13 = (long *)*plVar11;
          plVar8 = plVar11;
          plVar11 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar11[1];
          if (param_2 <= uVar7) {
            uVar10 = 0;
            if (param_2 != 0) {
              uVar10 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar10 * param_2;
          }
          if (uVar7 != uVar9) {
            plVar13 = plVar11;
            if (*(long *)(*param_1 + uVar7 * 8) == 0) {
              *(long **)(*param_1 + uVar7 * 8) = plVar8;
              uVar9 = uVar7;
            }
            else {
              do {
                plVar12 = plVar13;
                plVar13 = (long *)*plVar12;
                if (plVar13 == (long *)0x0) break;
                plVar1 = (long *)puVar5;
                if (plVar11[2] != 0) {
                  plVar1 = (long *)(plVar11[2] + 0x58);
                }
                plVar2 = (long *)puVar5;
                if (plVar13[2] != 0) {
                  plVar2 = (long *)(plVar13[2] + 0x58);
                }
              } while (*plVar1 == *plVar2);
              *plVar8 = (long)plVar13;
              *plVar12 = **(long **)(*param_1 + uVar7 * 8);
              **(undefined8 **)(*param_1 + uVar7 * 8) = plVar11;
              plVar11 = plVar8;
            }
          }
          plVar13 = (long *)*plVar11;
          plVar8 = plVar11;
          plVar11 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  return;
}


