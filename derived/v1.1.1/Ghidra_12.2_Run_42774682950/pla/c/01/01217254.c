/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01217254; name: FUN_01217254
 */


void FUN_01217254(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if ((param_2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 1 < **(int **)(param_1 + 0x1648) - 1U;
  }
  local_30 = 0x957aead791fea4a7;
  pcStack_28 = "InputBoxName";
  local_20 = 0xc;
  local_18 = (long *)0x0;
  FUN_00d4d788(param_1,&local_30,bVar1);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


