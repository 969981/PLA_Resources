/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01103060; name: FUN_01103060
 */


void FUN_01103060(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(long *)(param_1 + 0x88) == lVar1) {
    lVar1 = 0;
  }
  else if (*(long *)(param_1 + 0xd8) == lVar1) {
    lVar1 = 1;
  }
  else if (*(long *)(param_1 + 0x128) == lVar1) {
    lVar1 = 2;
  }
  else if (*(long *)(param_1 + 0x178) == lVar1) {
    lVar1 = 3;
  }
  else {
    if (*(long *)(param_1 + 0x1c8) != lVar1) {
      return;
    }
    lVar1 = 4;
  }
  *(undefined8 *)(param_1 + lVar1 * 0x50 + 0xa0) = param_3;
  return;
}


