/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00157cb0; name: FUN_00157cb0
 */


uint FUN_00157cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = FUN_0014fd20(param_2,param_3);
  if (iVar1 == 0) {
    pcVar3 = "too many arguments to resume";
  }
  else {
    iVar1 = FUN_001530d0(param_2);
    if ((iVar1 == 0) && (iVar1 = FUN_0014fef0(param_2), iVar1 == 0)) {
      pcVar3 = "cannot resume dead coroutine";
    }
    else {
      FUN_0014fe00(param_1,param_2,param_3);
      uVar2 = FUN_0015b200(param_2,param_1,param_3);
      if (1 < uVar2) {
        FUN_0014fe00(param_2,param_1,1);
        return 0xffffffff;
      }
      uVar2 = FUN_0014fef0(param_2);
      iVar1 = FUN_0014fd20(param_1,uVar2 + 1);
      if (iVar1 != 0) {
        FUN_0014fe00(param_2,param_1,uVar2);
        return uVar2;
      }
      FUN_0014ff10(param_2,~uVar2);
      pcVar3 = "too many results to resume";
    }
  }
  FUN_00151570(param_1,pcVar3);
  return 0xffffffff;
}


