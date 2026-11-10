/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023ef7a0; name: FUN_023ef7a0
 */


undefined8 FUN_023ef7a0(undefined8 param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  
  *param_4 = 1;
  param_4[1] = param_4[1] + 1;
  if (param_2 != 7) {
    (*(code *)*param_3)(param_1,1,7,param_2,"value is not a valid userdata");
    return 0;
  }
  iVar1 = FUN_00152090(param_1,1);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_0014fef0(param_1);
  uVar3 = FUN_023eeac0(param_1,uVar2);
  if (((((uVar3 & 1) != 0) || (uVar3 = FUN_023eeb60(param_1,uVar2), (uVar3 & 1) != 0)) ||
      (uVar3 = FUN_023eec00(param_1,uVar2), (uVar3 & 1) != 0)) ||
     (uVar3 = FUN_023eeca0(param_1,uVar2), (uVar3 & 1) != 0)) {
    return 1;
  }
  if (DAT_043e4418 != '\0') {
    FUN_00151570(param_1,"class_check");
    FUN_00151d20(param_1,uVar2);
    iVar1 = FUN_00150310(param_1,0xffffffff);
    if (iVar1 != 0) {
      pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
      FUN_023ee754();
      uVar3 = (*pcVar4)();
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff10(param_1,0xfffffffe);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      goto LAB_023ef904;
    }
    FUN_0014ff10(param_1,0xfffffffe);
  }
  FUN_0014ff10(param_1,0xfffffffe);
LAB_023ef904:
  (*(code *)*param_3)(param_1,1,7,7,"value at this index does not properly reflect the desired type"
                     );
  return 0;
}


