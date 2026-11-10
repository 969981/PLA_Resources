/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762970; name: FUN_02762970
 */


void FUN_02762970(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_02762adc(auStack_48,param_1);
    if ((param_2 != param_3) && (local_38 != 0)) {
      lVar4 = local_38;
      lVar5 = local_40;
      do {
        *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
        *(int *)(lVar4 + 0x20) = (int)param_2[4];
        FUN_02762b34(param_1);
        local_38 = lVar5;
        if (lVar5 == 0) {
          lVar2 = 0;
          plVar3 = (long *)param_2[1];
          if ((long *)param_2[1] == (long *)0x0) goto LAB_02762a1c;
LAB_027629ec:
          do {
            param_2 = plVar3;
            plVar3 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        else {
          lVar2 = FUN_02762bdc(lVar5);
          plVar3 = (long *)param_2[1];
          local_40 = lVar2;
          if ((long *)param_2[1] != (long *)0x0) goto LAB_027629ec;
LAB_02762a1c:
          plVar3 = param_2 + 2;
          bVar1 = *(long **)*plVar3 != param_2;
          param_2 = (long *)*plVar3;
          if (bVar1) {
            do {
              lVar4 = *plVar3;
              plVar3 = (long *)(lVar4 + 0x10);
              param_2 = (long *)*plVar3;
            } while (*param_2 != lVar4);
          }
        }
      } while ((lVar5 != 0) && (lVar4 = lVar5, lVar5 = lVar2, param_2 != param_3));
    }
    FUN_02762b84(auStack_48);
  }
  while (param_2 != param_3) {
    FUN_02762c98(param_1,(long)param_2 + 0x1c);
    plVar3 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar3 = param_2 + 2;
      bVar1 = *(long **)*plVar3 != param_2;
      param_2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          param_2 = (long *)*plVar3;
        } while (*(long *)*plVar3 != lVar4);
      }
    }
    else {
      do {
        param_2 = plVar3;
        plVar3 = (long *)*param_2;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


