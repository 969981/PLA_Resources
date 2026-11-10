/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010caa60; name: FUN_010caa60
 */


undefined8 FUN_010caa60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(param_1 + 0x90) == lVar1) {
    lVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x130) == lVar1) {
    lVar1 = 1;
  }
  else if (*(long *)(param_1 + 0x1d0) == lVar1) {
    lVar1 = 2;
  }
  else if (*(long *)(param_1 + 0x270) == lVar1) {
    lVar1 = 3;
  }
  else if (*(long *)(param_1 + 0x310) == lVar1) {
    lVar1 = 4;
  }
  else if (*(long *)(param_1 + 0x3b0) == lVar1) {
    lVar1 = 5;
  }
  else if (*(long *)(param_1 + 0x450) == lVar1) {
    lVar1 = 6;
  }
  else if (*(long *)(param_1 + 0x4f0) == lVar1) {
    lVar1 = 7;
  }
  else if (*(long *)(param_1 + 0x590) == lVar1) {
    lVar1 = 8;
  }
  else if (*(long *)(param_1 + 0x630) == lVar1) {
    lVar1 = 9;
  }
  else if (*(long *)(param_1 + 0x6d0) == lVar1) {
    lVar1 = 10;
  }
  else if (*(long *)(param_1 + 0x770) == lVar1) {
    lVar1 = 0xb;
  }
  else if (*(long *)(param_1 + 0x810) == lVar1) {
    lVar1 = 0xc;
  }
  else if (*(long *)(param_1 + 0x8b0) == lVar1) {
    lVar1 = 0xd;
  }
  else if (*(long *)(param_1 + 0x950) == lVar1) {
    lVar1 = 0xe;
  }
  else if (*(long *)(param_1 + 0x9f0) == lVar1) {
    lVar1 = 0xf;
  }
  else {
    if (*(long *)(param_1 + 0xa90) != lVar1) {
      return 0;
    }
    lVar1 = 0x10;
  }
  return *(undefined8 *)(param_1 + lVar1 * 0xa0 + 0xb8);
}


