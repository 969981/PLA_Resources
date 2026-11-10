/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284e6a0; name: FUN_0284e6a0
 */


void FUN_0284e6a0(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  long *local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  long *local_370;
  undefined4 local_368;
  long *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  long *local_340;
  undefined4 local_338;
  char acStack_330 [768];
  
  memset(acStack_330,0,0x300);
  snprintf(acStack_330,0x300,"bin/appli/icon_ball/icon_ball_%04d.bntx",
           *(int *)(&DAT_03a7e720 + (ulong)param_2 * 4));
  FUN_013d33bc(&local_360,acStack_330);
  local_390 = local_360;
  uStack_388 = uStack_358;
  local_380 = local_350;
  uStack_378 = uStack_348;
  local_370 = local_340;
  local_368 = local_338;
  uVar1 = FUN_02c4d8d4(*(undefined8 *)(param_1 + 8),&local_390,0,0);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  if (local_370 != (long *)0x0) {
    (**(code **)(*local_370 + 0x20))();
  }
  if (local_390 != (long *)0x0) {
    (**(code **)(*local_390 + 0x20))();
  }
  return;
}


