/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070d190; name: FUN_0070d190
 */


bool FUN_0070d190(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar7 = *param_1;
    if (lVar7 <= param_2[-1]) {
      return true;
    }
    *param_1 = param_2[-1];
LAB_0070d3e0:
    param_2[-1] = lVar7;
    return true;
  case 3:
    lVar7 = *param_1;
    lVar8 = param_1[1];
    lVar2 = param_2[-1];
    if (lVar8 < lVar7) {
      if (lVar2 < lVar8) {
        *param_1 = lVar2;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar7;
        if (lVar7 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_0070d3e0;
    }
    if (lVar8 <= lVar2) {
      return true;
    }
    param_1[1] = lVar2;
    param_2[-1] = lVar8;
    lVar7 = *param_1;
    if (param_1[1] < lVar7) {
      *param_1 = param_1[1];
      param_1[1] = lVar7;
      return true;
    }
    break;
  case 4:
    lVar7 = *param_1;
    lVar8 = param_1[1];
    lVar2 = param_1[2];
    if (lVar8 < lVar7) {
      if (lVar2 < lVar8) {
        *param_1 = lVar2;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar7;
        if (lVar7 <= lVar2) goto LAB_0070d41c;
        param_1[1] = lVar2;
      }
      param_1[2] = lVar7;
      lVar8 = lVar7;
LAB_0070d40c:
      lVar7 = param_2[-1];
      if (lVar8 <= lVar7) {
        return true;
      }
    }
    else if (lVar2 < lVar8) {
      param_1[1] = lVar2;
      param_1[2] = lVar8;
      if (lVar7 <= lVar2) goto LAB_0070d40c;
      *param_1 = lVar2;
      param_1[1] = lVar7;
      lVar7 = param_2[-1];
      if (lVar8 <= lVar7) {
        return true;
      }
    }
    else {
LAB_0070d41c:
      lVar7 = param_2[-1];
      lVar8 = lVar2;
      if (lVar2 <= lVar7) {
        return true;
      }
    }
    param_1[2] = lVar7;
    param_2[-1] = lVar8;
    lVar7 = param_1[1];
    lVar8 = param_1[2];
    if (lVar7 <= lVar8) {
      return true;
    }
    lVar2 = *param_1;
    param_1[1] = lVar8;
    param_1[2] = lVar7;
    if (lVar8 < lVar2) {
      *param_1 = lVar8;
      param_1[1] = lVar2;
      return true;
    }
    break;
  case 5:
    FUN_0070cfa0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    return true;
  default:
    lVar7 = *param_1;
    lVar8 = param_1[1];
    lVar4 = param_1[2];
    lVar2 = lVar4;
    if (lVar8 < lVar7) {
      if (lVar4 < lVar8) {
        *param_1 = lVar4;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar7;
        if (lVar7 <= lVar4) goto joined_r0x0070d298;
        param_1[1] = lVar4;
      }
      param_1[2] = lVar7;
      lVar2 = lVar7;
    }
    else if (lVar4 < lVar8) {
      param_1[1] = lVar4;
      param_1[2] = lVar8;
      lVar2 = lVar8;
      if (lVar4 < lVar7) {
        *param_1 = lVar4;
        param_1[1] = lVar7;
      }
    }
joined_r0x0070d298:
    if (param_1 + 3 == param_2) {
      return true;
    }
    plVar5 = param_1 + 3;
    iVar3 = 0;
    lVar7 = 0x18;
    lVar8 = *plVar5;
    plVar6 = plVar5;
    if (lVar2 <= lVar8) goto LAB_0070d39c;
    do {
      lVar4 = lVar7;
      do {
        lVar1 = lVar4 + -8;
        *(long *)((long)param_1 + lVar4) = lVar2;
        if (lVar1 == 0) {
          *param_1 = lVar8;
          goto joined_r0x0070d398;
        }
        lVar2 = *(long *)((long)param_1 + lVar4 + -0x10);
        lVar4 = lVar1;
      } while (lVar8 < lVar2);
      *(long *)((long)param_1 + lVar1) = lVar8;
joined_r0x0070d398:
      iVar3 = iVar3 + 1;
      plVar6 = plVar5;
      if (iVar3 == 8) {
        return plVar5 + 1 == param_2;
      }
LAB_0070d39c:
      do {
        plVar5 = plVar6 + 1;
        if (plVar5 == param_2) {
          return true;
        }
        lVar2 = *plVar6;
        lVar7 = lVar7 + 8;
        lVar8 = *plVar5;
        plVar6 = plVar5;
      } while (lVar2 <= lVar8);
    } while( true );
  }
  return true;
}


