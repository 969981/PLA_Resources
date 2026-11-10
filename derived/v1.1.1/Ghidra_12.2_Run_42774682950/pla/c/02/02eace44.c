/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eace44; name: FUN_02eace44
 */


bool FUN_02eace44(int param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = DAT_0440a444 + param_1;
  lVar2 = FUN_02f59e50(0,DAT_0440a438,(ulong)uVar1 * 0x28);
  if (lVar2 != 0) {
    DAT_0440a438 = lVar2;
    DAT_0440a444 = uVar1;
  }
  return lVar2 != 0;
}


