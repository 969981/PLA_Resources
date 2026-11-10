/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128602c; name: FUN_0128602c
 */


void FUN_0128602c(long param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long lStack_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  long *local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  FUN_0128d1ec(&local_c0,*(undefined8 *)(param_1 + 0x1a8));
  FUN_02c395d0(local_c0,0,param_2,7,0,1);
  if (local_c0 != (long *)0x0) {
    lVar7 = local_c0[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x1a8),0xb049347b5a8e8e26,0);
  local_30 = 0;
  local_26 = 0;
  local_28 = 0x101;
  FUN_00d591fc(&local_c0,*(undefined8 *)(param_1 + 0x1a8));
  local_38 = local_c0;
  if (local_c0 != (long *)0x0) {
    plVar2 = local_c0 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  local_98 = &LAB_01286458;
  uStack_90 = 0;
  local_c0 = (long *)&LAB_012867b4;
  local_b8 = FUN_012867d0;
  local_b0 = &LAB_012867d4;
  local_a8 = &LAB_012867e8;
  lStack_a0 = param_1;
  FUN_014e9a10(param_1 + 0x90,&local_38,&local_c0);
  lVar7 = FUN_01283b84(param_1);
  if (lVar7 != 0) {
    FUN_012827bc(lVar7,0);
  }
  pcVar6 = local_b8;
  *(undefined8 *)(param_1 + 0x1b8) = 2;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (long *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar6)(&lStack_a0);
  }
  return;
}


