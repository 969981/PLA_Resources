/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01362160; name: FUN_01362160
 */


void FUN_01362160(float param_1)

{
  ulong uVar1;
  
  if (180.0 <= param_1) {
    uVar1 = 1;
    do {
      param_1 = param_1 + -360.0;
      if (0xc34 < (uint)(uVar1 >> 5)) break;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (180.0 <= param_1);
  }
  if (param_1 < -180.0) {
    uVar1 = 1;
    do {
      param_1 = param_1 + 360.0;
      if (0xc34 < (uint)(uVar1 >> 5)) {
        return;
      }
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (param_1 < -180.0);
  }
  return;
}


