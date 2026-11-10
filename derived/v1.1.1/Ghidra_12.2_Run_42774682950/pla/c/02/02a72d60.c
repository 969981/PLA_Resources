/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a72d60; name: FUN_02a72d60
 */


bool FUN_02a72d60(long *param_1,long *param_2)

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
    if (*(int *)(param_2[-1] + 0x378) < *(int *)(lVar6 + 0x378)) {
      *param_1 = param_2[-1];
LAB_02a72fb8:
      param_2[-1] = lVar6;
      return true;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_2[-1];
    iVar7 = *(int *)(lVar4 + 0x378);
    if (iVar7 < *(int *)(lVar6 + 0x378)) {
      if (*(int *)(lVar5 + 0x378) < iVar7) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar6 + 0x378) <= *(int *)(param_2[-1] + 0x378)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_02a72fb8;
    }
    if (*(int *)(lVar5 + 0x378) < iVar7) {
      param_1[1] = lVar5;
      param_2[-1] = lVar4;
      lVar6 = *param_1;
      if (*(int *)(param_1[1] + 0x378) < *(int *)(lVar6 + 0x378)) {
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
    iVar7 = *(int *)(lVar4 + 0x378);
    if (iVar7 < *(int *)(lVar6 + 0x378)) {
      if (*(int *)(lVar5 + 0x378) < iVar7) {
        *param_1 = lVar5;
        param_1[2] = lVar6;
        lVar4 = lVar6;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar6 + 0x378) <= *(int *)(lVar5 + 0x378)) goto LAB_02a72fe8;
        param_1[1] = lVar5;
        param_1[2] = lVar6;
        lVar4 = lVar6;
      }
    }
    else if (*(int *)(lVar5 + 0x378) < iVar7) {
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      if (*(int *)(lVar5 + 0x378) < *(int *)(lVar6 + 0x378)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
    else {
LAB_02a72fe8:
      lVar4 = lVar5;
    }
    if (*(int *)(param_2[-1] + 0x378) < *(int *)(lVar4 + 0x378)) {
      param_1[2] = param_2[-1];
      param_2[-1] = lVar4;
      lVar6 = param_1[1];
      lVar4 = param_1[2];
      if (*(int *)(lVar4 + 0x378) < *(int *)(lVar6 + 0x378)) {
        lVar5 = *param_1;
        param_1[1] = lVar4;
        param_1[2] = lVar6;
        if (*(int *)(lVar4 + 0x378) < *(int *)(lVar5 + 0x378)) {
          *param_1 = lVar4;
          param_1[1] = lVar5;
          return true;
        }
      }
    }
    break;
  case 5:
    FUN_02a72b80(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_1[2];
    iVar7 = *(int *)(lVar4 + 0x378);
    if (iVar7 < *(int *)(lVar6 + 0x378)) {
      if (*(int *)(lVar5 + 0x378) < iVar7) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(int *)(lVar6 + 0x378) <= *(int *)(lVar5 + 0x378)) goto LAB_02a72f04;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar4 = lVar6;
    }
    else if (*(int *)(lVar5 + 0x378) < iVar7) {
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      if (*(int *)(lVar5 + 0x378) < *(int *)(lVar6 + 0x378)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
    else {
LAB_02a72f04:
      lVar4 = lVar5;
    }
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar1 = param_1 + 3;
      do {
        lVar5 = *plVar1;
        if (*(int *)(lVar5 + 0x378) < *(int *)(lVar4 + 0x378)) {
          lVar4 = lVar6;
          do {
            lVar2 = lVar4;
            *(undefined8 *)((long)param_1 + lVar2 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar2 + 0x10);
            if (lVar2 == -0x10) {
              plVar3 = param_1;
              goto LAB_02a72f70;
            }
            lVar4 = lVar2 + -8;
          } while (*(int *)(lVar5 + 0x378) < *(int *)(*(long *)((long)param_1 + lVar2 + 8) + 0x378))
          ;
          plVar3 = (long *)((long)param_1 + lVar2 + 0x10);
LAB_02a72f70:
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


