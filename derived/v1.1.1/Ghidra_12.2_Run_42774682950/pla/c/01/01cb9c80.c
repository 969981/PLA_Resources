/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cb9c80; name: FUN_01cb9c80
 */


void FUN_01cb9c80(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  if ((param_2 != 0) && (lVar6 = *param_1, lVar6 != 0)) {
    plVar7 = (long *)FUN_01cbb458(lVar6,*(undefined8 *)(lVar6 + 8),auStack_38);
    (**(code **)(*plVar7 + 0x10))(local_30);
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_01cbae5c(&local_48,local_30);
    if (local_30[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_30[0] + 1);
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
        local_30[0][2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar5 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_18 = *local_30[0];
        FUN_02a44274(lVar6 + 0xd8,&local_18);
      }
    }
    FUN_01cbb7b4(param_2 + 0xc0,&local_48);
    puVar4 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
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
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_30[0] = (undefined8 *)*puVar4;
        FUN_02a44274(lVar6 + 0xd8,local_30);
      }
    }
  }
  return;
}


