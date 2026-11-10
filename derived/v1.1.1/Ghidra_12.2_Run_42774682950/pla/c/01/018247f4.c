/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018247f4; name: FUN_018247f4
 */


void FUN_018247f4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  plVar14 = (long *)param_1[6];
  if (plVar14 == (long *)0x0) {
LAB_01824820:
    lVar11 = *param_1;
    *param_1 = 0;
    if (lVar11 == 0) {
      return;
    }
    lVar10 = param_1[1];
    plVar14 = (long *)param_1[2];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar11,lVar10 << 3,8);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x018248c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar10 << 3,8);
    return;
  }
  plVar13 = (long *)*plVar14;
  puVar12 = (undefined8 *)plVar14[3];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar12[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar7 = lVar11;
      local_68 = *puVar12;
      FUN_02a44274(lVar11 + 0xd8,&local_68);
    }
  }
  plVar15 = (long *)param_1[7];
  uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  lVar11 = tpidr_el0;
  if ((uVar9 & 1) != 0) {
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar11 + 0x38d480)) {
      FUN_02bcc824(plVar15,plVar14,0x30,8);
      puVar5 = PTR_LAB_04379590;
      goto joined_r0x018249c4;
    }
  }
  (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,0x30,8);
  puVar5 = PTR_LAB_04379590;
joined_r0x018249c4:
  plVar14 = plVar13;
  if (plVar13 != (long *)0x0) {
    do {
      plVar13 = (long *)*plVar14;
      puVar12 = (undefined8 *)plVar14[3];
      if (puVar12 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar12 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          puVar12[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            FUN_00100250(puVar5,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)puVar7 = lVar10;
          local_68 = *puVar12;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
      plVar15 = (long *)param_1[7];
      uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) goto LAB_01824afc;
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,0x30,8);
      plVar14 = plVar13;
      if (plVar13 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_01824820;
LAB_01824afc:
  FUN_02bcc824(plVar15,plVar14,0x30,8);
  goto joined_r0x018249c4;
}


