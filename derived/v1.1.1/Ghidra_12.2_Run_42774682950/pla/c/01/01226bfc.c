/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01226bfc; name: FUN_01226bfc
 */


void FUN_01226bfc(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x4f97f5597cb45d92;
  pcStack_38 = "InputMultiFree";
  local_30 = 0xe;
  uVar1 = FUN_012174d4();
  FUN_00d4d788(param_1,&local_40,uVar1 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x946624ac790be4c8;
  pcStack_38 = "InputChangeSelectMode";
  local_30 = 0x15;
  local_28 = (long *)0x0;
  uVar2 = FUN_00d5c8d8(param_1);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00d5c8d0(param_1);
  }
  else {
    uVar1 = 1;
  }
  FUN_00d4d788(param_1,&local_40,uVar1 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_012173a8(param_1,1);
  return;
}


