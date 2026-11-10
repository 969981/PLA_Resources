/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af4420; name: FUN_00af4420
 */


undefined8 FUN_00af4420(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar10 = 0;
    if (uVar2 != 0) {
      uVar10 = uVar4 / uVar2;
    }
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar8 = uVar2 - 1 & uVar4;
    }
    else {
      uVar8 = uVar4;
      if (uVar2 <= uVar4) {
        uVar8 = uVar4 - uVar10 * uVar2;
      }
    }
    lVar7 = *param_1;
    puVar5 = *(undefined8 **)(lVar7 + uVar8 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar5, plVar12 != (long *)0x0)) {
      uVar6 = uVar2 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar12[1] == uVar4) {
            if (plVar12[2] == uVar4) goto LAB_00af44c4;
          }
          else if ((plVar12[1] & uVar6) != uVar8) {
            return 0;
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar11 = plVar12[1];
        if (uVar11 == uVar4) {
          if (plVar12[2] == uVar4) goto LAB_00af44c4;
        }
        else {
          if (uVar2 <= uVar11) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar11 / uVar2;
            }
            uVar11 = uVar11 - uVar1 * uVar2;
          }
          if (uVar11 != uVar8) {
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
LAB_00af44c4:
  if (uVar3 < 2) {
    uVar4 = uVar4 & uVar6;
  }
  else if (uVar2 <= uVar4) {
    uVar4 = uVar4 - uVar10 * uVar2;
  }
  plVar13 = *(long **)(lVar7 + uVar4 * 8);
  do {
    plVar9 = plVar13;
    plVar13 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar12);
  if (plVar9 != param_1 + 6) {
    uVar10 = plVar9[1];
    if (uVar3 < 2) {
      uVar10 = uVar10 & uVar6;
    }
    else if (uVar2 <= uVar10) {
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar8 = uVar10 / uVar2;
      }
      uVar10 = uVar10 - uVar8 * uVar2;
    }
    if (uVar10 == uVar4) goto LAB_00af4504;
  }
  if (*plVar12 != 0) {
    uVar10 = *(ulong *)(*plVar12 + 8);
    if (uVar3 < 2) {
      uVar10 = uVar10 & uVar6;
    }
    else if (uVar2 <= uVar10) {
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar8 = uVar10 / uVar2;
      }
      uVar10 = uVar10 - uVar8 * uVar2;
    }
    if (uVar10 == uVar4) goto LAB_00af4504;
  }
  *(undefined8 *)(lVar7 + uVar4 * 8) = 0;
LAB_00af4504:
  lVar7 = *plVar12;
  if (lVar7 != 0) {
    uVar10 = *(ulong *)(lVar7 + 8);
    if (uVar3 < 2) {
      uVar10 = uVar10 & uVar6;
    }
    else if (uVar2 <= uVar10) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar10 / uVar2;
      }
      uVar10 = uVar10 - uVar3 * uVar2;
    }
    if (uVar10 != uVar4) {
      *(long **)(*param_1 + uVar10 * 8) = plVar9;
      lVar7 = *plVar12;
    }
  }
  *plVar9 = lVar7;
  *plVar12 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  if ((long *)plVar12[5] != (long *)0x0) {
    (**(code **)(*(long *)plVar12[5] + 0x20))();
  }
  plVar13 = (long *)param_1[7];
  uVar2 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar2 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar13,plVar12,0x40,0x10);
      return 1;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x40,0x10);
  return 1;
}


