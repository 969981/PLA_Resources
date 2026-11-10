/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009979c4; name: FUN_009979c4
 */


void FUN_009979c4(long param_1,byte param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_48 [8];
  
  uVar11 = *(ulong *)(param_1 + 0x70);
  if (uVar11 == 0) {
    return;
  }
  uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar10 = (ulong)param_2;
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar15 = (int)uVar11 - 1 & uVar10;
  }
  else if (uVar10 < uVar11) {
    uVar15 = uVar10;
  }
  else {
    uVar15 = 0;
    if (uVar11 != 0) {
      uVar15 = uVar10 / uVar11;
    }
    uVar15 = uVar10 - uVar15 * uVar11;
  }
  puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar15 * 8);
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  plVar16 = (long *)*puVar13;
  if (plVar16 == (long *)0x0) {
    return;
  }
  if (1 < uVar12) {
    do {
      uVar12 = plVar16[1];
      if (uVar12 == uVar10) {
        if (*(byte *)(plVar16 + 2) == param_2) goto LAB_00997adc;
      }
      else {
        if (uVar11 <= uVar12) {
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = uVar12 / uVar11;
          }
          uVar12 = uVar12 - uVar7 * uVar11;
        }
        if (uVar12 != uVar15) {
          return;
        }
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar16[1] == uVar10) {
      if (*(byte *)(plVar16 + 2) == param_2) break;
    }
    else if ((plVar16[1] & uVar11 - 1) != uVar15) {
      return;
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_00997adc:
  plVar17 = (long *)plVar16[3];
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar18 = param_1 + (long)(int)plVar16[4] * 0x20;
  lVar19 = plVar17[0x1a];
  *(long *)(lVar18 + 0x238) = plVar17[0x1b];
  *(long *)(lVar18 + 0x230) = lVar19;
  lVar19 = plVar17[0x18];
  *(long *)(lVar18 + 0x248) = plVar17[0x19];
  *(long *)(lVar18 + 0x240) = lVar19;
  if ((param_3 & 1) == 0) {
    cVar5 = *(char *)((long)plVar16 + 0x31);
  }
  else {
    cVar5 = (char)plVar16[6];
  }
  if ((cVar5 != '\0') && (lVar18 = FUN_009aff90(plVar17 + 0x1e,auStack_48), lVar18 != 0)) {
    FUN_01836814(lVar18,0);
  }
  uVar10 = *(ulong *)(param_1 + 0x70);
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar12 = plVar16[1];
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) {
    uVar12 = uVar10 - 1 & uVar12;
  }
  else if (uVar10 <= uVar12) {
    uVar15 = 0;
    if (uVar10 != 0) {
      uVar15 = uVar12 / uVar10;
    }
    uVar12 = uVar12 - uVar15 * uVar10;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x68) + uVar12 * 8);
  do {
    plVar14 = plVar9;
    plVar9 = (long *)*plVar14;
  } while ((long *)*plVar14 != plVar16);
  if (plVar14 == (long *)(param_1 + 0x98)) {
LAB_00997bc4:
    if (*plVar16 != 0) {
      uVar15 = *(ulong *)(*plVar16 + 8);
      if (uVar11 < 2) {
        uVar15 = uVar15 & uVar10 - 1;
      }
      else if (uVar10 <= uVar15) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar15 / uVar10;
        }
        uVar15 = uVar15 - uVar7 * uVar10;
      }
      if (uVar15 == uVar12) goto LAB_00997bd0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x68) + uVar12 * 8) = 0;
  }
  else {
    uVar15 = plVar14[1];
    if (uVar11 < 2) {
      uVar15 = uVar15 & uVar10 - 1;
    }
    else if (uVar10 <= uVar15) {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar15 / uVar10;
      }
      uVar15 = uVar15 - uVar7 * uVar10;
    }
    if (uVar15 != uVar12) goto LAB_00997bc4;
  }
LAB_00997bd0:
  lVar18 = *plVar16;
  if (lVar18 != 0) {
    uVar15 = *(ulong *)(lVar18 + 8);
    if (uVar11 < 2) {
      uVar15 = uVar15 & uVar10 - 1;
    }
    else if (uVar10 <= uVar15) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar15 / uVar10;
      }
      uVar15 = uVar15 - uVar11 * uVar10;
    }
    if (uVar15 != uVar12) {
      *(long **)(*(long *)(param_1 + 0x68) + uVar15 * 8) = plVar14;
      lVar18 = *plVar16;
    }
  }
  *plVar14 = lVar18;
  *plVar16 = 0;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
  plVar9 = (long *)plVar16[3];
  if (plVar9 != (long *)0x0) {
    lVar18 = plVar9[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  plVar9 = *(long **)(param_1 + 0xa0);
  uVar11 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar11 & 1) != 0) {
    lVar18 = tpidr_el0;
    if (*(char *)(lVar18 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar18 + 0x38d488) = 1;
      *(undefined8 *)(lVar18 + 0x38d478) = 0;
      *(undefined8 *)(lVar18 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar18 + 0x38d480)) {
      FUN_02bcc824(plVar9,plVar16,0x38,8);
      goto LAB_00997c88;
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar16,0x38,8);
LAB_00997c88:
  pbVar4 = *(byte **)(param_1 + 0x140);
  for (pbVar3 = *(byte **)(param_1 + 0x138); pbVar3 != pbVar4; pbVar3 = pbVar3 + 0x60) {
    if (*pbVar3 == param_2) {
      pbVar3[0x55] = 0;
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return;
}


