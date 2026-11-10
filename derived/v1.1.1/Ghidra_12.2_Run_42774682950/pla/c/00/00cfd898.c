/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cfd898; name: FUN_00cfd898
 */


long FUN_00cfd898(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_38;
  
  uVar9 = param_1[1];
  lVar2 = *param_2;
  uVar7 = param_2[1];
  uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) {
    uVar7 = uVar9 - 1 & uVar7;
  }
  else if (uVar9 <= uVar7) {
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = uVar7 / uVar9;
    }
    uVar7 = uVar7 - uVar12 * uVar9;
  }
  plVar14 = *(long **)(*param_1 + uVar7 * 8);
  do {
    plVar13 = plVar14;
    plVar14 = (long *)*plVar13;
  } while ((long *)*plVar13 != param_2);
  if (plVar13 != param_1 + 5) {
    uVar12 = plVar13[1];
    if (uVar11 < 2) {
      uVar12 = uVar12 & uVar9 - 1;
    }
    else if (uVar9 <= uVar12) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar12 / uVar9;
      }
      uVar12 = uVar12 - uVar5 * uVar9;
    }
    if (uVar12 == uVar7) goto LAB_00cfd92c;
  }
  if (*param_2 != 0) {
    uVar12 = *(ulong *)(*param_2 + 8);
    if (uVar11 < 2) {
      uVar12 = uVar12 & uVar9 - 1;
    }
    else if (uVar9 <= uVar12) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar12 / uVar9;
      }
      uVar12 = uVar12 - uVar5 * uVar9;
    }
    if (uVar12 == uVar7) goto LAB_00cfd92c;
  }
  *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
LAB_00cfd92c:
  if (*param_2 != 0) {
    uVar12 = *(ulong *)(*param_2 + 8);
    if (uVar11 < 2) {
      uVar12 = uVar12 & uVar9 - 1;
    }
    else if (uVar9 <= uVar12) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar12 / uVar9;
      }
      uVar12 = uVar12 - uVar11 * uVar9;
    }
    if (uVar12 != uVar7) {
      *(long **)(*param_1 + uVar12 * 8) = plVar13;
    }
  }
  *plVar13 = *param_2;
  *param_2 = 0;
  param_1[9] = param_1[9] + -1;
  if (param_2 != (long *)0x0) {
    puVar8 = (undefined8 *)param_2[0x4e];
    if (puVar8 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar8 + 1);
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
        puVar8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *puVar8;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    puVar8 = (undefined8 *)param_2[6];
    if (puVar8 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar8 + 1);
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
        puVar8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *puVar8;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    plVar14 = (long *)param_1[6];
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar14,param_2,0x290,0x10);
        return lVar2;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,param_2,0x290,0x10);
  }
  return lVar2;
}


