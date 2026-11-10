/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa40f4; name: FUN_02fa40f4
 */


void FUN_02fa40f4(long *param_1,undefined4 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int local_24;
  
  (**(code **)(*param_1 + 0x20))(param_1,&local_24,&local_28);
  FUN_02fa4180(param_1,local_24 + -1,local_28 + -1,0,0,local_24 + -1,local_28 + -1,&uStack_30,
               &local_38);
  FUN_02fa4940(uStack_30,local_38,param_1,param_2);
  return;
}


