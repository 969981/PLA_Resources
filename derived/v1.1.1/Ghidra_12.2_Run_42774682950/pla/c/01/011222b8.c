/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011222b8; name: FUN_011222b8
 */


void FUN_011222b8(undefined1 *param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x7f11);
  *param_1 = 0;
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x7f08);
    *param_1 = 1;
  }
  return;
}


