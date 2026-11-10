/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5e010; name: FUN_01f5e010
 */


void FUN_01f5e010(long param_1,long param_2)

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
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04379498;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != param_2) {
    lVar10 = lVar11 + -0x10;
    *(long *)(param_1 + 0x10) = lVar10;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar12 = *(undefined8 **)(lVar11 + -0x10);
    puVar4 = PTR_LAB_04379590;
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar12[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)puVar6;
        *(long *)puVar7 = lVar11;
        local_48 = *puVar12;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
      lVar10 = *(long *)(param_1 + 0x10);
      puVar4 = PTR_LAB_04379590;
    }
    while (puVar8 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar4, lVar10 != param_2) {
      while( true ) {
        lVar11 = lVar10 + -0x10;
        *(long *)(param_1 + 0x10) = lVar11;
        puVar12 = *(undefined8 **)(lVar10 + -0x10);
        if (puVar12 != (undefined8 *)0x0) break;
        lVar10 = lVar11;
        if (lVar11 == param_2) {
          return;
        }
      }
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar12[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar11 = *(long *)puVar6;
        *(long *)puVar7 = lVar11;
        local_48 = *puVar12;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
      puVar4 = PTR_LAB_04379590;
      PTR_LAB_04379590 = puVar8;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
  return;
}


