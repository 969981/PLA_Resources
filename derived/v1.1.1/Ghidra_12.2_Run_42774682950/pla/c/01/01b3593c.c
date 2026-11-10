/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3593c; name: FUN_01b3593c
 */


void FUN_01b3593c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar12 = (long *)*param_2;
  puVar11 = (undefined8 *)param_2[3];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar11[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)puVar6;
      *(long *)puVar4 = lVar9;
      local_68 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  plVar13 = *(long **)(param_1 + 0x38);
  uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  lVar9 = tpidr_el0;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar13,param_2,0x30,8);
      puVar4 = PTR_LAB_04379590;
      goto joined_r0x01b35a68;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,param_2,0x30,8);
  puVar4 = PTR_LAB_04379590;
joined_r0x01b35a68:
  plVar13 = plVar12;
  if (plVar12 == (long *)0x0) {
    return;
  }
  do {
    plVar12 = (long *)*plVar13;
    puVar11 = (undefined8 *)plVar13[3];
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar11[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_00100250(puVar4,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar10 = *(long *)puVar6;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = *puVar11;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    plVar14 = *(long **)(param_1 + 0x38);
    uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar9 + 0x38d480)) break;
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x30,8);
    plVar13 = plVar12;
    if (plVar12 == (long *)0x0) {
      return;
    }
  } while( true );
  FUN_02bcc824(plVar14,plVar13,0x30,8);
  goto joined_r0x01b35a68;
}


