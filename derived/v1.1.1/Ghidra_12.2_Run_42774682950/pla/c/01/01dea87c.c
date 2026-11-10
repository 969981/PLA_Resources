/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dea87c; name: FUN_01dea87c
 */


void FUN_01dea87c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar11 = param_1[1];
  if (uVar11 <= param_2 && param_2 != uVar11) {
    uVar9 = param_2;
  }
  else {
    if (uVar11 <= param_2) {
      return;
    }
    uVar9 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar11 < 3) ||
       (uVar8 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
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
    if (uVar11 <= uVar9) {
      return;
    }
  }
  if (uVar9 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar12 = param_1[1];
      plVar4 = (long *)param_1[2];
      uVar11 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar11 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar4,lVar3,lVar12 << 3,8);
          goto LAB_01deac90;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar12 << 3,8);
    }
LAB_01deac90:
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
    plVar4 = (long *)param_1[2];
    uVar11 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    if ((uVar11 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar4,lVar12,lVar3 << 3,8);
        goto LAB_01dea9cc;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12,lVar3 << 3,8);
  }
LAB_01dea9cc:
  uVar11 = uVar9 - 1;
  param_1[1] = uVar9;
  *(undefined8 *)*param_1 = 0;
  if ((((uVar11 != 0) && (*(undefined8 *)(*param_1 + 8) = 0, uVar9 != 2)) &&
      (*(undefined8 *)(*param_1 + 0x10) = 0, uVar9 != 3)) &&
     (((*(undefined8 *)(*param_1 + 0x18) = 0, uVar9 != 4 &&
       (*(undefined8 *)(*param_1 + 0x20) = 0, uVar9 != 5)) &&
      (*(undefined8 *)(*param_1 + 0x28) = 0, uVar9 != 6)))) {
    uVar8 = 6;
    do {
      *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  plVar4 = (long *)param_1[6];
  if (plVar4 != (long *)0x0) {
    uVar8 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar5 = plVar4[1];
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar5 = uVar5 & uVar11;
    }
    else if (uVar9 <= uVar5) {
      uVar1 = 0;
      if (uVar9 != 0) {
        uVar1 = uVar5 / uVar9;
      }
      uVar5 = uVar5 - uVar1 * uVar9;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
    plVar6 = (long *)*plVar4;
    if (plVar6 != (long *)0x0) {
      if (uVar8 < 2) {
        do {
          uVar9 = plVar6[1] & uVar11;
          if (uVar9 != uVar5) {
            plVar7 = plVar6;
            if (*(long *)(*param_1 + uVar9 * 8) == 0) {
              *(long **)(*param_1 + uVar9 * 8) = plVar4;
              uVar5 = uVar9;
            }
            else {
              do {
                plVar10 = plVar7;
                plVar7 = (long *)*plVar10;
                if (plVar7 == (long *)0x0) break;
              } while (plVar6[2] == plVar7[2]);
              *plVar4 = (long)plVar7;
              *plVar10 = **(long **)(*param_1 + uVar9 * 8);
              **(undefined8 **)(*param_1 + uVar9 * 8) = plVar6;
              plVar6 = plVar4;
            }
          }
          plVar7 = (long *)*plVar6;
          plVar4 = plVar6;
          plVar6 = plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar6[1];
          if (uVar9 <= uVar11) {
            uVar8 = 0;
            if (uVar9 != 0) {
              uVar8 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar8 * uVar9;
          }
          if (uVar11 != uVar5) {
            if (*(long *)(*param_1 + uVar11 * 8) == 0) {
              *(long **)(*param_1 + uVar11 * 8) = plVar4;
              uVar5 = uVar11;
            }
            else {
              plVar7 = plVar6;
              do {
                plVar10 = plVar7;
                plVar7 = (long *)*plVar10;
                if (plVar7 == (long *)0x0) break;
              } while (plVar6[2] == plVar7[2]);
              *plVar4 = (long)plVar7;
              *plVar10 = **(long **)(*param_1 + uVar11 * 8);
              **(undefined8 **)(*param_1 + uVar11 * 8) = plVar6;
              plVar6 = plVar4;
            }
          }
          plVar7 = (long *)*plVar6;
          plVar4 = plVar6;
          plVar6 = plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


