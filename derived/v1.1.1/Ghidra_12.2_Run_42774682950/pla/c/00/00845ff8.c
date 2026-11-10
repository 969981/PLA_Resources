/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845ff8; name: FUN_00845ff8
 */


void FUN_00845ff8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x7d8) != 0) {
    FUN_007ee0d0();
    lVar1 = *(long *)(param_1 + 0x7d8);
    if (lVar1 != 0) {
      FUN_007ee03c(lVar1);
      FUN_0081a800(lVar1);
    }
    *(undefined8 *)(param_1 + 0x7d8) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_00843838(param_1);
  return;
}


