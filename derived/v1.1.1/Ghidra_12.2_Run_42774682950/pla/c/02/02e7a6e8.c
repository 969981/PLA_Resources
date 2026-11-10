/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a6e8; name: FUN_02e7a6e8
 */


void FUN_02e7a6e8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = plVar2;
    if (*(int *)((long)plVar2 + 0x2c) <= *(int *)((long)param_2 + 0x2c)) {
      do {
        plVar3 = plVar2;
        plVar4 = (long *)*plVar3;
        if (plVar4 == (long *)0x0) {
          plVar2 = (long *)0x0;
          goto LAB_02e7a744;
        }
        plVar2 = plVar4;
      } while (*(int *)((long)plVar4 + 0x2c) <= *(int *)((long)param_2 + 0x2c));
LAB_02e7a744:
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
      *param_2 = plVar2;
      *plVar1 = (long)param_2;
      goto joined_r0x02e7a738;
    }
  }
  *param_2 = plVar2;
  *plVar1 = (long)param_2;
joined_r0x02e7a738:
  if (plVar4 == (long *)0x0) {
    *param_1 = param_2;
    return;
  }
  return;
}


