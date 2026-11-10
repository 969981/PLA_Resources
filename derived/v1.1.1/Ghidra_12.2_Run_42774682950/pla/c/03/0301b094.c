/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301b094; name: FUN_0301b094
 */


void FUN_0301b094(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  plVar3 = (long *)*param_1;
  lVar8 = *plVar3;
  if (1 < (int)param_1[1]) {
    lVar10 = 1;
    lVar4 = tpidr_el0;
    while( true ) {
      FUN_0301e490(plVar3[lVar10],*(undefined8 *)(lVar8 + 0x4e0));
      lVar9 = *(long *)(*param_1 + lVar10 * 8);
      if (lVar9 != 0) {
        FUN_0301db4c(lVar9);
        lVar5 = *(long *)(lVar4 + 0x38d490);
        if (lVar5 == 0) {
          lVar5 = FUN_0333d16c(0,1);
          *(long *)(lVar4 + 0x38d490) = lVar5;
        }
        plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar9,0x7c0);
      }
      lVar10 = lVar10 + 1;
      if ((int)param_1[1] <= lVar10) break;
      plVar3 = (long *)*param_1;
    }
  }
  FUN_032beab0(param_1 + 0xa8,*(undefined8 *)(lVar8 + 0x4e0));
  FUN_0301e490(lVar8,*(undefined8 *)(lVar8 + 0x4e0));
  lVar8 = *(long *)*param_1;
  if (lVar8 != 0) {
    FUN_0301db4c(lVar8);
    lVar10 = tpidr_el0;
    lVar4 = *(long *)(lVar10 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar4;
    }
    plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar8,0x7c0);
  }
  if (param_1[0xa8] != 0) {
    iVar2 = (int)param_1[0xab];
    if (*(char *)((long)param_1 + 0x54c) != '\0') {
      plVar3 = (long *)param_1[0xaa];
      if (iVar2 < 1) {
        plVar7 = plVar3;
      }
      else {
        plVar7 = plVar3;
        if (*plVar3 != 0) {
          *plVar3 = *plVar3;
          plVar7 = plVar3 + 1;
        }
        if (iVar2 != 1) {
          if (plVar3[1] != 0) {
            *plVar7 = plVar3[1];
            plVar7 = plVar7 + 1;
          }
          if (iVar2 != 2) {
            iVar2 = iVar2 + -2;
            plVar3 = plVar3 + 2;
            plVar6 = plVar7;
            do {
              plVar7 = plVar6;
              if (*plVar3 != 0) {
                plVar7 = plVar6 + 1;
                *plVar6 = *plVar3;
              }
              plVar3 = plVar3 + 1;
              iVar2 = iVar2 + -1;
              plVar6 = plVar7;
            } while (iVar2 != 0);
          }
        }
        plVar3 = plVar7;
        plVar7 = (long *)param_1[0xaa];
      }
      *(undefined1 *)((long)param_1 + 0x54c) = 0;
      iVar2 = (int)((ulong)((long)plVar3 - (long)plVar7) >> 3);
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1[0xa8] + 0x28))((long *)param_1[0xa8],param_1[0xaa]);
    }
    *(undefined4 *)(param_1 + 0xab) = 0;
    *(undefined4 *)(param_1 + 0xa9) = 0;
  }
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xab) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x55c)) && (param_1[0xaa] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xaa],((ulong)*(uint *)((long)param_1 + 0x55c) & 0x3fffffff) << 3);
  }
  param_1[0xaa] = 0;
  *(undefined4 *)((long)param_1 + 0x55c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x53c)) && (param_1[0xa6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xa6],((ulong)*(uint *)((long)param_1 + 0x53c) & 0x3fffffff) << 3);
  }
  param_1[0xa6] = 0;
  *(undefined4 *)((long)param_1 + 0x53c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x52c)) && (param_1[0xa4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xa4],((ulong)*(uint *)((long)param_1 + 0x52c) & 0x3fffffff) << 5);
  }
  param_1[0xa4] = 0;
  *(undefined4 *)((long)param_1 + 0x52c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


