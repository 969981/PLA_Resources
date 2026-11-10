/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b98f10; name: FUN_01b98f10
 */


void FUN_01b98f10(long *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  plVar13 = (long *)param_1[6];
  lVar5 = tpidr_el0;
  if (plVar13 == (long *)0x0) {
LAB_01b990fc:
    lVar11 = *param_1;
    *param_1 = 0;
    if (lVar11 == 0) {
      return;
    }
    lVar2 = param_1[1];
    plVar13 = (long *)param_1[2];
    uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar11,lVar2 << 3,8);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x01b99198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,lVar2 << 3,8);
    return;
  }
  plVar12 = (long *)*plVar13;
  puVar14 = (undefined8 *)plVar13[3];
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      puVar14[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar8;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_68 = *puVar14;
      FUN_02a44274(lVar11 + 0xd8,&local_68);
    }
  }
  plVar15 = (long *)param_1[7];
  uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar10 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar15,plVar13,0x30,8);
      puVar6 = PTR_LAB_04379590;
      goto joined_r0x01b99018;
    }
  }
  (**(code **)(*plVar15 + 0x18))(plVar15,plVar13,0x30,8);
  puVar6 = PTR_LAB_04379590;
joined_r0x01b99018:
  if (plVar12 != (long *)0x0) {
    do {
      plVar13 = (long *)*plVar12;
      puVar14 = (undefined8 *)plVar12[3];
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar14[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            FUN_00100250(puVar6,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar7);
          }
          lVar11 = *(long *)puVar8;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_68 = *puVar14;
          FUN_02a44274(lVar11 + 0xd8,&local_68);
        }
      }
      plVar15 = (long *)param_1[7];
      uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar10 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) goto LAB_01b991cc;
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar12,0x30,8);
      plVar12 = plVar13;
      if (plVar13 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_01b990fc;
LAB_01b991cc:
  FUN_02bcc824(plVar15,plVar12,0x30,8);
  plVar12 = plVar13;
  goto joined_r0x01b99018;
}


