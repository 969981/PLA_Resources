/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00deb86c; name: FUN_00deb86c
 */


uint FUN_00deb86c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437bb78 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00deb95c();
    uVar6 = (*pcVar5)(uVar6,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar4 = FUN_00150da0(param_1,iVar2 + 1,auStack_48);
  uVar1 = (*(code *)*param_3)(uVar6,uVar4);
  return uVar1 & 1;
}


