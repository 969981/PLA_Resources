/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399464; name: FUN_00399464
 */


void FUN_00399464(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00399464(param_1,*param_2);
    FUN_00399464(param_1,param_2[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_002ee710(param_2);
      return;
    }
  }
  return;
}


