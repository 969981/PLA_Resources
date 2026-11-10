/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00941b00; name: FUN_00941b00
 */


void FUN_00941b00(long param_1)

{
  long lVar1;
  
  FUN_00941ee0();
  lVar1 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  if (*(int *)(lVar1 + 0x54) != 3) {
    lVar1 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
    if (*(int *)(lVar1 + 0x54) != 2) {
      return;
    }
  }
  FUN_00941ffc(param_1);
  return;
}


