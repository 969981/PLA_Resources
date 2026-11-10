/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033999a8; name: FUN_033999a8
 */


undefined8 FUN_033999a8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_0334acbc(param_1 + 0x18);
  FUN_0339a92c(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  do {
    iVar1 = FUN_0339a5c0(param_1 + 0x50);
  } while (iVar1 == 4);
  switch(iVar1) {
  case 0:
    uVar2 = FUN_03399534(param_1);
    return uVar2;
  case 1:
    uVar2 = FUN_0339991c(param_1);
    return uVar2;
  case 2:
    uVar2 = 4;
    break;
  case 3:
    uVar2 = 5;
    break;
  default:
    uVar2 = 6;
    break;
  case 5:
    uVar2 = 7;
  }
  return uVar2;
}


