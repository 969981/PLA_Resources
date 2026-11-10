/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051ee8c; name: FUN_0051ee8c
 */


long * FUN_0051ee8c(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = param_1 + 1;
  if ((plVar6 == param_2) || (iVar2 = FUN_0051f1a8(*param_5,param_2[4]), iVar2 < 0)) {
    plVar5 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar3 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        plVar3 = param_2;
        do {
          plVar5 = (long *)plVar3[2];
          bVar1 = (long *)*plVar5 == plVar3;
          plVar3 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)plVar5[1];
        } while ((long *)plVar5[1] != (long *)0x0);
      }
      iVar2 = FUN_0051f1a8(plVar5[4],*param_5);
      if (-1 < iVar2) {
        param_2 = (long *)*plVar6;
        if (param_2 != (long *)0x0) {
          plVar5 = param_1 + 1;
          iVar2 = FUN_0051f1a8(*param_5,param_2[4]);
          do {
            if (iVar2 < 0) {
              plVar3 = (long *)*param_2;
              plVar6 = param_2;
              if (plVar3 == (long *)0x0) goto LAB_0051f06c;
              plVar5 = param_2;
            }
            else {
              iVar2 = FUN_0051f1a8(param_2[4],*param_5);
              if (-1 < iVar2) goto LAB_0051f098;
              plVar5 = param_2 + 1;
              plVar3 = (long *)*plVar5;
              if (plVar3 == (long *)0x0) goto LAB_0051f098;
            }
            iVar2 = FUN_0051f1a8(*param_5,plVar3[4]);
            param_2 = plVar3;
          } while( true );
        }
        goto LAB_0051f078;
      }
    }
    plVar6 = param_2;
    if (*param_2 == 0) {
LAB_0051f06c:
      *param_3 = (long)plVar6;
    }
    else {
      *param_3 = (long)plVar5;
      plVar6 = plVar5 + 1;
    }
  }
  else {
    iVar2 = FUN_0051f1a8(param_2[4],*param_5);
    if (-1 < iVar2) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar5 = param_2 + 1;
    plVar3 = (long *)*plVar5;
    if ((long *)*plVar5 == (long *)0x0) {
      plVar3 = param_2 + 2;
      plVar7 = (long *)*plVar3;
      if ((long *)*plVar7 != param_2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar7 = (long *)*plVar3;
        } while (*plVar7 != lVar4);
      }
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    if ((plVar7 == plVar6) || (iVar2 = FUN_0051f1a8(*param_5,plVar7[4]), iVar2 < 0)) {
      if (param_2[1] != 0) {
        *param_3 = (long)plVar7;
        return plVar7;
      }
LAB_0051f098:
      *param_3 = (long)param_2;
      return plVar5;
    }
    param_2 = (long *)*plVar6;
    if (param_2 != (long *)0x0) {
      plVar5 = param_1 + 1;
      iVar2 = FUN_0051f1a8(*param_5,param_2[4]);
      do {
        if (iVar2 < 0) {
          plVar3 = (long *)*param_2;
          plVar6 = param_2;
          if (plVar3 == (long *)0x0) goto LAB_0051f06c;
          plVar5 = param_2;
        }
        else {
          iVar2 = FUN_0051f1a8(param_2[4],*param_5);
          if (-1 < iVar2) goto LAB_0051f098;
          plVar5 = param_2 + 1;
          plVar3 = (long *)*plVar5;
          if (plVar3 == (long *)0x0) goto LAB_0051f098;
        }
        iVar2 = FUN_0051f1a8(*param_5,plVar3[4]);
        param_2 = plVar3;
      } while( true );
    }
LAB_0051f078:
    *param_3 = (long)plVar6;
  }
  return plVar6;
}


