/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00930054; name: FUN_00930054
 */


int FUN_00930054(undefined4 param_1,int param_2)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
    if (param_2 - 1U < 3) {
      return param_2 + 4;
    }
    break;
  case 1:
    iVar1 = 8;
    if (param_2 == 1) {
      iVar1 = 9;
    }
    return iVar1;
  case 2:
    iVar1 = 10;
    if (param_2 == 2) {
      iVar1 = 0xb;
    }
    return iVar1;
  case 3:
    iVar1 = 0xc;
    if (param_2 == 3) {
      iVar1 = 0xd;
    }
    return iVar1;
  }
  return 0;
}


