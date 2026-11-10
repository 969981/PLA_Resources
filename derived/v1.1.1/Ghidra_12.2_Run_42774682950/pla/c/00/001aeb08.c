/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001aeb08; name: FUN_001aeb08
 */


long * FUN_001aeb08(long *param_1,long *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 != param_1) {
    pvVar2 = (void *)0x0;
    if (*param_2 != 0) {
      pvVar2 = (void *)(*param_2 + (long)param_2);
    }
    uVar3 = *(uint *)(param_2 + 1);
    uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar7 <= (int)uVar3) {
      uVar7 = uVar3;
    }
    lVar8 = *param_1;
    if (pvVar2 == (void *)0x0 || uVar7 == 0) {
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar7 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar7 <= (int)*(uint *)(param_1 + 1)) {
          uVar7 = *(uint *)(param_1 + 1);
        }
        lVar10 = 0;
        if (lVar8 != 0) {
          lVar10 = lVar8 + (long)param_1;
        }
        lVar8 = tpidr_el0;
        lVar9 = *(long *)(lVar8 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar9;
        }
        plVar4 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar10,(ulong)uVar7 << 3);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      pvVar6 = (void *)0x0;
      if (lVar8 != 0) {
        pvVar6 = (void *)(lVar8 + (long)param_1);
      }
      uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 1)) {
        uVar1 = *(uint *)(param_1 + 1);
      }
      if (uVar7 != uVar1) {
        lVar10 = tpidr_el0;
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          pvVar6 = (void *)0x0;
          if (lVar8 != 0) {
            pvVar6 = (void *)(lVar8 + (long)param_1);
          }
          lVar8 = *(long *)(lVar10 + 0x38d490);
          if (lVar8 == 0) {
            lVar8 = FUN_0333d16c(0,1);
            *(long *)(lVar10 + 0x38d490) = lVar8;
          }
          plVar4 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,pvVar6,(ulong)uVar1 << 3);
        }
        lVar8 = *(long *)(lVar10 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar8;
        }
        plVar4 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(ulong)uVar7 << 3,0);
        uVar3 = *(uint *)(param_2 + 1);
      }
      memcpy(pvVar6,pvVar2,-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
      lVar8 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar8 = (long)pvVar6 - (long)param_1;
      }
      *param_1 = lVar8;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar7 <= (int)*(uint *)(param_2 + 1)) {
        uVar7 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar7 | 0x80000000;
    }
    plVar4 = param_1 + 2;
    lVar10 = *plVar4;
    lVar8 = param_2[2];
    uVar7 = *(uint *)(param_2 + 3);
    pvVar2 = (void *)0x0;
    if (lVar8 != 0) {
      pvVar2 = (void *)(lVar8 + (long)(param_2 + 2));
    }
    uVar3 = *(uint *)((long)param_2 + 0x1c) & 0x7fffffff;
    if ((int)uVar3 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    if ((pvVar2 == (void *)0x0) || (uVar3 == 0)) {
      if ((int)*(uint *)((long)param_1 + 0x1c) < 0) {
        uVar7 = *(uint *)((long)param_1 + 0x1c) & 0x7fffffff;
        if ((int)uVar7 <= (int)*(uint *)(param_1 + 3)) {
          uVar7 = *(uint *)(param_1 + 3);
        }
        lVar8 = 0;
        if (lVar10 != 0) {
          lVar8 = lVar10 + (long)plVar4;
        }
        lVar10 = tpidr_el0;
        lVar9 = *(long *)(lVar10 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,uVar7);
      }
      *plVar4 = 0;
      param_1[3] = 0;
    }
    else {
      pvVar6 = (void *)0x0;
      if (lVar10 != 0) {
        pvVar6 = (void *)(lVar10 + (long)plVar4);
      }
      uVar1 = *(uint *)((long)param_1 + 0x1c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 3)) {
        uVar1 = *(uint *)(param_1 + 3);
      }
      if (uVar3 != uVar1) {
        if ((int)*(uint *)((long)param_1 + 0x1c) < 0) {
          lVar8 = tpidr_el0;
          lVar10 = *(long *)(lVar8 + 0x38d490);
          if (lVar10 == 0) {
            lVar10 = FUN_0333d16c(0,1);
            *(long *)(lVar8 + 0x38d490) = lVar10;
          }
          plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,pvVar6,uVar1);
        }
        lVar8 = tpidr_el0;
        lVar10 = *(long *)(lVar8 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar10;
        }
        plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar3,0);
        uVar7 = *(uint *)(param_2 + 3);
      }
      memcpy(pvVar6,pvVar2,(long)(int)uVar7);
      lVar8 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar8 = (long)pvVar6 - (long)plVar4;
      }
      param_1[2] = lVar8;
      *(int *)(param_1 + 3) = (int)param_2[3];
      uVar7 = *(uint *)((long)param_2 + 0x1c) & 0x7fffffff;
      if ((int)uVar7 <= (int)*(uint *)(param_2 + 3)) {
        uVar7 = *(uint *)(param_2 + 3);
      }
      *(uint *)((long)param_1 + 0x1c) = uVar7 | 0x80000000;
    }
    plVar4 = param_1 + 4;
    lVar8 = *plVar4;
    lVar10 = param_2[4];
    uVar7 = *(uint *)(param_2 + 5);
    pvVar2 = (void *)0x0;
    if (lVar10 != 0) {
      pvVar2 = (void *)(lVar10 + (long)(param_2 + 4));
    }
    uVar3 = *(uint *)((long)param_2 + 0x2c) & 0x7fffffff;
    if ((int)uVar3 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    if ((pvVar2 == (void *)0x0) || (uVar3 == 0)) {
      if ((int)*(uint *)((long)param_1 + 0x2c) < 0) {
        uVar7 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
        if ((int)uVar7 <= (int)*(uint *)(param_1 + 5)) {
          uVar7 = *(uint *)(param_1 + 5);
        }
        lVar10 = 0;
        if (lVar8 != 0) {
          lVar10 = lVar8 + (long)plVar4;
        }
        lVar8 = tpidr_el0;
        lVar9 = *(long *)(lVar8 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,(ulong)uVar7 << 2);
      }
      *plVar4 = 0;
      param_1[5] = 0;
    }
    else {
      pvVar6 = (void *)0x0;
      if (lVar8 != 0) {
        pvVar6 = (void *)(lVar8 + (long)plVar4);
      }
      uVar1 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_1 + 5)) {
        uVar1 = *(uint *)(param_1 + 5);
      }
      if (uVar3 != uVar1) {
        if ((int)*(uint *)((long)param_1 + 0x2c) < 0) {
          pvVar6 = (void *)0x0;
          if (lVar8 != 0) {
            pvVar6 = (void *)(lVar8 + (long)plVar4);
          }
          lVar8 = tpidr_el0;
          lVar10 = *(long *)(lVar8 + 0x38d490);
          if (lVar10 == 0) {
            lVar10 = FUN_0333d16c(0,1);
            *(long *)(lVar8 + 0x38d490) = lVar10;
          }
          plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,pvVar6,(ulong)uVar1 << 2);
        }
        lVar8 = tpidr_el0;
        lVar10 = *(long *)(lVar8 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar10;
        }
        plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar3 << 2,0);
        uVar7 = *(uint *)(param_2 + 5);
      }
      memcpy(pvVar6,pvVar2,-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2);
      lVar8 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar8 = (long)pvVar6 - (long)plVar4;
      }
      param_1[4] = lVar8;
      *(int *)(param_1 + 5) = (int)param_2[5];
      uVar7 = *(uint *)((long)param_2 + 0x2c) & 0x7fffffff;
      if ((int)uVar7 <= (int)*(uint *)(param_2 + 5)) {
        uVar7 = *(uint *)(param_2 + 5);
      }
      *(uint *)((long)param_1 + 0x2c) = uVar7 | 0x80000000;
    }
  }
  return param_1;
}


