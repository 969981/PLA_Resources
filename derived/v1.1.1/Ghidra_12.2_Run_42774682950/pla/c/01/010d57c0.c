/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d57c0; name: FUN_010d57c0
 */


int FUN_010d57c0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_8;
  
  uVar8 = *param_2;
  if (uVar8 < *param_1) {
    uVar1 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar5 = *(undefined8 *)(param_1 + 6);
    uVar3 = *(undefined8 *)(param_1 + 8);
    local_8 = (undefined1)*(undefined8 *)(param_1 + 10);
    if (*param_3 < uVar8) {
      uVar6 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = uVar6;
      uVar11 = *(undefined8 *)(param_3 + 8);
      uVar6 = *(undefined8 *)(param_3 + 4);
      uVar7 = *(undefined8 *)(param_3 + 6);
      *(char *)(param_1 + 10) = (char)param_3[10];
      *(undefined8 *)(param_1 + 6) = uVar7;
      *(undefined8 *)(param_1 + 8) = uVar11;
      *(undefined8 *)(param_1 + 4) = uVar6;
      *(undefined1 *)(param_3 + 10) = local_8;
      *(undefined8 *)(param_3 + 6) = uVar5;
      *(undefined8 *)(param_3 + 8) = uVar3;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar4;
      *(undefined8 *)(param_3 + 4) = uVar2;
      iVar9 = 1;
      goto LAB_010d5854;
    }
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar6;
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 6);
    *(char *)(param_1 + 10) = (char)param_2[10];
    *(undefined8 *)(param_1 + 6) = uVar7;
    *(undefined8 *)(param_1 + 8) = uVar11;
    *(undefined8 *)(param_1 + 4) = uVar6;
    *(undefined1 *)(param_2 + 10) = local_8;
    *(undefined8 *)(param_2 + 6) = uVar5;
    *(undefined8 *)(param_2 + 8) = uVar3;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 2) = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar2;
    if (*param_3 < (uint)uVar1) {
      uVar1 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)(param_2 + 4);
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)(param_2 + 10);
      uVar10 = *(undefined8 *)(param_3 + 8);
      uVar4 = *(undefined8 *)(param_3 + 4);
      uVar11 = *(undefined8 *)(param_3 + 6);
      *(char *)(param_2 + 10) = (char)param_3[10];
      *(undefined8 *)(param_2 + 6) = uVar11;
      *(undefined8 *)(param_2 + 8) = uVar10;
      *(undefined8 *)(param_2 + 4) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = uVar4;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar5;
      local_8 = (undefined1)uVar7;
      *(undefined1 *)(param_3 + 10) = local_8;
      *(undefined8 *)(param_3 + 6) = uVar6;
      *(undefined8 *)(param_3 + 8) = uVar3;
      *(undefined8 *)(param_3 + 4) = uVar2;
      goto LAB_010d5a1c;
    }
  }
  else {
    if (uVar8 <= *param_3) {
      iVar9 = 0;
      goto LAB_010d5854;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 10);
    uVar10 = *(undefined8 *)(param_3 + 8);
    uVar4 = *(undefined8 *)(param_3 + 4);
    uVar11 = *(undefined8 *)(param_3 + 6);
    *(char *)(param_2 + 10) = (char)param_3[10];
    *(undefined8 *)(param_2 + 6) = uVar11;
    *(undefined8 *)(param_2 + 8) = uVar10;
    *(undefined8 *)(param_2 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar5;
    local_8 = (undefined1)uVar7;
    *(undefined1 *)(param_3 + 10) = local_8;
    *(undefined8 *)(param_3 + 6) = uVar6;
    *(undefined8 *)(param_3 + 8) = uVar3;
    *(undefined8 *)(param_3 + 4) = uVar2;
    if (*param_2 < *param_1) {
      uVar1 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 4);
      uVar6 = *(undefined8 *)(param_1 + 6);
      uVar3 = *(undefined8 *)(param_1 + 8);
      uVar7 = *(undefined8 *)(param_1 + 10);
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 4);
      uVar11 = *(undefined8 *)(param_2 + 6);
      *(char *)(param_1 + 10) = (char)param_2[10];
      *(undefined8 *)(param_1 + 6) = uVar11;
      *(undefined8 *)(param_1 + 8) = uVar10;
      *(undefined8 *)(param_1 + 4) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar5;
      local_8 = (undefined1)uVar7;
      *(undefined1 *)(param_2 + 10) = local_8;
      *(undefined8 *)(param_2 + 6) = uVar6;
      *(undefined8 *)(param_2 + 8) = uVar3;
      *(undefined8 *)(param_2 + 4) = uVar2;
LAB_010d5a1c:
      iVar9 = 2;
      goto LAB_010d5854;
    }
  }
  iVar9 = 1;
