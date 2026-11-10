/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cf1890; name: FUN_01cf1890
 */


void FUN_01cf1890(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar11 = param_1[1];
      plVar5 = (long *)param_1[2];
      uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar4 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar3,lVar11 << 3,8);
          goto LAB_01cf1c00;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar11 << 3,8);
    }
LAB_01cf1c00:
    param_1[1] = 0;
    return;
  }
  lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar11 = *param_1;
  *param_1 = lVar3;
  if (lVar11 != 0) {
    lVar3 = param_1[1];
    plVar5 = (long *)param_1[2];
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar11,lVar3 << 3,8);
        goto LAB_01cf1958;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,lVar3 << 3,8);
  }
LAB_01cf1958:
  uVar6 = param_2 - 1;
  uVar4 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar6 < 3) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar11 = lVar3 * 8;
      lVar3 = lVar3 + 4;
      *(undefined8 *)(*param_1 + lVar11) = 0;
      *(undefined8 *)(*param_1 + lVar11 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar11 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar11 + 0x18) = 0;
    } while (param_2 - uVar4 != lVar3);
  }
  if (uVar4 != 0) {
    lVar3 = lVar3 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar3) = 0;
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 8;
    } while (uVar4 != 0);
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    uVar4 = param_2 - (param_2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar7 = plVar5[1];
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = uVar7 & uVar6;
    }
    else if (param_2 <= uVar7) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar7 / param_2;
      }
      uVar7 = uVar7 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
    plVar8 = (long *)*plVar5;
    if (plVar8 != (long *)0x0) {
      if (uVar4 < 2) {
        do {
          uVar4 = plVar8[1] & uVar6;
          if (uVar4 != uVar7) {
            plVar10 = plVar8;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(long **)(*param_1 + uVar4 * 8) = plVar5;
              uVar7 = uVar4;
            }
            else {
              do {
                plVar9 = plVar10;
                plVar10 = (long *)*plVar9;
                if (plVar10 == (long *)0x0) break;
              } while (plVar8[2] == plVar10[2]);
              *plVar5 = (long)plVar10;
              *plVar9 = **(long **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
              plVar8 = plVar5;
            }
          }
          plVar10 = (long *)*plVar8;
          plVar5 = plVar8;
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar8[1];
          if (param_2 <= uVar4) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar4 / param_2;
            }
            uVar4 = uVar4 - uVar6 * param_2;
          }
          if (uVar4 != uVar7) {
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(long **)(*param_1 + uVar4 * 8) = plVar5;
              uVar7 = uVar4;
            }
            else {
              plVar10 = plVar8;
              do {
                plVar9 = plVar10;
                plVar10 = (long *)*plVar9;
                if (plVar10 == (long *)0x0) break;
              } while (plVar8[2] == plVar10[2]);
              *plVar5 = (long)plVar10;
              *plVar9 = **(long **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
              plVar8 = plVar5;
            }
          }
          plVar10 = (long *)*plVar8;
          plVar5 = plVar8;
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


