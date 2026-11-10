/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0266dacc; name: FUN_0266dacc
 */


void FUN_0266dacc(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    if (param_2 != 1) goto LAB_0266daf4;
    uVar1 = 2;
  }
  FUN_01a51334(param_1,&DAT_03a7dc30,uVar1);
LAB_0266daf4:
  FUN_01a4f4d4(param_1,&DAT_03a7dc38,1);
  FUN_01a4f4d4(param_1,&DAT_03a7dc40,0);
  return;
}


