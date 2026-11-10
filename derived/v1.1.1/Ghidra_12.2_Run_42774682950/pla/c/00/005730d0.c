/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005730d0; name: FUN_005730d0
 */


void FUN_005730d0(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)*param_3;
    lVar3 = 0;
    lVar4 = 0;
    do {
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      puVar1 = (undefined8 *)(param_2 + lVar3);
      puVar1[2] = puVar2[2];
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
                    /* try { // try from 00573124 to 00573127 has its CatchHandler @ 00573158 */
      FUN_005731cc(puVar1 + 3,puVar2 + 3);
      lVar4 = lVar4 + 1;
      puVar2 = (undefined8 *)(*param_3 + 0x88);
      lVar3 = lVar3 + 0x88;
      *param_3 = (long)puVar2;
    } while (param_4 != lVar4);
  }
  return;
}


