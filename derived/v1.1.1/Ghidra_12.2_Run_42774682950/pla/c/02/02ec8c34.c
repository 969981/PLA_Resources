/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec8c34; name: FUN_02ec8c34
 */


undefined8 FUN_02ec8c34(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_02ec8c7c();
  if ((uVar1 & 1) == 0) {
    FUN_02ec8b50(param_1,0);
    uVar2 = 2;
  }
  else {
    FUN_02e7d6e0(DAT_0440a128);
    uVar2 = 1;
  }
  return uVar2;
}


