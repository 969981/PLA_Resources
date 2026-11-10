/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9f020; name: FUN_02f9f020
 */


void FUN_02f9f020(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  
  if (*(short *)((long)param_1 + 0x1c) == 0) {
    return;
  }
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_44 = 0;
  local_4c = 0;
  FUN_02f9fbf8(param_1,&local_60);
  if (&local_60 == param_1) {
    lVar10 = *param_1;
    uVar5 = *(uint *)((long)param_1 + 0xc);
    goto LAB_02f9f1d4;
  }
  lVar10 = tpidr_el0;
  uVar9 = local_58._4_4_;
  if (-1 < (long)local_58) {
    uVar5 = local_58._4_4_ & 0x7fffffff;
    if ((int)(local_58._4_4_ & 0x7fffffff) <= (int)(uint)local_58) {
      uVar5 = (uint)local_58;
    }
    lVar6 = *(long *)(lVar10 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar6;
    }
    plVar2 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,(ulong)uVar5 << 5,0);
    pvVar4 = (void *)0x0;
    if (local_60 != 0) {
      pvVar4 = (void *)((long)&local_60 + local_60);
    }
    memcpy(pvVar3,pvVar4,(long)(int)(uint)local_58 << 5);
    if ((long)local_58 < 0) {
      uVar9 = local_58._4_4_ & 0x7fffffff;
      if ((int)(local_58._4_4_ & 0x7fffffff) <= (int)(uint)local_58) {
        uVar9 = (uint)local_58;
      }
      if (local_60 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = (long)&local_60 + local_60;
      }
      lVar8 = *(long *)(lVar10 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar8;
      }
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,(ulong)uVar9 << 5);
    }
    local_60 = 0;
    if (pvVar3 != (void *)0x0) {
      local_60 = (long)pvVar3 - (long)&local_60;
    }
    uVar9 = uVar5 | 0x80000000;
    local_58 = CONCAT44(uVar5,(uint)local_58) | 0x8000000000000000;
  }
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar5 < 0) {
    lVar6 = *param_1;
    if (local_60 != 0) goto LAB_02f9f220;
LAB_02f9f19c:
    local_60 = 0;
    uVar1 = (uint)local_58;
  }
  else {
    uVar9 = uVar5 & 0x7fffffff;
    if ((int)(uVar5 & 0x7fffffff) <= (int)*(uint *)(param_1 + 1)) {
      uVar9 = *(uint *)(param_1 + 1);
    }
    lVar6 = *(long *)(lVar10 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar6;
    }
    plVar2 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,(ulong)uVar9 << 5,0);
    pvVar4 = (void *)0x0;
    if (*param_1 != 0) {
      pvVar4 = (void *)(*param_1 + (long)param_1);
    }
    memcpy(pvVar3,pvVar4,(long)(int)param_1[1] << 5);
    if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
      uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar5 <= (int)*(uint *)(param_1 + 1)) {
        uVar5 = *(uint *)(param_1 + 1);
      }
      if (*param_1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *param_1 + (long)param_1;
      }
      lVar8 = *(long *)(lVar10 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar8;
      }
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,(ulong)uVar5 << 5);
    }
    lVar6 = 0;
    if (pvVar3 != (void *)0x0) {
      lVar6 = (long)pvVar3 - (long)param_1;
    }
    uVar5 = uVar9 | 0x80000000;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar5;
    uVar9 = local_58._4_4_;
    if (local_60 == 0) goto LAB_02f9f19c;
LAB_02f9f220:
    local_60 = (long)&local_60 + local_60;
    uVar1 = (uint)local_58;
  }
  if (lVar6 != 0) {
    lVar6 = lVar6 + (long)param_1;
  }
  lVar10 = 0;
  if (lVar6 != 0) {
    lVar10 = lVar6 - (long)&local_60;
  }
  lVar6 = 0;
  if (local_60 != 0) {
    lVar6 = local_60 - (long)param_1;
  }
  *param_1 = lVar6;
  local_58 = CONCAT44(uVar5,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(uint *)((long)param_1 + 0xc) = uVar9;
  local_60 = lVar10;
LAB_02f9f1d4:
  lVar6 = param_1[2];
  *(undefined2 *)(param_1 + 2) = local_50;
  *(undefined2 *)((long)param_1 + 0x1c) = 1;
  if ((int)uVar5 < 0) {
    uVar9 = uVar5 & 0x7fffffff;
    if ((int)(uVar5 & 0x7fffffff) <= (int)(uint)local_58) {
      uVar9 = (uint)local_58;
    }
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (long)&local_60 + lVar10;
    }
    lVar8 = tpidr_el0;
    lVar7 = *(long *)(lVar8 + 0x38d490);
    local_50 = (short)lVar6;
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar7;
    }
    plVar2 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar10,(ulong)uVar9 << 5);
  }
  return;
}


