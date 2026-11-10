/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a663f4; name: FUN_01a663f4
 */


void FUN_01a663f4(long *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_68;
  
  plVar12 = (long *)param_1[6];
  lVar5 = tpidr_el0;
  if (plVar12 == (long *)0x0) {
LAB_01a66600:
    lVar9 = *param_1;
    *param_1 = 0;
    if (lVar9 == 0) {
      return;
    }
    lVar2 = param_1[1];
    plVar12 = (long *)param_1[2];
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar9,lVar2 << 3,8);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x01a6669c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar2 << 3,8);
    return;
  }
  plVar11 = (long *)*plVar12;
  puVar10 = (undefined8 *)plVar12[3];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_68 = *puVar10;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  plVar13 = (long *)param_1[7];
  uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar13,plVar12,0x30,8);
      puVar6 = PTR_LAB_04379590;
      goto joined_r0x01a664fc;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x30,8);
  puVar6 = PTR_LAB_04379590;
joined_r0x01a664fc:
  if (plVar11 != (long *)0x0) {
    do {
      plVar12 = (long *)*plVar11;
      puVar10 = (undefined8 *)plVar11[3];
      if (puVar10 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar10 + 1);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          puVar10[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(puVar6,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_68 = *puVar10;
          FUN_02a44274(lVar9 + 0xd8,&local_68);
        }
      }
      plVar13 = (long *)param_1[7];
      uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) goto LAB_01a666d0;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,0x30,8);
      plVar11 = plVar12;
      if (plVar12 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_01a66600;
LAB_01a666d0:
  FUN_02bcc824(plVar13,plVar11,0x30,8);
  plVar11 = plVar12;
  goto joined_r0x01a664fc;
}


