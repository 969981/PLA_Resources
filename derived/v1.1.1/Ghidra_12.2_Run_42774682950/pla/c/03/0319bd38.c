/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319bd38; name: FUN_0319bd38
 */


void FUN_0319bd38(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    lVar7 = *(long *)*param_1;
    lVar1 = tpidr_el0;
    if (lVar7 != 0) {
      lVar5 = *(long *)(lVar1 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar5;
      }
      plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar7,0x10);
      iVar4 = (int)param_1[1];
    }
    if (1 < iVar4) {
      lVar7 = 1;
      do {
        lVar5 = *(long *)(*param_1 + lVar7 * 8);
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar1 + 0x38d490);
          if (lVar6 == 0) {
            lVar6 = FUN_0333d16c(0,1);
            *(long *)(lVar1 + 0x38d490) = lVar6;
          }
          plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,0x10);
          iVar4 = (int)param_1[1];
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar4);
    }
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,param_1[2],*(int *)((long)param_1 + 0x1c) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


