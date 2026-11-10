/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e480dc; name: FUN_02e480dc
 */


void FUN_02e480dc(long param_1)

{
  FUN_02e551c0();
  *(undefined ***)(param_1 + 8) = &PTR_LAB_042a5db8;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_02e46908();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


