/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6238; name: FUN_013c6238
 */


void FUN_013c6238(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  FUN_027bc6c4(param_1 + 0xc0);
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
    FUN_013c6310(param_1);
    FUN_013c63b8(param_1);
    FUN_013c6408(param_1);
    FUN_013c6478(param_1);
    FUN_013c64c8(param_1);
    return;
  case 1:
    FUN_013c6518(param_1);
    uVar2 = 2;
    break;
  case 2:
    uVar1 = FUN_013c6104(param_1);
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = FUN_027bc6a4(param_1 + 0xc0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = 3;
    break;
  case 3:
    FUN_013c6b0c(param_1);
    uVar2 = 4;
    break;
  case 4:
    uVar1 = FUN_013c6104(param_1);
    if ((uVar1 & 1) == 0) {
      FUN_013c6f54(param_1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  default:
    goto switchD_013c6274_default;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
switchD_013c6274_default:
  return;
}


