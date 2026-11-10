/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010bb998; name: FUN_010bb998
 */


undefined8 FUN_010bb998(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar13 = uVar7 - 1 & uVar6;
    }
    else {
      uVar13 = uVar6;
      if (uVar7 <= uVar6) {
        uVar13 = 0;
        if (uVar7 != 0) {
          uVar13 = uVar6 / uVar7;
        }
        uVar13 = uVar6 - uVar13 * uVar7;
      }
    }
    lVar11 = *param_1;
    puVar9 = *(undefined8 **)(lVar11 + uVar13 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar9, plVar15 != (long *)0x0)) {
      uVar10 = uVar7 - 1;
      if (1 < uVar8) {
        do {
          uVar14 = plVar15[1];
          if (uVar14 == uVar6) {
            if (plVar15[2] == uVar6) goto LAB_010bba30;
          }
          else {
            if (uVar7 <= uVar14) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar14 / uVar7;
              }
              uVar14 = uVar14 - uVar4 * uVar7;
            }
            if (uVar14 != uVar13) {
              return 0;
            }
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        if (plVar15[1] == uVar6) {
          if (plVar15[2] == uVar6) goto LAB_010bba30;
        }
        else if ((plVar15[1] & uVar10) != uVar13) {
          return 0;
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_010bba30:
  if (uVar8 < 2) {
    uVar6 = uVar6 & uVar10;
  }
  else if (uVar7 <= uVar6) {
    uVar13 = 0;
    if (uVar7 != 0) {
      uVar13 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar13 * uVar7;
  }
  plVar5 = *(long **)(lVar11 + uVar6 * 8);
  do {
    plVar12 = plVar5;
    plVar5 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar15);
  if (plVar12 != param_1 + 6) {
    uVar13 = plVar12[1];
    if (uVar8 < 2) {
      uVar13 = uVar13 & uVar10;
    }
    else if (uVar7 <= uVar13) {
      uVar14 = 0;
      if (uVar7 != 0) {
        uVar14 = uVar13 / uVar7;
      }
      uVar13 = uVar13 - uVar14 * uVar7;
    }
    if (uVar13 == uVar6) goto LAB_010bba80;
  }
  if (*plVar15 != 0) {
    uVar13 = *(ulong *)(*plVar15 + 8);
    if (uVar8 < 2) {
      uVar13 = uVar13 & uVar10;
    }
    else if (uVar7 <= uVar13) {
      uVar14 = 0;
      if (uVar7 != 0) {
        uVar14 = uVar13 / uVar7;
      }
      uVar13 = uVar13 - uVar14 * uVar7;
    }
    if (uVar13 == uVar6) goto LAB_010bba80;
  }
  *(undefined8 *)(lVar11 + uVar6 * 8) = 0;
LAB_010bba80:
  lVar11 = *plVar15;
  if (lVar11 != 0) {
    uVar13 = *(ulong *)(lVar11 + 8);
    if (uVar8 < 2) {
      uVar13 = uVar13 & uVar10;
    }
    else if (uVar7 <= uVar13) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar13 / uVar7;
      }
      uVar13 = uVar13 - uVar8 * uVar7;
    }
    if (uVar13 != uVar6) {
      *(long **)(*param_1 + uVar13 * 8) = plVar12;
      lVar11 = *plVar15;
    }
  }
  *plVar12 = lVar11;
  *plVar15 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  plVar5 = (long *)plVar15[3];
  if (plVar5 != (long *)0x0) {
    plVar12 = plVar5 + 10;
    do {
      iVar3 = (int)*plVar12 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = (long *)param_1[7];
  uVar7 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar7 & 1) != 0) {
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar11 + 0x38d480)) {
      FUN_02bcc824(plVar5,plVar15,0x20,8);
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar15,0x20,8);
  return 1;
}


