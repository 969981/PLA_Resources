/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01351e54; name: FUN_01351e54
 */


void FUN_01351e54(undefined8 param_1,undefined4 param_2,long *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long *local_50;
  undefined8 local_48;
  
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar6 != 0))
  {
    local_48 = FUN_00938550();
    puVar5 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_48);
    FUN_00100250(PTR_LAB_0437a8d8,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar9 = *(long **)PTR_DAT_0437a7d0;
  plVar2 = (long *)PTR_DAT_04379c88;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 0xb;
  }
  local_68 = *plVar2;
  plVar2 = (long *)PTR_PTR_04379d00;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 0xc;
  }
  lStack_60 = *plVar2;
  if (plVar9 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = plVar9[0xd];
  }
  local_50 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_70 = (long *)*param_3;
  local_50 = plVar9;
  if (local_70 != (long *)0x0) {
    lVar8 = local_70[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01353d7c(param_1,param_2,&local_68,&local_70,param_4,param_5);
  if (local_70 != (long *)0x0) {
    lVar8 = local_70[0xb];
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
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


