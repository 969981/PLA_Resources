/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6160; name: FUN_030f6160
 */


void FUN_030f6160(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04388898 + 0x10);
  if (0 < (int)param_1[4]) {
    lVar6 = 0;
    lVar1 = tpidr_el0;
    do {
      FUN_030f6088(*(undefined8 *)(param_1[3] + lVar6 * 8));
      lVar4 = *(long *)(param_1[3] + lVar6 * 8);
      if (lVar4 != 0) {
        FUN_030f6350(lVar4);
        lVar5 = *(long *)(lVar1 + 0x38d490);
        if (lVar5 == 0) {
          lVar5 = FUN_0333d16c(0,1);
          *(long *)(lVar1 + 0x38d490) = lVar5;
        }
        plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,2000);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[4]);
  }
  puVar2 = PTR_PTR_0434a080;
  lVar6 = param_1[0xa6];
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(lVar6 + 0x24)) && (*(long *)(lVar6 + 0x18) != 0)) {
      (**(code **)(*(long *)puVar2 + 0x18))
                (puVar2,*(long *)(lVar6 + 0x18),((ulong)*(uint *)(lVar6 + 0x24) & 0x3fffffff) << 6);
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined4 *)(lVar6 + 0x24) = 0x80000000;
    FUN_030fb874(lVar6);
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar6,0x28);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) << 3);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


