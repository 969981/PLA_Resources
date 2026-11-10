/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280ee08; name: FUN_0280ee08
 */


void FUN_0280ee08(long param_1)

{
  undefined4 local_14;
  
  FUN_0280fcd0(*(undefined8 *)(param_1 + 0x488),*(undefined8 *)(param_1 + 8));
  if (*(code **)(param_1 + 0x180) != (code *)0x0) {
    local_14 = 1;
    (**(code **)(param_1 + 0x180))(param_1 + 0x1a0,&local_14);
  }
  return;
}


