/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01505140; name: FUN_01505140
 */


void FUN_01505140(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_40 = 0xe591f7cd38c690c3;
  pcStack_38 = "InputDecide";
  local_30 = 0xb;
  FUN_01504e0c(param_1,&local_40,0);
  if (*(long *)(param_1 + 0x440) == 0) {
    return;
  }
  FUN_02831440();
  return;
}


