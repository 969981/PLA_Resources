/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136f9bc; name: FUN_0136f9bc
 */


long FUN_0136f9bc(long param_1,uint *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_48 [3];
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    plVar2 = plVar1;
  }
  else {
    plVar1 = (long *)(param_1 + 8);
    while( true ) {
      while (*param_2 < *(uint *)((long)plVar2 + 0x1c)) {
        plVar1 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) {
          lVar3 = *plVar2;
          goto joined_r0x0136fa40;
        }
        plVar2 = (long *)*plVar2;
      }
      if (*param_2 <= *(uint *)((long)plVar2 + 0x1c)) break;
      plVar1 = plVar2 + 1;
      if ((long *)*plVar1 == (long *)0x0) break;
      plVar2 = (long *)*plVar1;
    }
  }
  lVar3 = *plVar1;
joined_r0x0136fa40:
  if (lVar3 == 0) {
    FUN_0136fa88(local_48,param_1,param_3);
    lVar3 = local_48[0];
    FUN_0136fb04(param_1,plVar2,plVar1,local_48[0]);
    local_48[0] = 0;
    FUN_0136fc48(local_48);
  }
  return lVar3;
}


