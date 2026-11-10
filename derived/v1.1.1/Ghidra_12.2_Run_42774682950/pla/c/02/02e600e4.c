/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e600e4; name: FUN_02e600e4
 */


void FUN_02e600e4(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  long local_38;
  
  *param_1 = *(long *)(param_3 + 0x78) + 8;
  local_40 = 0;
  local_38 = 0;
  FUN_02e54670(param_2,&local_38,&local_40);
  if (local_38 == param_3) {
    FUN_02e54a80(auStack_50,param_2,0);
    param_2 = param_2 + 0x620;
  }
  else {
    FUN_02e54a80(auStack_50,param_2,1);
    param_2 = param_2 + 0x658;
  }
  FUN_02e5ff18(param_1,auStack_50,param_2,*(undefined4 *)((long)param_1 + 0x1c),param_4);
  return;
}


