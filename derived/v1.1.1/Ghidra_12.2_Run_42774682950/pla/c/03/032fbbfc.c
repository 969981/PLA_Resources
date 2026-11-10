/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fbbfc; name: FUN_032fbbfc
 */


long * FUN_032fbbfc(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong local_78;
  uint local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = *param_5;
  uVar2 = (uVar6 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  local_6c = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_6c = uVar2;
  }
  uVar2 = uVar6 & 0x3fffffff;
  local_78 = (ulong)local_6c << 3;
  if ((int)local_6c < (int)uVar2 || 0x3fffffff < (int)local_6c) {
    local_68 = 1;
    puStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar6 = *param_5;
    uVar2 = uVar6 & 0x3fffffff;
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    *plVar1 = *param_3;
    *param_3 = 0;
    if (param_4 != 1) {
      plVar1[1] = param_3[1];
      param_3[1] = 0;
      if (param_4 != 2) {
        lVar5 = (ulong)param_4 - 2;
        plVar3 = param_3 + 2;
        plVar4 = plVar1 + 2;
        do {
          lVar5 = lVar5 + -1;
          *plVar4 = *plVar3;
          *plVar3 = 0;
          plVar3 = plVar3 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar5 != 0);
      }
    }
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x10))();
    }
    if (param_4 != 1) {
      if ((long *)param_3[1] != (long *)0x0) {
        (**(code **)(*(long *)param_3[1] + 0x10))();
      }
      if (param_4 != 2) {
        lVar5 = (ulong)param_4 - 2;
        plVar3 = param_3 + 2;
        do {
          if ((long *)*plVar3 != (long *)0x0) {
            (**(code **)(*(long *)*plVar3 + 0x10))();
          }
          lVar5 = lVar5 + -1;
          plVar3 = plVar3 + 1;
        } while (lVar5 != 0);
      }
    }
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar2 << 3);
  }
  if (local_78 < 0x1fffffff8) {
    uVar6 = (uint)(local_78 >> 3);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return plVar1;
}


