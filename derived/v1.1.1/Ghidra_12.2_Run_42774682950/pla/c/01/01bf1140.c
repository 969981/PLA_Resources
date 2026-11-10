/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf1140; name: FUN_01bf1140
 */


void FUN_01bf1140(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    if (param_2 != 1) goto LAB_01bf1168;
    uVar1 = 2;
  }
  FUN_01a51334(param_1,&DAT_03a7ccd8,uVar1);
LAB_01bf1168:
  FUN_01a4f4d4(param_1,&DAT_03a7cce0,1);
  FUN_01a4f4d4(param_1,&DAT_03a7cce8,0);
  return;
}


