/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd44e0; name: FUN_00cd44e0
 */


undefined8 FUN_00cd44e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0x4c64c492c7569fc0) {
    return 5;
  }
  if (lVar1 < 0x556483e7a1ceb2) {
    if (lVar1 == -0x5e598e6d8b8f0e63) {
      return 2;
    }
    if (lVar1 == -0x7648b913bb197c2) {
      return 3;
    }
  }
  else {
    if (lVar1 == 0x556483e7a1ceb2) {
      return 0;
    }
    if (lVar1 == 0x78f3618104baba20) {
      return 4;
    }
    if (lVar1 == 0x94ed70272cac328) {
      return 1;
    }
  }
  return 0xffffffff;
}


