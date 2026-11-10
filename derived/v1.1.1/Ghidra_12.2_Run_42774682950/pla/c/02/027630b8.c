/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027630b8; name: FUN_027630b8
 */


void FUN_027630b8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = 0;
  uVar1 = FUN_00612290();
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = param_1 + 1;
  if ((long *)*param_2 != param_2 + 1) {
    plVar5 = (long *)*param_2;
    do {
      FUN_02761380(param_1,param_1 + 1,(long)plVar5 + 0x1c,(long)plVar5 + 0x1c);
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar2 = plVar5 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar5) {
          do {
            lVar4 = *plVar2;
            plVar2 = (long *)(lVar4 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar4);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar5 = plVar3;
    } while (plVar3 != param_2 + 1);
  }
  return;
}


