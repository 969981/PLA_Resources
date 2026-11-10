/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5c0cc; name: FUN_02e5c0cc
 */


void FUN_02e5c0cc(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if ((int)param_1[1] != 0) {
    puVar3 = puVar2;
    do {
      puVar2 = (undefined8 *)*puVar3;
      iVar1 = *(int *)(puVar2 + 10);
      *(int *)(puVar2 + 10) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(puVar2);
        FUN_02f59e60(4,puVar2);
      }
      puVar2 = (undefined8 *)*param_1;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2 + *(uint *)(param_1 + 1));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_02f59e60(9);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


