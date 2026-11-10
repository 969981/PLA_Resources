/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a1ad0; name: FUN_007a1ad0
 */


bool FUN_007a1ad0(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_40;
  undefined8 uStack_38;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (*param_1 <= param_2[-4]) {
      return true;
    }
    goto LAB_007a1b4c;
  case 3:
    piVar5 = param_1 + 4;
    iVar7 = *piVar5;
    piVar8 = param_2 + -4;
    if (*param_1 <= iVar7) {
      if (iVar7 <= *piVar8) {
        return true;
      }
      uVar13 = *(undefined8 *)(param_1 + 6);
      uVar9 = *(undefined8 *)piVar5;
      uVar12 = *(undefined8 *)piVar8;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar5 = uVar12;
      *(undefined8 *)(param_2 + -2) = uVar13;
      *(undefined8 *)piVar8 = uVar9;
      if (param_1[4] < *param_1) {
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)piVar5;
        *(undefined8 *)(param_1 + 6) = uVar12;
        *(undefined8 *)piVar5 = uVar9;
        return true;
      }
      return true;
    }
    if (iVar7 <= *piVar8) {
      uVar12 = *(undefined8 *)(param_1 + 2);
      uVar9 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)piVar5;
      *(undefined8 *)(param_1 + 6) = uVar12;
      *(undefined8 *)piVar5 = uVar9;
      if (param_1[4] <= *piVar8) {
        return true;
      }
      uStack_38 = *(undefined8 *)(param_1 + 6);
      local_40 = *(undefined8 *)piVar5;
      uVar9 = *(undefined8 *)piVar8;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar5 = uVar9;
      goto LAB_007a1b5c;
    }
LAB_007a1b4c:
    uStack_38 = *(undefined8 *)(param_1 + 2);
    local_40 = *(undefined8 *)param_1;
    uVar9 = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)param_1 = uVar9;
LAB_007a1b5c:
    *(undefined8 *)(param_2 + -2) = uStack_38;
    *(undefined8 *)(param_2 + -4) = local_40;
    return true;
  case 4:
    FUN_007a1910(param_1,param_1 + 4,param_1 + 8,param_2 + -4,param_3);
    break;
  case 5:
    piVar5 = param_1 + 4;
    piVar8 = param_1 + 8;
    piVar1 = param_1 + 0xc;
    FUN_007a1910(param_1,piVar5,piVar8,piVar1,param_3);
    piVar11 = param_2 + -4;
    if (*piVar11 < param_1[0xc]) {
      uVar13 = *(undefined8 *)(param_1 + 0xe);
      uVar9 = *(undefined8 *)piVar1;
      uVar12 = *(undefined8 *)piVar11;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar1 = uVar12;
      *(undefined8 *)(param_2 + -2) = uVar13;
      *(undefined8 *)piVar11 = uVar9;
      if (*piVar1 < *piVar8) {
        uVar12 = *(undefined8 *)(param_1 + 10);
        uVar9 = *(undefined8 *)piVar8;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)piVar8 = *(undefined8 *)piVar1;
        *(undefined8 *)(param_1 + 0xe) = uVar12;
        *(undefined8 *)piVar1 = uVar9;
        if (*piVar8 < *piVar5) {
          uVar12 = *(undefined8 *)(param_1 + 6);
          uVar9 = *(undefined8 *)piVar5;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)piVar5 = *(undefined8 *)piVar8;
          *(undefined8 *)(param_1 + 10) = uVar12;
          *(undefined8 *)piVar8 = uVar9;
          if (param_1[4] < *param_1) {
            uVar12 = *(undefined8 *)(param_1 + 2);
            uVar9 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)param_1 = *(undefined8 *)piVar5;
            *(undefined8 *)(param_1 + 6) = uVar12;
            *(undefined8 *)piVar5 = uVar9;
            return true;
          }
        }
      }
    }
    break;
  default:
    piVar5 = param_1 + 8;
    iVar7 = *piVar5;
    piVar8 = param_1 + 4;
    iVar3 = *piVar8;
    if (iVar3 < *param_1) {
      if (iVar7 < iVar3) {
        uStack_38 = *(undefined8 *)(param_1 + 2);
        local_40 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)param_1 = *(undefined8 *)piVar5;
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)piVar8;
        *(undefined8 *)(param_1 + 6) = uVar12;
        *(undefined8 *)piVar8 = uVar9;
        if (param_1[4] <= iVar7) goto joined_r0x007a1d20;
        uStack_38 = *(undefined8 *)(param_1 + 6);
        local_40 = *(undefined8 *)piVar8;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)piVar8 = *(undefined8 *)piVar5;
      }
      *(undefined8 *)(param_1 + 10) = uStack_38;
      *(undefined8 *)piVar5 = local_40;
    }
    else if (iVar7 < iVar3) {
      uVar12 = *(undefined8 *)(param_1 + 6);
      uVar9 = *(undefined8 *)piVar8;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)piVar8 = *(undefined8 *)piVar5;
      *(undefined8 *)(param_1 + 10) = uVar12;
      *(undefined8 *)piVar5 = uVar9;
      if (*piVar8 < *param_1) {
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar9 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)piVar8;
        *(undefined8 *)(param_1 + 6) = uVar12;
        *(undefined8 *)piVar8 = uVar9;
      }
    }
joined_r0x007a1d20:
    if (param_1 + 0xc != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      piVar8 = param_1 + 0xc;
      do {
        iVar3 = *piVar8;
        if (iVar3 < *piVar5) {
          uVar9 = *(undefined8 *)(piVar8 + 1);
          iVar2 = piVar8[3];
          lVar4 = lVar6;
          do {
            lVar10 = lVar4;
            *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x28);
            *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x20);
            if (lVar10 == -0x20) {
              piVar5 = param_1;
              goto LAB_007a1dbc;
            }
            lVar4 = lVar10 + -0x10;
          } while (iVar3 < *(int *)((long)param_1 + lVar10 + 0x10));
          piVar5 = (int *)((long)param_1 + lVar10 + 0x20);
LAB_007a1dbc:
          *piVar5 = iVar3;
          iVar7 = iVar7 + 1;
          piVar5[3] = iVar2;
          *(undefined8 *)(piVar5 + 1) = uVar9;
          if (iVar7 == 8) {
            return piVar8 + 4 == param_2;
          }
        }
        piVar1 = piVar8 + 4;
        lVar6 = lVar6 + 0x10;
        piVar5 = piVar8;
        piVar8 = piVar1;
      } while (piVar1 != param_2);
    }
  }
  return true;
}


