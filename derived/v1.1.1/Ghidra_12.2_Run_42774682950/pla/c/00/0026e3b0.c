/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026e3b0; name: FUN_0026e3b0
 */


void FUN_0026e3b0(long param_1,undefined8 param_2,ulong param_3)

{
  long local_18;
  
  *(undefined8 *)(param_1 + 0x98) = 0;
  if ((param_3 & 1) != 0) {
    FUN_002653b0(param_1);
    local_18 = param_1;
    FUN_00265560(&local_18);
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + -1;
    FUN_002717a0(*(long *)(param_1 + 0x228),1);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(long *)(param_1 + 0x6e0) != 0) {
    FUN_0026eb04(*(undefined8 *)(param_1 + 0x6f0),*(long *)(param_1 + 0x6e0),0);
    *(undefined8 *)(param_1 + 0x6e0) = 0;
  }
  if (*(long *)(param_1 + 0x708) != 0) {
    FUN_0026eb04(*(undefined8 *)(param_1 + 0x718),*(long *)(param_1 + 0x708),0);
    *(undefined8 *)(param_1 + 0x708) = 0;
  }
  if (*(long *)(param_1 + 0x728) != 0) {
    FUN_0026eb04(*(undefined8 *)(param_1 + 0x738),*(long *)(param_1 + 0x728),0);
    *(undefined8 *)(param_1 + 0x728) = 0;
  }
  if (*(long *)(param_1 + 0x748) != 0) {
    FUN_0026eb04(*(undefined8 *)(param_1 + 0x758),*(long *)(param_1 + 0x748),0);
    *(undefined8 *)(param_1 + 0x748) = 0;
  }
  if (*(long *)(param_1 + 0x768) != 0) {
    FUN_0026eb04(*(undefined8 *)(param_1 + 0x778),*(long *)(param_1 + 0x768),0);
    *(undefined8 *)(param_1 + 0x768) = 0;
  }
  if (*(long *)(param_1 + 0x788) != 0) {
    FUN_0026eb04(*(undefined8 *)(param_1 + 0x798),*(long *)(param_1 + 0x788),0);
    *(undefined8 *)(param_1 + 0x788) = 0;
  }
  FUN_0028d584(param_1 + 0x7a8);
  return;
}


