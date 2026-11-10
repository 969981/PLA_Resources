/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e0320; name: FUN_029e0320
 */


void FUN_029e0320(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x1041) >> 2 & 1) != 0) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8a,0,0x9e);
  }
  FUN_029e03d0(param_1);
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(*(long *)(lVar1 + 0x58) + 0x1041) >> 5 & 1) != 0) {
    FUN_029e0674(param_1);
    lVar1 = *(long *)(param_1 + 8);
  }
  uVar2 = FUN_029cddec(lVar1,*(undefined8 *)(param_1 + 0x10));
  if ((uVar2 & 1) != 0) {
    **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 4;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(*(long *)(*(long *)(*(long *)(lVar1 + 0x20) + 0x10) + 0x1a8) + 8) = 1;
  FUN_02a3e6b8(*(undefined8 *)(lVar1 + 0x18),0x29,0);
  return;
}


