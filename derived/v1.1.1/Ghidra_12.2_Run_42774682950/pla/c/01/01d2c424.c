/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d2c424; name: FUN_01d2c424
 */


void FUN_01d2c424(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar5 = param_1[1];
  if (uVar5 <= param_2 && param_2 != uVar5) {
    uVar3 = param_2;
  }
  else {
    if (uVar5 <= param_2) {
      return;
    }
    uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar5 < 3) ||
       (uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555),
       uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
       1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
    }
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
    if (uVar5 <= uVar3) {
      return;
    }
  }
  if (uVar3 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      lVar12 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar5 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar4,lVar12 << 3,8);
          goto LAB_01d2c8f4;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar12 << 3,8);
    }
LAB_01d2c8f4:
    param_1[1] = 0;
    return;
  }
  lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar3 << 3,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar12 = *param_1;
  *param_1 = lVar4;
  if (lVar12 != 0) {
    lVar4 = param_1[1];
    plVar6 = (long *)param_1[2];
    uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar5 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar12,lVar4 << 3,8);
        goto LAB_01d2c5f8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar12,lVar4 << 3,8);
  }
LAB_01d2c5f8:
  uVar7 = uVar3 - 1;
  uVar5 = uVar3 & 3;
  param_1[1] = uVar3;
  if (uVar7 < 3) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar12 = lVar4 * 8;
      lVar4 = lVar4 + 4;
      *(undefined8 *)(*param_1 + lVar12) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 0x18) = 0;
    } while (uVar3 - uVar5 != lVar4);
  }
  if (uVar5 != 0) {
    lVar4 = lVar4 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar4) = 0;
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 != 0);
  }
  plVar6 = (long *)param_1[6];
  if (plVar6 != (long *)0x0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar8 = plVar6[1];
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar3 <= uVar8) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar8 / uVar3;
      }
      uVar8 = uVar8 - uVar1 * uVar3;
    }
    *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
    plVar9 = (long *)*plVar6;
    if (plVar9 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          uVar5 = plVar9[1] & uVar7;
          if (uVar5 != uVar8) {
            plVar10 = plVar9;
            if (*(long *)(*param_1 + uVar5 * 8) == 0) {
              *(long **)(*param_1 + uVar5 * 8) = plVar6;
              uVar8 = uVar5;
            }
            else {
              do {
                plVar11 = plVar10;
                plVar10 = (long *)*plVar11;
                if (plVar10 == (long *)0x0) break;
              } while (plVar9[2] == plVar10[2]);
              *plVar6 = (long)plVar10;
              *plVar11 = **(long **)(*param_1 + uVar5 * 8);
              **(undefined8 **)(*param_1 + uVar5 * 8) = plVar9;
              plVar9 = plVar6;
            }
          }
          plVar10 = (long *)*plVar9;
          plVar6 = plVar9;
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar9[1];
          if (uVar3 <= uVar5) {
            uVar7 = 0;
            if (uVar3 != 0) {
              uVar7 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar7 * uVar3;
          }
          if (uVar5 != uVar8) {
            if (*(long *)(*param_1 + uVar5 * 8) == 0) {
              *(long **)(*param_1 + uVar5 * 8) = plVar6;
              uVar8 = uVar5;
            }
            else {
              plVar10 = plVar9;
              do {
                plVar11 = plVar10;
                plVar10 = (long *)*plVar11;
                if (plVar10 == (long *)0x0) break;
              } while (plVar9[2] == plVar10[2]);
              *plVar6 = (long)plVar10;
              *plVar11 = **(long **)(*param_1 + uVar5 * 8);
              **(undefined8 **)(*param_1 + uVar5 * 8) = plVar9;
              plVar9 = plVar6;
            }
          }
          plVar10 = (long *)*plVar9;
          plVar6 = plVar9;
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


