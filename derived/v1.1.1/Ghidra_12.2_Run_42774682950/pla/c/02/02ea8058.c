/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8058; name: FUN_02ea8058
 */


undefined8
FUN_02ea8058(undefined4 param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6,
            undefined4 param_7,byte param_8)

{
  int iVar1;
  long *plVar2;
  undefined4 local_98 [2];
  undefined8 local_90;
  int local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  int local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  int local_58;
  
  iVar1 = param_3 + param_4 * 0x10 + param_5 * 0x10000;
  local_68[0] = param_1;
  local_60 = param_2;
  local_58 = iVar1;
  plVar2 = (long *)FUN_02ea815c(local_68);
  if (plVar2 == (long *)0x0) {
    if (param_6 != 0) {
      local_98[0] = param_1;
      local_90 = param_2;
      local_88 = iVar1;
      plVar2 = (long *)FUN_02ea82a0(local_98);
      if (plVar2 != (long *)0x0) {
        *plVar2 = param_6;
        *(undefined4 *)(plVar2 + 1) = param_7;
        *(byte *)((long)plVar2 + 0xc) = param_8 & 1;
        return 1;
      }
      if ((param_8 & 1) != 0) {
        FUN_02f59e60(5,param_6);
      }
      return 0x34;
    }
  }
  else {
    if (*(char *)((long)plVar2 + 0xc) != '\0') {
      FUN_02f59e60(5,*plVar2);
    }
    if (param_6 != 0) {
      *plVar2 = param_6;
      *(undefined4 *)(plVar2 + 1) = param_7;
      *(byte *)((long)plVar2 + 0xc) = param_8 & 1;
      return 1;
    }
    local_80[0] = param_1;
    local_78 = param_2;
    local_70 = iVar1;
    FUN_02ea81e0(local_80);
  }
  return 1;
}


