/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e53418; name: FUN_01e53418
 */


void FUN_01e53418(long *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_28;
  
  uVar8 = param_1[1];
  if (uVar8 == 0) {
    return;
  }
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar2 = *param_2;
  uVar7 = (ulong)uVar2;
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar15 = (ulong)((int)uVar8 - 1U & uVar2);
  }
  else {
    uVar15 = uVar7;
    if (uVar8 <= uVar7) {
      uVar15 = 0;
      if (uVar8 != 0) {
        uVar15 = uVar7 / uVar8;
      }
      uVar15 = uVar7 - uVar15 * uVar8;
    }
  }
  lVar10 = *param_1;
  puVar11 = *(undefined8 **)(lVar10 + uVar15 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  plVar16 = (long *)*puVar11;
  if (plVar16 == (long *)0x0) {
    return;
  }
  uVar12 = uVar8 - 1;
  if (uVar9 < 2) {
    do {
      if (plVar16[1] == uVar7) {
        if (*(uint *)(plVar16 + 2) == uVar2) goto LAB_01e534b4;
      }
      else if ((plVar16[1] & uVar12) != uVar15) {
        return;
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar13 = plVar16[1];
    if (uVar13 == uVar7) {
      if (*(uint *)(plVar16 + 2) == uVar2) break;
    }
    else {
      if (uVar8 <= uVar13) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar13 / uVar8;
        }
        uVar13 = uVar13 - uVar5 * uVar8;
      }
      if (uVar13 != uVar15) {
        return;
      }
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01e534b4:
  if (uVar9 < 2) {
    uVar7 = uVar12 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar15 * uVar8;
  }
  plVar17 = *(long **)(lVar10 + uVar7 * 8);
  do {
    plVar14 = plVar17;
    plVar17 = (long *)*plVar14;
  } while ((long *)*plVar14 != plVar16);
  if (plVar14 != param_1 + 6) {
    uVar15 = plVar14[1];
    if (uVar9 < 2) {
      uVar15 = uVar15 & uVar12;
    }
    else if (uVar8 <= uVar15) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar13 * uVar8;
    }
    if (uVar15 == uVar7) goto LAB_01e53528;
  }
  if (*plVar16 != 0) {
    uVar15 = *(ulong *)(*plVar16 + 8);
    if (uVar9 < 2) {
      uVar15 = uVar15 & uVar12;
    }
    else if (uVar8 <= uVar15) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar13 * uVar8;
    }
    if (uVar15 == uVar7) goto LAB_01e53528;
  }
  *(undefined8 *)(lVar10 + uVar7 * 8) = 0;
LAB_01e53528:
  lVar10 = *plVar16;
  if (lVar10 != 0) {
    uVar15 = *(ulong *)(lVar10 + 8);
    if (uVar9 < 2) {
      uVar15 = uVar15 & uVar12;
    }
    else if (uVar8 <= uVar15) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar9 * uVar8;
    }
    if (uVar15 != uVar7) {
      *(long **)(*param_1 + uVar15 * 8) = plVar14;
      lVar10 = *plVar16;
    }
  }
  *plVar14 = lVar10;
  *plVar16 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  puVar11 = (undefined8 *)plVar16[3];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  plVar17 = (long *)param_1[7];
  uVar8 = (**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((uVar8 & 1) != 0) {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar10 + 0x38d480)) {
      FUN_02bcc824(plVar17,plVar16,0x28,8);
      return;
    }
  }
  (**(code **)(*plVar17 + 0x18))(plVar17,plVar16,0x28,8);
  return;
}


