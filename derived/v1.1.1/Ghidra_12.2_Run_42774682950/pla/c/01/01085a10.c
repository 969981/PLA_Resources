/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01085a10; name: FUN_01085a10
 */


undefined8 FUN_01085a10(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  iVar1 = FUN_00150310(param_1,1);
  *param_3 = 1;
  param_3[1] = param_3[1] + 1;
  if (iVar1 == 7) {
    iVar1 = FUN_00152090(param_1,1);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = FUN_0014fef0(param_1);
    uVar3 = FUN_01084020(param_1,uVar2);
    if (((((uVar3 & 1) != 0) || (uVar3 = FUN_010840c0(param_1,uVar2), (uVar3 & 1) != 0)) ||
        (uVar3 = FUN_01084160(param_1,uVar2), (uVar3 & 1) != 0)) ||
       (uVar3 = FUN_01084200(param_1,uVar2), (uVar3 & 1) != 0)) {
      return 1;
    }
    FUN_0014ff10(param_1,0xfffffffe);
    (*(code *)*param_2)(param_1,1,7,7,
                        "value at this index does not properly reflect the desired type");
  }
  else {
    (*(code *)*param_2)(param_1,1,7,iVar1,"value is not a valid userdata");
  }
  return 0;
}


