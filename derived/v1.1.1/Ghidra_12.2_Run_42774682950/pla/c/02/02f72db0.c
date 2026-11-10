/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f72db0; name: FUN_02f72db0
 */


void FUN_02f72db0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  long local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  long local_68;
  undefined *puStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48;
  
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x5f7ffff05f7ffff0;
  local_48 = 0;
  puStack_60 = PTR_DAT_04372498 + 0x10;
  uStack_98 = *(undefined8 *)(param_4 + 0x28);
  local_90 = 0;
  local_a0 = param_3;
  local_88 = param_1;
  local_80 = param_2;
  lStack_78 = param_4;
  local_70 = param_5;
  local_68 = param_6;
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    FUN_02f74ee8();
  }
  else {
    FUN_02f74d18(param_3 + 200,param_2 + 0x30,&local_a0);
  }
  return;
}


