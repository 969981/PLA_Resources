/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea4a78; name: FUN_02ea4a78
 */


void FUN_02ea4a78(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x180) != param_2) {
    *(int *)(param_1 + 0x180) = param_2;
    if (*(int *)(param_1 + 0xe0) != 0) {
      uVar1 = 0;
      do {
        FUN_02ea4a78(*(undefined8 *)(*(long *)(param_1 + 0xd8) + uVar1 * 8),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xe0));
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      FUN_02f14074(1);
      return;
    }
  }
  return;
}


