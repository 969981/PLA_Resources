/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00531e34; name: FUN_00531e34
 */


void FUN_00531e34(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  
  FUN_00531ef0();
  puVar3 = PTR_LAB_04373088;
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      FUN_002e2ea0(puVar3,*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    lVar2 = param_1[2] - param_1[1];
    if (lVar2 != 0) {
      param_1[2] = param_1[2] + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


