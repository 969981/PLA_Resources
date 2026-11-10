/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6310; name: FUN_013c6310
 */


void FUN_013c6310(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = *(long *)(param_1 + 0x98) + 0x5b0;
  }
  if (*(long *)(param_1 + 0x88) != lVar1) {
    return;
  }
  uVar2 = FUN_013c56a4();
  switch(uVar2) {
  case 1:
    *(undefined4 *)(param_1 + 0x7c) = 1;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x7c) = 2;
    *(undefined4 *)(param_1 + 0x84) = 0;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x7c) = 2;
    *(undefined4 *)(param_1 + 0x84) = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x7c) = 2;
    *(undefined4 *)(param_1 + 0x84) = 2;
    break;
  default:
    goto switchD_013c636c_default;
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
switchD_013c636c_default:
  return;
}


