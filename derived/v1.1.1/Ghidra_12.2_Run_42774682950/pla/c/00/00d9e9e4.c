/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9e9e4; name: FUN_00d9e9e4
 */


void FUN_00d9e9e4(undefined8 *param_1,long *param_2)

{
  long local_30 [2];
  
  (**(code **)(*param_2 + 0x10))(local_30);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00d9f328(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_02a43934();
  }
  return;
}


