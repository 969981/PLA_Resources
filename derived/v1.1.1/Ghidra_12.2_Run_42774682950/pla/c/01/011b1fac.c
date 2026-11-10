/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b1fac; name: FUN_011b1fac
 */


void FUN_011b1fac(long param_1)

{
  undefined8 local_18;
  
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
    local_18 = *(undefined8 *)(param_1 + 0x78);
    (**(code **)(param_1 + 0x100))(param_1 + 0x120,&local_18);
  }
  return;
}


