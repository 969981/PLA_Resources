/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bec30; name: FUN_004bec30
 */


void FUN_004bec30(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 uint param_7,int param_8,int param_9,long *param_10,long *param_11)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar3 = (long *)*param_10;
  plVar2 = (long *)*param_11;
  if ((param_8 == 6) || (param_8 == 3)) {
    plVar4 = plVar2;
    plVar5 = plVar3;
    if (plVar2 == (long *)0x0 || plVar3 == (long *)0x0) goto LAB_004bef18;
  }
  else {
    plVar4 = plVar3;
    plVar5 = plVar2;
    if (plVar3 == (long *)0x0 || plVar2 == (long *)0x0) goto LAB_004bef18;
  }
  do {
    if ((param_8 == 6) || (param_8 == 3)) {
      plVar6 = (long *)plVar4[3];
      lVar7 = *plVar4;
      if (-1 < param_9) goto LAB_004becbc;
LAB_004bed40:
      if (((((((param_1 == 0) || (*(int *)(lVar7 + 0x18) == param_1)) &&
             ((param_2 == 0 || ((*(uint *)(lVar7 + 0x1c) & param_2) != 0)))) &&
            ((param_3 == 0 || ((*(uint *)(lVar7 + 0x20) & param_3) != 0)))) &&
           ((param_4 == 0 || ((*(uint *)(lVar7 + 0x24) & param_4) != 0)))) &&
          ((((param_5 == 0 || ((*(uint *)(lVar7 + 0x28) & param_5) != 0)) &&
            ((param_6 == 0 || (*(int *)(lVar7 + 0x2c) == param_6)))) &&
           (((param_7 & 0x1f) == 0 || ((*(uint *)(lVar7 + 0x3c) & param_7 & 0x1f) != 0)))))) &&
         (((param_7 & 0x20) == 0 || ((*(uint *)(lVar7 + 0x3c) & param_7 & 0x20) != 0))))
      goto LAB_004becc8;
      goto switchD_004becdc_caseD_5;
    }
    plVar6 = (long *)plVar4[2];
    lVar7 = *plVar4;
    if (param_9 < 0) goto LAB_004bed40;
LAB_004becbc:
    if (*(int *)(lVar7 + 0x44) != param_9) goto switchD_004becdc_caseD_5;
LAB_004becc8:
    switch(param_8) {
    case 1:
      if ((int)plVar4[1] != 0) goto switchD_004becdc_caseD_5;
      if (plVar4 != plVar2) {
        if (plVar4 == plVar3) {
          plVar3 = (long *)plVar4[2];
        }
        lVar7 = plVar4[3];
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = plVar4[2];
        }
        if (plVar4[2] != 0) {
          *(long *)(plVar4[2] + 0x18) = lVar7;
        }
        plVar2[2] = (long)plVar4;
        plVar4[2] = 0;
        plVar4[3] = (long)plVar2;
        plVar2 = plVar4;
      }
      *(undefined4 *)(plVar4 + 1) = 1;
      break;
    case 2:
      plVar8 = (long *)plVar4[2];
      if (plVar4 != plVar3) {
        *(long **)(plVar4[3] + 0x10) = plVar8;
        plVar8 = plVar3;
      }
      if (plVar4 == plVar2) {
        plVar2 = (long *)plVar4[3];
      }
      lVar7 = plVar4[2];
      *(undefined4 *)(plVar4 + 1) = 0;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x18) = plVar4[3];
      }
      if (plVar4[3] != 0) {
        *(long *)(plVar4[3] + 0x10) = lVar7;
      }
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar3 = plVar8;
      break;
    case 3:
      if ((int)plVar4[1] == 0) goto switchD_004becdc_caseD_5;
      if (plVar4 != plVar3) {
        if (plVar4 == plVar2) {
          plVar2 = (long *)plVar4[3];
        }
        lVar7 = plVar4[2];
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x18) = plVar4[3];
        }
        if (plVar4[3] != 0) {
          *(long *)(plVar4[3] + 0x10) = lVar7;
        }
        plVar3[3] = (long)plVar4;
        plVar4[2] = (long)plVar3;
        plVar4[3] = 0;
        plVar3 = plVar4;
      }
      *(undefined4 *)(plVar4 + 1) = 0;
      break;
    case 4:
      if (((int)plVar4[1] == 0) || (plVar4 == plVar2)) goto switchD_004becdc_caseD_5;
      if (plVar4 == plVar3) {
        plVar3 = (long *)plVar4[2];
      }
      lVar7 = plVar4[3];
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = plVar4[2];
      }
      if (plVar4[2] != 0) {
        *(long *)(plVar4[2] + 0x18) = lVar7;
      }
      plVar2[2] = (long)plVar4;
      plVar4[2] = 0;
      plVar4[3] = (long)plVar2;
      plVar2 = plVar4;
      goto joined_r0x004beea8;
    default:
      goto switchD_004becdc_caseD_5;
    case 6:
      if (((int)plVar4[1] != 0) && (plVar4 != plVar3)) {
        if (plVar4 == plVar2) {
          plVar2 = (long *)plVar4[3];
        }
        lVar7 = plVar4[2];
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x18) = plVar4[3];
        }
        if (plVar4[3] != 0) {
          *(long *)(plVar4[3] + 0x10) = lVar7;
        }
        plVar3[3] = (long)plVar4;
        plVar4[2] = (long)plVar3;
        plVar4[3] = 0;
        plVar3 = plVar4;
      }
      goto switchD_004becdc_caseD_5;
    }
    if (plVar6 == (long *)0x0) break;
LAB_004beef8:
    bVar1 = plVar4 != plVar5;
    plVar4 = plVar6;
  } while (bVar1);
LAB_004bef18:
  *param_10 = (long)plVar3;
  *param_11 = (long)plVar2;
  return;
switchD_004becdc_caseD_5:
joined_r0x004beea8:
  if (plVar6 != (long *)0x0) goto LAB_004beef8;
  goto LAB_004bef18;
}


