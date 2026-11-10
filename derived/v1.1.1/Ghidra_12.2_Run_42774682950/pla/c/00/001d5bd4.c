/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d5bd4; name: FUN_001d5bd4
 */


long * FUN_001d5bd4(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  void *__src;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if (param_2 != param_1) {
    __src = (void *)0x0;
    if (*param_2 != 0) {
      __src = (void *)(*param_2 + (long)param_2);
    }
    uVar8 = *(uint *)(param_2 + 1);
    uVar1 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar1 <= (int)uVar8) {
      uVar1 = uVar8;
    }
    lVar6 = *param_1;
    if (__src == (void *)0x0 || uVar1 == 0) {
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar1 <= (int)*(uint *)(param_1 + 1)) {
          uVar1 = *(uint *)(param_1 + 1);
        }
        lVar3 = 0;
        if (lVar6 != 0) {
          lVar3 = lVar6 + (long)param_1;
        }
        lVar6 = tpidr_el0;
        lVar7 = *(long *)(lVar6 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar7;
        }
        plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,(ulong)uVar1 * 0x30);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      pvVar5 = (void *)0x0;
      if (lVar6 != 0) {
        pvVar5 = (void *)(lVar6 + (long)param_1);
      }
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 1)) {
        uVar2 = *(uint *)(param_1 + 1);
      }
      if (uVar1 != uVar2) {
        lVar3 = tpidr_el0;
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          pvVar5 = (void *)0x0;
          if (lVar6 != 0) {
            pvVar5 = (void *)(lVar6 + (long)param_1);
          }
          lVar6 = *(long *)(lVar3 + 0x38d490);
          if (lVar6 == 0) {
            lVar6 = FUN_0333d16c(0,1);
            *(long *)(lVar3 + 0x38d490) = lVar6;
          }
          plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,pvVar5,(ulong)uVar2 * 0x30);
        }
        lVar6 = *(long *)(lVar3 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar3 + 0x38d490) = lVar6;
        }
        plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(ulong)uVar1 * 0x30,0);
        uVar8 = *(uint *)(param_2 + 1);
      }
      memcpy(pvVar5,__src,(long)(int)uVar8 * 0x30);
      lVar6 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar6 = (long)pvVar5 - (long)param_1;
      }
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar1 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 1)) {
        uVar1 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar1 | 0x80000000;
    }
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}


