/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b62670; name: FUN_01b62670
 */


void FUN_01b62670(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_68;
  
  plVar12 = (long *)param_1[6];
  if (plVar12 == (long *)0x0) {
LAB_01b6269c:
    lVar9 = *param_1;
    *param_1 = 0;
    if (lVar9 == 0) {
      return;
    }
    lVar8 = param_1[1];
    plVar12 = (long *)param_1[2];
    uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar7 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar9,lVar8 << 3,8);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x01b6273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar8 << 3,8);
    return;
  }
  plVar11 = (long *)*plVar12;
  puVar10 = (undefined8 *)plVar12[3];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
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
  uVar7 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  lVar9 = tpidr_el0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar13,plVar12,0x30,8);
      puVar5 = PTR_LAB_04379590;
      goto joined_r0x01b6281c;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x30,8);
  puVar5 = PTR_LAB_04379590;
joined_r0x01b6281c:
  plVar12 = plVar11;
  if (plVar11 != (long *)0x0) {
    do {
      plVar11 = (long *)*plVar12;
      puVar10 = (undefined8 *)plVar12[3];
      if (puVar10 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar10 + 1);
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
          puVar10[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(puVar5,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_68 = *puVar10;
          FUN_02a44274(lVar8 + 0xd8,&local_68);
        }
      }
      plVar13 = (long *)param_1[7];
      uVar7 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) goto LAB_01b62970;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x30,8);
      plVar12 = plVar11;
      if (plVar11 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_01b6269c;
LAB_01b62970:
  FUN_02bcc824(plVar13,plVar12,0x30,8);
  goto joined_r0x01b6281c;
}


