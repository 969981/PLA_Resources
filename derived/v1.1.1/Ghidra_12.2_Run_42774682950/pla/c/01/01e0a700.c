/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0a700; name: FUN_01e0a700
 */


bool FUN_01e0a700(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_1;
    if (*(float *)(param_2[-1] + 0x330) < *(float *)(lVar6 + 0x330)) {
      *param_1 = param_2[-1];
LAB_01e0a764:
      param_2[-1] = lVar6;
      return true;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_2[-1];
    fVar8 = *(float *)(lVar4 + 0x330);
    if (fVar8 < *(float *)(lVar6 + 0x330)) {
      if (*(float *)(lVar5 + 0x330) < fVar8) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(float *)(lVar6 + 0x330) <= *(float *)(param_2[-1] + 0x330)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_01e0a764;
    }
    if (*(float *)(lVar5 + 0x330) < fVar8) {
      param_1[1] = lVar5;
      param_2[-1] = lVar4;
      lVar6 = *param_1;
      if (*(float *)(lVar6 + 0x330) <= *(float *)(param_1[1] + 0x330)) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = lVar6;
      return true;
    }
    break;
  case 4:
    FUN_01e0a5c0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    return true;
  case 5:
    plVar1 = param_1 + 2;
    plVar3 = param_1 + 3;
    FUN_01e0a5c0(param_1,param_1 + 1,plVar1,plVar3);
    lVar6 = param_1[3];
    if (*(float *)(param_2[-1] + 0x330) < *(float *)(lVar6 + 0x330)) {
      *plVar3 = param_2[-1];
      param_2[-1] = lVar6;
      lVar6 = *plVar3;
      lVar4 = *plVar1;
      if (*(float *)(lVar6 + 0x330) < *(float *)(lVar4 + 0x330)) {
        *plVar1 = lVar6;
        *plVar3 = lVar4;
        lVar4 = param_1[1];
        if (*(float *)(lVar6 + 0x330) < *(float *)(lVar4 + 0x330)) {
          param_1[1] = lVar6;
          param_1[2] = lVar4;
          lVar4 = *param_1;
          if (*(float *)(lVar4 + 0x330) <= *(float *)(lVar6 + 0x330)) {
            return true;
          }
          *param_1 = lVar6;
          param_1[1] = lVar4;
          return true;
        }
      }
    }
    break;
  default:
    lVar6 = *param_1;
    lVar4 = param_1[1];
    lVar5 = param_1[2];
    fVar8 = *(float *)(lVar4 + 0x330);
    if (fVar8 < *(float *)(lVar6 + 0x330)) {
      if (*(float *)(lVar5 + 0x330) < fVar8) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar4;
        param_1[1] = lVar6;
        if (*(float *)(lVar6 + 0x330) <= *(float *)(lVar5 + 0x330)) goto LAB_01e0a900;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar4 = lVar6;
    }
    else if (fVar8 <= *(float *)(lVar5 + 0x330)) {
LAB_01e0a900:
      lVar4 = lVar5;
    }
    else {
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      if (*(float *)(lVar5 + 0x330) < *(float *)(lVar6 + 0x330)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar1 = param_1 + 3;
      do {
        lVar5 = *plVar1;
        if (*(float *)(lVar5 + 0x330) < *(float *)(lVar4 + 0x330)) {
          lVar4 = lVar6;
          do {
            lVar2 = lVar4;
            *(undefined8 *)((long)param_1 + lVar2 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar2 + 0x10);
            if (lVar2 == -0x10) {
              plVar3 = param_1;
              goto LAB_01e0a97c;
            }
            lVar4 = lVar2 + -8;
          } while (*(float *)(lVar5 + 0x330) <
                   *(float *)(*(long *)((long)param_1 + lVar2 + 8) + 0x330));
          plVar3 = (long *)((long)param_1 + lVar2 + 0x10);
LAB_01e0a97c:
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


