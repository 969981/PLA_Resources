/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017871c4; name: FUN_017871c4
 */


undefined8 FUN_017871c4(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar1 = *param_2;
    uVar6 = (ulong)uVar1;
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar11 = (ulong)((int)uVar7 - 1U & uVar1);
    }
    else {
      uVar11 = uVar6;
      if (uVar7 <= uVar6) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar6 / uVar7;
        }
        uVar11 = uVar6 - uVar11 * uVar7;
      }
    }
    lVar9 = *param_1;
    puVar4 = *(undefined8 **)(lVar9 + uVar11 * 8);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    plVar12 = (long *)*puVar4;
    if (plVar12 != (long *)0x0) {
      uVar8 = uVar7 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (*(uint *)(plVar12 + 2) == uVar1) goto LAB_0178725c;
          }
          else if ((plVar12[1] & uVar8) != uVar11) {
            return 0;
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar5 = plVar12[1];
        if (uVar5 == uVar6) {
          if (*(uint *)(plVar12 + 2) == uVar1) goto LAB_0178725c;
        }
        else {
          if (uVar7 <= uVar5) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar2 * uVar7;
          }
          if (uVar5 != uVar11) {
            return 0;
          }
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_0178725c:
  if (uVar3 < 2) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar11 * uVar7;
  }
  plVar13 = *(long **)(lVar9 + uVar6 * 8);
  do {
    plVar10 = plVar13;
    plVar13 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar12);
  if (plVar10 != param_1 + 6) {
    uVar11 = plVar10[1];
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar8;
    }
    else if (uVar7 <= uVar11) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar5 * uVar7;
    }
    if (uVar11 == uVar6) goto LAB_017872d0;
  }
  if (*plVar12 != 0) {
    uVar11 = *(ulong *)(*plVar12 + 8);
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar8;
    }
    else if (uVar7 <= uVar11) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar5 * uVar7;
    }
    if (uVar11 == uVar6) goto LAB_017872d0;
  }
  *(undefined8 *)(lVar9 + uVar6 * 8) = 0;
LAB_017872d0:
  lVar9 = *plVar12;
  if (lVar9 != 0) {
    uVar11 = *(ulong *)(lVar9 + 8);
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar8;
    }
    else if (uVar7 <= uVar11) {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar3 * uVar7;
    }
    if (uVar11 != uVar6) {
      *(long **)(*param_1 + uVar11 * 8) = plVar10;
      lVar9 = *plVar12;
    }
  }
  *plVar10 = lVar9;
  *plVar12 = 0;
  plVar13 = (long *)param_1[7];
  param_1[0xb] = param_1[0xb] + -1;
  uVar7 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar7 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar13,plVar12,0x20,8);
      return 1;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x20,8);
  return 1;
}


