/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bef144; name: FUN_00bef144
 */


undefined4 FUN_00bef144(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 *local_38 [2];
  long *local_28;
  
  FUN_00b5f5f4(local_38,*(undefined8 *)(param_1 + 0x58));
  if (local_38[0] != (undefined8 *)0x0) {
    FUN_00b911c4(&local_28);
    plVar4 = local_28;
    if (local_38[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38[0] + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_38[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = (long *)*local_38[0];
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
    if (plVar4 != (long *)0x0) {
      puVar6 = (undefined4 *)FUN_01ba31c4(plVar4);
      if (param_2 == 2) {
        uVar9 = puVar6[1];
      }
      else if (param_2 == 1) {
        uVar9 = *puVar6;
      }
      else if (param_2 == 0) {
        uVar9 = puVar6[2];
      }
      else {
        uVar9 = 0;
      }
      uVar7 = FUN_02a43a5c(plVar4[0xb]);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      return uVar9;
    }
  }
  return 0;
}


