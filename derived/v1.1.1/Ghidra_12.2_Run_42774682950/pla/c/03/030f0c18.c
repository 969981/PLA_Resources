/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f0c18; name: FUN_030f0c18
 */


void FUN_030f0c18(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x918);
  if (plVar7 == (long *)0x0) {
    lVar3 = tpidr_el0;
    lVar6 = *(long *)(lVar3 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar6;
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x28,0);
    FUN_030f14b8(plVar7,param_1);
    *(long **)(param_1 + 0x918) = plVar7;
  }
  uVar4 = *(uint *)(plVar7 + 1);
  lVar3 = *plVar7;
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      if (*(long *)(lVar3 + uVar5 * 8) == param_2) {
        if ((int)uVar5 != -1) goto LAB_030f0ca0;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  iVar1 = uVar4 + 1;
  if ((int)(*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) <= (int)uVar4) {
    lVar3 = FUN_030f16e0(PTR_PTR_0434a080,iVar1);
    uVar4 = *(uint *)(plVar7 + 1);
    *plVar7 = lVar3;
  }
  *(long *)(lVar3 + (long)(int)uVar4 * 8) = param_2;
  *(int *)(plVar7 + 1) = iVar1;
  FUN_030f1558(plVar7 + 2,plVar7[4],param_2);
LAB_030f0ca0:
  puVar2 = (ulong *)(param_1 + 0x7e0);
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  plVar7 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x28,0);
  *plVar7 = (long)(PTR_DAT_04388248 + 0x10);
  plVar7[1] = *puVar2 & 0xfffffffffffffffc;
  plVar7[2] = param_2;
  *puVar2 = *puVar2 & 3 | (ulong)plVar7;
  *plVar7 = (long)&PTR_LAB_042b52c8;
  plVar7[3] = (long)&LAB_030f18d8;
  plVar7[4] = 0;
  return;
}


