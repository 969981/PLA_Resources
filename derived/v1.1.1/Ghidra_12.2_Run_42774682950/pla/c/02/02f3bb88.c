/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3bb88; name: FUN_02f3bb88
 */


void FUN_02f3bb88(long *param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[6];
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  if (plVar5 != (long *)0x0) {
    do {
      (**(code **)(*plVar5 + 0x40))(plVar5);
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) {
      plVar1 = (long *)plVar5[1];
      (**(code **)(*plVar5 + 0x48))(plVar5);
      while (plVar1 != (long *)0x0) {
        plVar5 = (long *)plVar1[1];
        (**(code **)(*plVar1 + 0x48))(plVar1);
        plVar1 = plVar5;
      }
    }
  }
  uVar4 = *(uint *)((long)param_1 + 0x54);
  if ((param_2 != 0xffffffff) && (param_2 < uVar4)) {
    *(uint *)((long)param_1 + 0x54) = param_2;
    uVar4 = param_2;
  }
  if (uVar4 != 0) {
    bVar2 = *(byte *)((long)param_1 + 0x5a);
    if (((bVar2 & 0xf) != 0) && ((bVar2 >> 4 & 1) == 0)) {
      if ((bVar2 & 0xf) < 3) {
        *(byte *)((long)param_1 + 0x5a) = bVar2 & 0xf0 | 2;
      }
      goto LAB_02f3bc60;
    }
  }
  (**(code **)(*param_1 + 0x70))(param_1);
LAB_02f3bc60:
  iVar3 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar3;
  if (iVar3 != 0) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_02f37eb4(param_1);
  }
  else {
    FUN_02f3b8c0(param_1[2],param_1);
    param_1[2] = 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x02f3bcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,param_1);
  return;
}


