/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2bf80; name: FUN_02c2bf80
 */


void FUN_02c2bf80(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60 [4];
  long *local_40;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x238) = *param_3;
  *(undefined8 *)(param_1 + 0x230) = param_2;
  plVar1 = *(long **)(param_3 + 2);
  local_a8 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  FUN_02c2c454(&local_28,&local_a8);
  FUN_00936410(local_60,&local_28);
  FUN_00938764(param_1 + 0x80,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c4f0(&local_68,&local_a8,"English.dat");
  FUN_00936410(local_60,&local_68);
  FUN_00938764(param_1 + 0xb0,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c590(&local_70,&local_a8,"French.dat");
  FUN_00936410(local_60,&local_70);
  FUN_00938764(param_1 + 0xe0,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c590(&local_78,&local_a8,"German.dat");
  FUN_00936410(local_60,&local_78);
  FUN_00938764(param_1 + 0x140,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c4f0(&local_80,&local_a8,"Italian.dat");
  FUN_00936410(local_60,&local_80);
  FUN_00938764(param_1 + 0x110,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c590(&local_88,&local_a8,"Korean.dat");
  FUN_00936410(local_60,&local_88);
  FUN_00938764(param_1 + 0x1a0,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c4f0(&local_90,&local_a8,"Spanish.dat");
  FUN_00936410(local_60,&local_90);
  FUN_00938764(param_1 + 0x170,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c630(&local_98,&local_a8,"Simp_Chinese.dat");
  FUN_00936410(local_60,&local_98);
  FUN_00938764(param_1 + 0x1d0,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  FUN_02c2c630(&local_a0,&local_a8,"Trad_Chinese.dat");
  FUN_00936410(local_60,&local_a0);
  FUN_00938764(param_1 + 0x200,0,local_60,0,*(undefined8 *)(param_1 + 0x230),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


