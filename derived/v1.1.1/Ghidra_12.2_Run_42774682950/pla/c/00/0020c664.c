/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c664; name: FUN_0020c664
 */


void FUN_0020c664(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[6];
  puVar1 = param_1;
  do {
    puVar1 = (undefined8 *)*puVar1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_0020c6f0;
    lVar3 = puVar1[1];
    puVar1[4] = lVar3;
    puVar1[5] = lVar3;
    puVar1[3] = lVar3;
    puVar1[3] = lVar3 + param_1[7];
    lVar2 = lVar2 + -1;
    puVar1[4] = lVar3 + param_1[7];
  } while (lVar2 != 0);
  puVar4 = (undefined8 *)*puVar1;
  *puVar1 = 0;
  while (puVar4 != (undefined8 *)0x0) {
    uVar5 = param_1[2];
    puVar1 = (undefined8 *)*puVar4;
    FUN_0020c748(uVar5,puVar4[1]);
    puVar4[1] = 0;
    FUN_0020c748(uVar5,puVar4);
    puVar4 = puVar1;
  }
  param_1[5] = param_1[6];
LAB_0020c6f0:
  param_1[1] = *param_1;
  return;
}


