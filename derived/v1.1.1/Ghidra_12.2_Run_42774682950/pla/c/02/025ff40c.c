/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ff40c; name: FUN_025ff40c
 */


bool FUN_025ff40c(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x1f0);
  if ((uVar1 & 0x1ff) == 0) {
    return true;
  }
  switch(*param_2) {
  case 2:
    uVar2 = 0x5c;
    break;
  case 3:
    uVar2 = 0x4c;
    break;
  default:
    return true;
  case 5:
    return (uVar1 & 0x1fc) == 0;
  case 6:
    return (uVar1 & 4) == 0;
  case 7:
    uVar2 = 0x44;
  }
  return (uVar1 & uVar2) == 0;
}


