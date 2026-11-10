/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c3ebc; name: FUN_030c3ebc
 */


void FUN_030c3ebc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = param_1[9];
  *param_1 = (long)&PTR_LAB_042b4998;
  lVar6 = tpidr_el0;
  if (lVar4 != 0) {
    lVar3 = *(long *)(lVar6 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar3;
    }
    plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,0xa0);
  }
  lVar3 = (long)(int)param_1[3] << 10;
  lVar5 = param_1[8];
  lVar4 = *(long *)(lVar6 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1,lVar3);
    *(long *)(lVar6 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar3);
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[0xf],*(int *)((long)param_1 + 0x84) << 2);
  }
  lVar6 = (long)(int)param_1[0xe];
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  if ((int)param_1[0xe] != 0) {
    plVar7 = (long *)param_1[0xd];
    plVar2 = plVar7 + lVar6 * 4 + -4;
    (**(code **)(*plVar2 + 8))(plVar2);
    if (plVar2 != plVar7) {
      plVar2 = plVar7 + lVar6 * 4 + -8;
      (**(code **)(*plVar2 + 8))(plVar2);
      if (plVar2 != plVar7) {
        lVar6 = lVar6 << 5;
        do {
          (**(code **)(*(long *)((long)plVar7 + lVar6 + -0x60) + 8))();
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0x40);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xd],((ulong)*(uint *)((long)param_1 + 0x74) & 0x3fffffff) << 5);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < *(int *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[0xb],*(int *)((long)param_1 + 100) << 2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 3);
  }
  param_1[4] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


