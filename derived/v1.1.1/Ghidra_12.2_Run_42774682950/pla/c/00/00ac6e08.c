/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ac6e08; name: FUN_00ac6e08
 */


void FUN_00ac6e08(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38 [2];
  long local_28;
  
  if ((*(long *)(param_2 + 0x210) == 0) || (*(int *)(*(long *)(param_2 + 0x210) + 0xc) == 0)) {
    FUN_009c69bc(local_38);
    plVar7 = (long *)FUN_0095992c(local_38[0] + 0x1e,&local_48);
    if (local_38[0] != (long *)0x0) {
      lVar8 = local_38[0][0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_38[0] + 0x20))(local_38[0]);
      }
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(local_38);
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_009cca14(&local_48,local_38);
      plVar7 = local_38[0];
      if (local_38[0] != (long *)0x0) {
        plVar2 = local_38[0] + 1;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_38[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *plVar7;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
      FUN_00ac3ca4(param_2 + 0x210,&local_48);
      puVar5 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38[0] = (long *)*puVar5;
          FUN_02a44274(lVar8 + 0xd8,local_38);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ac3fa4(param_1,param_2 + 0x210);
  return;
}


