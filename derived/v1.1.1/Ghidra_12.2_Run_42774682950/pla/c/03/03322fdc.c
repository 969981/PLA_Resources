/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03322fdc; name: FUN_03322fdc
 */


undefined8 FUN_03322fdc(char *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    return 0;
  }
  if (*param_1 == '.') {
    if (param_1[1] == '\0') {
      return 0;
    }
    if ((param_1[1] == '.') && (param_1[2] == '\0')) {
      return 0;
    }
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = FUN_032c4b60(param_1,param_2 + 1);
  return uVar1;
}


