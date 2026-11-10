/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126c24c; name: FUN_0126c24c
 */


void FUN_0126c24c(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 3) = param_2;
  FUN_02814e04();
  switch(param_2) {
  case 1:
    FUN_0126c314(param_1);
    break;
  case 2:
    FUN_0126c314(param_1);
    uVar1 = 1;
    goto LAB_0126c2bc;
  case 3:
    FUN_0126c314(param_1);
    FUN_0126c534(param_1);
    break;
  case 4:
    FUN_0126c314(param_1);
    FUN_0126c534(param_1);
    uVar1 = 2;
LAB_0126c2bc:
    FUN_0126c420(param_1,uVar1);
  }
  FUN_02814a44(param_1[2],1);
  return;
}


