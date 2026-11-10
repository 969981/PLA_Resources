/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e60bf4; name: FUN_02e60bf4
 */


void FUN_02e60bf4(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  long local_68;
  long lStack_60;
  long local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 auStack_48 [8];
  long local_38;
  
  *param_1 = *(long *)(param_5 + 0x78) + 8;
  FUN_02e54670(param_4,&local_38,auStack_48);
  FUN_02e54a80(&local_88,param_4,local_38 != param_5);
  local_68 = param_3 + 0x40;
  lStack_60 = param_3 + 0x28;
  local_50 = *(undefined4 *)(param_2 + 0x58);
  local_58 = param_3 + 8;
  local_4c = 0x100;
  local_70 = local_80;
  lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x10);
  local_88 = *(undefined4 *)(lVar1 + 0x78);
  uStack_84 = *(undefined4 *)(lVar1 + 0x7c);
  local_80 = *(undefined4 *)(lVar1 + 0x80);
  FUN_02e6075c(param_1,&local_88,param_2 + 0x60,local_78,1,0);
  return;
}


