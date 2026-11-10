/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01217178; name: FUN_01217178
 */


void FUN_01217178(long param_1,ulong param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x167c) == 1) {
      local_40 = 0x946624ac790be4c8;
      pcStack_38 = "InputChangeSelectMode";
      local_30 = 0x15;
      local_28 = (long *)0x0;
      FUN_00d4d788(param_1,&local_40,0);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      FUN_01217254(param_1,0);
      FUN_012172cc(param_1,0);
    }
    else {
      FUN_01217328(param_1,0);
    }
    FUN_012173a8(param_1,0);
  }
  else {
    FUN_01215340(param_1);
    if (*(int *)(param_1 + 0x167c) == 1) {
      FUN_012172cc(param_1,1);
      return;
    }
  }
  return;
}


