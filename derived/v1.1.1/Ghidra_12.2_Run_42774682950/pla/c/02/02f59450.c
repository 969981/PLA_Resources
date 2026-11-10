/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59450; name: FUN_02f59450
 */


void FUN_02f59450(int param_1,undefined8 param_2,ulong param_3)

{
  if (*(long *)(&DAT_0442c138 + (long)param_1 * 0x820) * 0x20 - 0x60U < param_3) {
    FUN_02f599d0(param_1,param_3);
    return;
  }
  FUN_02f59970();
  return;
}


