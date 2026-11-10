/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00833394; name: FUN_00833394
 */


void FUN_00833394(long *param_1,char *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined2 local_48 [4];
  undefined1 auStack_40 [8];
  uint local_38 [2];
  
  memset(local_38,0,4);
  if ((*param_2 == *PTR_DAT_04377e08) && (param_2[1] == PTR_DAT_04377e08[1])) {
    memset(local_38,0xff,4);
    local_38[0] = local_38[0] & 0xffffff;
  }
  else if (((char)param_1[0xfc] == *param_2) && (param_2[1] == -1)) {
    FUN_008311e8(auStack_40,*(undefined8 *)PTR_DAT_04377ce8);
    memcpy(local_38,auStack_40,4);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_3);
    local_38[0] = 1 << (ulong)(uVar1 & 0x1f) | local_38[0];
  }
  local_48[0] = 0;
  FUN_00846e20(param_1,param_3,local_38,param_4,local_48,param_5);
  return;
}


