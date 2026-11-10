/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58a60; name: thunk_FUN_02f58a70
 */


void thunk_FUN_02f58a70(int param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x401) {
    FUN_02f593d0();
    return;
  }
  if (*(ulong *)(&DAT_0442c558 + (long)param_1 * 0x820) < param_3) {
    FUN_02f59450();
    return;
  }
  FUN_02f59400();
  return;
}