LAB_010d5854:
  if (*param_4 < *param_3) {
    uVar1 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)(param_3 + 2);
    uVar2 = *(undefined8 *)(param_3 + 4);
    uVar6 = *(undefined8 *)(param_3 + 6);
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar7 = *(undefined8 *)(param_3 + 10);
    uVar10 = *(undefined8 *)(param_4 + 8);
    uVar4 = *(undefined8 *)(param_4 + 4);
    uVar11 = *(undefined8 *)(param_4 + 6);
    *(char *)(param_3 + 10) = (char)param_4[10];
    *(undefined8 *)(param_3 + 6) = uVar11;
    *(undefined8 *)(param_3 + 8) = uVar10;
    *(undefined8 *)(param_3 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(undefined8 *)param_4 = uVar1;
    *(undefined8 *)(param_4 + 2) = uVar5;
    local_8 = (undefined1)uVar7;
    *(undefined1 *)(param_4 + 10) = local_8;
    *(undefined8 *)(param_4 + 6) = uVar6;
    *(undefined8 *)(param_4 + 8) = uVar3;
    *(undefined8 *)(param_4 + 4) = uVar2;
    if (*param_3 < *param_2) {
      uVar1 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)(param_2 + 4);
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)(param_2 + 10);
      uVar10 = *(undefined8 *)(param_3 + 8);
      uVar4 = *(undefined8 *)(param_3 + 4);
      uVar11 = *(undefined8 *)(param_3 + 6);
      *(char *)(param_2 + 10) = (char)param_3[10];
      *(undefined8 *)(param_2 + 6) = uVar11;
      *(undefined8 *)(param_2 + 8) = uVar10;
      *(undefined8 *)(param_2 + 4) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = uVar4;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar5;
      local_8 = (undefined1)uVar7;
      *(undefined1 *)(param_3 + 10) = local_8;
      *(undefined8 *)(param_3 + 6) = uVar6;
      *(undefined8 *)(param_3 + 8) = uVar3;
      *(undefined8 *)(param_3 + 4) = uVar2;
      if (*param_2 < *param_1) {
        uVar1 = *(undefined8 *)param_1;
        uVar5 = *(undefined8 *)(param_1 + 2);
        iVar9 = iVar9 + 3;
        uVar2 = *(undefined8 *)(param_1 + 4);
        uVar6 = *(undefined8 *)(param_1 + 6);
        uVar3 = *(undefined8 *)(param_1 + 8);
        uVar7 = *(undefined8 *)(param_1 + 10);
        uVar10 = *(undefined8 *)(param_2 + 8);
        uVar4 = *(undefined8 *)(param_2 + 4);
        uVar11 = *(undefined8 *)(param_2 + 6);
        *(char *)(param_1 + 10) = (char)param_2[10];
        *(undefined8 *)(param_1 + 6) = uVar11;
        *(undefined8 *)(param_1 + 8) = uVar10;
        *(undefined8 *)(param_1 + 4) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = uVar4;
        *(undefined8 *)param_2 = uVar1;
        *(undefined8 *)(param_2 + 2) = uVar5;
        local_8 = (undefined1)uVar7;
        *(undefined1 *)(param_2 + 10) = local_8;
        *(undefined8 *)(param_2 + 6) = uVar6;
        *(undefined8 *)(param_2 + 8) = uVar3;
        *(undefined8 *)(param_2 + 4) = uVar2;
      }
      else {
        iVar9 = iVar9 + 2;
      }
    }
    else {
      iVar9 = iVar9 + 1;
    }
  }
  if (*param_5 < *param_4) {
    uVar1 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)(param_4 + 2);
    uVar2 = *(undefined8 *)(param_4 + 4);
    uVar6 = *(undefined8 *)(param_4 + 6);
    uVar3 = *(undefined8 *)(param_4 + 8);
    uVar7 = *(undefined8 *)(param_4 + 10);
    uVar10 = *(undefined8 *)(param_5 + 8);
    uVar4 = *(undefined8 *)(param_5 + 4);
    uVar11 = *(undefined8 *)(param_5 + 6);
    *(char *)(param_4 + 10) = (char)param_5[10];
    *(undefined8 *)(param_4 + 6) = uVar11;
    *(undefined8 *)(param_4 + 8) = uVar10;
    *(undefined8 *)(param_4 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = uVar4;
    *(undefined8 *)param_5 = uVar1;
    *(undefined8 *)(param_5 + 2) = uVar5;
    local_8 = (undefined1)uVar7;
    *(undefined1 *)(param_5 + 10) = local_8;
    *(undefined8 *)(param_5 + 6) = uVar6;
    *(undefined8 *)(param_5 + 8) = uVar3;
    *(undefined8 *)(param_5 + 4) = uVar2;
    if (*param_4 < *param_3) {
      uVar1 = *(undefined8 *)param_3;
      uVar5 = *(undefined8 *)(param_3 + 2);
      uVar2 = *(undefined8 *)(param_3 + 4);
      uVar6 = *(undefined8 *)(param_3 + 6);
      uVar3 = *(undefined8 *)(param_3 + 8);
      uVar7 = *(undefined8 *)(param_3 + 10);
      uVar10 = *(undefined8 *)(param_4 + 8);
      uVar4 = *(undefined8 *)(param_4 + 4);
      uVar11 = *(undefined8 *)(param_4 + 6);
      *(char *)(param_3 + 10) = (char)param_4[10];
      *(undefined8 *)(param_3 + 6) = uVar11;
      *(undefined8 *)(param_3 + 8) = uVar10;
      *(undefined8 *)(param_3 + 4) = uVar4;
      uVar4 = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = uVar4;
      *(undefined8 *)param_4 = uVar1;
      *(undefined8 *)(param_4 + 2) = uVar5;
      local_8 = (undefined1)uVar7;
      *(undefined1 *)(param_4 + 10) = local_8;
      *(undefined8 *)(param_4 + 6) = uVar6;
      *(undefined8 *)(param_4 + 8) = uVar3;
      *(undefined8 *)(param_4 + 4) = uVar2;
      if (*param_3 < *param_2) {
        uVar1 = *(undefined8 *)param_2;
        uVar5 = *(undefined8 *)(param_2 + 2);
        uVar2 = *(undefined8 *)(param_2 + 4);
        uVar6 = *(undefined8 *)(param_2 + 6);
        uVar3 = *(undefined8 *)(param_2 + 8);
        uVar7 = *(undefined8 *)(param_2 + 10);
        uVar10 = *(undefined8 *)(param_3 + 8);
        uVar4 = *(undefined8 *)(param_3 + 4);
        uVar11 = *(undefined8 *)(param_3 + 6);
        *(char *)(param_2 + 10) = (char)param_3[10];
        *(undefined8 *)(param_2 + 6) = uVar11;
        *(undefined8 *)(param_2 + 8) = uVar10;
        *(undefined8 *)(param_2 + 4) = uVar4;
        uVar4 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = uVar4;
        *(undefined8 *)param_3 = uVar1;
        *(undefined8 *)(param_3 + 2) = uVar5;
        local_8 = (undefined1)uVar7;
        *(undefined1 *)(param_3 + 10) = local_8;
        *(undefined8 *)(param_3 + 6) = uVar6;
        *(undefined8 *)(param_3 + 8) = uVar3;
        *(undefined8 *)(param_3 + 4) = uVar2;
        if (*param_2 < *param_1) {
          uVar1 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)(param_1 + 2);
          iVar9 = iVar9 + 4;
          uVar2 = *(undefined8 *)(param_1 + 4);
          uVar6 = *(undefined8 *)(param_1 + 6);
          uVar3 = *(undefined8 *)(param_1 + 8);
          uVar7 = *(undefined8 *)(param_1 + 10);
          uVar10 = *(undefined8 *)(param_2 + 8);
          uVar4 = *(undefined8 *)(param_2 + 4);
          uVar11 = *(undefined8 *)(param_2 + 6);
          *(char *)(param_1 + 10) = (char)param_2[10];
          *(undefined8 *)(param_1 + 6) = uVar11;
          *(undefined8 *)(param_1 + 8) = uVar10;
          *(undefined8 *)(param_1 + 4) = uVar4;
          uVar4 = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = uVar4;
          *(undefined8 *)param_2 = uVar1;
          *(undefined8 *)(param_2 + 2) = uVar5;
          local_8 = (undefined1)uVar7;
          *(undefined1 *)(param_2 + 10) = local_8;
          *(undefined8 *)(param_2 + 6) = uVar6;
          *(undefined8 *)(param_2 + 8) = uVar3;
          *(undefined8 *)(param_2 + 4) = uVar2;
        }
        else {
          iVar9 = iVar9 + 3;
        }
      }
      else {
        iVar9 = iVar9 + 2;
      }
    }
    else {
      iVar9 = iVar9 + 1;
    }
  }
  return iVar9;
}


