/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef4594; name: FUN_02ef4594
 */


void FUN_02ef4594(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (*(int *)(param_1 + 1) != 0) {
    puVar2 = puVar1;
    do {
      puVar3 = puVar2 + 1;
      FUN_02ec61e0(DAT_0440a180,*puVar2,param_2);
      puVar1 = (undefined4 *)*param_1;
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + *(uint *)(param_1 + 1));
  }
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  puVar2 = (undefined4 *)param_1[2];
  puVar1 = puVar2;
  if (*(int *)(param_1 + 3) != 0) {
    do {
      puVar3 = puVar1 + 1;
      FUN_02ee2c64(DAT_0440a160,*puVar1,param_2);
      puVar2 = (undefined4 *)param_1[2];
      puVar1 = puVar3;
    } while (puVar3 != puVar2 + *(uint *)(param_1 + 3));
  }
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    (*DAT_0442d150)(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


