/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03372fbc; name: FUN_03372fbc
 */


void FUN_03372fbc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = (undefined4)*param_2;
  uStack_2c = (undefined4)((ulong)*param_2 >> 0x20);
  local_40 = (undefined4)*param_3;
  uStack_3c = (undefined4)((ulong)*param_3 >> 0x20);
  local_28 = (undefined4)param_2[1];
  uStack_24 = (undefined4)((ulong)param_2[1] >> 0x20);
  local_38 = (undefined4)param_3[1];
  uStack_34 = (undefined4)((ulong)param_3[1] >> 0x20);
  FUN_03373040(&local_30,&local_40,&local_50,4);
  *param_1 = local_50;
  param_1[1] = local_48;
  return;
}


