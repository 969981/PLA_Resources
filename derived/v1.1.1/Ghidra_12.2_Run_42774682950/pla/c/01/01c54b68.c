/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c54b68; name: FUN_01c54b68
 */


void FUN_01c54b68(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_58;
  
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  puVar13 = *(undefined8 **)(param_1 + 8);
  while (puVar13 != param_2) {
    plVar9 = (long *)puVar13[-2];
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
    puVar11 = (undefined8 *)puVar13[-6];
    puVar12 = puVar13 + -10;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
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
        puVar11[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_58 = *puVar11;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
    puVar13 = (undefined8 *)puVar13[-8];
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
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
        puVar13[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_58 = *puVar13;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
    puVar11 = (undefined8 *)*puVar12;
    puVar13 = puVar12;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
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
        puVar11[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_58 = *puVar11;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}


