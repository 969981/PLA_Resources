/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f50488; name: FUN_02f50488
 */


void FUN_02f50488(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3[3] == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  lVar4 = plVar3[1] + (long)*(int *)((long)plVar3 + 0x24);
  lVar2 = plVar3[1] + (long)*(int *)(plVar3[3] + 0x90);
  for (plVar5 = (long *)*plVar3; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    while( true ) {
      if (plVar5[3] == 0) goto LAB_02f504e0;
      lVar1 = plVar5[1] + (long)*(int *)((long)plVar5 + 0x24);
      if (lVar1 < lVar4) {
        lVar4 = lVar1;
      }
      lVar1 = plVar5[1] + (long)*(int *)(plVar5[3] + 0x90);
      if (lVar1 < lVar2) break;
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02f504e0;
    }
    lVar2 = lVar1;
  }
LAB_02f504e0:
  *param_2 = lVar4 - (ulong)*(uint *)(param_1 + 0x88);
  *param_3 = lVar2 - (ulong)*(uint *)(param_1 + 0x88);
  return;
}


