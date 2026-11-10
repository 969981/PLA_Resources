/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147bb28; name: FUN_0147bb28
 */


void FUN_0147bb28(long param_1,byte *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  byte local_88 [8];
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  long *local_28;
  
  local_3c = 0;
  local_80 = &DAT_cbf29ce484222645;
  local_78 = 0xffffffff0000005a;
  local_70 = 0xffffffff;
  puStack_68 = &DAT_cbf29ce484222645;
  local_60 = &DAT_03996322;
  uStack_58 = 0;
  local_40 = 0;
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_88[0] = *param_2;
  if (local_88[0] == 5) {
    local_78 = 0xffffffff00000096;
    local_80 = (undefined1 *)FUN_0147d054(param_1,param_2);
    local_38 = *(undefined8 *)(param_2 + 0x10);
    local_3c = *(undefined4 *)(param_2 + 8);
    uVar9 = 1;
  }
  else {
    local_a8 = &DAT_12f480e8b0aebe7d;
    pcStack_a0 = "appli_hud";
    local_98 = 9;
    local_90 = (long *)0x0;
    local_c8 = 0xfa79a731a335b13c;
    pcStack_c0 = "notify_win_life";
    local_b8 = 0xf;
    local_b0 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar8 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar8;
    FUN_00d7d9e4(&local_28,uVar8,&local_a8);
    if (local_28 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00d78f50(local_28,&local_c8);
      if (local_28 != (long *)0x0) {
        plVar1 = local_28 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    local_78 = CONCAT44(local_78._4_4_,uVar6);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    bVar4 = local_88[0];
    local_80 = (undefined1 *)FUN_0147d054(param_1,param_2);
    local_38 = *(undefined8 *)(param_2 + 0x10);
    local_3c = *(undefined4 *)(param_2 + 8);
    if ((0xd < bVar4) || (uVar9 = 1, (1 << (ulong)(bVar4 & 0x1f) & 0x3020U) == 0)) {
      uVar9 = 0;
    }
  }
  uVar5 = local_40;
  local_40 = CONCAT11(uVar9,(undefined1)local_40);
  if (param_2[0x18] != 0) {
    local_40 = uVar5 & 0xff;
    local_78 = *(undefined8 *)(param_2 + 0x1c);
  }
  if (0x3e6 < *(ulong *)(param_1 + 0x5f8)) {
    FUN_0147d4a4(param_1 + 0x5b0);
  }
  FUN_0147c2c4(param_1 + 0x5b0,local_88);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


