/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b74a58; name: FUN_01b74a58
 */


void FUN_01b74a58(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x638) == '\0') {
    *(undefined8 *)(param_1 + 0x5d8) = param_2[1];
    *(undefined8 *)(param_1 + 0x5d0) = *param_2;
    *(undefined1 *)(param_1 + 0x638) = 1;
    *(undefined4 *)(param_1 + 0x5f8) = 2;
  }
  return;
}


