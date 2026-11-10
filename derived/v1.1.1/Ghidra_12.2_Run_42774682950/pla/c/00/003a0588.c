/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a0588; name: FUN_003a0588
 */


undefined8 FUN_003a0588(undefined4 *param_1)

{
  if (param_1[0x2a] == 1) {
    if (*(char *)(param_1 + 0x1c) != '#') {
      return 3;
    }
  }
  else {
    if ((param_1[0x2a] != 0) || (*(char *)(param_1 + 0x1c) != '/')) {
      return 3;
    }
    FUN_0039f350(param_1);
    if (*(char *)(param_1 + 0x1c) == '*') {
      FUN_0039f350(param_1);
      return 1;
    }
    if (*(char *)(param_1 + 0x1c) != '/') {
      *param_1 = 6;
      FUN_00291910(param_1 + 2,&DAT_0389ffa9,1);
      param_1[8] = param_1[0x23];
      param_1[9] = param_1[0x24] + -1;
      param_1[10] = param_1[0x24];
      return 2;
    }
  }
  FUN_0039f350(param_1);
  return 0;
}


