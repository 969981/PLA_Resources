/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00436220; name: FUN_00436220
 */


undefined8 FUN_00436220(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0040c260();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_0040c260();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = FUN_0040c260();
  *(long *)(param_1 + 0x68) = lVar2;
  if (((*(long *)(param_1 + 0x40) == 0) || (lVar2 == 0)) || (*(long *)(param_1 + 0x60) == 0)) {
    FUN_0040c1e0();
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x60));
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x68));
    return 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 1;
}


