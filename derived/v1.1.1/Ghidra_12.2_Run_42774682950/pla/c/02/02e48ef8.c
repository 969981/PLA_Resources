/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e48ef8; name: FUN_02e48ef8
 */


void FUN_02e48ef8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 8) != 0) {
    uStack_28 = param_2[1];
    local_30 = *param_2;
    uStack_18 = param_3[1];
    local_20 = *param_3;
    local_34 = 1;
    FUN_02e4b1b8((int)param_1,&local_30,param_4,(long *)(param_1 + 8),&local_34);
  }
  return;
}


