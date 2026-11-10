/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041cdb0; name: FUN_0041cdb0
 */


undefined8 FUN_0041cdb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0041cee0();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0040a280(lVar2,param_2,param_3);
    if (iVar1 == 0) {
      thunk_FUN_0040a4b0(lVar2);
      return 0;
    }
    FUN_0041ec80(param_1,4,lVar2);
    uVar3 = 1;
  }
  return uVar3;
}


