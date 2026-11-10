/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021708e0; name: FUN_021708e0
 */


uint FUN_021708e0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_48 [8];
  
  iVar6 = param_2[1] + 1;
  iVar1 = FUN_00150310(param_1,iVar6);
  if (iVar1 == 0) {
    *param_2 = 1;
    iVar6 = param_2[1] + 1;
    uVar4 = 0;
    param_2[1] = iVar6;
  }
  else {
    lVar3 = FUN_001511d0(param_1,iVar6);
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    uVar4 = FUN_01602d14(param_1,*(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7)),iVar6,
                         param_2);
    iVar6 = param_2[1];
  }
  *param_2 = 1;
  param_2[1] = iVar6 + 1;
  uVar5 = FUN_00150da0(param_1,iVar6 + 1,auStack_48);
  uVar2 = (*(code *)*param_3)(param_4,*param_5,uVar4,uVar5);
  return uVar2 & 1;
}


