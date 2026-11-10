/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7e4c4; name: FUN_02a7e4c4
 */


char * FUN_02a7e4c4(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_1 + 0x38);
  pcVar3 = (char *)FUN_02a8ce70();
  if (pcVar3 != param_2) {
    do {
      pcVar9 = pcVar3;
      pcVar3 = (char *)FUN_02a8ce70(param_1,pcVar9,param_3);
    } while (pcVar3 != pcVar9);
    if (pcVar9 != param_2) {
      if (pcVar9 != param_3) {
        lVar1 = tpidr_el0;
        do {
          if (*pcVar9 != '|') {
            return pcVar9;
          }
          lVar11 = *(long *)(param_1 + 0x38);
          pcVar3 = pcVar9 + 1;
          pcVar4 = (char *)FUN_02a8ce70(param_1,pcVar3,param_3);
          if (pcVar4 == pcVar3) goto LAB_02a7e6ec;
          do {
            pcVar9 = pcVar4;
            pcVar4 = (char *)FUN_02a8ce70(param_1,pcVar9,param_3);
            plVar2 = DAT_043f1798;
          } while (pcVar4 != pcVar9);
          if (pcVar9 == pcVar3) goto LAB_02a7e6ec;
          plVar6 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar6 = plVar2;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
          uVar7 = *(undefined8 *)(lVar10 + 8);
          uVar8 = *(undefined8 *)(lVar11 + 8);
          *puVar5 = &PTR_LAB_0427f568;
          puVar5[1] = uVar7;
          puVar5[2] = uVar8;
          *(undefined8 **)(lVar10 + 8) = puVar5;
          *(undefined8 *)(lVar11 + 8) = 0;
          plVar2 = DAT_043f1798;
          plVar6 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar6 = plVar2;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
          *puVar5 = &PTR_LAB_0427f1d8;
          puVar5[1] = uVar7;
          *(undefined8 **)(lVar11 + 8) = puVar5;
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
          plVar2 = DAT_043f1798;
          plVar6 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar6 = plVar2;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          uVar7 = *(undefined8 *)(lVar11 + 8);
          *puVar5 = &PTR_LAB_0427f598;
          puVar5[1] = uVar7;
          *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar5;
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar11 + 8);
        } while (pcVar9 != param_3);
      }
      return param_3;
    }
  }
LAB_02a7e6ec:
                    /* WARNING: Subroutine does not return */
  FUN_02a8c290();
}


