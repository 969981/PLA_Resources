/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f6eb94; name: FUN_00f6eb94
 */


void FUN_00f6eb94(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_48 [8];
  
  uVar2 = FUN_00f6acec(param_1,param_2[1] + 1,param_2);
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar4 = (double)FUN_00150a90(param_1,iVar1 + 1,0);
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  uVar3 = FUN_00150da0(param_1,iVar1 + 1,auStack_48);
  (*(code *)*param_3)((float)dVar4,uVar2,uVar3);
  return;
}


