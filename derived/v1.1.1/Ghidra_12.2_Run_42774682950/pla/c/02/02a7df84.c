/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7df84; name: FUN_02a7df84
 */


char * FUN_02a7df84(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)(param_1 + 0x38);
  pcVar4 = param_2;
  do {
    pcVar10 = pcVar4;
    pcVar4 = (char *)FUN_02a7edec(param_1,pcVar10);
    if (pcVar4 == pcVar10) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x1c);
      pcVar4 = (char *)FUN_02a7f3d4(param_1,pcVar10);
      if (pcVar4 == pcVar10) break;
      pcVar4 = (char *)FUN_02a7fd40(param_1,pcVar4,"",uVar11,iVar1 + 1,*(int *)(param_1 + 0x1c) + 1)
      ;
    }
  } while (pcVar4 != pcVar10);
  plVar3 = DAT_043f1798;
  lVar2 = tpidr_el0;
  if (pcVar10 == param_2) {
    plVar7 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar7 = plVar3;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,8);
    lVar13 = *(long *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(lVar13 + 8);
    *puVar6 = &PTR_LAB_0427f1d8;
    puVar6[1] = uVar11;
    *(undefined8 **)(lVar13 + 8) = puVar6;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  if (pcVar10 != "") {
    do {
      if (*pcVar10 != '|') {
        return pcVar10;
      }
      lVar13 = *(long *)(param_1 + 0x38);
      pcVar4 = pcVar10 + 1;
      pcVar5 = pcVar4;
      do {
        pcVar10 = pcVar5;
        pcVar5 = (char *)FUN_02a7edec(param_1,pcVar10);
        if (pcVar5 == pcVar10) {
          uVar11 = *(undefined8 *)(param_1 + 0x38);
          iVar1 = *(int *)(param_1 + 0x1c);
          pcVar5 = (char *)FUN_02a7f3d4(param_1,pcVar10);
          if (pcVar5 == pcVar10) break;
          pcVar5 = (char *)FUN_02a7fd40(param_1,pcVar5,"",uVar11,iVar1 + 1,
                                        *(int *)(param_1 + 0x1c) + 1);
        }
      } while (pcVar5 != pcVar10);
      plVar3 = DAT_043f1798;
      if (pcVar10 == pcVar4) {
        plVar7 = *(long **)(lVar2 + 0x20);
        if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
          *(long **)(lVar2 + 0x20) = DAT_043f1798;
          plVar7 = plVar3;
        }
        puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,8);
        lVar8 = *(long *)(param_1 + 0x38);
        uVar11 = *(undefined8 *)(lVar8 + 8);
        *puVar6 = &PTR_LAB_0427f1d8;
        puVar6[1] = uVar11;
        *(undefined8 **)(lVar8 + 8) = puVar6;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      plVar3 = DAT_043f1798;
      plVar7 = *(long **)(lVar2 + 0x20);
      if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
        *(long **)(lVar2 + 0x20) = DAT_043f1798;
        plVar7 = plVar3;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
      uVar11 = *(undefined8 *)(lVar12 + 8);
      uVar9 = *(undefined8 *)(lVar13 + 8);
      *puVar6 = &PTR_LAB_0427f568;
      puVar6[1] = uVar11;
      puVar6[2] = uVar9;
      *(undefined8 **)(lVar12 + 8) = puVar6;
      *(undefined8 *)(lVar13 + 8) = 0;
      plVar3 = DAT_043f1798;
      plVar7 = *(long **)(lVar2 + 0x20);
      if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
        *(long **)(lVar2 + 0x20) = DAT_043f1798;
        plVar7 = plVar3;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,8);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      *puVar6 = &PTR_LAB_0427f1d8;
      puVar6[1] = uVar11;
      *(undefined8 **)(lVar13 + 8) = puVar6;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
      plVar3 = DAT_043f1798;
      plVar7 = *(long **)(lVar2 + 0x20);
      if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
        *(long **)(lVar2 + 0x20) = DAT_043f1798;
        plVar7 = plVar3;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,8);
      uVar11 = *(undefined8 *)(lVar13 + 8);
      *puVar6 = &PTR_LAB_0427f598;
      puVar6[1] = uVar11;
      *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar6;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar13 + 8);
    } while (pcVar10 != "");
  }
  return "";
}


