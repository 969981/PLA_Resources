/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f49144; name: FUN_02f49144
 */


void FUN_02f49144(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar1 = *(long *)(param_1 + 200);
    do {
      FUN_02f4a680(*(undefined8 *)(lVar1 + 8));
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != *(long *)(param_1 + 200) + (ulong)*(uint *)(param_1 + 0xd0) * 0x10);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}


