/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c56bc; name: FUN_028c56bc
 */


void FUN_028c56bc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
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
    uVar3 = param_2;
  }
  else {
    if (uVar11 <= param_2) {
      return;
    }
    uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar11 < 3) ||
       (uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
       uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
       1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
    }
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
    if (uVar11 <= uVar3) {
      return;
    }
  }
  if (uVar3 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      lVar12 = param_1[1];
      plVar5 = (long *)param_1[2];
      uVar11 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar11 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar5,lVar4,lVar12 << 3,8);
          goto LAB_028c5940;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar12 << 3,8);
    }
LAB_028c5940:
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
    plVar5 = (long *)param_1[2];
    uVar11 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar11 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar12,lVar4 << 3,8);
        goto LAB_028c5898;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 << 3,8);
  }
LAB_028c5898:
  uVar6 = uVar3 - 1;
  uVar11 = uVar3 & 3;
  param_1[1] = uVar3;
  if (uVar6 < 3) {
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
    } while (uVar3 - uVar11 != lVar4);
  }
  if (uVar11 != 0) {
    lVar4 = lVar4 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar4) = 0;
      uVar11 = uVar11 - 1;
      lVar4 = lVar4 + 8;
    } while (uVar11 != 0);
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    uVar11 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar7 = plVar5[1];
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar7 = uVar7 & uVar6;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
    plVar8 = (long *)*plVar5;
    if (plVar8 != (long *)0x0) {
      if (uVar11 < 2) {
        do {
          uVar11 = plVar8[1] & uVar6;
          if (uVar11 != uVar7) {
            plVar10 = plVar8;
            if (*(long *)(*param_1 + uVar11 * 8) == 0) {
              *(long **)(*param_1 + uVar11 * 8) = plVar5;
              uVar7 = uVar11;
            }
            else {
              do {
                plVar9 = plVar10;
                plVar10 = (long *)*plVar9;
                if (plVar10 == (long *)0x0) break;
              } while (plVar8[2] == plVar10[2]);
              *plVar5 = (long)plVar10;
              *plVar9 = **(long **)(*param_1 + uVar11 * 8);
              **(undefined8 **)(*param_1 + uVar11 * 8) = plVar8;
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
          uVar11 = plVar8[1];
          if (uVar3 <= uVar11) {
            uVar6 = 0;
            if (uVar3 != 0) {
              uVar6 = uVar11 / uVar3;
            }
            uVar11 = uVar11 - uVar6 * uVar3;
          }
          if (uVar11 != uVar7) {
            plVar10 = plVar8;
            if (*(long *)(*param_1 + uVar11 * 8) == 0) {
              *(long **)(*param_1 + uVar11 * 8) = plVar5;
              uVar7 = uVar11;
            }
            else {
              do {
                plVar9 = plVar10;
                plVar10 = (long *)*plVar9;
                if (plVar10 == (long *)0x0) break;
              } while (plVar8[2] == plVar10[2]);
              *plVar5 = (long)plVar10;
              *plVar9 = **(long **)(*param_1 + uVar11 * 8);
              **(undefined8 **)(*param_1 + uVar11 * 8) = plVar8;
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


