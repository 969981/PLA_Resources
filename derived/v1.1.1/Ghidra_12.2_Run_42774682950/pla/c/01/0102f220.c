/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0102f220; name: FUN_0102f220
 */


undefined8
FUN_0102f220(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  
  iVar1 = FUN_00150310();
  *param_4 = 1;
  param_4[1] = param_4[1] + 1;
  if (iVar1 == 7) {
    iVar1 = FUN_00152090(param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0014fef0(param_1);
      uVar3 = FUN_0102f370(param_1,uVar2);
      if (((((uVar3 & 1) == 0) && (uVar3 = FUN_0102f410(param_1,uVar2), (uVar3 & 1) == 0)) &&
          (uVar3 = FUN_0102f4b0(param_1,uVar2), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_0102f550(param_1,uVar2), (uVar3 & 1) == 0)) {
        FUN_0014ff10(param_1,0xfffffffe);
        pcVar6 = (code *)*param_3;
        pcVar5 = "value at this index does not properly reflect the desired type";
        iVar1 = 7;
        goto LAB_0102f320;
      }
    }
    uVar4 = 1;
  }
  else {
    pcVar6 = (code *)*param_3;
    pcVar5 = "value is not a valid userdata";
LAB_0102f320:
    (*pcVar6)(param_1,param_2,7,iVar1,pcVar5);
    uVar4 = 0;
  }
  return uVar4;
}


