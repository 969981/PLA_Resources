/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135432c; name: FUN_0135432c
 */


void FUN_0135432c(long *param_1,ulong param_2)

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
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar4 = param_1[1];
  uVar10 = param_2;
  if (uVar4 > param_2 || param_2 == uVar4) {
    if (uVar4 <= param_2) {
      return;
    }
    uVar10 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar4 < 3) ||
       (uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
       uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
       1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar10 = std::__next_prime(uVar10);
    }
    else if (1 < uVar10) {
      uVar10 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar10 - 1) & 0x3f);
    }
    if (uVar10 <= param_2) {
      uVar10 = param_2;
    }
    if (uVar4 <= uVar10) {
      return;
    }
  }
  if (uVar10 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar12 = param_1[1];
      plVar5 = (long *)param_1[2];
      uVar10 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar10 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar3,lVar12 << 3,8);
          goto LAB_01354728;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar12 << 3,8);
    }
LAB_01354728:
    param_1[1] = 0;
    return;
  }
  lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar10 << 3,8);
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
        goto LAB_013544f8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar3 << 3,8);
  }
LAB_013544f8:
  uVar6 = uVar10 - 1;
  uVar4 = uVar10 & 3;
  param_1[1] = uVar10;
  if (uVar6 < 3) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar12 = lVar3 * 8;
      lVar3 = lVar3 + 4;
      *(undefined8 *)(*param_1 + lVar12) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar12 + 0x18) = 0;
    } while (uVar10 - uVar4 != lVar3);
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
    uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar7 = plVar5[1];
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = uVar7 & uVar6;
    }
    else if (uVar10 <= uVar7) {
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar7 / uVar10;
      }
      uVar7 = uVar7 - uVar1 * uVar10;
    }
    *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
    plVar8 = (long *)*plVar5;
    if (plVar8 != (long *)0x0) {
      if (uVar4 < 2) {
        do {
          uVar10 = plVar8[1] & uVar6;
          if (uVar10 != uVar7) {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar10 * 8) == 0) {
              *(long **)(*param_1 + uVar10 * 8) = plVar5;
              uVar7 = uVar10;
            }
            else {
              do {
                plVar11 = plVar9;
                plVar9 = (long *)*plVar11;
                if (plVar9 == (long *)0x0) break;
              } while ((int)plVar8[2] == (int)plVar9[2]);
              *plVar5 = (long)plVar9;
              *plVar11 = **(long **)(*param_1 + uVar10 * 8);
              **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
              plVar8 = plVar5;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar5 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar8[1];
          if (uVar10 <= uVar4) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar4 / uVar10;
            }
            uVar4 = uVar4 - uVar6 * uVar10;
          }
          if (uVar4 != uVar7) {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(long **)(*param_1 + uVar4 * 8) = plVar5;
              uVar7 = uVar4;
            }
            else {
              do {
                plVar11 = plVar9;
                plVar9 = (long *)*plVar11;
                if (plVar9 == (long *)0x0) break;
              } while ((int)plVar8[2] == (int)plVar9[2]);
              *plVar5 = (long)plVar9;
              *plVar11 = **(long **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
              plVar8 = plVar5;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar5 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


