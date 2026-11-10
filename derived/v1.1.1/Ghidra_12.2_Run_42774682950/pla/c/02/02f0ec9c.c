/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0ec9c; name: FUN_02f0ec9c
 */


void FUN_02f0ec9c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)*param_1;
  plVar2 = plVar1;
  if ((int)param_1[1] != 0) {
    do {
      lVar3 = *plVar2;
      FUN_02f0e5cc(lVar3,*(int *)(lVar3 + 0x1c) + *(int *)(lVar3 + 0x18));
      if (*(long *)(lVar3 + 0x28) == 0) {
        if (lVar3 != 0) goto LAB_02f0ecf4;
      }
      else {
        *(undefined4 *)(lVar3 + 0x30) = 0;
        (*DAT_0442d150)(0);
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined4 *)(lVar3 + 0x34) = 0;
LAB_02f0ecf4:
        (*DAT_0442d150)(0,lVar3);
      }
      plVar1 = (long *)*param_1;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1 + *(uint *)(param_1 + 1));
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0,plVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


