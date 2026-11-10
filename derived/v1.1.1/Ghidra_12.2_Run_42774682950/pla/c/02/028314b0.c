/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028314b0; name: FUN_028314b0
 */


void FUN_028314b0(long param_1,byte param_2)

{
  byte local_18 [8];
  
  if (*(char *)(param_1 + 0x62) == '\0') {
    local_18[0] = param_2 & 1;
    FUN_02831e88(*(undefined8 *)(param_1 + 0x58),local_18,0);
  }
  return;
}


