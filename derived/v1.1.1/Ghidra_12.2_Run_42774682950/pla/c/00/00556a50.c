/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00556a50; name: FUN_00556a50
 */


int FUN_00556a50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (*(code *)*param_5)(param_2,param_1);
  uVar2 = (*(code *)*param_5)(param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      iVar4 = 0;
      goto LAB_00556b34;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_5)(param_2,param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      goto LAB_00556b20;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_5)(param_3,param_2);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
LAB_00556b20:
        iVar4 = 2;
        goto LAB_00556b34;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  iVar4 = 1;
LAB_00556b34:
  uVar1 = (*(code *)*param_5)(param_4,param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar1 = (*(code *)*param_5)(param_3,param_2);
    if ((uVar1 & 1) == 0) {
      iVar4 = iVar4 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_5)(param_2,param_1);
      if ((uVar1 & 1) == 0) {
        iVar4 = iVar4 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar4 = iVar4 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar4;
}


