/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0246eb38; name: FUN_0246eb38
 */


void FUN_0246eb38(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 unaff_x23;
  undefined8 local_38;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar4 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if (*PTR_DAT_0437c708 != '\0') {
    local_38 = uVar4;
    iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast");
    if (iVar1 == 0) {
      uVar4 = local_38;
    }
    else {
      pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar4 = FUN_00ea12ac();
      uVar4 = (*pcVar3)(local_38,uVar4);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  iVar1 = FUN_00150cc0(param_1,iVar1 + 2);
  local_38._0_5_ = CONCAT14(iVar1 != 0,(undefined4)local_38);
  FUN_0246ec98(param_1,param_2,param_3,param_4,uVar4,(long)&local_38 + 4,param_7,param_8,unaff_x23);
  return;
}


