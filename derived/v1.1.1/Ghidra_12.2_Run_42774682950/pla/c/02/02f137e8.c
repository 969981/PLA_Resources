/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f137e8; name: FUN_02f137e8
 */


void FUN_02f137e8(void)

{
  int iVar1;
  ulong uVar2;
  
  FUN_02f1c060();
  FUN_02f1a3f0();
  uVar2 = FUN_02f59dd0();
  if ((((DAT_0440a098 == 0) || ((uVar2 & 1) == 0)) || (iVar1 = FUN_02f332ec(2), iVar1 != 1)) ||
     ((iVar1 = FUN_02eac734(DAT_0440a1e0), iVar1 != 1 || (iVar1 = FUN_02eb278c(), iVar1 != 1)))) {
    return;
  }
  FUN_02ef8ca8();
  FUN_02ec903c();
  return;
}


