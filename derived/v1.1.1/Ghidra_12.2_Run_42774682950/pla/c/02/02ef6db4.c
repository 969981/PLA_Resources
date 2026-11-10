/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6db4; name: FUN_02ef6db4
 */


void FUN_02ef6db4(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char local_14 [4];
  
  if (*(char *)((long)param_2 + 0x14) != '\0') {
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
  }
  *(undefined1 *)((long)param_2 + 0x14) = 0;
  if (*(char *)((long)param_2 + 0x15) != '\0') {
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
  }
  iVar1 = (int)param_2[2];
  *(undefined1 *)((long)param_2 + 0x15) = 0;
  if (iVar1 != 0) {
    lVar6 = FUN_02ef7dac(param_1 + 0x60,iVar1,local_14);
    if (((lVar6 != 0) && (local_14[0] != '\0')) &&
       (iVar2 = *(int *)(lVar6 + 4) + -1, *(int *)(lVar6 + 4) = iVar2, iVar2 == 0)) {
      FUN_02ef6ee8(param_1 + 0x60,iVar1);
    }
    *(undefined4 *)(param_2 + 2) = 0;
  }
  plVar3 = *(long **)(param_1 + 0xe0);
  plVar4 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3;
    if (((plVar3 != param_2) && (plVar5 = (long *)*plVar3, plVar4 = plVar3, plVar5 != (long *)0x0))
       && (plVar5 != param_2)) {
      do {
        plVar4 = plVar5;
        plVar5 = (long *)*plVar4;
      } while (plVar5 != (long *)0x0 && plVar5 != param_2);
    }
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      if (plVar3 == plVar5) {
        *(long *)(param_1 + 0xe0) = lVar6;
        plVar3 = (long *)lVar6;
      }
      else {
        *plVar4 = lVar6;
        plVar3 = *(long **)(param_1 + 0xe0);
      }
    }
  }
  if (plVar3 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}


