/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aee1bc; name: FUN_01aee1bc
 */


void FUN_01aee1bc(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01b0388c(&local_40,param_2 + 0x5e8);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_01990b54(&local_30);
    puVar3 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar3;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 == (long *)0x0) {
    uVar8 = 0xe422a5d41bd84733;
    pcVar9 = "loc_eff_bag_p2";
  }
  else {
    lVar6 = local_30[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    lVar7 = local_30[0x49];
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
    bVar4 = (char)lVar7 != '\x01';
    uVar8 = 0xe422a5d41bd84733;
    if (bVar4) {
      uVar8 = 0xe422a6d41bd848e6;
    }
    pcVar9 = "loc_eff_bag_p2";
    if (bVar4) {
      pcVar9 = "loc_eff_bag_p1";
    }
  }
  *param_1 = uVar8;
  param_1[1] = pcVar9;
  param_1[2] = 0xe;
  param_1[3] = 0;
  return;
}


