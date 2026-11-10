/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b15cc; name: FUN_013b15cc
 */


void FUN_013b15cc(char *param_1,undefined8 *param_2)

{
  if (*param_1 == '\0') {
    *(undefined8 *)(param_1 + 8) = *param_2;
    FUN_013a3ec0(param_1 + 0x10,param_2 + 1);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 8);
    *param_1 = '\x01';
  }
  else {
    *(undefined8 *)(param_1 + 8) = *param_2;
    FUN_013b12d4(param_1 + 0x10,param_2 + 1);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 8);
  }
  return;
}


