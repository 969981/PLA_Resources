/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5e1ec; name: FUN_02c5e1ec
 */


ulong FUN_02c5e1ec(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  switch(param_2) {
  case 0:
    if (*(long *)(*(long *)(param_1 + 0x98) + 8) != 0) {
      uVar2 = FUN_02c66e84(*(long *)(param_1 + 0x98));
      return uVar2;
    }
    uVar1 = FUN_02c5e31c();
    break;
  case 1:
    if (*(long *)(*(long *)(param_1 + 0x98) + 8) != 0) {
      uVar2 = FUN_02c671ac(*(long *)(param_1 + 0x98));
      return uVar2;
    }
    uVar1 = FUN_02c5e59c();
    break;
  case 2:
    if (*(long *)(*(long *)(param_1 + 0x98) + 8) != 0) {
      uVar2 = FUN_02c674d4(*(long *)(param_1 + 0x98));
      return uVar2;
    }
    uVar1 = FUN_02c5e850();
    break;
  case 3:
    if (*(long *)(*(long *)(param_1 + 0x98) + 8) != 0) {
      uVar2 = FUN_02c677fc(*(long *)(param_1 + 0x98));
      return uVar2;
    }
    uVar1 = FUN_02c5eb08();
    break;
  case 4:
    if (*(long *)(*(long *)(param_1 + 0x98) + 8) != 0) {
      uVar2 = FUN_02c67b24(*(long *)(param_1 + 0x98));
      return uVar2;
    }
    uVar1 = FUN_02c5edc0();
    break;
  case 5:
    if (*(long *)(*(long *)(param_1 + 0x98) + 8) != 0) {
      uVar2 = FUN_02c67e4c(*(long *)(param_1 + 0x98));
      return uVar2;
    }
    uVar1 = FUN_02c5f078();
    break;
  default:
    return 0;
  }
  return (ulong)(uVar1 & 0xffff);
}


