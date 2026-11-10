/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef4910; name: FUN_02ef4910
 */


void FUN_02ef4910(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_042ab310;
    puVar1[1] = 0x10000;
    puVar1[3] = 0x2b00000000;
    puVar1[4] = 0;
  }
  return;
}


