/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0cce8; name: FUN_02f0cce8
 */


undefined8
FUN_02f0cce8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_02f0c974();
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  else {
    FUN_02f0cd68();
    if (param_6 != 0) {
      uVar2 = FUN_02f0cdc8(lVar1,param_3,param_4,param_5,param_6);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}


