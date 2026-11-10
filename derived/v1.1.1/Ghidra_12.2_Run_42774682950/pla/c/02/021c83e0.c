/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c83e0; name: FUN_021c83e0
 */


void FUN_021c83e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar4 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if (*PTR_DAT_0437d4b8 != '\0') {
    local_38 = uVar4;
    iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast");
    if (iVar1 == 0) {
      uVar4 = local_38;
    }
    else {
      pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar4 = FUN_00f0973c();
      uVar4 = (*pcVar3)(local_38,uVar4);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  local_38 = FUN_00150da0(param_1,iVar1 + 1,&local_38);
  FUN_021c852c(param_1,param_2,param_3,uVar4,&local_38);
  return;
}


