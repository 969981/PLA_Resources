/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00242c78; name: FUN_00242c78
 */


void FUN_00242c78(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar1 = (long *)param_1[3];
  while (param_1 + 2 != plVar1) {
    plVar4 = (long *)plVar1[1];
    if (param_1 + 2 != plVar1) {
      lVar2 = *plVar4;
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar4 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
    }
    FUN_00244df0(plVar1);
    FUN_00232674(plVar1);
    plVar1 = plVar4;
  }
  param_1[0x18] = 0;
  puVar3 = (undefined8 *)param_1[0x1a];
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_00232674(puVar3);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_1[0xf] != 0) {
    FUN_00232674();
  }
  param_1[0xf] = 0;
  FUN_0025a4c4(param_1 + 0x14);
  return;
}


