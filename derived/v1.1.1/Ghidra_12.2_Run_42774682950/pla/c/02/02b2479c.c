/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2479c; name: FUN_02b2479c
 */


undefined8 FUN_02b2479c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar8 = uVar3 - 1 & uVar2;
    }
    else {
      uVar8 = uVar2;
      if (uVar3 <= uVar2) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar2 / uVar3;
        }
        uVar8 = uVar2 - uVar8 * uVar3;
      }
    }
    lVar7 = *param_1;
    puVar5 = *(undefined8 **)(lVar7 + uVar8 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar5, plVar11 != (long *)0x0)) {
      uVar6 = uVar3 - 1;
      if (uVar4 < 2) {
        do {
          if (plVar11[1] == uVar2) {
            if (plVar11[2] == uVar2) goto LAB_02b248b4;
          }
          else if ((plVar11[1] & uVar6) != uVar8) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar2) {
            if (plVar11[2] == uVar2) goto LAB_02b248b4;
          }
          else {
            if (uVar3 <= uVar9) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar9 / uVar3;
              }
              uVar9 = uVar9 - uVar1 * uVar3;
            }
            if (uVar9 != uVar8) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  return 0;
LAB_02b248b4:
  if (uVar4 < 2) {
    uVar2 = uVar2 & uVar6;
  }
  else if (uVar3 <= uVar2) {
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = uVar2 / uVar3;
    }
    uVar2 = uVar2 - uVar8 * uVar3;
  }
  plVar12 = *(long **)(lVar7 + uVar2 * 8);
  do {
    plVar10 = plVar12;
    plVar12 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar11);
  if (plVar10 != param_1 + 6) {
    uVar8 = plVar10[1];
    if (uVar4 < 2) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar3 <= uVar8) {
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = uVar8 / uVar3;
      }
      uVar8 = uVar8 - uVar9 * uVar3;
    }
    if (uVar8 == uVar2) goto LAB_02b24968;
  }
  if (*plVar11 != 0) {
    uVar8 = *(ulong *)(*plVar11 + 8);
    if (uVar4 < 2) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar3 <= uVar8) {
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = uVar8 / uVar3;
      }
      uVar8 = uVar8 - uVar9 * uVar3;
    }
    if (uVar8 == uVar2) goto LAB_02b24968;
  }
  *(undefined8 *)(lVar7 + uVar2 * 8) = 0;
LAB_02b24968:
  lVar7 = *plVar11;
  if (lVar7 != 0) {
    uVar8 = *(ulong *)(lVar7 + 8);
    if (uVar4 < 2) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar3 <= uVar8) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar8 / uVar3;
      }
      uVar8 = uVar8 - uVar4 * uVar3;
    }
    if (uVar8 != uVar2) {
      *(long **)(*param_1 + uVar8 * 8) = plVar10;
      lVar7 = *plVar11;
    }
  }
  *plVar10 = lVar7;
  *plVar11 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  if ((long *)plVar11[5] != (long *)0x0) {
    (**(code **)(*(long *)plVar11[5] + 0x20))();
  }
  plVar12 = (long *)param_1[7];
  uVar3 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar3 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar12,plVar11,0x38,8);
      return 1;
    }
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0x38,8);
  return 1;
}


