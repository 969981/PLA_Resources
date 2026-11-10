/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021702a8; name: FUN_021702a8
 */


uint FUN_021702a8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_48;
  
  iVar1 = param_2[1] + 2;
  iVar2 = FUN_00150310(param_1,iVar1);
  if (iVar2 == 0) {
    *param_2 = 1;
    local_48 = 0;
    param_2[1] = param_2[1] + 1;
  }
  else {
    lVar4 = FUN_001511d0(param_1,iVar1);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    local_48 = FUN_01602d14(param_1,*(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)),iVar1,
                            param_2);
  }
  uVar3 = FUN_02170384(param_1,param_2,param_3,param_4,param_5,param_6,&local_48);
  return uVar3 & 1;
}


