/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030daec; name: FUN_0030daec
 */


undefined8 FUN_0030daec(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
                    /* try { // try from 0030db04 to 0030db37 has its CatchHandler @ 0030dbf4 */
  uVar2 = FUN_00311a00(param_2,&local_38);
  if (((uVar2 & 1) == 0) || (*(char *)(param_2 + 0x24) == '\0')) {
    uVar3 = 0;
    if (local_38 != local_30) {
                    /* try { // try from 0030dbcc to 0030dbd3 has its CatchHandler @ 0030dbe0 */
      uVar3 = 0;
      FUN_0030cac0(&local_38);
    }
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == param_1[1]) {
      if (lVar1 != 0) {
        param_1[1] = lVar1;
        FUN_002e2ea0(PTR_LAB_04373088);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      *param_1 = local_38;
      param_1[1] = local_30;
      param_1[2] = local_28;
      local_28 = 0;
      local_38 = 0;
    }
    else {
      FUN_0030d0c8(param_1,param_1[1],local_38,local_30);
    }
    uVar3 = 1;
  }
  if (local_38 != 0) {
    local_30 = local_38;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar3;
}


