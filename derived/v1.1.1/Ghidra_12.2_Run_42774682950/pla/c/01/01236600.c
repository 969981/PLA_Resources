/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01236600; name: FUN_01236600
 */


int FUN_01236600(long *param_1,undefined4 param_2)

{
  long *plVar1;
  
  switch(param_2) {
  case 0:
    plVar1 = param_1 + 1;
    break;
  case 1:
    plVar1 = param_1 + 8;
    param_1 = param_1 + 7;
    break;
  case 2:
    plVar1 = param_1 + 0xf;
    param_1 = param_1 + 0xe;
    break;
  case 3:
    plVar1 = param_1 + 0x16;
    param_1 = param_1 + 0x15;
    break;
  case 4:
    plVar1 = param_1 + 0x1d;
    param_1 = param_1 + 0x1c;
    break;
  case 5:
    plVar1 = param_1 + 0x24;
    param_1 = param_1 + 0x23;
    break;
  case 6:
    plVar1 = param_1 + 0x2b;
    param_1 = param_1 + 0x2a;
    break;
  default:
    return 0;
  }
  return (int)((ulong)(*plVar1 - *param_1) >> 4) * -0x33333333;
}


