/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49128; name: FUN_02e49128
 */


void FUN_02e49128(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 8) != 0) {
    uStack_18 = *param_4;
    local_20 = 0;
    uStack_38 = param_2[1];
    local_40 = *param_2;
    uStack_28 = param_3[1];
    local_30 = *param_3;
    local_44 = 1;
    FUN_02e49aec(param_1,&local_40,(long *)(param_1 + 8),0,&local_44);
  }
  return;
}


