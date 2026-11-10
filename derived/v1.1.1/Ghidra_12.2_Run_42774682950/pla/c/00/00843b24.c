/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00843b24; name: FUN_00843b24
 */


void FUN_00843b24(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_007f1c10();
    lVar1 = *(long *)(param_1 + 0xe0);
    if (lVar1 != 0) {
      FUN_007f1b7c(lVar1);
      FUN_0081a800(lVar1);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_00843838(param_1);
  return;
}


