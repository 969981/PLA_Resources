/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a81e68; name: FUN_01a81e68
 */


void FUN_01a81e68(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40 [2];
  long local_28;
  
  FUN_01a2bf84(param_1 + 0x5c8);
  FUN_009c685c(&local_58,param_1 + 0x5c8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*(long *)local_58[0x127] + 0x18))(local_40);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_01a9cf4c(&local_50,local_40);
    plVar6 = local_40[0];
    if (local_40[0] != (long *)0x0) {
      plVar1 = local_40[0] + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_40[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *plVar6;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_01a9d24c(&local_68,&local_50);
    puVar5 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_50 + 1);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_40[0] = (long *)*puVar5;
        FUN_02a44274(lVar8 + 0xd8,local_40);
      }
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_01aa4648(local_40);
      plVar6 = local_40[0];
      puVar5 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_68 + 1);
        do {
          iVar7 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          local_68[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_40[0] = (long *)*puVar5;
          FUN_02a44274(lVar8 + 0xd8,local_40);
        }
      }
      if (plVar6 != (long *)0x0) {
        lVar8 = 0;
        if (*(long *)(param_1 + 0xb60) != 0) {
          lVar8 = *(long *)(param_1 + 0xb60) + 0x68;
        }
        FUN_01a7d65c(plVar6,lVar8);
        lVar8 = plVar6[0xb];
        piVar2 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
        }
      }
    }
    if (local_58 != (long *)0x0) {
      lVar8 = local_58[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


