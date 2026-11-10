/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01216fb8; name: FUN_01216fb8
 */


void FUN_01216fb8(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_00d49ba4(param_1,param_2 & 1);
  FUN_0121ea98(param_1);
  *(undefined1 *)(param_1 + 0x1720) = 1;
  bVar2 = (param_2 & 1) == 0;
  if (bVar2) {
    FUN_00d5c6dc(param_1,0);
    FUN_012152b8(param_1,1);
    uVar3 = 3;
  }
  else {
    FUN_0121aa4c();
    uVar3 = 0;
  }
  FUN_00d5172c(param_1,!bVar2,uVar3);
  uVar1 = (param_2 ^ 1) & 1;
  FUN_01225bc8(param_1,uVar1);
  local_50 = 0x946624ac790be4c8;
  pcStack_48 = "InputChangeSelectMode";
  local_40 = 0x15;
  local_38 = (long *)0x0;
  FUN_00d4d788(param_1,&local_50,uVar1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_012172cc(param_1,uVar1);
  FUN_012173a8(param_1,uVar1);
  FUN_01225c84(param_1,param_2 & 1);
  return;
}


