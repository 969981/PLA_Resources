/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a6078; name: FUN_032a6078
 */


void FUN_032a6078(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  *param_1 = uVar2;
  uVar2 = FUN_032a64f4();
  FUN_032a6744(param_1,uVar2);
  return;
}


