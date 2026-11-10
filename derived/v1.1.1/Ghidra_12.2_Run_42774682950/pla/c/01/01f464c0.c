/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f464c0; name: FUN_01f464c0
 */


void FUN_01f464c0(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_68;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)*param_2;
  puVar12 = (undefined8 *)param_2[3];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = *puVar12;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  plVar13 = *(long **)(param_1 + 0x38);
  uVar7 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  lVar8 = tpidr_el0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar13,param_2,0x30,8);
      pbVar4 = PTR_DAT_04379498;
      plVar13 = (long *)PTR_DAT_043794a0;
      plVar5 = (long *)PTR_DAT_043794a8;
      goto joined_r0x01f465e8;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,param_2,0x30,8);
  pbVar4 = PTR_DAT_04379498;
  plVar13 = (long *)PTR_DAT_043794a0;
  plVar5 = (long *)PTR_DAT_043794a8;
joined_r0x01f465e8:
  plVar11 = plVar10;
  if (plVar10 == (long *)0x0) {
    return;
  }
  do {
    plVar10 = (long *)*plVar11;
    puVar12 = (undefined8 *)plVar11[3];
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        puVar12[2] = 0;
        if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,plVar13,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar4);
        }
        lVar9 = *plVar13;
        *plVar5 = lVar9;
        local_68 = *puVar12;
        FUN_02a44274(lVar9 + 0xd8,&local_68);
      }
    }
    plVar14 = *(long **)(param_1 + 0x38);
    uVar7 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) break;
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,plVar11,0x30,8);
    plVar11 = plVar10;
    if (plVar10 == (long *)0x0) {
      return;
    }
  } while( true );
  FUN_02bcc824(plVar14,plVar11,0x30,8);
  goto joined_r0x01f465e8;
}


