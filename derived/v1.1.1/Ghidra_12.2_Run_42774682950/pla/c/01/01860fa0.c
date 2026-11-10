/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01860fa0; name: FUN_01860fa0
 */


void FUN_01860fa0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_58;
  
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  plVar2 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  if (plVar3 != plVar2) {
    plVar14 = plVar3 + -4;
    puVar13 = (undefined8 *)plVar3[-2];
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        puVar13[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar8;
        *(long *)puVar9 = lVar12;
        local_58 = *puVar13;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    puVar13 = (undefined8 *)*plVar14;
    puVar6 = PTR_LAB_04379590;
    puVar10 = PTR_LAB_04379590;
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar6 = PTR_LAB_04379590;
      puVar10 = PTR_LAB_04379590;
      if (iVar11 + -1 == 0) {
        puVar13[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar8;
        *(long *)puVar9 = lVar12;
        local_58 = *puVar13;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
        puVar6 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
      }
    }
    while (PTR_LAB_04379590 = puVar10, puVar10 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar6,
          plVar14 != plVar2) {
      puVar13 = (undefined8 *)plVar14[-2];
      plVar14 = plVar14 + -4;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            FUN_00100250(puVar10,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar7);
          }
          lVar12 = *(long *)puVar8;
          *(long *)puVar9 = lVar12;
          local_58 = *puVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      puVar13 = (undefined8 *)*plVar14;
      puVar6 = PTR_LAB_04379590;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar6 = PTR_LAB_04379590;
        if (iVar11 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            FUN_00100250(puVar10,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar7);
          }
          lVar12 = *(long *)puVar8;
          *(long *)puVar9 = lVar12;
          local_58 = *puVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
          puVar6 = PTR_LAB_04379590;
        }
      }
    }
  }
  param_1[1] = (long)plVar2;
  return;
}


