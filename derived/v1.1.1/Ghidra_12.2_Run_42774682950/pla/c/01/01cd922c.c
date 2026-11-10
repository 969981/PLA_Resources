/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd922c; name: FUN_01cd922c
 */


void FUN_01cd922c(long *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_28;
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    return;
  }
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar8 = *param_2;
  uVar14 = 0;
  if (uVar6 != 0) {
    uVar14 = uVar8 / uVar6;
  }
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar12 = uVar6 - 1 & uVar8;
  }
  else {
    uVar12 = uVar8;
    if (uVar6 <= uVar8) {
      uVar12 = uVar8 - uVar14 * uVar6;
    }
  }
  lVar9 = *param_1;
  puVar10 = *(undefined8 **)(lVar9 + uVar12 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  plVar16 = (long *)*puVar10;
  if (plVar16 == (long *)0x0) {
    return;
  }
  uVar11 = uVar6 - 1;
  if (uVar7 < 2) {
    do {
      if (plVar16[1] == uVar8) {
        if (plVar16[2] == uVar8) goto LAB_01cd9330;
      }
      else if ((plVar16[1] & uVar11) != uVar12) {
        return;
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar15 = plVar16[1];
    if (uVar15 == uVar8) {
      if (plVar16[2] == uVar8) break;
    }
    else {
      if (uVar6 <= uVar15) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar15 / uVar6;
        }
        uVar15 = uVar15 - uVar4 * uVar6;
      }
      if (uVar15 != uVar12) {
        return;
      }
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01cd9330:
  if (uVar7 < 2) {
    uVar8 = uVar8 & uVar11;
  }
  else if (uVar6 <= uVar8) {
    uVar8 = uVar8 - uVar14 * uVar6;
  }
  plVar17 = *(long **)(lVar9 + uVar8 * 8);
  do {
    plVar13 = plVar17;
    plVar17 = (long *)*plVar13;
  } while ((long *)*plVar13 != plVar16);
  if (plVar13 != param_1 + 6) {
    uVar14 = plVar13[1];
    if (uVar7 < 2) {
      uVar14 = uVar14 & uVar11;
    }
    else if (uVar6 <= uVar14) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar14 / uVar6;
      }
      uVar14 = uVar14 - uVar12 * uVar6;
    }
    if (uVar14 == uVar8) goto LAB_01cd93b8;
  }
  if (*plVar16 != 0) {
    uVar14 = *(ulong *)(*plVar16 + 8);
    if (uVar7 < 2) {
      uVar14 = uVar14 & uVar11;
    }
    else if (uVar6 <= uVar14) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar14 / uVar6;
      }
      uVar14 = uVar14 - uVar12 * uVar6;
    }
    if (uVar14 == uVar8) goto LAB_01cd93b8;
  }
  *(undefined8 *)(lVar9 + uVar8 * 8) = 0;
LAB_01cd93b8:
  lVar9 = *plVar16;
  if (lVar9 != 0) {
    uVar14 = *(ulong *)(lVar9 + 8);
    if (uVar7 < 2) {
      uVar14 = uVar14 & uVar11;
    }
    else if (uVar6 <= uVar14) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar14 / uVar6;
      }
      uVar14 = uVar14 - uVar7 * uVar6;
    }
    if (uVar14 != uVar8) {
      *(long **)(*param_1 + uVar14 * 8) = plVar13;
      lVar9 = *plVar16;
    }
  }
  *plVar13 = lVar9;
  *plVar16 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  puVar10 = (undefined8 *)plVar16[3];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar10;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  plVar17 = (long *)param_1[7];
  uVar6 = (**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((uVar6 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar17,plVar16,0x28,8);
      return;
    }
  }
  (**(code **)(*plVar17 + 0x18))(plVar17,plVar16,0x28,8);
  return;
}


