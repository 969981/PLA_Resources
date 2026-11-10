/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e714d4; name: FUN_02e714d4
 */


void FUN_02e714d4(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  puVar2[8] = 0;
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x640) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x640);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x638);
  }
  *puVar3 = puVar2;
  *(undefined8 **)(param_1 + 0x638) = puVar2;
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  if ((param_3 == 1) || (*(int *)(lVar1 + 0x20) == -1)) {
    return;
  }
  FUN_02e6dde4(param_1 + 0x2a8);
  return;
}


