/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5d0e0; name: FUN_01f5d0e0
 */


void FUN_01f5d0e0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar2 = *(long **)(param_1 + 0xd0);
  plVar12 = *(long **)(param_1 + 0xd8);
  while (plVar12 != plVar2) {
    plVar12 = plVar12 + -2;
    puVar10 = (undefined8 *)*plVar12;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
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
        puVar10[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar11 = *(long *)puVar6;
        *(long *)puVar7 = lVar11;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
  }
  *(long **)(param_1 + 0xd8) = plVar2;
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar2 = *(long **)(param_1 + 0x98);
  plVar12 = *(long **)(param_1 + 0xa0);
  while (plVar12 != plVar2) {
    plVar12 = plVar12 + -2;
    puVar10 = (undefined8 *)*plVar12;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
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
        puVar10[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar11 = *(long *)puVar6;
        *(long *)puVar7 = lVar11;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
  }
  *(long **)(param_1 + 0xa0) = plVar2;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  if (*(long *)(param_1 + 0x70) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_0192af0c(&local_58);
    if ((local_58 != (long *)0x0) && (FUN_01f212ec(), local_58 != (long *)0x0)) {
      lVar11 = local_58[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  FUN_01f5d318();
  (**(code **)(**(long **)(param_1 + 0x68) + 0x40))(*(long **)(param_1 + 0x68),0);
  return;
}


