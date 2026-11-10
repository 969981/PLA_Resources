/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02320948; name: FUN_02320948
 */


void FUN_02320948(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 unaff_x23;
  undefined8 local_38;
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar5 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if (*PTR_DAT_0437c708 != '\0') {
    local_38 = uVar5;
    iVar2 = FUN_00155630(param_1,iVar2 + 2,"class_cast");
    if (iVar2 == 0) {
      uVar5 = local_38;
    }
    else {
      pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar5 = FUN_00ea12ac();
      uVar5 = (*pcVar4)(local_38,uVar5);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  dVar1 = (double)FUN_00150a90(param_1,iVar2 + 2,0);
  local_38 = CONCAT44((float)dVar1,(undefined4)local_38);
  FUN_02320aa8(param_1,param_2,param_3,param_4,uVar5,(long)&local_38 + 4,param_7,param_8,unaff_x23);
  return;
}


