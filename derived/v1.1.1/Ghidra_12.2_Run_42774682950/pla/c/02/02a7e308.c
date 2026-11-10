/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7e308; name: FUN_02a7e308
 */


char * FUN_02a7e308(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  plVar2 = DAT_043f1798;
  if (param_2 != param_3) {
    pcVar4 = param_2;
    if (*param_2 == '^') {
      lVar5 = tpidr_el0;
      plVar6 = *(long **)(lVar5 + 0x20);
      if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
        *(long **)(lVar5 + 0x20) = DAT_043f1798;
        plVar6 = plVar2;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
      lVar5 = *(long *)(param_1 + 0x38);
      uVar7 = *(undefined8 *)(lVar5 + 8);
      *puVar3 = &PTR_LAB_0427f238;
      puVar3[1] = uVar7;
      *(undefined8 **)(lVar5 + 8) = puVar3;
      pcVar4 = param_2 + 1;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    }
    param_2 = param_3;
    if (pcVar4 != param_3) {
      do {
        pcVar8 = pcVar4;
        if (pcVar8 == param_3) {
          return param_3;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        iVar1 = *(int *)(param_1 + 0x1c);
        pcVar4 = (char *)FUN_02a8c29c(param_1,pcVar8,param_3);
        if (pcVar4 == pcVar8) break;
        pcVar4 = (char *)FUN_02a8c618(param_1,pcVar4,param_3,uVar7,iVar1 + 1,
                                      *(int *)(param_1 + 0x1c) + 1);
      } while (pcVar4 != pcVar8);
      plVar2 = DAT_043f1798;
      if ((pcVar8 + 1 != param_3) || (*pcVar8 != '$')) {
                    /* WARNING: Subroutine does not return */
        FUN_02a8c290();
      }
      lVar5 = tpidr_el0;
      plVar6 = *(long **)(lVar5 + 0x20);
      if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
        *(long **)(lVar5 + 0x20) = DAT_043f1798;
        plVar6 = plVar2;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
      lVar5 = *(long *)(param_1 + 0x38);
      uVar7 = *(undefined8 *)(lVar5 + 8);
      *puVar3 = &PTR_LAB_0427f268;
      puVar3[1] = uVar7;
      *(undefined8 **)(lVar5 + 8) = puVar3;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    }
  }
  return param_2;
}


