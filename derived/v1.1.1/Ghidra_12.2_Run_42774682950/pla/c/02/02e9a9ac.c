/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9a9ac; name: FUN_02e9a9ac
 */


void FUN_02e9a9ac(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0);
    do {
      if (*(long *)(lVar1 + 0x18) != 0) {
        (*DAT_0442d150)(0);
        *(undefined8 *)(lVar1 + 0x18) = 0;
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != *(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x30);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}


