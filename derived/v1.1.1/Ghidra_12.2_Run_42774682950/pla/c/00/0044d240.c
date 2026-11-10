/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044d240; name: FUN_0044d240
 */


long FUN_0044d240(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_0044d0a0(auStack_30,param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_0041cee0();
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = thunk_FUN_0040a280(lVar2,auStack_30,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
    thunk_FUN_0040a4b0(lVar2);
  }
  return 0;
}


