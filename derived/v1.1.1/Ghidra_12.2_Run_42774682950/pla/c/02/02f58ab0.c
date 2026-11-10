/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58ab0; name: FUN_02f58ab0
 */


void FUN_02f58ab0(int param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820) & param_2;
  if (uVar1 == 0) {
    return;
  }
  if (*(uint *)(uVar1 + 0x14) < 0x7e) {
    FUN_02f59a70();
    return;
  }
  if (*(uint *)(uVar1 + 0x14) == 0xffffffff) {
    FUN_02f59ba0(param_1,uVar1,param_2);
    return;
  }
  FUN_02f59b00();
  return;
}


