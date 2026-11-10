/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00839e24; name: FUN_00839e24
 */


void FUN_00839e24(long param_1,long param_2)

{
  undefined4 local_30 [2];
  long local_28;
  
  FUN_00835048();
  FUN_00839e9c(param_1 + 0x860,*(undefined8 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x38));
  if (*(code **)(param_1 + 0x778) != (code *)0x0) {
    local_30[0] = 2;
    local_28 = param_2;
    (**(code **)(param_1 + 0x778))(local_30);
  }
  *(undefined1 *)(param_1 + 0x792) = 1;
  return;
}


