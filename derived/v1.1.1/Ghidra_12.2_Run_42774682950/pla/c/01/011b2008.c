/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b2008; name: FUN_011b2008
 */


void FUN_011b2008(long param_1)

{
  undefined8 local_18;
  
  if (*(code **)(param_1 + 0x180) != (code *)0x0) {
    local_18 = *(undefined8 *)(param_1 + 0x78);
    (**(code **)(param_1 + 0x180))(param_1 + 0x1a0,&local_18);
  }
  return;
}


