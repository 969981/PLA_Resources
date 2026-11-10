/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010db350; name: FUN_010db350
 */


uint FUN_010db350(undefined8 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auStack_40 [16];
  
  iVar2 = FUN_010da868();
  FUN_02c4fb44(auStack_40,param_2);
  iVar3 = FUN_02c4fc60(auStack_40,0x1b);
  uVar1 = iVar3 - iVar2;
  if (param_3 < uVar1) {
    uVar4 = FUN_010db41c(param_1,param_2,param_3,0xffffffff);
    if ((uVar4 & 1) != 0) {
      FUN_010db1d8(param_1,param_2,param_3,0xffffffff);
      param_3 = 0;
    }
  }
  else if ((uVar1 != 0) &&
          (uVar4 = FUN_010db41c(param_1,param_2,uVar1,0xffffffff), (uVar4 & 1) != 0)) {
    FUN_010db1d8(param_1,param_2,uVar1,0xffffffff);
    param_3 = param_3 - uVar1;
  }
  return param_3;
}


