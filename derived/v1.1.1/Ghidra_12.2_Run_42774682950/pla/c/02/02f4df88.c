/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4df88; name: FUN_02f4df88
 */


void FUN_02f4df88(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined **local_60;
  uint local_58;
  long local_50;
  undefined8 local_48;
  undefined **local_40;
  int local_38;
  
  local_38 = 0;
  local_40 = &PTR_LAB_042af0a0;
  *param_1 = 0;
  param_1[1] = -0x100000000;
  iVar2 = FUN_02f4e3a4(param_2,&local_40);
  if (iVar2 != 1) {
    return;
  }
  local_60 = &PTR_LAB_042a8fc0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (0 < local_38) {
    local_58 = local_38 + 0x7fe;
    if (-1 < (int)(local_38 + 0x3ffU)) {
      local_58 = local_38 + 0x3ffU;
    }
    local_58 = local_58 & 0xfffffc00;
    lVar3 = (*DAT_0442d148)(0,0,(long)(int)local_58);
    if (lVar3 == 0) {
      local_58 = 0;
      goto LAB_02f4e054;
    }
    local_50 = lVar3;
  }
  iVar2 = FUN_02f4e3a4(param_2,&local_60);
  lVar3 = local_50;
  if (iVar2 == 1) {
    local_50 = 0;
    local_58 = 0;
    uVar1 = (undefined4)local_48;
    local_48 = local_48 & 0xffffffff00000000;
    *param_1 = lVar3;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
LAB_02f4e054:
  local_60 = &PTR_LAB_042a8fc0;
  if (local_50 != 0) {
    (*DAT_0442d150)(local_48._4_4_);
  }
  return;
}


