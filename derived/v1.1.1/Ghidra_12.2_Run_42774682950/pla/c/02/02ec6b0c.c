/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6b0c; name: FUN_02ec6b0c
 */


undefined8 FUN_02ec6b0c(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = (long *)0x0;
    do {
      plVar2 = plVar4 + 1;
      plVar4 = (long *)*plVar4;
      if (*plVar2 != param_2) {
        plVar2 = plVar1;
      }
      plVar1 = plVar2;
    } while (plVar4 != (long *)0x0);
    if (plVar2 != (long *)0x0) {
      lVar3 = *param_4;
      goto joined_r0x02ec6bcc;
    }
  }
  plVar2 = (long *)FUN_02ec6c0c(param_1);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  *plVar2 = param_2;
  *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
  *(int *)(*plVar2 + 0x84) = *(int *)(*plVar2 + 0x84) + 1;
  lVar3 = *param_4;
joined_r0x02ec6bcc:
  if (lVar3 != 0) {
    if ((int)param_4[2] - 4U < 2) {
      FUN_02eb5cf8(lVar3,plVar2 + 1,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10),*param_3);
    }
    else if ((int)param_4[2] == 2) {
      FUN_02ed5530(lVar3 + -0x30,plVar2 + 1,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10),
                   *param_3,1);
      return 1;
    }
  }
  return 1;
}


