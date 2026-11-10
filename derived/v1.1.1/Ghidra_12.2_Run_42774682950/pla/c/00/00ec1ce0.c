/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ec1ce0; name: FUN_00ec1ce0
 */


undefined8
FUN_00ec1ce0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  
  iVar1 = FUN_00150310();
  *param_4 = 1;
  param_4[1] = param_4[1] + 1;
  if (iVar1 == 7) {
    iVar1 = FUN_00152090(param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0014fef0(param_1);
      uVar3 = FUN_00ec1eb0(param_1,uVar2);
      if (((((uVar3 & 1) == 0) && (uVar3 = FUN_00ec1f50(param_1,uVar2), (uVar3 & 1) == 0)) &&
          (uVar3 = FUN_00ec1ff0(param_1,uVar2), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_00ec2090(param_1,uVar2), (uVar3 & 1) == 0)) {
        if (DAT_043b2078 == '\0') {
LAB_00ec1e78:
          FUN_0014ff10(param_1,0xfffffffe);
        }
        else {
          FUN_00151570(param_1,"class_check");
          FUN_00151d20(param_1,uVar2);
          iVar1 = FUN_00150310(param_1,0xffffffff);
          if (iVar1 == 0) {
            FUN_0014ff10(param_1,0xfffffffe);
            goto LAB_00ec1e78;
          }
          pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
          FUN_00ec2124();
          uVar3 = (*pcVar5)();
          FUN_0014ff10(param_1,0xfffffffe);
          FUN_0014ff10(param_1,0xfffffffe);
          if ((uVar3 & 1) != 0) goto LAB_00ec1dbc;
        }
        pcVar5 = (code *)*param_3;
        pcVar6 = "value at this index does not properly reflect the desired type";
        iVar1 = 7;
        goto LAB_00ec1de0;
      }
    }
LAB_00ec1dbc:
    uVar4 = 1;
  }
  else {
    pcVar5 = (code *)*param_3;
    pcVar6 = "value is not a valid userdata";
LAB_00ec1de0:
    (*pcVar5)(param_1,param_2,7,iVar1,pcVar6);
    uVar4 = 0;
  }
  return uVar4;
}


