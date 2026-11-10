/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206f60; name: FUN_00206f60
 */


long FUN_00206f60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 == 0) {
      if (((ulong)*(uint *)(param_1 + 0x96c) <= *(ulong *)(param_1 + 0x8e8)) ||
         (lVar1 = *(long *)(param_1 + 0x138), lVar1 == 0)) {
        if (*(int *)(param_1 + 0x94c) < 1) {
          return 0;
        }
        lVar1 = FUN_00212108(param_1 + 0x20);
        return lVar1;
      }
      param_1 = param_1 + 0x138;
    }
    else {
      param_1 = param_1 + 0x120;
    }
  }
  else {
    param_1 = param_1 + 0x108;
  }
  FUN_002113ec(param_1);
  *(undefined1 *)(lVar1 + 0x90) = 0;
  return lVar1;
}


