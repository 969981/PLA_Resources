/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8ce70; name: FUN_02a8ce70
 */


char * FUN_02a8ce70(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (param_2 != param_3) {
    cVar7 = *param_2;
    switch(cVar7) {
    case '$':
    case '(':
    case '*':
    case '+':
    case '.':
    case '?':
    case '[':
    case '\\':
    case '^':
    case '{':
    case '|':
      goto switchD_02a8cec8_caseD_24;
    default:
switchD_02a8cec8_caseD_25:
      FUN_02a86478(param_1,cVar7);
      pcVar6 = param_2 + 1;
      goto LAB_02a8d264;
    case ')':
      goto switchD_02a8cec8_caseD_29;
    }
  }
LAB_02a8cfd4:
  pcVar6 = (char *)FUN_02a82fdc(param_1,param_2,param_3);
LAB_02a8cfe4:
  plVar4 = DAT_043f1798;
  if ((pcVar6 != param_2) || (pcVar6 == param_3)) {
LAB_02a8d1c4:
    if (pcVar6 == param_2) {
      return param_2;
    }
    goto LAB_02a8d264;
  }
  cVar7 = *param_2;
  if (cVar7 == '$') {
    lVar8 = tpidr_el0;
    plVar9 = *(long **)(lVar8 + 0x20);
    if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
      *(long **)(lVar8 + 0x20) = DAT_043f1798;
      plVar9 = plVar4;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
    lVar8 = *(long *)(param_1 + 0x38);
    ppuVar11 = &PTR_LAB_0427f268;
  }
  else {
    if (cVar7 == '(') {
      if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
        lVar8 = tpidr_el0;
        plVar9 = *(long **)(lVar8 + 0x20);
        if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
          *(long **)(lVar8 + 0x20) = DAT_043f1798;
          plVar9 = plVar4;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x18,8);
        iVar1 = *(int *)(param_1 + 0x1c) + 1;
        lVar8 = *(long *)(param_1 + 0x38);
        *(int *)(param_1 + 0x1c) = iVar1;
        uVar10 = *(undefined8 *)(lVar8 + 8);
        *puVar5 = &PTR_LAB_0427f478;
        puVar5[1] = uVar10;
        *(int *)(puVar5 + 2) = iVar1;
        *(undefined8 **)(lVar8 + 8) = puVar5;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pcVar6 = (char *)FUN_02a7e4c4(param_1,param_2 + 1,param_3);
      plVar4 = DAT_043f1798;
      if ((pcVar6 == param_3) || (*pcVar6 != ')')) {
                    /* WARNING: Subroutine does not return */
        FUN_02a80af0();
      }
      if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
        lVar8 = tpidr_el0;
        plVar9 = *(long **)(lVar8 + 0x20);
        if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
          *(long **)(lVar8 + 0x20) = DAT_043f1798;
          plVar9 = plVar4;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x18,8);
        lVar8 = *(long *)(param_1 + 0x38);
        uVar10 = *(undefined8 *)(lVar8 + 8);
        *puVar5 = &PTR_LAB_0427f4a8;
        puVar5[1] = uVar10;
        *(undefined4 *)(puVar5 + 2) = uVar3;
        *(undefined8 **)(lVar8 + 8) = puVar5;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      pcVar6 = pcVar6 + 1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      goto LAB_02a8d1c4;
    }
    if (cVar7 != '^') {
      return param_2;
    }
    lVar8 = tpidr_el0;
    plVar9 = *(long **)(lVar8 + 0x20);
    if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
      *(long **)(lVar8 + 0x20) = DAT_043f1798;
      plVar9 = plVar4;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
    lVar8 = *(long *)(param_1 + 0x38);
    ppuVar11 = &PTR_LAB_0427f238;
  }
  uVar10 = *(undefined8 *)(lVar8 + 8);
  *puVar5 = ppuVar11;
  puVar5[1] = uVar10;
LAB_02a8d254:
  pcVar6 = param_2 + 1;
  *(undefined8 **)(lVar8 + 8) = puVar5;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_02a8d264:
  pcVar6 = (char *)FUN_02a7fd40(param_1,pcVar6,param_3,uVar12,iVar2 + 1,*(int *)(param_1 + 0x1c) + 1
                               );
  return pcVar6;
switchD_02a8cec8_caseD_29:
  if (*(int *)(param_1 + 0x24) == 0) {
    cVar7 = ')';
    goto switchD_02a8cec8_caseD_25;
  }
switchD_02a8cec8_caseD_24:
  pcVar6 = param_2 + 1;
  if ((pcVar6 != param_3) && (cVar7 == '\\')) {
    switch(*pcVar6) {
    case '$':
    case '(':
    case ')':
    case '*':
    case '+':
    case '.':
    case '?':
    case '[':
    case '\\':
    case '^':
    case '{':
    case '|':
    case '}':
      FUN_02a86478(param_1);
      pcVar6 = param_2 + 2;
      goto LAB_02a8d264;
    }
    if ((*(uint *)(param_1 + 0x18) & 0x1f0) != 0x40) goto LAB_02a8cfd4;
    pcVar6 = (char *)FUN_02a8a2d0(param_1,pcVar6,param_3,0);
    if (pcVar6 == param_2) {
      cVar7 = *param_2;
      goto LAB_02a8cf64;
    }
    goto LAB_02a8cfe4;
  }
LAB_02a8cf64:
  plVar4 = DAT_043f1798;
  if (cVar7 != '.') goto LAB_02a8cfd4;
  lVar8 = tpidr_el0;
  plVar9 = *(long **)(lVar8 + 0x20);
  if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
    *(long **)(lVar8 + 0x20) = DAT_043f1798;
    plVar9 = plVar4;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
  lVar8 = *(long *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(lVar8 + 8);
  *puVar5 = &PTR_LAB_0427f5c8;
  puVar5[1] = uVar10;
  goto LAB_02a8d254;
}


