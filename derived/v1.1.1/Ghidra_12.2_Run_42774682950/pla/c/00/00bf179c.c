/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bf179c; name: FUN_00bf179c
 */


void FUN_00bf179c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  long *local_28;
  
  FUN_00b5f5a4(&local_38,*(undefined8 *)(param_1 + 0x58));
  if (CONCAT44(uStack_34,local_38) != 0) {
    FUN_00bd915c(&local_28);
    plVar5 = local_28;
    puVar4 = (undefined8 *)CONCAT44(uStack_34,local_38);
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
    if (plVar5 != (long *)0x0) {
      local_38 = 0;
      FUN_01a9b7f0(plVar5,&local_38);
      FUN_01a82398(plVar5,PTR_DAT_0437a330);
      FUN_01a82160(&local_38,plVar5);
      FUN_009c685c(&local_40,&local_38);
      puVar4 = (undefined8 *)CONCAT44(uStack_34,local_38);
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
      if (local_40 != (long *)0x0) {
        FUN_01a56fa4(local_40,1);
        if ((local_40 != (long *)0x0) && (uVar7 = FUN_02a43a5c(local_40[0xb]), (uVar7 & 1) != 0)) {
          (**(code **)(*local_40 + 0x20))(local_40);
        }
      }
      uVar7 = FUN_02a43a5c(plVar5[0xb]);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  return;
}


