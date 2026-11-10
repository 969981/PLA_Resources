/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04444; name: FUN_02f04444
 */


long * FUN_02f04444(long *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  
  uVar4 = (**(code **)(*param_1 + 0x78))();
  if ((uVar4 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((int)plVar5[7] == param_2) {
          return plVar5;
        }
      }
    }
    plVar5 = (long *)(*DAT_0442d138)(2,0x48);
    puVar3 = PTR_DAT_043887b8;
    if (plVar5 != (long *)0x0) {
      plVar5[4] = 0;
      plVar5[2] = 0;
      plVar5[3] = (long)param_1;
      plVar5[5] = 0;
      plVar5[6] = 0;
      *(undefined1 *)(plVar5 + 8) = 0;
      *plVar5 = (long)(puVar3 + 0x10);
      plVar5[1] = 0;
      *(int *)(plVar5 + 7) = param_2;
      *(undefined4 *)((long)plVar5 + 0x3c) = 0x2ca33bdb;
      piVar7 = (int *)*DAT_0440a138;
      uVar2 = *(uint *)(DAT_0440a138 + 1);
      if ((uVar2 == 0) || (*piVar7 == param_2)) {
        piVar9 = piVar7;
      }
      else {
        lVar8 = (ulong)uVar2 * 0x10;
        piVar10 = piVar7;
        do {
          lVar8 = lVar8 + -0x10;
          if (lVar8 == 0) goto LAB_02f04610;
          piVar1 = piVar10 + 4;
          piVar9 = piVar10 + 4;
          piVar10 = piVar10 + 4;
        } while (*piVar1 != param_2);
      }
      if (piVar9 == piVar7 + (ulong)uVar2 * 4) {
LAB_02f04610:
        FUN_02f0571c(plVar5);
        FUN_02f59e60(2,plVar5);
        plVar5 = (long *)0x0;
      }
      else {
        lVar8 = *(long *)(piVar9 + 2);
        if (*(long *)(lVar8 + 8) == 0) {
          *(long **)(lVar8 + 8) = plVar5;
          plVar5[1] = 0;
        }
        else {
          plVar5[1] = *(long *)(lVar8 + 8);
          *(long **)(lVar8 + 8) = plVar5;
        }
        plVar6 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
        if (*plVar6 == 0) {
          *plVar6 = (long)plVar5;
          plVar5[2] = 0;
        }
        else {
          plVar5[2] = *plVar6;
          *plVar6 = (long)plVar5;
        }
        piVar7 = (int *)*DAT_0440a138;
        uVar2 = *(uint *)(DAT_0440a138 + 1);
        if ((uVar2 == 0) || (*piVar7 == param_2)) {
          piVar9 = piVar7;
        }
        else {
          lVar8 = (ulong)uVar2 * 0x10;
          piVar10 = piVar7;
          do {
            lVar8 = lVar8 + -0x10;
            if (lVar8 == 0) goto LAB_02f0462c;
            piVar1 = piVar10 + 4;
            piVar9 = piVar10 + 4;
            piVar10 = piVar10 + 4;
          } while (*piVar1 != param_2);
        }
        if (piVar9 == piVar7 + (ulong)uVar2 * 4) {
LAB_02f0462c:
          *(undefined4 *)((long)plVar5 + 0x3c) = 0;
        }
        else {
          *(undefined4 *)((long)plVar5 + 0x3c) = *(undefined4 *)(*(long *)(piVar9 + 2) + 4);
        }
        if ((param_3 & 1) != 0) {
          FUN_02f04094(param_1);
        }
      }
    }
  }
  return plVar5;
}


