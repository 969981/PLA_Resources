/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173220; name: FUN_00173220
 */


void FUN_00173220(undefined8 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00150310();
  if (iVar1 == 5) {
    return;
  }
  iVar1 = FUN_00152090(param_1,param_2);
  if (iVar1 == 0) {
LAB_00173308:
    FUN_00154970(param_1,param_2,5);
    return;
  }
  if ((param_3 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    FUN_00151570(param_1,"__index");
    iVar1 = FUN_00151d20(param_1,0xfffffffe);
    if (iVar1 == 0) goto LAB_00173308;
    uVar2 = 2;
  }
  if ((param_3 >> 1 & 1) != 0) {
    FUN_00151570(param_1,"__newindex");
    iVar1 = FUN_00151d20(param_1,~uVar2);
    if (iVar1 == 0) goto LAB_00173308;
    uVar2 = uVar2 + 1;
  }
  if ((param_3 >> 2 & 1) != 0) {
    FUN_00151570(param_1,"__len");
    iVar1 = FUN_00151d20(param_1,~uVar2);
    if (iVar1 == 0) goto LAB_00173308;
    uVar2 = uVar2 + 1;
  }
  FUN_0014ff10(param_1,~uVar2);
  return;
}


