/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b62b0c; name: FUN_01b62b0c
 */


undefined8 FUN_01b62b0c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = uVar6 / uVar5;
    }
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar11 = uVar5 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar5 <= uVar6) {
        uVar11 = uVar6 - uVar10 * uVar5;
      }
    }
    lVar8 = *param_1;
    puVar3 = *(undefined8 **)(lVar8 + uVar11 * 8);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    plVar12 = (long *)*puVar3;
    if (plVar12 != (long *)0x0) {
      uVar7 = uVar5 - 1;
      if (uVar2 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_01b62bc4;
          }
          else if ((plVar12[1] & uVar7) != uVar11) {
            return 0;
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar4 = plVar12[1];
        if (uVar4 == uVar6) {
          if (plVar12[2] == uVar6) goto LAB_01b62bc4;
        }
        else {
          if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar11) {
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
LAB_01b62bc4:
  if (uVar2 < 2) {
    uVar6 = uVar6 & uVar7;
  }
  else if (uVar5 <= uVar6) {
    uVar6 = uVar6 - uVar10 * uVar5;
  }
  plVar13 = *(long **)(lVar8 + uVar6 * 8);
  do {
    plVar9 = plVar13;
    plVar13 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar12);
  if (plVar9 != param_1 + 6) {
    uVar10 = plVar9[1];
    if (uVar2 < 2) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar11 = 0;
      if (uVar5 != 0) {
        uVar11 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar11 * uVar5;
    }
    if (uVar10 == uVar6) goto LAB_01b62c04;
  }
  if (*plVar12 != 0) {
    uVar10 = *(ulong *)(*plVar12 + 8);
    if (uVar2 < 2) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar11 = 0;
      if (uVar5 != 0) {
        uVar11 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar11 * uVar5;
    }
    if (uVar10 == uVar6) goto LAB_01b62c04;
  }
  *(undefined8 *)(lVar8 + uVar6 * 8) = 0;
LAB_01b62c04:
  lVar8 = *plVar12;
  if (lVar8 != 0) {
    uVar10 = *(ulong *)(lVar8 + 8);
    if (uVar2 < 2) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar6) {
      *(long **)(*param_1 + uVar10 * 8) = plVar9;
      lVar8 = *plVar12;
    }
  }
  *plVar9 = lVar8;
  *plVar12 = 0;
  plVar13 = (long *)param_1[7];
  param_1[0xb] = param_1[0xb] + -1;
  uVar5 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar5 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar13,plVar12,0x20,8);
      return 1;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x20,8);
  return 1;
}


