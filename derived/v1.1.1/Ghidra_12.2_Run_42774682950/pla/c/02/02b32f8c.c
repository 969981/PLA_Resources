/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b32f8c; name: FUN_02b32f8c
 */


void FUN_02b32f8c(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = *param_2;
  local_48 = param_2[1];
  local_40 = param_2[2];
  local_38 = (long *)param_2[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_70 = &DAT_cbf29ce484222645;
  bVar1 = *param_3;
  pbVar2 = param_3;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar2;
  }
  local_60 = 1;
  local_58 = (long *)0x0;
  local_90 = *param_4;
  local_88 = param_4[1];
  local_80 = param_4[2];
  local_78 = (long *)param_4[3];
  pbStack_68 = param_3;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  FUN_02b3543c(param_1,&local_50,&local_70,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


