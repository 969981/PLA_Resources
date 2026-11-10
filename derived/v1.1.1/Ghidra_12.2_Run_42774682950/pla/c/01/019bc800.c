/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019bc800; name: FUN_019bc800
 */


void FUN_019bc800(long param_1,uint *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  if (*param_2 < 2) {
    param_1 = param_1 + (ulong)*param_2 * 0x20;
    (**(code **)**(undefined8 **)(param_1 + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
    plVar11 = *(long **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) != 0) {
      lVar9 = tpidr_el0;
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar9 + 0x38d480)) {
        FUN_02bcc824(plVar11,uVar2,uVar3,8);
        goto LAB_019bc8b4;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,uVar3,8);
LAB_019bc8b4:
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  puVar8 = (undefined8 *)FUN_019bcb90();
  uStack_48 = 0x19bc940;
  *puVar8 = &DAT_04232db8;
  puVar8[9] = &PTR_LAB_04232e48;
  puVar8[10] = &PTR_LAB_04232e90;
  plVar11 = (long *)puVar8[0x76];
  local_50 = (long)register0x00000008 + -0x10;
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
      plVar11 = (long *)puVar8[0x75];
      goto joined_r0x019bc994;
    }
  }
  plVar11 = (long *)puVar8[0x75];
joined_r0x019bc994:
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *puVar8 = &DAT_0427e7a0;
  puVar8[9] = &PTR_LAB_0427e828;
  puVar8[10] = &PTR_LAB_0427e870;
  puVar10 = (undefined8 *)puVar8[0x71];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_58 = *puVar10;
      FUN_02a44274(lVar9 + 0xd8,&local_58);
    }
  }
  FUN_02a6f838(puVar8);
  return;
}


