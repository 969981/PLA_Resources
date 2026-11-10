/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0208bc10; name: FUN_0208bc10
 */


uint FUN_0208bc10(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  
  iVar1 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00ea12ac();
    uVar6 = (*pcVar5)(uVar6,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if (*PTR_DAT_0437c708 != '\0') {
    local_48 = uVar7;
    iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast");
    if (iVar1 == 0) {
      uVar7 = local_48;
    }
    else {
      pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar7 = FUN_00ea12ac();
      uVar7 = (*pcVar5)(local_48,uVar7);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar2 = FUN_00150ba0(param_1,iVar1 + 2,0);
  local_48 = CONCAT44(uVar2,(undefined4)local_48);
  uVar3 = FUN_0208be74(param_1,param_2,param_3,param_4,uVar6,uVar7,(long)&local_48 + 4);
  return uVar3 & 1;
}


