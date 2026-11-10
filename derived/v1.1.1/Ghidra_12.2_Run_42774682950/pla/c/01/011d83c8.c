/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d83c8; name: FUN_011d83c8
 */


void FUN_011d83c8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_88;
  long *local_80;
  long local_78;
  undefined4 local_6c;
  int local_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  
  local_78 = *(long *)(param_1 + 0x18);
  local_54 = *(undefined4 *)(param_1 + 0x38);
  *(bool *)(local_78 + 0x260) = param_4 != 0;
  if (param_4 == 0) {
    *(undefined1 *)(local_78 + 0x261) = 0;
  }
  local_6c = param_6;
  local_68 = param_4;
  uStack_64 = param_5;
  plVar5 = (long *)FUN_0143c344(auStack_58,param_3,&local_78,&local_54,&uStack_64,&local_68,
                                &local_6c);
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_011d85d8;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = plVar5;
  FUN_0115b43c(param_2,&local_80,0x400);
  if (local_80 == (long *)0x0) {
LAB_011d84c4:
    iVar2 = *(int *)(param_1 + 0x3c);
  }
  else {
    lVar7 = local_80[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_011d84c4;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_80 + 0x20))();
    iVar2 = *(int *)(param_1 + 0x3c);
  }
  if (iVar2 != 0) {
    local_78 = *(long *)(param_1 + 0x20);
    local_54 = *(undefined4 *)(param_1 + 0x38);
    *(bool *)(local_78 + 0x260) = param_4 != 0;
    if (param_4 == 0) {
      *(undefined1 *)(local_78 + 0x261) = 0;
    }
    local_6c = param_6;
    local_68 = param_4;
    uStack_64 = param_5;
    plVar5 = (long *)FUN_0143c344(auStack_58,param_3,&local_78,&local_54,&uStack_64,&local_68,
                                  &local_6c);
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_011d85d8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_88 = plVar5;
    FUN_0115b43c(param_2,&local_88,0x400);
    if (local_88 != (long *)0x0) {
      lVar7 = local_88[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  *(int *)(param_1 + 0x38) = param_4;
  return;
}


