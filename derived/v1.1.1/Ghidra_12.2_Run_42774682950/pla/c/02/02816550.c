/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02816550; name: FUN_02816550
 */


bool FUN_02816550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(int *)((long)param_1 + 4) <= *(int *)((long)param_2 + -4)) {
      return true;
    }
    uVar9 = *param_1;
LAB_028165a4:
    *param_1 = param_2[-1];
    goto LAB_028165ac;
  case 3:
    iVar6 = *(int *)((long)param_1 + 0xc);
    if (*(int *)((long)param_1 + 4) <= iVar6) {
      if (iVar6 <= *(int *)((long)param_2 + -4)) {
        return true;
      }
      uVar9 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = uVar9;
      if (*(int *)((long)param_1 + 0xc) < *(int *)((long)param_1 + 4)) {
        uVar9 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = uVar9;
        return true;
      }
      return true;
    }
    uVar9 = *param_1;
    if (*(int *)((long)param_2 + -4) < iVar6) goto LAB_028165a4;
    *param_1 = param_1[1];
    param_1[1] = uVar9;
    if ((int)((ulong)uVar9 >> 0x20) <= *(int *)((long)param_2 + -4)) {
      return true;
    }
    param_1[1] = param_2[-1];
LAB_028165ac:
    param_2[-1] = uVar9;
    break;
  case 4:
    FUN_02816300(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_02816300(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
    if (*(int *)((long)param_2 + -4) < *(int *)((long)param_1 + 0x1c)) {
      uVar9 = param_1[3];
      param_1[3] = param_2[-1];
      param_2[-1] = uVar9;
      if (*(int *)((long)param_1 + 0x1c) < *(int *)((long)param_1 + 0x14)) {
        uVar9 = param_1[2];
        uVar2 = param_1[3];
        param_1[2] = uVar2;
        param_1[3] = uVar9;
        iVar6 = (int)((ulong)uVar2 >> 0x20);
        if (iVar6 < *(int *)((long)param_1 + 0xc)) {
          uVar9 = param_1[1];
          param_1[1] = uVar2;
          param_1[2] = uVar9;
          if (iVar6 < *(int *)((long)param_1 + 4)) {
            uVar9 = *param_1;
            *param_1 = uVar2;
            param_1[1] = uVar9;
          }
        }
      }
    }
    break;
  default:
    iVar6 = *(int *)((long)param_1 + 0xc);
    iVar3 = *(int *)((long)param_1 + 0x14);
    if (iVar6 < *(int *)((long)param_1 + 4)) {
      uVar9 = *param_1;
      if (iVar3 < iVar6) {
        *param_1 = param_1[2];
      }
      else {
        *param_1 = param_1[1];
        param_1[1] = uVar9;
        if ((int)((ulong)uVar9 >> 0x20) <= iVar3) goto LAB_028165d0;
        param_1[1] = param_1[2];
      }
      param_1[2] = uVar9;
    }
    else if (iVar3 < iVar6) {
      uVar9 = param_1[1];
      uVar2 = param_1[2];
      param_1[1] = uVar2;
      param_1[2] = uVar9;
      if ((int)((ulong)uVar2 >> 0x20) < *(int *)((long)param_1 + 4)) {
        uVar9 = *param_1;
        *param_1 = uVar2;
        param_1[1] = uVar9;
      }
    }
LAB_028165d0:
    if (param_1 + 3 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar7 = param_1 + 2;
      puVar8 = param_1 + 3;
      do {
        if (*(int *)((long)puVar8 + 4) < *(int *)((long)puVar7 + 4)) {
          uVar9 = *puVar8;
          lVar4 = lVar5;
          do {
            lVar10 = lVar4;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            if (lVar10 == -0x10) {
              puVar7 = param_1;
              goto LAB_028165f0;
            }
            lVar4 = lVar10 + -8;
          } while ((int)((ulong)uVar9 >> 0x20) < *(int *)((long)param_1 + lVar10 + 0xc));
          puVar7 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_028165f0:
          iVar6 = iVar6 + 1;
          *puVar7 = uVar9;
          if (iVar6 == 8) {
            return puVar8 + 1 == param_2;
          }
        }
        puVar1 = puVar8 + 1;
        lVar5 = lVar5 + 8;
        puVar7 = puVar8;
        puVar8 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}


