/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037d270; name: FUN_0037d270
 */


bool FUN_0037d270(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar7 = param_2[-1];
    lVar4 = *param_1;
    if (*(char *)(lVar7 + 0x43) == '\0') {
      if ((*(char *)(lVar4 + 0x43) != '\0') ||
         ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
          (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_0037d548;
    }
    else if ((*(char *)(lVar4 + 0x43) != '\0') && (*(int *)(lVar7 + 0x44) < *(int *)(lVar4 + 0x44)))
    {
LAB_0037d548:
      *param_1 = lVar7;
      param_2[-1] = lVar4;
      return true;
    }
    break;
  case 3:
    FUN_0037cca0(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_0037ceb0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    return true;
  case 5:
    FUN_0037d050(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_0037cca0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar4 = 0;
      iVar5 = 0;
      plVar2 = param_1 + 3;
      plVar8 = param_1 + 2;
      do {
        plVar6 = plVar2;
        lVar7 = *plVar6;
        lVar11 = *plVar8;
        cVar1 = *(char *)(lVar7 + 0x43);
        if (cVar1 == '\0') {
          if ((*(char *)(lVar11 + 0x43) != '\0') ||
             ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
              (int)((ulong)(lVar11 - *(long *)(*(long *)(lVar11 + 0x50) + 0x28)) >> 3) * 0x286bca1b)
             ) goto LAB_0037d378;
        }
        else if ((*(char *)(lVar11 + 0x43) != '\0') &&
                (*(int *)(lVar7 + 0x44) < *(int *)(lVar11 + 0x44))) {
LAB_0037d378:
          *plVar6 = lVar11;
          if (plVar8 == param_1) {
LAB_0037d2f0:
            *plVar8 = lVar7;
          }
          else {
            lVar11 = lVar4;
            if (cVar1 == '\0') {
              lVar10 = (long)param_1 + lVar4;
              lVar12 = *(long *)(lVar10 + 8);
              if (*(char *)(lVar12 + 0x43) == '\0') goto LAB_0037d40c;
              do {
                do {
                  lVar9 = lVar11 + -8;
                  *(long *)(lVar10 + 0x10) = lVar12;
                  if (lVar11 == -8) {
                    plVar8 = param_1;
                    goto LAB_0037d2f0;
                  }
                  lVar10 = (long)param_1 + lVar9;
                  lVar12 = *(long *)(lVar10 + 8);
                  lVar11 = lVar9;
                } while (*(char *)(lVar12 + 0x43) != '\0');
LAB_0037d40c:
              } while ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) *
                       0x286bca1b <
                       (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) *
                       0x286bca1b);
LAB_0037d43c:
              *(long *)(lVar10 + 0x10) = lVar7;
            }
            else {
              do {
                lVar10 = (long)param_1 + lVar11;
                lVar12 = *(long *)(lVar10 + 8);
                if (*(char *)(lVar12 + 0x43) == '\0') goto LAB_0037d43c;
                if (*(int *)(lVar12 + 0x44) <= *(int *)(lVar7 + 0x44)) goto LAB_0037d2f0;
                plVar8 = plVar8 + -1;
                *(long *)(lVar10 + 0x10) = lVar12;
                bVar3 = lVar11 != -8;
                lVar11 = lVar11 + -8;
              } while (bVar3);
              *param_1 = lVar7;
            }
          }
          iVar5 = iVar5 + 1;
          if (iVar5 == 8) {
            return plVar6 + 1 == param_2;
          }
        }
        lVar4 = lVar4 + 8;
        plVar2 = plVar6 + 1;
        plVar8 = plVar6;
      } while (plVar6 + 1 != param_2);
    }
  }
  return true;
}


