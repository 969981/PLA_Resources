/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01433a9c; name: thunk_FUN_01433aa0
 */


void thunk_FUN_01433aa0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar2 + 0x148);
  if (lVar1 != 0) {
    FUN_0283b430(lVar1,param_1 + 0x68);
    lVar1 = *(long *)(lVar2 + 0x148);
    if (lVar1 != 0) {
      FUN_0283b1e8(lVar1,param_1 + 0x48);
      return;
    }
  }
  return;
}


