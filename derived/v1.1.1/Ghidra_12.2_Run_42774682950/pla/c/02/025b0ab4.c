/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025b0ab4; name: FUN_025b0ab4
 */


void FUN_025b0ab4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar11 = param_1[1];
      plVar4 = (long *)param_1[2];
      uVar5 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar5 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar4,lVar3,lVar11 << 3,8);
          goto LAB_025b0d48;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar11 << 3,8);
    }
LAB_025b0d48:
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
    plVar4 = (long *)param_1[2];
    uVar5 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    if ((uVar5 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar4,lVar11,lVar3 << 3,8);
        goto LAB_025b0b00;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar11,lVar3 << 3,8);
  }
LAB_025b0b00:
  uVar5 = param_2 - 1;
  param_1[1] = param_2;
  *(undefined8 *)*param_1 = 0;
  if ((((uVar5 != 0) && (*(undefined8 *)(*param_1 + 8) = 0, param_2 != 2)) &&
      (*(undefined8 *)(*param_1 + 0x10) = 0, param_2 != 3)) &&
     (((*(undefined8 *)(*param_1 + 0x18) = 0, param_2 != 4 &&
       (*(undefined8 *)(*param_1 + 0x20) = 0, param_2 != 5)) &&
      ((*(undefined8 *)(*param_1 + 0x28) = 0, param_2 != 6 &&
       (*(undefined8 *)(*param_1 + 0x30) = 0, param_2 != 7)))))) {
    uVar9 = 7;
    do {
      *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
  }
  plVar4 = (long *)param_1[6];
  if (plVar4 != (long *)0x0) {
    uVar9 = param_2 - (param_2 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar6 = plVar4[1];
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar6 = uVar6 & uVar5;
    }
    else if (param_2 <= uVar6) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar6 / param_2;
      }
      uVar6 = uVar6 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 6;
    plVar7 = (long *)*plVar4;
    if (plVar7 != (long *)0x0) {
      if (uVar9 < 2) {
        do {
          uVar9 = plVar7[1] & uVar5;
          if (uVar9 != uVar6) {
            plVar8 = plVar7;
            if (*(long *)(*param_1 + uVar9 * 8) == 0) {
              *(long **)(*param_1 + uVar9 * 8) = plVar4;
              uVar6 = uVar9;
            }
            else {
              do {
                plVar10 = plVar8;
                plVar8 = (long *)*plVar10;
                if (plVar8 == (long *)0x0) break;
              } while (plVar7[2] == plVar8[2]);
              *plVar4 = (long)plVar8;
              *plVar10 = **(long **)(*param_1 + uVar9 * 8);
              **(undefined8 **)(*param_1 + uVar9 * 8) = plVar7;
              plVar7 = plVar4;
            }
          }
          plVar8 = (long *)*plVar7;
          plVar4 = plVar7;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (param_2 <= uVar5) {
            uVar9 = 0;
            if (param_2 != 0) {
              uVar9 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar9 * param_2;
          }
          if (uVar5 != uVar6) {
            if (*(long *)(*param_1 + uVar5 * 8) == 0) {
              *(long **)(*param_1 + uVar5 * 8) = plVar4;
              uVar6 = uVar5;
            }
            else {
              plVar8 = plVar7;
              do {
                plVar10 = plVar8;
                plVar8 = (long *)*plVar10;
                if (plVar8 == (long *)0x0) break;
              } while (plVar7[2] == plVar8[2]);
              *plVar4 = (long)plVar8;
              *plVar10 = **(long **)(*param_1 + uVar5 * 8);
              **(undefined8 **)(*param_1 + uVar5 * 8) = plVar7;
              plVar7 = plVar4;
            }
          }
          plVar8 = (long *)*plVar7;
          plVar4 = plVar7;
          plVar7 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


