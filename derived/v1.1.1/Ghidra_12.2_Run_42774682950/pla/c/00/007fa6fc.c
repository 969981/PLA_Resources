/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fa6fc; name: FUN_007fa6fc
 */


ulong FUN_007fa6fc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(short *)(param_1 + 0x114e) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_007f0ee4(*(long *)(*(long *)(param_1 + 0x88) + uVar2 * 8) + 0x10);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = FUN_007f0f48(*(long *)(*(long *)(param_1 + 0x88) + uVar2 * 8) + 0x10,param_2),
         (uVar1 & 1) != 0)) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 0x114e));
  }
  return 0xffffffff;
}


