/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001af124; name: FUN_001af124
 */


long FUN_001af124(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  FUN_001af760();
  if (param_2 != param_1) {
    pvVar3 = (void *)0x0;
    if (*(long *)(param_2 + 0x70) != 0) {
      pvVar3 = (void *)(*(long *)(param_2 + 0x70) + param_2 + 0x70);
    }
    plVar10 = (long *)(param_1 + 0x70);
    uVar4 = *(uint *)(param_2 + 0x78);
    uVar1 = *(uint *)(param_2 + 0x7c) & 0x7fffffff;
    if ((int)uVar1 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    lVar7 = *plVar10;
    if ((pvVar3 == (void *)0x0) || (uVar1 == 0)) {
      if ((int)*(uint *)(param_1 + 0x7c) < 0) {
        uVar1 = *(uint *)(param_1 + 0x7c) & 0x7fffffff;
        if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x78)) {
          uVar1 = *(uint *)(param_1 + 0x78);
        }
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + (long)plVar10;
        }
        lVar7 = tpidr_el0;
        lVar9 = *(long *)(lVar7 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar1 << 2);
      }
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    else {
      pvVar6 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar6 = (void *)(lVar7 + (long)plVar10);
      }
      uVar2 = *(uint *)(param_1 + 0x7c) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x78)) {
        uVar2 = *(uint *)(param_1 + 0x78);
      }
      if (uVar1 != uVar2) {
        if ((int)*(uint *)(param_1 + 0x7c) < 0) {
          pvVar6 = (void *)0x0;
          if (lVar7 != 0) {
            pvVar6 = (void *)(lVar7 + (long)plVar10);
          }
          lVar7 = tpidr_el0;
          lVar8 = *(long *)(lVar7 + 0x38d490);
          if (lVar8 == 0) {
            lVar8 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar8;
          }
          plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,pvVar6,(ulong)uVar2 << 2);
        }
        lVar7 = tpidr_el0;
        lVar8 = *(long *)(lVar7 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar8;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar1 << 2,0);
        uVar4 = *(uint *)(param_2 + 0x78);
      }
      memcpy(pvVar6,pvVar3,-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
      lVar7 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar7 = (long)pvVar6 - (long)plVar10;
      }
      *(long *)(param_1 + 0x70) = lVar7;
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
      uVar1 = *(uint *)(param_2 + 0x7c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 0x78)) {
        uVar1 = *(uint *)(param_2 + 0x78);
      }
      *(uint *)(param_1 + 0x7c) = uVar1 | 0x80000000;
    }
    plVar10 = (long *)(param_1 + 0x80);
    lVar7 = *plVar10;
    lVar8 = *(long *)(param_2 + 0x80);
    uVar1 = *(uint *)(param_2 + 0x88);
    pvVar3 = (void *)0x0;
    if (lVar8 != 0) {
      pvVar3 = (void *)(lVar8 + param_2 + 0x80);
    }
    uVar4 = *(uint *)(param_2 + 0x8c) & 0x7fffffff;
    if ((int)uVar4 <= (int)uVar1) {
      uVar4 = uVar1;
    }
    if ((pvVar3 == (void *)0x0) || (uVar4 == 0)) {
      if ((int)*(uint *)(param_1 + 0x8c) < 0) {
        uVar1 = *(uint *)(param_1 + 0x8c) & 0x7fffffff;
        if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x88)) {
          uVar1 = *(uint *)(param_1 + 0x88);
        }
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + (long)plVar10;
        }
        lVar7 = tpidr_el0;
        lVar9 = *(long *)(lVar7 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar1 << 3);
      }
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      pvVar6 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar6 = (void *)(lVar7 + (long)plVar10);
      }
      uVar2 = *(uint *)(param_1 + 0x8c) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x88)) {
        uVar2 = *(uint *)(param_1 + 0x88);
      }
      if (uVar4 != uVar2) {
        if ((int)*(uint *)(param_1 + 0x8c) < 0) {
          pvVar6 = (void *)0x0;
          if (lVar7 != 0) {
            pvVar6 = (void *)(lVar7 + (long)plVar10);
          }
          lVar7 = tpidr_el0;
          lVar8 = *(long *)(lVar7 + 0x38d490);
          if (lVar8 == 0) {
            lVar8 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar8;
          }
          plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,pvVar6,(ulong)uVar2 << 3);
        }
        lVar7 = tpidr_el0;
        lVar8 = *(long *)(lVar7 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar8;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar4 << 3,0);
        uVar1 = *(uint *)(param_2 + 0x88);
      }
      memcpy(pvVar6,pvVar3,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      lVar7 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar7 = (long)pvVar6 - (long)plVar10;
      }
      *(long *)(param_1 + 0x80) = lVar7;
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
      uVar1 = *(uint *)(param_2 + 0x8c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 0x88)) {
        uVar1 = *(uint *)(param_2 + 0x88);
      }
      *(uint *)(param_1 + 0x8c) = uVar1 | 0x80000000;
    }
    plVar10 = (long *)(param_1 + 0x90);
    lVar7 = *plVar10;
    lVar8 = *(long *)(param_2 + 0x90);
    uVar1 = *(uint *)(param_2 + 0x98);
    pvVar3 = (void *)0x0;
    if (lVar8 != 0) {
      pvVar3 = (void *)(lVar8 + param_2 + 0x90);
    }
    uVar4 = *(uint *)(param_2 + 0x9c) & 0x7fffffff;
    if ((int)uVar4 <= (int)uVar1) {
      uVar4 = uVar1;
    }
    if ((pvVar3 == (void *)0x0) || (uVar4 == 0)) {
      if ((int)*(uint *)(param_1 + 0x9c) < 0) {
        uVar1 = *(uint *)(param_1 + 0x9c) & 0x7fffffff;
        if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x98)) {
          uVar1 = *(uint *)(param_1 + 0x98);
        }
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + (long)plVar10;
        }
        lVar7 = tpidr_el0;
        lVar9 = *(long *)(lVar7 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar1 << 2);
      }
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    else {
      pvVar6 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar6 = (void *)(lVar7 + (long)plVar10);
      }
      uVar2 = *(uint *)(param_1 + 0x9c) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x98)) {
        uVar2 = *(uint *)(param_1 + 0x98);
      }
      if (uVar4 != uVar2) {
        if ((int)*(uint *)(param_1 + 0x9c) < 0) {
          pvVar6 = (void *)0x0;
          if (lVar7 != 0) {
            pvVar6 = (void *)(lVar7 + (long)plVar10);
          }
          lVar7 = tpidr_el0;
          lVar8 = *(long *)(lVar7 + 0x38d490);
          if (lVar8 == 0) {
            lVar8 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar8;
          }
          plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
          (**(code **)(*plVar5 + 0x18))(plVar5,pvVar6,(ulong)uVar2 << 2);
        }
        lVar7 = tpidr_el0;
        lVar8 = *(long *)(lVar7 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar8;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,(ulong)uVar4 << 2,0);
        uVar1 = *(uint *)(param_2 + 0x98);
      }
      memcpy(pvVar6,pvVar3,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
      lVar7 = 0;
      if (pvVar6 != (void *)0x0) {
        lVar7 = (long)pvVar6 - (long)plVar10;
      }
      *(long *)(param_1 + 0x90) = lVar7;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
      uVar1 = *(uint *)(param_2 + 0x9c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 0x98)) {
        uVar1 = *(uint *)(param_2 + 0x98);
      }
      *(uint *)(param_1 + 0x9c) = uVar1 | 0x80000000;
    }
  }
  return param_1;
}


