/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004362f0; name: FUN_004362f0
 */


undefined8 FUN_004362f0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0040c5d0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  uVar2 = 0;
  if (((lVar1 != 0) &&
      (lVar1 = FUN_0040c5d0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60)),
      uVar2 = 0, lVar1 != 0)) &&
     (lVar1 = FUN_0040c5d0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68)),
     uVar2 = 0, lVar1 != 0)) {
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  return uVar2;
}


