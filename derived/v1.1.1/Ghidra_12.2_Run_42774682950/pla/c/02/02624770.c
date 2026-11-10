/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02624770; name: FUN_02624770
 */


ulong FUN_02624770(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_2 & param_2 - 1) == 0) {
    param_1 = param_1 & param_2 - 1;
  }
  else if (param_2 <= param_1) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = param_1 / param_2;
    }
    param_1 = param_1 - uVar1 * param_2;
  }
  return param_1;
}


