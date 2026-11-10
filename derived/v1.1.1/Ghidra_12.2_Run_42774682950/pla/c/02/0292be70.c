/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292be70; name: FUN_0292be70
 */


bool FUN_0292be70(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 8) < *(int *)(param_2[-1] + 8)) {
      *param_1 = param_2[-1];
LAB_0292c0c8:
      param_2[-1] = lVar6;
      return true;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_2[-1];
    iVar7 = *(int *)(lVar4 + 8);
    if (*(int *)(lVar6 + 8) < iVar7) {
      if (iVar7 < *(int *)(lVar5 + 8)) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(param_2[-1] + 8) <= *(int *)(lVar6 + 8)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_0292c0c8;
    }
    if (iVar7 < *(int *)(lVar5 + 8)) {
      param_1[1] = lVar5;
      param_2[-1] = lVar4;
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 8) < *(int *)(param_1[1] + 8)) {
        *param_1 = param_1[1];
        param_1[1] = lVar6;
        return true;
      }
    }
    break;
  case 4:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_1[2];
    iVar7 = *(int *)(lVar4 + 8);
    if (*(int *)(lVar6 + 8) < iVar7) {
      if (iVar7 < *(int *)(lVar5 + 8)) {
        *param_1 = lVar5;
        param_1[2] = lVar6;
        lVar4 = lVar6;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar5 + 8) <= *(int *)(lVar6 + 8)) goto LAB_0292c0f8;
        param_1[1] = lVar5;
        param_1[2] = lVar6;
        lVar4 = lVar6;
      }
    }
    else if (iVar7 < *(int *)(lVar5 + 8)) {
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      if (*(int *)(lVar6 + 8) < *(int *)(lVar5 + 8)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
    else {
LAB_0292c0f8:
      lVar4 = lVar5;
    }
    if (*(int *)(lVar4 + 8) < *(int *)(param_2[-1] + 8)) {
      param_1[2] = param_2[-1];
      param_2[-1] = lVar4;
      lVar6 = param_1[1];
      lVar4 = param_1[2];
      if (*(int *)(lVar6 + 8) < *(int *)(lVar4 + 8)) {
        lVar5 = *param_1;
        param_1[1] = lVar4;
        param_1[2] = lVar6;
        if (*(int *)(lVar5 + 8) < *(int *)(lVar4 + 8)) {
          *param_1 = lVar4;
          param_1[1] = lVar5;
          return true;
        }
      }
    }
    break;
  case 5:
    FUN_0292bc90(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_1[2];
    iVar7 = *(int *)(lVar4 + 8);
    if (*(int *)(lVar6 + 8) < iVar7) {
      if (iVar7 < *(int *)(lVar5 + 8)) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar5 + 8) <= *(int *)(lVar6 + 8)) goto LAB_0292c014;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar4 = lVar6;
    }
    else if (iVar7 < *(int *)(lVar5 + 8)) {
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      if (*(int *)(lVar6 + 8) < *(int *)(lVar5 + 8)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
    else {
LAB_0292c014:
      lVar4 = lVar5;
    }
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar1 = param_1 + 3;
      do {
        lVar5 = *plVar1;
        if (*(int *)(lVar4 + 8) < *(int *)(lVar5 + 8)) {
          lVar4 = lVar6;
          do {
            lVar2 = lVar4;
            *(undefined8 *)((long)param_1 + lVar2 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar2 + 0x10);
            if (lVar2 == -0x10) {
              plVar3 = param_1;
              goto LAB_0292c080;
            }
            lVar4 = lVar2 + -8;
          } while (*(int *)(*(long *)((long)param_1 + lVar2 + 8) + 8) < *(int *)(lVar5 + 8));
          plVar3 = (long *)((long)param_1 + lVar2 + 0x10);
LAB_0292c080:
          iVar7 = iVar7 + 1;
          *plVar3 = lVar5;
          if (iVar7 == 8) {
            return plVar1 + 1 == param_2;
          }
        }
        if (plVar1 + 1 == param_2) {
          return true;
        }
        lVar4 = *plVar1;
        lVar6 = lVar6 + 8;
        plVar1 = plVar1 + 1;
      } while( true );
    }
  }
  return true;
}


