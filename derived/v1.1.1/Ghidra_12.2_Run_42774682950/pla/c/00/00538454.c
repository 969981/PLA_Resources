/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538454; name: FUN_00538454
 */


int FUN_00538454(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_002ef750(param_1 + 0x20);
  if (param_2 == (char *)0x0) {
    iVar1 = *(int *)(param_1 + 0xbc);
joined_r0x005384e0:
    if ((param_3 != 0) && (iVar1 == 2)) {
                    /* try { // try from 005384f0 to 005384f7 has its CatchHandler @ 0053852c */
      FUN_00538548(param_3,param_1 + 0xb0);
      iVar1 = 2;
    }
  }
  else {
    plVar3 = (long *)(param_1 + 0xe0);
    plVar4 = (long *)*plVar3;
    if (plVar4 != (long *)0x0) {
      plVar2 = plVar3;
      do {
        iVar1 = strcmp((char *)plVar4[4],param_2);
        if (iVar1 >= 0) {
          plVar2 = plVar4;
        }
        plVar4 = (long *)plVar4[iVar1 < 0];
      } while (plVar4 != (long *)0x0);
      if ((plVar2 != plVar3) && (iVar1 = strcmp(param_2,(char *)plVar2[4]), -1 < iVar1)) {
        iVar1 = *(int *)(plVar2[5] + 0x40);
        goto joined_r0x005384e0;
      }
    }
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 == 2) {
      iVar1 = 1;
    }
  }
                    /* try { // try from 005384fc to 00538503 has its CatchHandler @ 00538544 */
  FUN_002ef790(param_1 + 0x20);
  return iVar1;
}


