/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fca64; name: FUN_014fca64
 */


void FUN_014fca64(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *local_60;
  long local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 auStack_28 [8];
  
  local_58 = -0xb0dee67bb2d6a07;
  pcStack_50 = "poke_waza_list";
  local_48 = 0xe;
  local_40 = (long *)0x0;
  uVar5 = FUN_00d2ee28(param_1 + 0x180,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  lVar9 = *(long *)(param_1 + 0x638);
  lVar7 = *(long *)(lVar9 + 0xb0);
  uVar8 = 0;
  if (lVar7 != 0) {
    *(long *)(lVar9 + 0xb0) = lVar7 - ((lVar7 << 3) >> 3);
    lVar9 = *(long *)(param_1 + 0x638);
    uVar8 = *(ulong *)(lVar9 + 0xb0);
  }
  local_38 = 0;
  local_34 = 0;
  if (uVar8 < *(ulong *)(lVar9 + 0xb8)) {
    FUN_011d216c(lVar9 + 0x88,*(long *)(lVar9 + 0xa8) + uVar8 * 8,&local_38);
    *(long *)(lVar9 + 0xb0) = *(long *)(lVar9 + 0xb0) + 1;
  }
  else {
    local_58 = *(long *)(lVar9 + 0xa8) + uVar8 * 8;
    FUN_011d20a4(auStack_28,lVar9 + 0x88,&local_58,1,&local_38);
  }
  lVar7 = *(long *)(param_1 + 0x638);
  local_38 = 1;
  local_34 = 0;
  uVar8 = *(ulong *)(lVar7 + 0xb0);
  if (uVar8 < *(ulong *)(lVar7 + 0xb8)) {
    FUN_011d216c(lVar7 + 0x88,*(long *)(lVar7 + 0xa8) + uVar8 * 8,&local_38);
    *(long *)(lVar7 + 0xb0) = *(long *)(lVar7 + 0xb0) + 1;
  }
  else {
    local_58 = *(long *)(lVar7 + 0xa8) + uVar8 * 8;
    FUN_011d20a4(auStack_28,lVar7 + 0x88,&local_58,1,&local_38);
  }
  lVar7 = *(long *)(param_1 + 0x638);
  local_38 = 2;
  local_34 = 0;
  uVar8 = *(ulong *)(lVar7 + 0xb0);
  if (uVar8 < *(ulong *)(lVar7 + 0xb8)) {
    FUN_011d216c(lVar7 + 0x88,*(long *)(lVar7 + 0xa8) + uVar8 * 8,&local_38);
    *(long *)(lVar7 + 0xb0) = *(long *)(lVar7 + 0xb0) + 1;
  }
  else {
    local_58 = *(long *)(lVar7 + 0xa8) + uVar8 * 8;
    FUN_011d20a4(auStack_28,lVar7 + 0x88,&local_58,1,&local_38);
  }
  lVar7 = *(long *)(param_1 + 0x638);
  local_38 = 3;
  local_34 = 0;
  uVar8 = *(ulong *)(lVar7 + 0xb0);
  if (uVar8 < *(ulong *)(lVar7 + 0xb8)) {
    FUN_011d216c(lVar7 + 0x88,*(long *)(lVar7 + 0xa8) + uVar8 * 8,&local_38);
    *(long *)(lVar7 + 0xb0) = *(long *)(lVar7 + 0xb0) + 1;
  }
  else {
    local_58 = *(long *)(lVar7 + 0xa8) + uVar8 * 8;
    FUN_011d20a4(auStack_28,lVar7 + 0x88,&local_58,1,&local_38);
  }
  local_60 = *(long **)(param_1 + 0x638);
  if (local_60 != (long *)0x0) {
    lVar7 = local_60[0xb];
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0281e3a4(uVar5,&local_60);
  if (local_60 != (long *)0x0) {
    lVar7 = local_60[0xb];
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
      (**(code **)(*local_60 + 0x20))();
    }
  }
  FUN_0281bd00(uVar5,0,0);
  FUN_0281857c(uVar5);
  return;
}


