/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b6c6c; name: FUN_005b6c6c
 */


void FUN_005b6c6c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN_002ef750(param_2 + 0x50);
  lVar1 = *(long *)(param_2 + 0x78);
  *param_1 = *(undefined8 *)(param_2 + 0x70);
  plVar2 = param_1 + 1;
  *plVar2 = lVar1;
  lVar3 = *(long *)(param_2 + 0x80);
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *param_1 = plVar2;
  }
  else {
    *(long **)(lVar1 + 0x10) = plVar2;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 **)(param_2 + 0x70) = (undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x80) = 0;
  }
                    /* try { // try from 005b6cbc to 005b6cc3 has its CatchHandler @ 005b6cd0 */
  FUN_002ef790(param_2 + 0x50);
  return;
}


