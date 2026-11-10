/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02941224; name: FUN_02941224
 */


uint FUN_02941224(uint *param_1,char param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    do {
      if (*(char *)((long)param_1 + uVar1 + 4) == param_2) {
        return param_1[uVar1 + 3];
      }
      uVar1 = uVar1 + 1;
    } while (*param_1 != uVar1);
  }
  return 0;
}


