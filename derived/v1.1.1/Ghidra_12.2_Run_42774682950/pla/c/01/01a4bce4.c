/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4bce4; name: FUN_01a4bce4
 */


void FUN_01a4bce4(undefined4 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x370) == '\0') {
    *(undefined4 *)(param_2 + 0x364) = param_1;
  }
  return;
}


