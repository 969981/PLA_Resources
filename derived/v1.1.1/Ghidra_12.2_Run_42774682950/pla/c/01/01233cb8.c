/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01233cb8; name: FUN_01233cb8
 */


void FUN_01233cb8(long param_1,int param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  if ((param_4 & 1) != 0) {
    FUN_012340c8(param_1 + 0x10,param_1 + 0x430);
    lVar7 = *(long *)(param_1 + 8);
  }
  puVar8 = (undefined4 *)FUN_01236d4c(lVar7,param_2,param_3);
  uVar5 = *puVar8;
  plVar12 = *(long **)(puVar8 + 2);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar6 = *(undefined1 *)(puVar8 + 4);
  plVar13 = *(long **)(puVar8 + 6);
  if (plVar13 == (long *)0x0) {
    plVar14 = *(long **)(puVar8 + 8);
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar14 = *(long **)(puVar8 + 8);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  uVar1 = *(undefined8 *)(puVar8 + 10);
  plVar3 = *(long **)(puVar8 + 0xc);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  uVar2 = *(undefined8 *)(puVar8 + 0xe);
  uVar4 = *(undefined8 *)(puVar8 + 0x10);
  uVar11 = *(undefined8 *)(puVar8 + 0x12);
  lVar7 = 1;
  switch(param_2) {
  case 0:
switchD_01233d74_caseD_0:
    uVar9 = FUN_0123b66c();
    if ((uVar9 & 1) == 0) goto switchD_01233d74_default;
    param_2 = 0;
    puVar8 = (undefined4 *)(param_1 + 0x170);
    goto LAB_01233e38;
  case 1:
    break;
  case 2:
switchD_01233d74_caseD_2:
    param_2 = 2;
    lVar7 = 2;
    break;
  case 3:
switchD_01233d74_caseD_3:
    param_2 = 3;
    lVar7 = 3;
    break;
  case 4:
switchD_01233d74_caseD_4:
    param_2 = 4;
    lVar7 = 4;
    break;
  case 5:
switchD_01233d74_caseD_5:
    param_2 = 5;
    lVar7 = 5;
    break;
  case 6:
    param_2 = 6;
    lVar7 = 6;
    break;
  case 7:
    param_2 = 1;
    lVar7 = 1;
    switch(uVar6) {
    case 0:
      goto switchD_01233d74_caseD_0;
    case 1:
      goto switchD_01233d74_caseD_1;
    case 2:
      goto switchD_01233d74_caseD_2;
    case 3:
      goto switchD_01233d74_caseD_3;
    case 5:
      goto switchD_01233d74_caseD_4;
    case 6:
      goto switchD_01233d74_caseD_5;
    }
  default:
    goto switchD_01233d74_default;
  }
switchD_01233d74_caseD_1:
  puVar8 = (undefined4 *)(param_1 + (long)*(int *)(&DAT_03a7a230 + lVar7 * 8) * 0x58 + 0x10);
LAB_01233e38:
  if (puVar8[0x14] == param_3) {
    if (((param_4 & 1) == 0) && ((param_2 == 5 || (param_2 == 0)))) {
      FUN_01234224(param_1,param_2);
      goto joined_r0x01233f40;
    }
  }
  else {
    *puVar8 = uVar5;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar10 = *(long **)(puVar8 + 2);
    *(long **)(puVar8 + 2) = plVar12;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    *(undefined1 *)(puVar8 + 4) = uVar6;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar10 = *(long **)(puVar8 + 6);
    *(long **)(puVar8 + 6) = plVar13;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar10 = *(long **)(puVar8 + 8);
    *(long **)(puVar8 + 8) = plVar14;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    *(undefined8 *)(puVar8 + 10) = uVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar10 = *(long **)(puVar8 + 0xc);
    *(long **)(puVar8 + 0xc) = plVar3;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    *(undefined8 *)(puVar8 + 0x10) = uVar4;
    *(undefined8 *)(puVar8 + 0x12) = uVar11;
    *(undefined8 *)(puVar8 + 0xe) = uVar2;
    puVar8[0x14] = param_3;
    switch(param_2) {
    case 0:
      uVar9 = FUN_01234aec(param_1 + 0x170);
      if ((uVar9 & 1) != 0) {
        lVar7 = param_1 + 0x118;
        goto LAB_01233f90;
      }
      break;
    case 1:
      if (((*(int *)(param_1 + 0x2c8) != -1) && (*(long *)(param_1 + 0x280) != 0)) &&
         (*(long *)(*(long *)(param_1 + 0x280) + 0x68) != 0)) {
        FUN_01234258(param_1,param_1 + 0x278);
        FUN_012345dc(param_1);
        goto joined_r0x01233f40;
      }
      break;
    case 2:
      if (((*(int *)(param_1 + 0x2c8) != -1) && (*(long *)(param_1 + 0x280) != 0)) &&
         (*(long *)(*(long *)(param_1 + 0x280) + 0x68) != 0)) {
        FUN_01234258(param_1,param_1 + 0x278);
        FUN_01234864(param_1);
        goto joined_r0x01233f40;
      }
      break;
    case 3:
      FUN_01234258(param_1,param_1 + 0x1c8);
      lVar7 = param_1 + 0x220;
LAB_01233f90:
      FUN_01234258(param_1,lVar7);
      break;
    case 5:
      uVar9 = FUN_01234aec(param_1 + 0x170);
      if ((uVar9 & 1) != 0) {
        FUN_01234258(param_1,param_1 + 0x170);
        goto joined_r0x01233f40;
      }
    }
  }
switchD_01233d74_default:
joined_r0x01233f40:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return;
}


