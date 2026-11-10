/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01215340; name: FUN_01215340
 */


void FUN_01215340(long param_1)

{
  bool bVar1;
  byte bVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  bVar1 = *(int *)(param_1 + 0x167c) == 0;
  bVar2 = FUN_00d54910();
  bVar2 = bVar2 ^ 1;
  FUN_012170c4(param_1,bVar1);
  local_50 = 0x946624ac790be4c8;
  pcStack_48 = "InputChangeSelectMode";
  local_40 = 0x15;
  local_38 = (long *)0x0;
  FUN_00d4d788(param_1,&local_50,bVar1 & bVar2);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_0121745c(param_1,!bVar1 & bVar2);
  FUN_01217254(param_1,!bVar1 & bVar2);
  FUN_012173a8(param_1,bVar2 & 1);
  FUN_01217328(param_1,bVar1 & bVar2);
  return;
}


