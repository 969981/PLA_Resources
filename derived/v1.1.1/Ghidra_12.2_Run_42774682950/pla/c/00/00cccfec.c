/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cccfec; name: FUN_00cccfec
 */


void FUN_00cccfec(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 local_38;
  long *local_28;
  
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  FUN_00b63bec(&local_40,*(long *)(param_1 + 0xa0) + 0x1b0);
  if (local_40 != (undefined8 *)0x0) {
    FUN_00b911c4(&local_28);
    plVar5 = local_28;
    puVar4 = local_40;
    if (local_28 != (long *)0x0) {
      FUN_00b5f3e4(&local_28,*(undefined8 *)(param_1 + 0xa0));
      uVar7 = FUN_01b9fba4(plVar5,param_2);
      if ((uVar7 & 1) != 0) {
        *(undefined4 *)(param_1 + 0xe8) = param_2;
        local_44 = CONCAT31(local_44._1_3_,1);
        FUN_00ba9c80(local_28,param_1 + 0xb0,&local_44);
        local_44 = *(undefined4 *)(param_1 + 0xe8);
        FUN_00c24728(local_28,param_1 + 0xa8,&local_44);
      }
      if ((local_28 != (long *)0x0) && (uVar7 = FUN_02a43a5c(local_28[0xb]), (uVar7 & 1) != 0)) {
        (**(code **)(*local_28 + 0x20))(local_28);
      }
      uVar7 = FUN_02a43a5c(plVar5[0xb]);
      puVar4 = local_40;
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
        puVar4 = local_40;
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        puVar4[2] = 0;
        local_40 = puVar4;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = (long *)*puVar4;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
  }
  return;
}


