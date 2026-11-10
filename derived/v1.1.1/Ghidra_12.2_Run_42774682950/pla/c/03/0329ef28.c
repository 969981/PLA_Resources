/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ef28; name: FUN_0329ef28
 */


int FUN_0329ef28(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 1:
    break;
  case 2:
    return param_2 << 1;
  case 3:
    return param_2 * 3;
  case 4:
    return param_2 + 2;
  default:
    param_2 = 0;
  }
  return param_2;
}


