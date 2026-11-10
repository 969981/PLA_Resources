/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6db0; name: FUN_030f6db0
 */


void FUN_030f6db0(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_030fb800();
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  if (param_2 < 1) {
    uVar1 = 0;
    iVar2 = 0;
    if (param_2 == 0) goto LAB_030f6e08;
  }
  else {
    uVar1 = FUN_030f6e44(PTR_PTR_0434a080,param_2,param_1 + 9);
    *(undefined8 *)(param_1 + 6) = uVar1;
    iVar2 = param_1[8];
    if (param_1[8] == param_2) goto LAB_030f6e08;
  }
  param_1[8] = param_2;
  iVar2 = param_2;
LAB_030f6e08:
  param_1[4] = param_2 + -1;
  FUN_032c4b00(uVar1,0xff,iVar2 << 6);
  *param_1 = 1;
  return;
}


