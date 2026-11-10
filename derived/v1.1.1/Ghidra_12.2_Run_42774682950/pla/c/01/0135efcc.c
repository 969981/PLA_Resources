/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135efcc; name: FUN_0135efcc
 */


void FUN_0135efcc(long param_1,long *param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  long *local_340;
  undefined4 local_338;
  long *local_330;
  undefined8 local_328;
  long local_320;
  long *plStack_318;
  long *local_310;
  undefined8 local_308;
  undefined1 *local_300;
  undefined1 *puStack_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  undefined1 *local_2e0;
  undefined1 *puStack_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  long *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  undefined4 local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  long *local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  FUN_01352fe4(param_1,param_2);
  local_58 = 0;
  local_c0 = "bin/chara/data/pc/p2/model/base/p2_base0001_00_default/p2_base0001_00_default.trmdl";
  local_2f0 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0x249249249249249;
  uStack_60 = 0;
  local_2e0 = &DAT_cbf29ce484222645;
  puStack_2d8 = &DAT_03996322;
  local_2d0 = 0;
  local_2c8 = (long *)0x0;
  plStack_70 = param_2;
  FUN_009f1b84(&local_130,&local_c0);
  local_330 = local_130;
  local_300 = &DAT_cbf29ce484222645;
  puStack_2f8 = &DAT_03996322;
  local_2f0 = 0;
  local_2e8 = (long *)0x0;
  local_320 = local_120;
  plStack_318 = (long *)local_118;
  local_328 = local_128;
  local_310 = local_110;
  local_308 = CONCAT44(local_308._4_4_,local_108);
  FUN_0135ef24(&local_88,&local_330);
  if (local_2c8 != (long *)0x0) {
    (**(code **)(*local_2c8 + 0x20))();
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (local_310 != (long *)0x0) {
    (**(code **)(*local_310 + 0x20))();
  }
  if (local_330 != (long *)0x0) {
    (**(code **)(*local_330 + 0x20))();
  }
  local_90 = 0;
  local_b0 = 0;
  local_f0 = 0;
  local_d8 = &DAT_03996322;
  local_e0 = &DAT_cbf29ce484222645;
  local_c8 = (long *)0x0;
  local_d0 = 0;
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_a0 = 0x249249249249249;
  uStack_98 = 0;
  plStack_a8 = param_2;
  memset(&local_330,0,0x200);
  snprintf((char *)&local_330,0x200,
           "bin/demo/graphic/pc/p2/motion/p2_base0000_00_sample/p2_base0000_00_sample_demo_%02d.tracn"
           ,param_4);
  FUN_01353250(&local_360,&local_330);
  local_130 = local_360;
  local_110 = local_340;
  local_120 = local_350;
  local_118 = uStack_348;
  local_128 = uStack_358;
  local_f8 = &DAT_03996322;
  local_100 = &DAT_cbf29ce484222645;
  local_e8 = (long *)0x0;
  local_108 = local_338;
  local_f0 = 0;
  FUN_0135ef24(&local_c0,&local_130);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  local_320 = 0;
  local_300 = (undefined1 *)((ulong)local_300 & 0xffffffff00000000);
  local_310 = (long *)0x555555555555555;
  local_308 = 0;
  local_360 = (long *)0x38aee89;
  local_330 = (long *)0x0;
  local_328 = 0;
  plStack_318 = param_2;
  FUN_009f1b84(&local_130,&local_360);
  FUN_0135ef78(&local_330,&local_130);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  FUN_01360c20(param_1,&local_88);
  FUN_01360c20(param_1 + 0x38,&local_c0);
  FUN_01360e1c(param_1 + 0x70,&local_330);
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)(*(long *)(param_1 + 0x1e8) + 0x68) = 2;
  if (local_330 != (long *)0x0) {
    FUN_01360f0c(&local_330);
    plVar2 = plStack_318;
    plVar1 = local_330;
    lVar5 = local_320 - (long)local_330;
    uVar4 = FUN_02bcc75c(plStack_318);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,lVar5,8);
    }
    else {
      FUN_02bcc824(plVar2,plVar1,lVar5,8);
    }
  }
  if (local_c0 != (char *)0x0) {
    FUN_01360d10(&local_c0);
    plVar1 = plStack_a8;
    pcVar3 = local_c0;
    lVar5 = local_b0 - (long)local_c0;
    uVar4 = FUN_02bcc75c(plStack_a8);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,pcVar3,lVar5,8);
    }
    else {
      FUN_02bcc824(plVar1,pcVar3,lVar5,8);
    }
  }
  if (local_88 != 0) {
    FUN_01360d10(&local_88);
    plVar1 = plStack_70;
    lVar5 = local_88;
    lVar6 = local_78 - local_88;
    uVar4 = FUN_02bcc75c(plStack_70);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar6,8);
    }
    else {
      FUN_02bcc824(plVar1,lVar5,lVar6,8);
    }
  }
  return;
}


