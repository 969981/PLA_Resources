/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154670; name: FUN_00154670
 */


void FUN_00154670(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00152090();
  if (iVar1 != 0) {
    FUN_00151570(param_1,"__name");
    iVar1 = FUN_00151d20(param_1,0xfffffffe);
    if (iVar1 == 0) {
      FUN_0014ff10(param_1,0xfffffffd);
    }
    else {
      FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      if (iVar1 == 4) {
        pcVar3 = (char *)FUN_00150da0(param_1,0xffffffff,0);
        goto LAB_00154738;
      }
    }
  }
  iVar1 = FUN_00150310(param_1,param_2);
  if (iVar1 == 2) {
    pcVar3 = "light userdata";
  }
  else {
    uVar2 = FUN_00150310(param_1,param_2);
    pcVar3 = (char *)FUN_001503f0(param_1,uVar2);
  }
LAB_00154738:
  uVar4 = FUN_00151650(param_1,"%s expected, got %s",param_3,pcVar3);
  FUN_00154010(param_1,param_2,uVar4);
  return;
}


