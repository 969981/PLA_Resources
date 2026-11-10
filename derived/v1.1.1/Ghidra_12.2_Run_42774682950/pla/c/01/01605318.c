/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01605318; name: FUN_01605318
 */


undefined8
FUN_01605318(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  
  *param_6 = 1;
  param_6[1] = param_6[1] + 1;
  if ((int)param_4 == 7) {
    iVar1 = FUN_00152090(param_2,param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_0014fef0(param_2);
      uVar3 = FUN_01604a40(param_2,uVar2);
      if (((((uVar3 & 1) == 0) && (uVar3 = FUN_01604ad0(param_2,uVar2), (uVar3 & 1) == 0)) &&
          (uVar3 = FUN_01604b60(param_2,uVar2), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_01604bf0(param_2,uVar2), (uVar3 & 1) == 0)) {
        if (*PTR_DAT_04380648 == '\0') {
LAB_01605468:
          FUN_0014ff10(param_2,0xfffffffe);
        }
        else {
          FUN_00151570(param_2,"class_check");
          FUN_00151d20(param_2,uVar2);
          iVar1 = FUN_00150310(param_2,0xffffffff);
          if (iVar1 == 0) {
            FUN_0014ff10(param_2,0xfffffffe);
            goto LAB_01605468;
          }
          pcVar5 = (code *)FUN_001511d0(param_2,0xffffffff);
          FUN_01602460();
          uVar3 = (*pcVar5)();
          FUN_0014ff10(param_2,0xfffffffe);
          FUN_0014ff10(param_2,0xfffffffe);
          if ((uVar3 & 1) != 0) goto LAB_016053ac;
        }
        pcVar5 = (code *)*param_5;
        pcVar6 = "value at this index does not properly reflect the desired type";
        param_4 = 7;
        goto LAB_016053cc;
      }
    }
LAB_016053ac:
    uVar4 = 1;
  }
  else {
    pcVar5 = (code *)*param_5;
    pcVar6 = "value is not a valid userdata";
LAB_016053cc:
    (*pcVar5)(param_2,param_3,7,param_4,pcVar6);
    uVar4 = 0;
  }
  return uVar4;
}


