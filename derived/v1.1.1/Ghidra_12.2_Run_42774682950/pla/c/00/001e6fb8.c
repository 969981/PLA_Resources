/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e6fb8; name: FUN_001e6fb8
 */


void FUN_001e6fb8(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     ((*(long *)(param_1 + 0x1290) != 0 || (*(int *)(param_1 + 0x1298) != 0)))) {
    iVar1 = FUN_001f8a38(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xb0),param_1 + 0x12a0);
    if (iVar1 != 0) {
      FUN_001f3934(param_1,"Internal error clearing splay node = %d\n",iVar1);
    }
    if (*(long *)(param_1 + 0x12f0) != 0) {
      do {
        FUN_001e3790(param_1 + 0x12d8,*(undefined8 *)(param_1 + 0x12e0),0);
      } while (*(long *)(param_1 + 0x12f0) != 0);
    }
    *(undefined8 *)(param_1 + 0x1290) = 0;
    *(undefined4 *)(param_1 + 0x1298) = 0;
  }
  return;
}


