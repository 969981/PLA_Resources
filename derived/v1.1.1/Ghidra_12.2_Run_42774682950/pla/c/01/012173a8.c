/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012173a8; name: FUN_012173a8
 */


void FUN_012173a8(long param_1,byte param_2)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xe934014702cbd823;
  pcStack_28 = "InputSearch";
  local_20 = 0xb;
  local_18 = (long *)0x0;
  FUN_00d4d788(param_1,&local_30,**(int **)(param_1 + 0x1648) != 1 & param_2);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


