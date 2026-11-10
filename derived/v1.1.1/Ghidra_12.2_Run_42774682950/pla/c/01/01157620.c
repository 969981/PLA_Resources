/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01157620; name: FUN_01157620
 */


bool FUN_01157620(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar3 = param_2[-1];
    lVar6 = *param_1;
    if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
        (ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58))) {
      *param_1 = lVar3;
LAB_01157678:
      param_2[-1] = lVar6;
      return true;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar3 = param_1[1];
    uVar8 = *(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58);
    lVar5 = param_2[-1];
    uVar9 = *(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58);
    if (uVar8 < (ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58))) {
      if (uVar9 < uVar8) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar3;
        param_1[1] = lVar6;
        lVar3 = param_2[-1];
        if ((ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58)) <=
            (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58))) {
          return true;
        }
        param_1[1] = lVar3;
      }
      goto LAB_01157678;
    }
    if (uVar9 < uVar8) {
      param_1[1] = lVar5;
      param_2[-1] = lVar3;
      lVar6 = *param_1;
      lVar3 = param_1[1];
      if ((ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58)) <
          (ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58))) {
        *param_1 = lVar3;
        param_1[1] = lVar6;
        return true;
      }
    }
    break;
  case 4:
    FUN_011573b0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_01157520(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    lVar6 = *param_1;
    lVar3 = param_1[1];
    uVar8 = *(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58);
    lVar5 = param_1[2];
    uVar9 = *(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58);
    if (uVar8 < (ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58))) {
      if (uVar9 < uVar8) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar3;
        param_1[1] = lVar6;
        if ((ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58)) <=
            (ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58))) goto LAB_01157780;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar3 = lVar6;
    }
    else if (uVar9 < uVar8) {
      param_1[1] = lVar5;
      param_1[2] = lVar3;
      if ((ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58)) <
          (ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58))) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
    else {
LAB_01157780:
      lVar3 = lVar5;
    }
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar4 = param_1 + 3;
      do {
        lVar5 = *plVar4;
        if ((ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58)) <
            (ulong)(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58))) {
          lVar3 = lVar6;
          do {
            lVar1 = lVar3;
            *(undefined8 *)((long)param_1 + lVar1 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar1 + 0x10);
            if (lVar1 == -0x10) {
              plVar2 = param_1;
              goto LAB_011577fc;
            }
            lVar10 = *(long *)((long)param_1 + lVar1 + 8);
            lVar3 = lVar1 + -8;
          } while ((ulong)(*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58)) <
                   (ulong)(*(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58)));
          plVar2 = (long *)((long)param_1 + lVar1 + 0x10);
LAB_011577fc:
          iVar7 = iVar7 + 1;
          *plVar2 = lVar5;
          if (iVar7 == 8) {
            return plVar4 + 1 == param_2;
          }
        }
        if (plVar4 + 1 == param_2) {
          return true;
        }
        lVar3 = *plVar4;
        lVar6 = lVar6 + 8;
        plVar4 = plVar4 + 1;
      } while( true );
    }
  }
  return true;
}


