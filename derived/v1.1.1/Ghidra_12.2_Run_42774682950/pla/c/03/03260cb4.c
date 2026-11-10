/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03260cb4; name: FUN_03260cb4
 */


void FUN_03260cb4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_1[1];
  if (2 < iVar3) {
    lVar4 = *param_1;
    puVar1 = (undefined8 *)(lVar4 + (long)(iVar3 + -1) * 0x10);
    uVar2 = puVar1[1];
    *(undefined8 *)(lVar4 + 0x10) = *puVar1;
    *(undefined8 *)(lVar4 + 0x18) = uVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    FUN_03260d04(param_1,1);
    return;
  }
  if ((iVar3 < 1) || (iVar3 != 1)) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return;
}


