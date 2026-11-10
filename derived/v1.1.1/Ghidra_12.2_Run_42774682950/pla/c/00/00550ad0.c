/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00550ad0; name: FUN_00550ad0
 */


undefined8 FUN_00550ad0(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (0 < param_2) {
    bVar1 = *param_1;
    if (-1 < (char)bVar1) {
      return 1;
    }
    if (1 < param_2) {
      if (bVar1 < 0xe0) {
        return 1;
      }
      if (2 < param_2) {
        if (param_2 != 3) {
          return 1;
        }
        if (bVar1 < 0xf0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


