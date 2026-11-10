/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b67fcc; name: FUN_01b67fcc
 */


void FUN_01b67fcc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar4 = param_1[1];
  if (uVar4 <= param_2 && param_2 != uVar4) {
    uVar9 = param_2;
  }
  else {
    if (uVar4 <= param_2) {
      return;
    }
    uVar9 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar4 < 3) ||
       (uVar8 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
       uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
       1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar9 = std::__next_prime(uVar9);
    }
    else if (1 < uVar9) {
      uVar9 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar9 - 1) & 0x3f);
    }
    if (uVar9 <= param_2) {
      uVar9 = param_2;
    }
    if (uVar4 <= uVar9) {
      return;
    }
  }
  if (uVar9 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar12 = param_1[1];
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
          FUN_02bcc824(plVar5,lVar3,lVar12 << 3,8);
          goto LAB_01b68190;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar12 << 3,8);
    }
LAB_01b68190:
    param_1[1] = 0;
    return;
  }
  lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar9 << 3,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar12 = *param_1;
  *param_1 = lVar3;
  if (lVar12 != 0) {
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
        FUN_02bcc824(plVar5,lVar12,lVar3 << 3,8);
        goto LAB_01b68124;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar3 << 3,8);
  }
LAB_01b68124:
  uVar4 = uVar9 - 1;
  param_1[1] = uVar9;
  *(undefined8 *)*param_1 = 0;
  if ((uVar4 != 0) && (*(undefined8 *)(*param_1 + 8) = 0, uVar9 != 2)) {
    uVar8 = 2;
    do {
      *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    uVar8 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = plVar5[1];
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar6 = uVar6 & uVar4;
    }
    else if (uVar9 <= uVar6) {
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar1 * uVar9;
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 6;
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      if (uVar8 < 2) {
        do {
          uVar9 = plVar7[1] & uVar4;
          if (uVar9 != uVar6) {
            plVar11 = plVar7;
            if (*(long *)(*param_1 + uVar9 * 8) == 0) {
              *(long **)(*param_1 + uVar9 * 8) = plVar5;
              uVar6 = uVar9;
            }
            else {
              do {
                plVar10 = plVar11;
                plVar11 = (long *)*plVar10;
                if (plVar11 == (long *)0x0) break;
              } while (plVar7[2] == plVar11[2]);
              *plVar5 = (long)plVar11;
              *plVar10 = **(long **)(*param_1 + uVar9 * 8);
              **(undefined8 **)(*param_1 + uVar9 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar11 = (long *)*plVar7;
          plVar5 = plVar7;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar7[1];
          if (uVar9 <= uVar4) {
            uVar8 = 0;
            if (uVar9 != 0) {
              uVar8 = uVar4 / uVar9;
            }
            uVar4 = uVar4 - uVar8 * uVar9;
          }
          if (uVar4 != uVar6) {
            plVar11 = plVar7;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(long **)(*param_1 + uVar4 * 8) = plVar5;
              uVar6 = uVar4;
            }
            else {
              do {
                plVar10 = plVar11;
                plVar11 = (long *)*plVar10;
                if (plVar11 == (long *)0x0) break;
              } while (plVar7[2] == plVar11[2]);
              *plVar5 = (long)plVar11;
              *plVar10 = **(long **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = plVar7;
              plVar7 = plVar5;
            }
          }
          plVar11 = (long *)*plVar7;
          plVar5 = plVar7;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  return;
}


