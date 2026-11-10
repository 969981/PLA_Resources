/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013fdf90; name: FUN_013fdf90
 */


void FUN_013fdf90(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  uint uVar9;
  long lVar10;
  undefined1 *local_160;
  code *local_158;
  code *local_150;
  undefined1 *local_148;
  long local_140;
  undefined1 *local_138;
  undefined8 uStack_130;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  long *local_c8;
  long local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  long *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined1 local_34;
  
  FUN_013e16b0(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0x80));
  uVar6 = FUN_013db59c();
  FUN_013dd128(uVar6,*(undefined8 *)(param_1 + 0x740));
  local_48 = 0;
  local_40 = 0;
  local_4c = 0;
  FUN_013dae20(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xa0),
               *(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70),(long)&local_40 + 4,&local_40,
               (long)&local_48 + 4,&local_48,&local_4c);
  lVar7 = *(long *)(*(long *)(param_1 + 0x738) + 0xb0);
  if (lVar7 != 0) {
    *(long *)(*(long *)(param_1 + 0x738) + 0xb0) = lVar7 - ((lVar7 << 3) >> 3);
  }
  if (*(int *)(*(long *)(param_1 + 0x740) + 0x3390) != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x738);
      local_34 = 0;
      uVar3 = *(ulong *)(lVar7 + 0xb0);
      local_38 = uVar9;
      if (uVar3 < *(ulong *)(lVar7 + 0xb8)) {
        FUN_011d216c(lVar7 + 0x88,*(long *)(lVar7 + 0xa8) + uVar3 * 8,&local_38);
        *(long *)(lVar7 + 0xb0) = *(long *)(lVar7 + 0xb0) + 1;
      }
      else {
        local_e0 = (undefined1 *)(*(long *)(lVar7 + 0xa8) + uVar3 * 8);
        FUN_011d20a4(&local_160,lVar7 + 0x88,&local_e0,1,&local_38);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(*(long *)(param_1 + 0x740) + 0x3390));
  }
  local_e0 = &DAT_ec034b23cfd86628;
  local_d8 = (code *)0x38e9fdf;
  local_d0 = (code *)0xa;
  local_c8 = (long *)0x0;
  lVar7 = FUN_00d2ee28(param_1 + 0x180,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  local_58 = *(long **)(param_1 + 0x738);
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0281e3a4(lVar7,&local_58);
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  FUN_0281efa4(lVar7,0x11000,0x44000);
  FUN_0281efb0(lVar7,0x22000,0x88000);
  local_b8 = FUN_013fe320;
  uStack_b0 = 0;
  local_e0 = &LAB_01407a88;
  local_d8 = FUN_01407aac;
  local_d0 = FUN_01407ab0;
  local_c8 = (long *)&LAB_01407ac4;
  pcVar8 = *(code **)(lVar7 + 0x118);
  local_138 = &LAB_013ff054;
  uStack_130 = 0;
  local_160 = &LAB_01407a88;
  local_158 = FUN_01407aac;
  local_150 = FUN_01407ab0;
  local_148 = &LAB_01407ac4;
  local_140 = param_1;
  local_c0 = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x120) = 0;
    *(undefined8 *)(lVar7 + 0x128) = 0;
    *(undefined8 *)(lVar7 + 0x110) = 0;
    *(undefined8 *)(lVar7 + 0x118) = 0;
    (*pcVar8)(lVar7 + 0x130);
    if (local_d0 == (code *)0x0) goto LAB_013fe1e8;
  }
  (*local_d0)(&local_c0,lVar7 + 0x130);
  *(code **)(lVar7 + 0x118) = local_d8;
  *(long **)(lVar7 + 0x128) = local_c8;
  *(code **)(lVar7 + 0x120) = local_d0;
  *(undefined8 *)(lVar7 + 0x110) = local_e0;
LAB_013fe1e8:
  pcVar8 = *(code **)(lVar7 + 0x218);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x220) = 0;
    *(undefined8 *)(lVar7 + 0x228) = 0;
    *(undefined8 *)(lVar7 + 0x210) = 0;
    *(undefined8 *)(lVar7 + 0x218) = 0;
    (*pcVar8)(lVar7 + 0x230);
  }
  if (local_150 != (code *)0x0) {
    (*local_150)(&local_140,lVar7 + 0x230);
    *(code **)(lVar7 + 0x218) = local_158;
    *(undefined1 **)(lVar7 + 0x228) = local_148;
    *(code **)(lVar7 + 0x220) = local_150;
    *(undefined8 *)(lVar7 + 0x210) = local_160;
  }
  *(undefined1 *)(lVar7 + 0x91a) = 1;
  FUN_0281e390(lVar7,0);
  FUN_0281e380(lVar7,0,0);
  FUN_0281857c(lVar7);
  FUN_013dac88(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xa0),
               *(undefined4 *)(*(long *)(param_1 + 0x730) + 0x70),local_40._4_4_,
               local_40 & 0xffffffff,local_48._4_4_,local_48 & 0xffffffff,local_4c);
  pcVar8 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    local_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar8)(&local_140);
  }
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (long *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  return;
}


