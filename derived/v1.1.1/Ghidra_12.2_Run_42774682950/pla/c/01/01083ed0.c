/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01083ed0; name: FUN_01083ed0
 */


undefined8
FUN_01083ed0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

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
      uVar3 = FUN_01084020(param_1,uVar2);
      if (((((uVar3 & 1) == 0) && (uVar3 = FUN_010840c0(param_1,uVar2), (uVar3 & 1) == 0)) &&
          (uVar3 = FUN_01084160(param_1,uVar2), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_01084200(param_1,uVar2), (uVar3 & 1) == 0)) {
        FUN_0014ff10(param_1,0xfffffffe);
        pcVar6 = (code *)*param_3;
        pcVar5 = "value at this index does not properly reflect the desired type";
        iVar1 = 7;
        goto LAB_01083fd0;
      }
    }
    uVar4 = 1;
  }
  else {
    pcVar6 = (code *)*param_3;
    pcVar5 = "value is not a valid userdata";
LAB_01083fd0:
    (*pcVar6)(param_1,param_2,7,iVar1,pcVar5);
    uVar4 = 0;
  }
  return uVar4;
}


