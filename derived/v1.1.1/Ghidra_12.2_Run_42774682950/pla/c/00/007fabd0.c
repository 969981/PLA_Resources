/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fabd0; name: FUN_007fabd0
 */


undefined4 FUN_007fabd0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1c0) != 0) {
LAB_007fabe4:
    return *(undefined4 *)(param_1 + 0x280);
  }
  lVar1 = param_1 + 0xb8;
  uVar2 = FUN_007f0ee4(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_007f0ee4(param_1 + 0x98);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_007f0f48(param_1 + 0x98,lVar1), (uVar2 & 1) != 0))
    goto LAB_007fabe4;
  }
  uVar2 = FUN_007f0ee4(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_007f0ee4(param_1 + 0x98);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_007f0f48(param_1 + 0x98,lVar1), (uVar2 & 1) == 0))
    goto LAB_007fabe4;
  }
  return 0;
}


