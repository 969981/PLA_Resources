/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c368; name: FUN_0283c368
 */


void FUN_0283c368(long param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 auStack_38 [8];
  long local_28;
  
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = (long *)param_2[3];
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x18))();
  }
  local_48 = (long *)*param_3;
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_40 = (undefined4)param_3[1];
  uVar3 = *(ulong *)(param_1 + 0x1a8);
  if (uVar3 < *(ulong *)(param_1 + 0x1b0)) {
    FUN_0283dde8(param_1 + 0x180,*(long *)(param_1 + 0x1a0) + uVar3 * 0x30,&local_68);
    *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
  }
  else {
    local_28 = *(long *)(param_1 + 0x1a0) + uVar3 * 0x30;
    FUN_0283e770(auStack_38,param_1 + 0x180,&local_28,1,&local_68);
  }
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


