/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03181514; name: FUN_03181514
 */


void FUN_03181514(undefined8 *param_1,undefined4 param_2)

{
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined1 auStack_40 [32];
  
  local_50 = 0;
  local_48[0] = param_2;
  FUN_03196810(*param_1,local_48,&local_50,auStack_40);
  FUN_001d4c1c(param_1[1],auStack_40,param_2);
  return;
}


