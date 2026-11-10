/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fca6d4; name: FUN_02fca6d4
 */


void FUN_02fca6d4(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_02fcb1fc(param_1,&local_60);
    lVar2 = tpidr_el0;
    if (&local_60 == param_1) {
      lVar7 = *param_1;
      uVar6 = *(uint *)((long)param_1 + 0xc);
    }
    else {
      uVar8 = local_58._4_4_;
      if (-1 < (long)local_58) {
        uVar6 = local_58._4_4_ & 0x7fffffff;
        if ((int)(local_58._4_4_ & 0x7fffffff) <= (int)(uint)local_58) {
          uVar6 = (uint)local_58;
        }
        lVar7 = *(long *)(lVar2 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar7;
        }
        plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(ulong)uVar6 * 0x30,0);
        pvVar1 = (void *)0x0;
        if (local_60 != 0) {
          pvVar1 = (void *)(local_60 + (long)&local_60);
        }
        memcpy(pvVar5,pvVar1,(long)(int)(uint)local_58 * 0x30);
        if ((long)local_58 < 0) {
          uVar8 = local_58._4_4_ & 0x7fffffff;
          if ((int)(local_58._4_4_ & 0x7fffffff) <= (int)(uint)local_58) {
            uVar8 = (uint)local_58;
          }
          lVar7 = 0;
          if (local_60 != 0) {
            lVar7 = local_60 + (long)&local_60;
          }
          lVar9 = *(long *)(lVar2 + 0x38d490);
          if (lVar9 == 0) {
            lVar9 = FUN_0333d16c(0,1);
            *(long *)(lVar2 + 0x38d490) = lVar9;
          }
          plVar4 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,(ulong)uVar8 * 0x30);
        }
        if (pvVar5 == (void *)0x0) {
          local_60 = 0;
        }
        else {
          local_60 = (long)pvVar5 - (long)&local_60;
        }
        uVar8 = uVar6 | 0x80000000;
        local_58 = CONCAT44(uVar6,(uint)local_58) | 0x8000000000000000;
      }
      uVar6 = *(uint *)((long)param_1 + 0xc);
      if ((int)uVar6 < 0) {
        lVar9 = *param_1;
      }
      else {
        uVar8 = uVar6 & 0x7fffffff;
        if ((int)(uVar6 & 0x7fffffff) <= (int)*(uint *)(param_1 + 1)) {
          uVar8 = *(uint *)(param_1 + 1);
        }
        lVar7 = *(long *)(lVar2 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar7;
        }
        plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(ulong)uVar8 * 0x30,0);
        pvVar1 = (void *)0x0;
        if (*param_1 != 0) {
          pvVar1 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar5,pvVar1,(long)(int)param_1[1] * 0x30);
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          uVar6 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          if ((int)uVar6 <= (int)*(uint *)(param_1 + 1)) {
            uVar6 = *(uint *)(param_1 + 1);
          }
          lVar7 = 0;
          if (*param_1 != 0) {
            lVar7 = *param_1 + (long)param_1;
          }
          lVar9 = *(long *)(lVar2 + 0x38d490);
          if (lVar9 == 0) {
            lVar9 = FUN_0333d16c(0,1);
            *(long *)(lVar2 + 0x38d490) = lVar9;
          }
          plVar4 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,(ulong)uVar6 * 0x30);
        }
        if (pvVar5 == (void *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (long)pvVar5 - (long)param_1;
        }
        uVar6 = uVar8 | 0x80000000;
        *param_1 = lVar9;
        *(uint *)((long)param_1 + 0xc) = uVar6;
        uVar8 = local_58._4_4_;
      }
      lVar10 = 0;
      if (local_60 != 0) {
        lVar10 = local_60 + (long)&local_60;
      }
      lVar7 = 0;
      if (lVar9 != 0) {
        lVar7 = lVar9 + (long)param_1;
      }
      if (lVar7 != 0) {
        lVar7 = lVar7 - (long)&local_60;
      }
      if (lVar10 != 0) {
        lVar10 = lVar10 - (long)param_1;
      }
      *param_1 = lVar10;
      uVar3 = (uint)local_58;
      local_58 = CONCAT44(uVar6,(int)param_1[1]);
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      local_60 = lVar7;
    }
    uVar3 = (undefined4)local_50;
    local_50 = CONCAT44(local_50._4_4_,(int)param_1[2]);
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(undefined4 *)((long)param_1 + 0x1c) = 1;
    if ((int)uVar6 < 0) {
      uVar8 = uVar6 & 0x7fffffff;
      if ((int)(uVar6 & 0x7fffffff) <= (int)(uint)local_58) {
        uVar8 = (uint)local_58;
      }
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = (long)&local_60 + lVar7;
      }
      lVar7 = *(long *)(lVar2 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar7;
      }
      plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar9,(ulong)uVar8 * 0x30);
    }
  }
  return;
}


