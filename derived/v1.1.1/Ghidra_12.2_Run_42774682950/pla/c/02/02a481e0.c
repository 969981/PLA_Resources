/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a481e0; name: FUN_02a481e0
 */


void FUN_02a481e0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  uVar3 = *(ulong *)(param_1 + 0x70);
  if (uVar3 == 0) {
LAB_02a482e0:
    plVar9 = (long *)0x0;
  }
  else {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar4 = *(ulong *)(param_2 + 0x58);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar6 * 8);
    if (puVar7 == (undefined8 *)0x0) goto LAB_02a482e0;
    plVar9 = (long *)*puVar7;
    if (plVar9 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          if (plVar9[1] == uVar4) {
            if (plVar9[2] == uVar4) break;
          }
          else if ((plVar9[1] & uVar3 - 1) != uVar6) goto LAB_02a482e0;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar9[1];
          if (uVar5 == uVar4) {
            if (plVar9[2] == uVar4) break;
          }
          else {
            if (uVar3 <= uVar5) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar5 / uVar3;
              }
              uVar5 = uVar5 - uVar1 * uVar3;
            }
            if (uVar5 != uVar6) goto LAB_02a482e0;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (plVar9[3] != param_2) {
    return;
  }
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = plVar9[1];
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar4 = uVar3 - 1 & uVar4;
  }
  else if (uVar3 <= uVar4) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar4 / uVar3;
    }
    uVar4 = uVar4 - uVar6 * uVar3;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x68) + uVar4 * 8);
  do {
    plVar8 = plVar10;
    plVar10 = (long *)*plVar8;
  } while ((long *)*plVar8 != plVar9);
  if (plVar8 != (long *)(param_1 + 0x98)) {
    uVar6 = plVar8[1];
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar1 * uVar3;
    }
    if (uVar6 == uVar4) goto LAB_02a483f8;
  }
  if (*plVar9 != 0) {
    uVar6 = *(ulong *)(*plVar9 + 8);
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar1 * uVar3;
    }
    if (uVar6 == uVar4) goto LAB_02a483f8;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x68) + uVar4 * 8) = 0;
LAB_02a483f8:
  if (*plVar9 != 0) {
    uVar6 = *(ulong *)(*plVar9 + 8);
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar5 * uVar3;
    }
    if (uVar6 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x68) + uVar6 * 8) = plVar8;
    }
  }
  *plVar8 = *plVar9;
  *plVar9 = 0;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0xa0);
  uVar3 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar9,0x20,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02a484dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x20,8);
  return;
}


