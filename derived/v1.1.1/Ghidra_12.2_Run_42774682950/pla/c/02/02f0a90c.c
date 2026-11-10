/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0a90c; name: FUN_02f0a90c
 */


void FUN_02f0a90c(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x178);
  if (plVar3 != (long *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      plVar5 = (long *)0x0;
      do {
        if ((param_3 == 0) || (*(int *)((long)plVar3 + 0x1c) == param_3)) {
          plVar6 = (long *)*plVar3;
          plVar4 = (long *)(param_1 + 0x178);
          if (*(long **)(param_1 + 0x178) != plVar3) {
            plVar4 = plVar5;
          }
          *plVar4 = (long)plVar6;
          *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
          if (plVar3[4] != 0) {
            FUN_02ef3648(DAT_0440a140,*(undefined4 *)(param_1 + 0x10));
          }
          FUN_02f09c9c(param_1,plVar3);
          FUN_02f09d28(plVar3);
        }
        else {
          plVar6 = (long *)*plVar3;
          plVar5 = plVar3;
        }
        plVar3 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      bVar2 = false;
      plVar5 = (long *)0x0;
      do {
        while ((plVar4 = plVar3, (undefined8 *)plVar4[4] == param_2 &&
               ((param_3 == 0 || (*(int *)((long)plVar4 + 0x1c) == param_3))))) {
          plVar3 = (long *)*plVar4;
          plVar6 = (long *)(param_1 + 0x178);
          if (*(long **)(param_1 + 0x178) != plVar4) {
            plVar6 = plVar5;
          }
          *plVar6 = (long)plVar3;
          *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
          if (!bVar2) {
            *(int *)(param_2 + 10) = *(int *)(param_2 + 10) + 1;
          }
          FUN_02f09c9c(param_1,plVar4);
          FUN_02f09d28(plVar4);
          bVar2 = true;
          if (plVar3 == (long *)0x0) goto LAB_02f0a9ec;
        }
        plVar3 = (long *)*plVar4;
        plVar5 = plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_02f0a9ec:
      if (bVar2) {
        FUN_02ef3648(DAT_0440a140,*(undefined4 *)(param_1 + 0x10),param_2);
        iVar1 = *(int *)(param_2 + 10);
        *(int *)(param_2 + 10) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x02f0aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_0442d150)(4,param_2);
          return;
        }
      }
    }
  }
  return;
}


