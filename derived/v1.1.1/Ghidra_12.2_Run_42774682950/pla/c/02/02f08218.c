/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f08218; name: FUN_02f08218
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02f08218(int param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = _DAT_0440ab1c + param_1;
  lVar2 = FUN_02f59e50(0,DAT_0440ab10,(ulong)uVar1 * 0x18);
  if (lVar2 != 0) {
    DAT_0440ab10 = lVar2;
    _DAT_0440ab1c = uVar1;
  }
  return lVar2 != 0;
}


