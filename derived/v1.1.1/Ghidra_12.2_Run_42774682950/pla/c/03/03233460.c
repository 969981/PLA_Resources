/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03233460; name: FUN_03233460
 */


void FUN_03233460(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      FUN_03233434(param_1);
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 0x2a0;
    } while (uVar1 != 0);
  }
  return;
}


