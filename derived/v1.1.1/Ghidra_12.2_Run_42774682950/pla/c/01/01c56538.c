/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c56538; name: FUN_01c56538
 */


void FUN_01c56538(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_48 [3];
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    plVar4 = plVar2;
LAB_01c56590:
    lVar1 = *plVar2;
    plVar3 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    while( true ) {
      while (plVar4 = plVar3, *(int *)((long)plVar3 + 0x1c) <= *param_2) {
        if (*param_2 <= *(int *)((long)plVar3 + 0x1c)) goto LAB_01c56590;
        plVar2 = plVar3 + 1;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_01c56590;
        plVar3 = (long *)*plVar2;
      }
      if ((long *)*plVar3 == (long *)0x0) break;
      plVar2 = plVar3;
      plVar3 = (long *)*plVar3;
    }
    lVar1 = *plVar3;
  }
  if (lVar1 == 0) {
    FUN_01c56600(local_48,param_1,param_3);
    FUN_01c5667c(param_1,plVar4,plVar3,local_48[0]);
    local_48[0] = 0;
    FUN_01c567a8(local_48);
  }
  return;
}


