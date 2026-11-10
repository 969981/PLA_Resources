/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cece94; name: FUN_00cece94
 */


void FUN_00cece94(long param_1)

{
  undefined8 *local_18;
  
  FUN_00ceced0(&local_18);
  if (local_18 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *local_18;
  }
  *(bool *)param_1 = local_18 != (undefined8 *)0x0;
  return;
}


