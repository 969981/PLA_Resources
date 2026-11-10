/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761400; name: FUN_02761400
 */


long * FUN_02761400(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 + 1 != param_2) {
    iVar1 = *param_5;
    if (*(int *)((long)param_2 + 0x1c) <= iVar1) {
      if (iVar1 <= *(int *)((long)param_2 + 0x1c)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if (plVar3 == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar6 = *plVar3;
            plVar3 = (long *)(lVar6 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar6);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 == param_1 + 1) || (iVar1 < *(int *)((long)plVar4 + 0x1c))) {
        if (param_2[1] == 0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
        *param_3 = (long)plVar4;
        return plVar4;
      }
      goto LAB_027614c8;
    }
  }
  plVar4 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    if (plVar4 == (long *)0x0) {
      plVar5 = param_2;
      do {
        plVar3 = (long *)plVar5[2];
        bVar2 = (long *)*plVar3 == plVar5;
        plVar5 = plVar3;
      } while (bVar2);
    }
    else {
      plVar5 = plVar4;
      do {
        plVar3 = plVar5;
        plVar5 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    if (*param_5 <= *(int *)((long)plVar3 + 0x1c)) {
LAB_027614c8:
      plVar3 = (long *)FUN_02761580(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar4 == (long *)0x0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar3;
  return plVar3 + 1;
}


