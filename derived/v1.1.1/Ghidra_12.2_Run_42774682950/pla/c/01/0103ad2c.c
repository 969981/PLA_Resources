/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0103ad2c; name: FUN_0103ad2c
 */


uint FUN_0103ad2c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [8];
  
  iVar1 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437d560 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00f2db5c();
    uVar7 = (*pcVar4)(uVar7,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar5 = FUN_00150da0(param_1,iVar1 + 1,auStack_48);
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar6 = FUN_00150da0(param_1,iVar1 + 1,auStack_48);
  uVar2 = (*(code *)*param_3)(uVar7,uVar5,uVar6);
  return uVar2 & 1;
}


