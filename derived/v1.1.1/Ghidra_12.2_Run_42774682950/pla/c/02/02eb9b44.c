/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9b44; name: FUN_02eb9b44
 */


void FUN_02eb9b44(undefined4 param_1,long param_2,undefined4 param_3,undefined8 *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = param_3;
  local_24 = param_1;
  iVar2 = FUN_02eb9c74();
  local_58 = *param_4;
  local_50 = param_4[1];
  local_48 = param_4[2];
  local_40 = param_4[3];
  local_38 = param_4[4];
  local_30 = param_4[5];
  if (0 < iVar2) {
    local_30 = 0;
    if (*(char *)(param_4 + 4) != -1) {
      local_50 = local_50 & 0xffffffff00000000;
    }
    if (1 < iVar2) {
      uVar1 = (ulong)local_40 >> 8;
      local_40 = CONCAT71((int7)uVar1,0xff);
      uVar1 = (ulong)local_38 >> 8;
      local_38 = CONCAT71((int7)uVar1,0xff);
      local_48 = local_48 & 0xffffffff00000000;
      local_50 = local_50 & 0xffffffff00000000;
      if (iVar2 != 2) {
        local_58 = 0;
      }
    }
  }
  FUN_02eb9be4(param_2 + 0x38,&local_58,&local_28);
  return;
}


