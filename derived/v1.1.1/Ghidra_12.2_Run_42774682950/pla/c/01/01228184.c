/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01228184; name: FUN_01228184
 */


void FUN_01228184(long param_1,uint param_2)

{
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_00d42438(param_1,param_2 & 1,1);
  local_50 = 0x3bef11b613fbf41d;
  pcStack_48 = "InputCancel";
  local_40 = 0xb;
  uStack_38 = 0;
  FUN_01227914(param_1,&local_50,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00d428b0(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  return;
}


