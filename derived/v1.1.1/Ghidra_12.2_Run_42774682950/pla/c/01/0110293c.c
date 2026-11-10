/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0110293c; name: FUN_0110293c
 */


void FUN_0110293c(long *param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *param_3;
  if (*(long *)(param_2 + 0x200) == lVar1) {
    param_2 = param_2 + 0x200;
  }
  else if (*(long *)(param_2 + 0xd80) == lVar1) {
    param_2 = param_2 + 0xd80;
  }
  else if (*(long *)(param_2 + 0x1900) == lVar1) {
    param_2 = param_2 + 0x1900;
  }
  else if (*(long *)(param_2 + 0x2480) == lVar1) {
    param_2 = param_2 + 0x2480;
  }
  else {
    if (*(long *)(param_2 + 0x3000) != lVar1) goto LAB_01102b4c;
    param_2 = param_2 + 0x3000;
  }
  lVar1 = *param_4;
  if (*(long *)(param_2 + 0x78) == lVar1) {
    lVar1 = 0;
  }
  else if (*(long *)(param_2 + 0x108) == lVar1) {
    lVar1 = 1;
  }
  else if (*(long *)(param_2 + 0x198) == lVar1) {
    lVar1 = 2;
  }
  else if (*(long *)(param_2 + 0x228) == lVar1) {
    lVar1 = 3;
  }
  else if (*(long *)(param_2 + 0x2b8) == lVar1) {
    lVar1 = 4;
  }
  else if (*(long *)(param_2 + 0x348) == lVar1) {
    lVar1 = 5;
  }
  else if (*(long *)(param_2 + 0x3d8) == lVar1) {
    lVar1 = 6;
  }
  else if (*(long *)(param_2 + 0x468) == lVar1) {
    lVar1 = 7;
  }
  else if (*(long *)(param_2 + 0x4f8) == lVar1) {
    lVar1 = 8;
  }
  else if (*(long *)(param_2 + 0x588) == lVar1) {
    lVar1 = 9;
  }
  else if (*(long *)(param_2 + 0x618) == lVar1) {
    lVar1 = 10;
  }
  else if (*(long *)(param_2 + 0x6a8) == lVar1) {
    lVar1 = 0xb;
  }
  else if (*(long *)(param_2 + 0x738) == lVar1) {
    lVar1 = 0xc;
  }
  else if (*(long *)(param_2 + 0x7c8) == lVar1) {
    lVar1 = 0xd;
  }
  else if (*(long *)(param_2 + 0x858) == lVar1) {
    lVar1 = 0xe;
  }
  else if (*(long *)(param_2 + 0x8e8) == lVar1) {
    lVar1 = 0xf;
  }
  else if (*(long *)(param_2 + 0x978) == lVar1) {
    lVar1 = 0x10;
  }
  else if (*(long *)(param_2 + 0xa08) == lVar1) {
    lVar1 = 0x11;
  }
  else if (*(long *)(param_2 + 0xa98) == lVar1) {
    lVar1 = 0x12;
  }
  else {
    if (*(long *)(param_2 + 0xb28) != lVar1) {
LAB_01102b4c:
      *param_1 = 0;
      return;
    }
    lVar1 = 0x13;
  }
  *param_1 = param_2 + lVar1 * 0x90 + 0x10;
  return;
}


