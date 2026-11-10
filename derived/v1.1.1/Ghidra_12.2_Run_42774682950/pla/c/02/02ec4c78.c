/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4c78; name: FUN_02ec4c78
 */


undefined8 FUN_02ec4c78(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x2c) < uVar1) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_02f59e70(0);
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    lVar2 = FUN_02f59e40(0,(ulong)uVar1 << 2,0x10);
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  }
  return 1;
}


