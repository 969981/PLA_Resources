/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02170c30; name: FUN_02170c30
 */


uint FUN_02170c30(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  iVar1 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if (*PTR_DAT_043848b0 != '\0') {
    local_38 = uVar6;
    iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast");
    if (iVar1 == 0) {
      uVar6 = local_38;
    }
    else {
      pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar6 = FUN_020d1f5c();
      uVar6 = (*pcVar5)(local_38,uVar6);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar2 = FUN_00150ba0(param_1,iVar1 + 1,0);
  local_38 = CONCAT44(uVar2,(undefined4)local_38);
  uVar3 = FUN_02170d80(param_1,param_2,param_3,uVar6,(long)&local_38 + 4);
  return uVar3 & 1;
}


