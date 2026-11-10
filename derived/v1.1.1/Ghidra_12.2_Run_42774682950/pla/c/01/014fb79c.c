/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fb79c; name: FUN_014fb79c
 */


void FUN_014fb79c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x9016cde878a8cc5a;
  pcStack_38 = "button_poke_waza_00";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  lVar5 = thunk_FUN_00d2e944(param_1 + 0x180,&local_40);
  *(undefined1 *)(lVar5 + 0x2ab) = 1;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x3e15d4fcf512bfb7;
  pcStack_38 = "waza_custom_list";
  local_30 = 0x10;
  local_28 = (long *)0x0;
  uVar6 = FUN_00d2ee28(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_48 = *(long **)(param_1 + 0x630);
  if (local_48 != (long *)0x0) {
    lVar5 = local_48[0xb];
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0281e3a4(uVar6,&local_48);
  if (local_48 != (long *)0x0) {
    lVar5 = local_48[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  FUN_0281e380(uVar6,0,1);
  FUN_0281e390(uVar6,0);
  FUN_0281857c(uVar6);
  return;
}


