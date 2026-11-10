/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e18f70; name: FUN_00e18f70
 */


void FUN_00e18f70(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_38;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = PTR_LAB_04379768;
  uVar2 = FUN_00150310();
  uVar2 = FUN_00e19070(uVar2,param_2,param_3,uVar2 & 0xffffffff,&local_38,&local_28);
  if ((uVar2 & 1) == 0) {
    FUN_00150310(param_2,param_3);
    uVar6 = 0;
  }
  else {
    lVar3 = FUN_001511d0(param_2,param_3);
    uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
    if ((*PTR_DAT_0437acb0 != '\0') &&
       (iVar1 = FUN_00155630(param_2,param_3,"class_cast"), iVar1 != 0)) {
      pcVar4 = (code *)FUN_001511d0(param_2,0xffffffff);
      uVar5 = FUN_00b4fc10();
      uVar6 = (*pcVar4)(uVar6,uVar5);
      FUN_0014ff10(param_2,0xfffffffe);
    }
  }
  *param_1 = uVar6;
  return;
}


