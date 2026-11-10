/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112b108; name: FUN_0112b108
 */


void FUN_0112b108(long param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  long local_38;
  
  uVar1 = FUN_0112b390();
  local_38 = param_1 + 0x118;
  local_40 = 4;
  FUN_0112b6dc(uVar1,&local_38,&local_40);
  local_38 = param_1 + 0x11c;
  local_40 = 4;
  FUN_0112b804(uVar1,&local_38,&local_40);
  local_38 = param_1 + 0x120;
  local_40 = 0x38;
  FUN_0112b92c(uVar1,&local_38,&local_40);
  FUN_010d8f8c(uVar1,&DAT_03a78fa4,param_1 + 0x158);
  local_38 = param_1 + 0x160;
  local_40 = 8;
  FUN_0112ba54(uVar1,&DAT_03a78fa8,&local_38,&local_40);
  local_38 = param_1 + 0x168;
  local_40 = 8;
  FUN_0112ba54(uVar1,&DAT_03a78fac,&local_38,&local_40);
  FUN_010d8f8c(uVar1,&DAT_03a78fb0,param_1 + 0x170);
  local_38 = param_1 + 0x178;
  local_40 = 0xd0;
  FUN_0112bb7c(uVar1,&local_38,&local_40);
  return;
}


