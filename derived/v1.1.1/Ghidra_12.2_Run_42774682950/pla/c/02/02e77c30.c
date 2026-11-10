/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77c30; name: FUN_02e77c30
 */


int FUN_02e77c30(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint param_5,
                uint param_6)

{
  int iVar1;
  uint *__dest;
  undefined4 uVar2;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_68;
  uint *local_60;
  
  if (param_5 == 0) {
    iVar1 = 0x1f;
  }
  else {
    uVar2 = 2;
    if (param_1 != 0) {
      uVar2 = 3;
    }
    if (param_5 == 1) {
      param_4 = (uint *)(ulong)*param_4;
    }
    else if ((param_6 & 1) != 0) {
      __dest = (uint *)(*DAT_0442d138)(0,(ulong)param_5 << 2);
      if (__dest == (uint *)0x0) {
        return 0x34;
      }
      memcpy(__dest,param_4,(ulong)param_5 << 2);
      param_4 = __dest;
    }
    uStack_94 = 0;
    local_90 = 0;
    local_88 = 0;
    local_70 = 0;
    local_98 = uVar2;
    local_80 = param_2;
    uStack_78 = param_3;
    local_68 = param_5;
    local_60 = param_4;
    iVar1 = (**(code **)(*DAT_0440a148 + 0x20))(DAT_0440a148,&local_98);
    if ((param_5 != 1) && (iVar1 != 1)) {
      FUN_02f59e60(0,param_4);
    }
  }
  return iVar1;
}


