/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa3134; name: FUN_02fa3134
 */


void FUN_02fa3134(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  iVar3 = (int)param_1[1];
  lVar4 = tpidr_el0;
  if (0 < iVar3) {
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + (long)param_1;
    }
    lVar7 = lVar7 + (long)iVar3 * 0x18;
    uVar2 = *(uint *)(lVar7 + -0xc);
    plVar6 = (long *)(lVar7 + -0x18);
    while( true ) {
      if ((int)uVar2 < 0) {
        uVar1 = uVar2 & 0x7fffffff;
        if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(plVar6 + 1)) {
          uVar1 = *(uint *)(plVar6 + 1);
        }
        lVar7 = 0;
        if (*plVar6 != 0) {
          lVar7 = *plVar6 + (long)plVar6;
        }
        lVar8 = *(long *)(lVar4 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar4 + 0x38d490) = lVar8;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,(ulong)uVar1 << 2);
      }
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      uVar2 = *(uint *)((long)plVar6 + -0xc);
      plVar6 = plVar6 + -3;
    }
  }
  if (-1 < (int)*(uint *)((long)param_1 + 0xc)) {
    return;
  }
  uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  if ((int)uVar2 <= (int)*(uint *)(param_1 + 1)) {
    uVar2 = *(uint *)(param_1 + 1);
  }
  lVar7 = 0;
  if (*param_1 != 0) {
    lVar7 = *param_1 + (long)param_1;
  }
  lVar8 = *(long *)(lVar4 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1,(ulong)uVar2 * 0x18);
    *(long *)(lVar4 + 0x38d490) = lVar8;
  }
  plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x02fa32a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,(ulong)uVar2 * 0x18);
  return;
}


