/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031749c4; name: FUN_031749c4
 */


void FUN_031749c4(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((int)param_1[1] < param_2) {
    iVar2 = (int)param_1[1] * 2;
    if (param_2 <= iVar2) {
      param_2 = iVar2;
    }
    lVar3 = tpidr_el0;
    lVar6 = *(long *)(lVar3 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    lVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,(long)(param_2 << 4),0);
    if ((lVar6 != 0) && (lVar7 = *param_1, lVar7 != 0)) {
      iVar2 = *(int *)((long)param_1 + 0x14);
      if (iVar2 != 0) {
        iVar1 = *(int *)((long)param_1 + 0xc);
        lVar5 = param_1[2];
        if (iVar1 < (int)lVar5) {
          lVar7 = lVar7 + (long)iVar1 * 0x10;
          lVar8 = lVar6;
        }
        else {
          iVar2 = (int)param_1[1] - iVar1;
          FUN_032c4a00(lVar6,lVar7 + (long)iVar1 * 0x10,iVar2 * 0x10);
          lVar7 = *param_1;
          lVar8 = lVar6 + (long)iVar2 * 0x10;
          iVar2 = (int)lVar5;
        }
        FUN_032c4a00(lVar8,lVar7,iVar2 << 4);
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x14);
    }
    if ((int)param_1[1] != 0) {
      lVar8 = *param_1;
      lVar5 = (long)(int)param_1[1] << 4;
      lVar7 = *(long *)(lVar3 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1,lVar5);
        *(long *)(lVar3 + 0x38d490) = lVar7;
      }
      plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar8,lVar5);
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = 0;
    }
    *param_1 = lVar6;
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}


