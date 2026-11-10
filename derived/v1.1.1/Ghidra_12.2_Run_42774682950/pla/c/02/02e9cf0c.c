/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9cf0c; name: FUN_02e9cf0c
 */


undefined8 FUN_02e9cf0c(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x40) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = **(long **)(*(long *)(param_1 + 0x10) + 0x38);
  }
  if (param_2 < *(uint *)(lVar3 + 0x48)) {
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x40) + (ulong)param_2 * 0x68);
    uVar1 = *puVar4;
    uVar5 = puVar4[2];
    param_3[1] = puVar4[1];
    param_3[2] = uVar5;
    *param_3 = uVar1;
    uVar1 = puVar4[3];
    uVar5 = puVar4[4];
    uVar2 = puVar4[6];
    param_3[5] = puVar4[5];
    param_3[6] = uVar2;
    param_3[3] = uVar1;
    param_3[4] = uVar5;
    uVar1 = puVar4[7];
    uVar5 = puVar4[8];
    uVar2 = puVar4[10];
    param_3[9] = puVar4[9];
    param_3[10] = uVar2;
    param_3[7] = uVar1;
    param_3[8] = uVar5;
    return 1;
  }
  return 2;
}


