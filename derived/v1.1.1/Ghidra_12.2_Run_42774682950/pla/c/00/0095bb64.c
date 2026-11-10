/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095bb64; name: FUN_0095bb64
 */


void FUN_0095bb64(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 local_58;
  
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  plVar16 = (long *)*param_1;
  if (plVar16 == (long *)0x0) {
    return;
  }
  plVar14 = plVar16;
  if ((long *)param_1[1] != plVar16) {
    plVar14 = (long *)param_1[1] + -2;
    puVar15 = (undefined8 *)*plVar14;
    puVar6 = PTR_LAB_04379590;
    puVar10 = PTR_LAB_04379590;
    if (puVar15 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar15 + 1);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6 = PTR_LAB_04379590;
      puVar10 = PTR_LAB_04379590;
      if (iVar11 + -1 == 0) {
        puVar15[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)puVar8;
        *(long *)puVar9 = lVar13;
        local_58 = *puVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
        puVar6 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
      }
    }
    while (PTR_LAB_04379590 = puVar10, puVar10 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar6,
          plVar14 != plVar16) {
      plVar14 = plVar14 + -2;
      puVar15 = (undefined8 *)*plVar14;
      if (puVar15 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar15 + 1);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar6 = PTR_LAB_04379590;
        if (iVar11 + -1 == 0) {
          puVar15[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            FUN_00100250(puVar10,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar7);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_58 = *puVar15;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
          puVar6 = PTR_LAB_04379590;
        }
      }
    }
    plVar14 = (long *)*param_1;
  }
  lVar13 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = plVar16;
  uVar12 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar12 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar2,plVar14,lVar13 - (long)plVar14,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0095bd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,plVar14,lVar13 - (long)plVar14,8);
  return;
}


