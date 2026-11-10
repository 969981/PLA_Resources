/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bfe204; name: FUN_00bfe204
 */


void FUN_00bfe204(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auStack_40 [32];
  undefined1 *local_18;
  
  local_18 = &DAT_cbf29ce484222645;
  FUN_0108c148(*param_3,(int)((ulong)*param_3 >> 0x20),(int)param_3[1],0,param_1,auStack_40,param_4,
               &local_18);
  FUN_00bfe270(param_2 + 0x150,auStack_40);
  return;
}


