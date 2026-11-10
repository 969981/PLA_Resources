/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603194; name: FUN_00603194
 */


void FUN_00603194(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == param_1) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (*(long *)(uVar1 + 8) != *(long *)(uVar1 + 0x10)) {
      FUN_0030cac0();
    }
  }
  FUN_00603078(param_1,param_2);
  return;
}


