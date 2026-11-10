/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a489b0; name: FUN_01a489b0
 */


void FUN_01a489b0(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  plVar2 = (long *)(param_1 + 0xe100);
  if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0xc) != 0)) {
    puVar7 = (undefined8 *)*plVar2;
    *plVar2 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        puVar7[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar5 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38[0] = (undefined8 *)*puVar7;
        FUN_02a44274(lVar8 + 0xd8,local_38);
      }
    }
    *(undefined8 *)(param_1 + 0xe108) = 0;
  }
  if ((*param_2 != 0) &&
     (plVar6 = (long *)FUN_008a7e50(*param_2 + 0xf0,local_38), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(local_38);
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_00946790(&local_48,local_38);
    puVar7 = local_38[0];
    if (local_38[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38[0] + 1);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        local_38[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar7;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
    FUN_00b6081c(plVar2,&local_48);
    puVar7 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38[0] = (undefined8 *)*puVar7;
        FUN_02a44274(lVar8 + 0xd8,local_38);
      }
    }
  }
  return;
}


