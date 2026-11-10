/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fc20c; name: FUN_014fc20c
 */


void FUN_014fc20c(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  long *local_c8;
  long local_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  long *local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 auStack_48 [8];
  
  local_e0 = (undefined1 *)0xf4f2119844d295f9;
  local_d8 = (code *)0x388ff24;
  local_d0 = (code *)0xe;
  local_c8 = (long *)0x0;
  lVar6 = FUN_00d2ee28(param_1 + 0x180,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  lVar9 = *(long *)(param_1 + 0x638);
  local_58 = 0;
  local_54 = 0;
  uVar3 = *(ulong *)(lVar9 + 0xb0);
  if (uVar3 < *(ulong *)(lVar9 + 0xb8)) {
    FUN_011d216c(lVar9 + 0x88,*(long *)(lVar9 + 0xa8) + uVar3 * 8,&local_58);
    *(long *)(lVar9 + 0xb0) = *(long *)(lVar9 + 0xb0) + 1;
  }
  else {
    local_e0 = (undefined1 *)(*(long *)(lVar9 + 0xa8) + uVar3 * 8);
    FUN_011d20a4(auStack_48,lVar9 + 0x88,&local_e0,1,&local_58);
  }
  lVar9 = *(long *)(param_1 + 0x638);
  local_58 = 1;
  local_54 = 0;
  uVar3 = *(ulong *)(lVar9 + 0xb0);
  if (uVar3 < *(ulong *)(lVar9 + 0xb8)) {
    FUN_011d216c(lVar9 + 0x88,*(long *)(lVar9 + 0xa8) + uVar3 * 8,&local_58);
    *(long *)(lVar9 + 0xb0) = *(long *)(lVar9 + 0xb0) + 1;
  }
  else {
    local_e0 = (undefined1 *)(*(long *)(lVar9 + 0xa8) + uVar3 * 8);
    FUN_011d20a4(auStack_48,lVar9 + 0x88,&local_e0,1,&local_58);
  }
  lVar9 = *(long *)(param_1 + 0x638);
  local_58 = 2;
  local_54 = 0;
  uVar3 = *(ulong *)(lVar9 + 0xb0);
  if (uVar3 < *(ulong *)(lVar9 + 0xb8)) {
    FUN_011d216c(lVar9 + 0x88,*(long *)(lVar9 + 0xa8) + uVar3 * 8,&local_58);
    *(long *)(lVar9 + 0xb0) = *(long *)(lVar9 + 0xb0) + 1;
  }
  else {
    local_e0 = (undefined1 *)(*(long *)(lVar9 + 0xa8) + uVar3 * 8);
    FUN_011d20a4(auStack_48,lVar9 + 0x88,&local_e0,1,&local_58);
  }
  lVar9 = *(long *)(param_1 + 0x638);
  local_58 = 3;
  local_54 = 0;
  uVar3 = *(ulong *)(lVar9 + 0xb0);
  if (uVar3 < *(ulong *)(lVar9 + 0xb8)) {
    FUN_011d216c(lVar9 + 0x88,*(long *)(lVar9 + 0xa8) + uVar3 * 8,&local_58);
    *(long *)(lVar9 + 0xb0) = *(long *)(lVar9 + 0xb0) + 1;
  }
  else {
    local_e0 = (undefined1 *)(*(long *)(lVar9 + 0xa8) + uVar3 * 8);
    FUN_011d20a4(auStack_48,lVar9 + 0x88,&local_e0,1,&local_58);
  }
  local_60 = *(long **)(param_1 + 0x638);
  if (local_60 != (long *)0x0) {
    lVar9 = local_60[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0281e3a4(lVar6,&local_60);
  if (local_60 != (long *)0x0) {
    lVar9 = local_60[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  pcVar8 = *(code **)(lVar6 + 0x298);
  local_b8 = &LAB_014fc724;
  uStack_b0 = 0;
  local_e0 = &LAB_01501fe8;
  local_d8 = FUN_0150200c;
  local_d0 = FUN_01502010;
  local_c8 = (long *)&LAB_01502024;
  local_c0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_014fc434:
    (*local_d0)(&local_c0,lVar6 + 0x2b0);
    *(code **)(lVar6 + 0x298) = local_d8;
    *(long **)(lVar6 + 0x2a8) = local_c8;
    *(code **)(lVar6 + 0x2a0) = local_d0;
    *(undefined8 *)(lVar6 + 0x290) = local_e0;
  }
  else {
    *(undefined8 *)(lVar6 + 0x2a0) = 0;
    *(undefined8 *)(lVar6 + 0x2a8) = 0;
    *(undefined8 *)(lVar6 + 0x290) = 0;
    *(undefined8 *)(lVar6 + 0x298) = 0;
    (*pcVar8)(lVar6 + 0x2b0);
    if (local_d0 != (code *)0x0) goto LAB_014fc434;
  }
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  pcVar8 = *(code **)(lVar6 + 0x118);
  local_b8 = &LAB_014fc810;
  uStack_b0 = 0;
  local_e0 = &LAB_01501fe8;
  local_d8 = FUN_0150200c;
  local_d0 = FUN_01502010;
  local_c8 = (long *)&LAB_01502024;
  local_c0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_014fc4c0:
    (*local_d0)(&local_c0,lVar6 + 0x130);
    *(code **)(lVar6 + 0x118) = local_d8;
    *(long **)(lVar6 + 0x128) = local_c8;
    *(code **)(lVar6 + 0x120) = local_d0;
    *(undefined8 *)(lVar6 + 0x110) = local_e0;
  }
  else {
    *(undefined8 *)(lVar6 + 0x120) = 0;
    *(undefined8 *)(lVar6 + 0x128) = 0;
    *(undefined8 *)(lVar6 + 0x110) = 0;
    *(undefined8 *)(lVar6 + 0x118) = 0;
    (*pcVar8)(lVar6 + 0x130);
    if (local_d0 != (code *)0x0) goto LAB_014fc4c0;
  }
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  pcVar8 = *(code **)(lVar6 + 0x218);
  local_b8 = &LAB_014fc81c;
  uStack_b0 = 0;
  local_e0 = &LAB_01501fe8;
  local_d8 = FUN_0150200c;
  local_d0 = FUN_01502010;
  local_c8 = (long *)&LAB_01502024;
  local_c0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_014fc548:
    (*local_d0)(&local_c0,lVar6 + 0x230);
    *(code **)(lVar6 + 0x218) = local_d8;
    *(long **)(lVar6 + 0x228) = local_c8;
    *(code **)(lVar6 + 0x220) = local_d0;
    *(undefined8 *)(lVar6 + 0x210) = local_e0;
  }
  else {
    *(undefined8 *)(lVar6 + 0x220) = 0;
    *(undefined8 *)(lVar6 + 0x228) = 0;
    *(undefined8 *)(lVar6 + 0x210) = 0;
    *(undefined8 *)(lVar6 + 0x218) = 0;
    (*pcVar8)(lVar6 + 0x230);
    if (local_d0 != (code *)0x0) goto LAB_014fc548;
  }
  pcVar8 = local_d8;
  *(undefined1 *)(lVar6 + 0x91a) = 1;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  pcVar8 = *(code **)(lVar6 + 0x318);
  local_b8 = &LAB_014fc850;
  uStack_b0 = 0;
  local_e0 = &LAB_01502038;
  local_d8 = FUN_0150205c;
  local_d0 = FUN_01502060;
  local_c8 = (long *)&LAB_01502074;
  local_c0 = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 800) = 0;
    *(undefined8 *)(lVar6 + 0x328) = 0;
    *(undefined8 *)(lVar6 + 0x310) = 0;
    *(undefined8 *)(lVar6 + 0x318) = 0;
    (*pcVar8)(lVar6 + 0x330);
    if (local_d0 == (code *)0x0) goto LAB_014fc628;
  }
  (*local_d0)(&local_c0,lVar6 + 0x330);
  *(code **)(lVar6 + 0x318) = local_d8;
  *(long **)(lVar6 + 0x328) = local_c8;
  *(code **)(lVar6 + 800) = local_d0;
  *(undefined8 *)(lVar6 + 0x310) = local_e0;
LAB_014fc628:
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  FUN_0281857c(lVar6);
  return;
}


