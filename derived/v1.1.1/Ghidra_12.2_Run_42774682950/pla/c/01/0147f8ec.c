/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f8ec; name: FUN_0147f8ec
 */


void FUN_0147f8ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar1 = FUN_0147feac(param_2);
  local_50 = 0xb037c55281547216;
  pcStack_48 = "anime_ptn";
  local_40 = 9;
  local_38 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0xb037c55281547216;
  pcStack_48 = "anime_ptn";
  local_40 = 9;
  local_38 = (long *)0x0;
  FUN_0147ff70(uVar1,param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


