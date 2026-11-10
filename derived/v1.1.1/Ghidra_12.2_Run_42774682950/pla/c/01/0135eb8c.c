/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135eb8c; name: FUN_0135eb8c
 */


void FUN_0135eb8c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long *local_138;
  undefined4 local_130;
  long *local_128;
  undefined8 uStack_120;
  long local_118;
  long *plStack_110;
  long *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long *plStack_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  char *local_48;
  
  FUN_01352fe4(param_1,param_2);
  local_50 = 0;
  local_158 = (long *)0x388f931;
  local_b0 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_60 = 0x249249249249249;
  uStack_58 = 0;
  local_a0 = &DAT_cbf29ce484222645;
  puStack_98 = &DAT_03996322;
  local_90 = 0;
  local_88 = (long *)0x0;
  plStack_68 = param_2;
  FUN_009f1b84(&local_128,&local_158);
  local_c0 = &DAT_cbf29ce484222645;
  puStack_b8 = &DAT_03996322;
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_d0 = local_108;
  local_f0 = local_128;
  uStack_e8 = uStack_120;
  local_e0 = local_118;
  plStack_d8 = plStack_110;
  local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_100);
  FUN_0135ef24(&local_80,&local_f0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_f8 = 0;
  local_48 = "bin/chara/data/pc/p2/motion/p2_base0000_00_sample/pc0002_00.tracn";
  local_118 = 0;
  local_b0 = 0;
  local_128 = (long *)0x0;
  uStack_120 = 0;
  local_108 = (long *)0x249249249249249;
  local_100 = 0;
  local_a0 = &DAT_cbf29ce484222645;
  puStack_98 = &DAT_03996322;
  local_90 = 0;
  local_88 = (long *)0x0;
  plStack_110 = param_2;
  FUN_009f1b84(&local_158,&local_48);
  local_c0 = &DAT_cbf29ce484222645;
  puStack_b8 = &DAT_03996322;
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_d0 = local_138;
  local_f0 = local_158;
  uStack_e8 = uStack_150;
  local_e0 = local_148;
  plStack_d8 = (long *)uStack_140;
  local_c8 = CONCAT44(local_c8._4_4_,local_130);
  FUN_0135ef24(&local_128,&local_f0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_e0 = 0;
  local_c0 = (undefined1 *)((ulong)local_c0 & 0xffffffff00000000);
  local_d0 = (long *)0x555555555555555;
  local_c8 = 0;
  local_48 = "bin/chara/data/pc/p2/model/base/locators/p2_base0001_00_loc.trskl";
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  plStack_d8 = param_2;
  FUN_009f1b84(&local_158,&local_48);
  FUN_0135ef78(&local_f0,&local_158);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  FUN_01360c20(param_1,&local_80);
  FUN_01360c20(param_1 + 0x38,&local_128);
  FUN_01360e1c(param_1 + 0x70,&local_f0);
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)(*(long *)(param_1 + 0x1e8) + 0x68) = 2;
  if (local_f0 != (long *)0x0) {
    FUN_01360f0c(&local_f0);
    plVar2 = plStack_d8;
    plVar1 = local_f0;
    lVar4 = local_e0 - (long)local_f0;
    uVar3 = FUN_02bcc75c(plStack_d8);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,lVar4,8);
    }
    else {
      FUN_02bcc824(plVar2,plVar1,lVar4,8);
    }
  }
  if (local_128 != (long *)0x0) {
    FUN_01360d10(&local_128);
    plVar2 = plStack_110;
    plVar1 = local_128;
    lVar4 = local_118 - (long)local_128;
    uVar3 = FUN_02bcc75c(plStack_110);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,lVar4,8);
    }
    else {
      FUN_02bcc824(plVar2,plVar1,lVar4,8);
    }
  }
  if (local_80 != 0) {
    FUN_01360d10(&local_80);
    plVar1 = plStack_68;
    lVar4 = local_80;
    lVar5 = local_70 - local_80;
    uVar3 = FUN_02bcc75c(plStack_68);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
    }
    else {
      FUN_02bcc824(plVar1,lVar4,lVar5,8);
    }
  }
  return;
}


