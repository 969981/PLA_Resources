/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024f234; name: FUN_0024f234
 */


void FUN_0024f234(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(*(long *)(param_2 + 0x150) + 4) = param_1;
    *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
    return;
  }
  if (param_3 == 0) {
    **(undefined4 **)(param_2 + 0x150) = param_1;
  }
  *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
  return;
}


