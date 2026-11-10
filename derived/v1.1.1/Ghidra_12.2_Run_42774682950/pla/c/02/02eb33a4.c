/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb33a4; name: FUN_02eb33a4
 */


void FUN_02eb33a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_042a9780;
  param_1[6] = &PTR_FUN_042a9a98;
  puVar1 = (undefined8 *)param_1[0x1e];
  param_1[3] = &PTR_LAB_042a9a00;
  if (*(uint *)(param_1 + 0x1f) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x1f) << 3;
    do {
      FUN_02eb6f24(*puVar1,0);
      (**(code **)(*(long *)*puVar1 + 0x18))();
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
    puVar1 = (undefined8 *)param_1[0x1e];
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    (*DAT_0442d150)(0,puVar1);
    param_1[0x1e] = 0;
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
  }
  param_1[0x20] = 0;
  FUN_02ec75e0(param_1);
  FUN_02ec7484(param_1);
  return;
}


