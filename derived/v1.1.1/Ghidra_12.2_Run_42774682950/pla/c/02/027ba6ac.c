/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027ba6ac; name: FUN_027ba6ac
 */


void FUN_027ba6ac(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  long *local_c8;
  undefined1 auStack_c0 [24];
  long *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80 [12];
  
  FUN_013ba5d8(&local_c8,param_2 + 1,"+inner");
  FUN_02a47560(auStack_c0,&local_c8);
  local_d8[0] = 0;
  local_d0 = 0x2000;
  local_80[0] = *param_2;
  *(undefined4 *)(local_80[0] + 0x68) = 1;
  local_a0 = &LAB_027ba7a0;
  local_98 = FUN_027ba7b0;
  local_90 = &LAB_027ba7b4;
  puStack_88 = &LAB_027ba7c0;
  FUN_027bceb8(local_80[0] + 0x70,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(local_80);
  }
  local_a0 = (undefined1 *)0x0;
  FUN_013ba578(param_1,auStack_c0,local_d8,&local_a0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


