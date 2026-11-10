/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305ab5c; name: FUN_0305ab5c
 */


void FUN_0305ab5c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar4 = tpidr_el0;
    lVar5 = *(long *)(lVar4 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar6,0x20);
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,param_1[1],*(int *)((long)param_1 + 0x14) << 2);
  }
  lVar6 = (long)(int)param_1[5];
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  if ((int)param_1[5] != 0) {
    plVar3 = (long *)param_1[4];
    iVar1 = *(int *)((long)plVar3 + lVar6 * 0x20 + -0x14);
    *(undefined4 *)(plVar3 + lVar6 * 4 + -3) = 0;
    if ((-1 < iVar1) && (lVar4 = plVar3[lVar6 * 4 + -4], lVar4 != 0)) {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar4,iVar1 << 2);
    }
    plVar3[lVar6 * 4 + -4] = 0;
    *(undefined4 *)((long)plVar3 + lVar6 * 0x20 + -0x14) = 0x80000000;
    if (plVar3 + lVar6 * 4 + -4 != plVar3) {
      iVar1 = *(int *)((long)plVar3 + lVar6 * 0x20 + -0x34);
      *(undefined4 *)(plVar3 + lVar6 * 4 + -7) = 0;
      if ((-1 < iVar1) && (lVar4 = plVar3[lVar6 * 4 + -8], lVar4 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar4,iVar1 << 2);
      }
      plVar3[lVar6 * 4 + -8] = 0;
      *(undefined4 *)((long)plVar3 + lVar6 * 0x20 + -0x34) = 0x80000000;
      if (plVar3 + lVar6 * 4 + -8 != plVar3) {
        lVar6 = lVar6 << 5;
        do {
          iVar1 = *(int *)((long)plVar3 + lVar6 + -0x54);
          *(undefined4 *)((long)plVar3 + lVar6 + -0x58) = 0;
          if ((-1 < iVar1) && (lVar4 = *(long *)((long)plVar3 + lVar6 + -0x60), lVar4 != 0)) {
            (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar4,iVar1 << 2);
          }
          lVar4 = lVar6 + -0x20;
          *(undefined8 *)((long)plVar3 + lVar6 + -0x60) = 0;
          *(undefined4 *)((long)plVar3 + lVar6 + -0x54) = 0x80000000;
          lVar6 = lVar4;
        } while (lVar4 != 0x40);
      }
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 5);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,param_1[1],*(int *)((long)param_1 + 0x14) << 2);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


