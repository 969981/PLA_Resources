/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0225bca0; name: FUN_0225bca0
 */


undefined8 FUN_0225bca0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  
  iVar1 = FUN_00150310(param_1,1);
  *param_3 = 1;
  param_3[1] = param_3[1] + 1;
  if (iVar1 != 7) {
    (*(code *)*param_2)(param_1,1,7,iVar1,"value is not a valid userdata");
    return 0;
  }
  iVar1 = FUN_00152090(param_1,1);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_0014fef0(param_1);
  uVar3 = FUN_0225b3d0(param_1,uVar2);
  if (((((uVar3 & 1) != 0) || (uVar3 = FUN_0225b470(param_1,uVar2), (uVar3 & 1) != 0)) ||
      (uVar3 = FUN_0225b510(param_1,uVar2), (uVar3 & 1) != 0)) ||
     (uVar3 = FUN_0225b5b0(param_1,uVar2), (uVar3 & 1) != 0)) {
    return 1;
  }
  if (DAT_043df598 != '\0') {
    FUN_00151570(param_1,"class_check");
    FUN_00151d20(param_1,uVar2);
    iVar1 = FUN_00150310(param_1,0xffffffff);
    if (iVar1 != 0) {
      pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
      FUN_0225a1cc();
      uVar3 = (*pcVar4)();
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff10(param_1,0xfffffffe);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      goto LAB_0225be48;
    }
    FUN_0014ff10(param_1,0xfffffffe);
  }
  FUN_0014ff10(param_1,0xfffffffe);
LAB_0225be48:
  (*(code *)*param_2)(param_1,1,7,7,"value at this index does not properly reflect the desired type"
                     );
  return 0;
}


