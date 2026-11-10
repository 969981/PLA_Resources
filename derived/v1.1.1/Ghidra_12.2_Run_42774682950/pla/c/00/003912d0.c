/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003912d0; name: FUN_003912d0
 */


bool FUN_003912d0(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar6 = *param_1;
    if (*(int *)(param_2[-1] + 0x44) < *(int *)(lVar6 + 0x44)) {
      *param_1 = param_2[-1];
LAB_0039154c:
      param_2[-1] = lVar6;
      return true;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar8 = param_1[1];
    lVar4 = param_2[-1];
    iVar7 = *(int *)(lVar8 + 0x44);
    iVar1 = *(int *)(lVar6 + 0x44);
    if (iVar7 < iVar1) {
      if (*(int *)(lVar4 + 0x44) < iVar7) {
        *param_1 = lVar4;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar6;
        if (iVar1 <= *(int *)(param_2[-1] + 0x44)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_0039154c;
    }
    if (*(int *)(lVar4 + 0x44) < iVar7) {
      param_1[1] = lVar4;
      param_2[-1] = lVar8;
      lVar6 = *param_1;
      if (*(int *)(param_1[1] + 0x44) < *(int *)(lVar6 + 0x44)) {
        *param_1 = param_1[1];
        param_1[1] = lVar6;
        return true;
      }
    }
    break;
  case 4:
    lVar6 = *param_1;
    lVar8 = param_1[1];
    lVar4 = param_1[2];
    iVar7 = *(int *)(lVar8 + 0x44);
    iVar1 = *(int *)(lVar6 + 0x44);
    iVar2 = *(int *)(lVar4 + 0x44);
    if (iVar7 < iVar1) {
      if (iVar2 < iVar7) {
        *param_1 = lVar4;
        param_1[2] = lVar6;
        lVar8 = lVar6;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar6;
        if (iVar1 <= iVar2) goto LAB_0039157c;
        param_1[1] = lVar4;
        param_1[2] = lVar6;
        lVar8 = lVar6;
      }
    }
    else if (iVar2 < iVar7) {
      param_1[1] = lVar4;
      param_1[2] = lVar8;
      if (iVar2 < iVar1) {
        *param_1 = lVar4;
        param_1[1] = lVar6;
      }
    }
    else {
LAB_0039157c:
      lVar8 = lVar4;
    }
    if (*(int *)(param_2[-1] + 0x44) < *(int *)(lVar8 + 0x44)) {
      param_1[2] = param_2[-1];
      param_2[-1] = lVar8;
      lVar6 = param_1[1];
      lVar8 = param_1[2];
      iVar7 = *(int *)(lVar8 + 0x44);
      if (iVar7 < *(int *)(lVar6 + 0x44)) {
        param_1[1] = lVar8;
        param_1[2] = lVar6;
        lVar6 = *param_1;
        if (iVar7 < *(int *)(lVar6 + 0x44)) {
          *param_1 = lVar8;
          param_1[1] = lVar6;
          return true;
        }
      }
    }
    break;
  case 5:
    FUN_003910f0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    lVar6 = *param_1;
    lVar8 = param_1[1];
    lVar5 = param_1[2];
    iVar7 = *(int *)(lVar8 + 0x44);
    iVar1 = *(int *)(lVar6 + 0x44);
    iVar2 = *(int *)(lVar5 + 0x44);
    lVar4 = lVar5;
    if (iVar7 < iVar1) {
      if (iVar2 < iVar7) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar6;
        if (iVar1 <= iVar2) goto joined_r0x00391408;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar4 = lVar6;
    }
    else if (iVar2 < iVar7) {
      param_1[1] = lVar5;
      param_1[2] = lVar8;
      lVar4 = lVar8;
      if (iVar2 < iVar1) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
joined_r0x00391408:
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar3 = param_1 + 3;
      do {
        lVar8 = *plVar3;
        iVar1 = *(int *)(lVar8 + 0x44);
        if (iVar1 < *(int *)(lVar4 + 0x44)) {
          lVar4 = lVar6;
          do {
            lVar5 = lVar4;
            *(undefined8 *)((long)param_1 + lVar5 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x10);
            if (lVar5 == -0x10) {
              *param_1 = lVar8;
              goto joined_r0x00391514;
            }
            lVar4 = lVar5 + -8;
          } while (iVar1 < *(int *)(*(long *)((long)param_1 + lVar5 + 8) + 0x44));
          *(long *)((long)param_1 + lVar5 + 0x10) = lVar8;
joined_r0x00391514:
          iVar7 = iVar7 + 1;
          if (iVar7 == 8) {
            return plVar3 + 1 == param_2;
          }
        }
        if (plVar3 + 1 == param_2) {
          return true;
        }
        lVar4 = *plVar3;
        lVar6 = lVar6 + 8;
        plVar3 = plVar3 + 1;
      } while( true );
    }
  }
  return true;
}


