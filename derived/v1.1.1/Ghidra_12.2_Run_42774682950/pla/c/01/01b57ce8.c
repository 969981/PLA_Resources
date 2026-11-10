/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b57ce8; name: FUN_01b57ce8
 */


void FUN_01b57ce8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_58;
  
  plVar12 = *(long **)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x200) = 0;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (*(long **)(param_1 + 0x210) != plVar12) {
    plVar13 = *(long **)(param_1 + 0x210) + -2;
    puVar11 = (undefined8 *)*plVar13;
    puVar4 = PTR_LAB_04379590;
    puVar8 = PTR_LAB_04379590;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
      if (iVar9 + -1 == 0) {
        puVar11[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_58 = *puVar11;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
        puVar4 = PTR_LAB_04379590;
        puVar8 = PTR_LAB_04379590;
      }
    }
    while (PTR_LAB_04379590 = puVar8, puVar8 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar4,
          plVar13 != plVar12) {
      plVar13 = plVar13 + -2;
      puVar11 = (undefined8 *)*plVar13;
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = PTR_LAB_04379590;
        if (iVar9 + -1 == 0) {
          puVar11[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_58 = *puVar11;
          FUN_02a44274(lVar10 + 0xd8,&local_58);
          puVar4 = PTR_LAB_04379590;
        }
      }
    }
  }
  *(long **)(param_1 + 0x210) = plVar12;
  *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) & 0xfffffffd;
  return;
}


