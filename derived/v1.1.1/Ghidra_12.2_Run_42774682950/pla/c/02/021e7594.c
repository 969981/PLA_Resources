/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021e7594; name: FUN_021e7594
 */


uint FUN_021e7594(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x25;
  undefined8 local_48;
  
  uVar4 = FUN_00ff7a8c(param_1,param_2[1] + 2,param_2);
  iVar1 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if (*PTR_DAT_0437c708 != '\0') {
    local_48 = uVar7;
    iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast");
    if (iVar1 == 0) {
      uVar7 = local_48;
    }
    else {
      pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar7 = FUN_00ea12ac();
      uVar7 = (*pcVar6)(local_48,uVar7);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1];
  lVar5 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if (*PTR_DAT_0437c708 != '\0') {
    local_48 = uVar8;
    iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast");
    if (iVar1 == 0) {
      uVar8 = local_48;
    }
    else {
      pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar8 = FUN_00ea12ac();
      uVar8 = (*pcVar6)(local_48,uVar8);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar2 = FUN_00150ba0(param_1,iVar1 + 2,0);
  local_48 = CONCAT44(uVar2,(undefined4)local_48);
  uVar3 = FUN_021e786c(param_1,param_2,param_3,param_4,uVar4,uVar7,uVar8,(long)&local_48 + 4,
                       unaff_x25);
  return uVar3 & 1;
}


