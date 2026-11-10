/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032238a0; name: FUN_032238a0
 */


void FUN_032238a0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (0 < param_3) {
    param_1 = param_1 + (long)param_3 * 0x70;
    lVar1 = (long)param_3;
    do {
      param_1 = param_1 + -0x70;
      lVar1 = lVar1 + -1;
      FUN_031f11b4(param_1);
    } while (0 < lVar1);
  }
  return;
}


