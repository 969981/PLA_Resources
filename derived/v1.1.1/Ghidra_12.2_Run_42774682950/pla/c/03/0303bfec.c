/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303bfec; name: FUN_0303bfec
 */


void FUN_0303bfec(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_18;
  
  local_20 = 0x2000010;
  local_1c = 0x45;
  plVar1 = *(long **)(param_1 + 0x7f0);
  local_18 = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_20);
  }
  FUN_031036c4(*(undefined8 *)(param_1 + 0x498),param_2);
  return;
}


