/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5a4fc; name: FUN_02f5a4fc
 */


long * FUN_02f5a4fc(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  long *plVar4;
  void *__dest;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 != param_1) {
    uVar3 = *(uint *)(param_2 + 1);
    __src = (void *)0x0;
    if (*param_2 != 0) {
      __src = (void *)(*param_2 + (long)param_2);
    }
    lVar7 = *param_1;
    uVar1 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    if ((__src == (void *)0x0) || (uVar1 == 0)) {
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar3 <= (int)*(uint *)(param_1 + 1)) {
          uVar3 = *(uint *)(param_1 + 1);
        }
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar7 + (long)param_1;
        }
        lVar8 = tpidr_el0;
        lVar5 = *(long *)(lVar8 + 0x38d490);
        if (lVar5 == 0) {
          lVar5 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar5;
        }
        plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,(ulong)uVar3 << 7);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      pvVar6 = (void *)(lVar7 + (long)param_1);
      if (lVar7 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = pvVar6;
      }
      uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 1)) {
        uVar2 = *(uint *)(param_1 + 1);
      }
      if (uVar1 != uVar2) {
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          if (lVar7 == 0) {
            pvVar6 = (void *)0x0;
          }
          lVar7 = tpidr_el0;
          lVar8 = *(long *)(lVar7 + 0x38d490);
          if (lVar8 == 0) {
            lVar8 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar8;
          }
          plVar4 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,pvVar6,(ulong)uVar2 << 7);
        }
        lVar7 = tpidr_el0;
        lVar8 = *(long *)(lVar7 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar8;
        }
        plVar4 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(ulong)uVar1 << 7,0);
        uVar3 = *(uint *)(param_2 + 1);
      }
      memcpy(__dest,__src,-(ulong)(uVar3 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar3 << 7);
      if (__dest == (void *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (long)__dest - (long)param_1;
      }
      *param_1 = lVar7;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar3 <= (int)*(uint *)(param_2 + 1)) {
        uVar3 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar3 | 0x80000000;
    }
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}


