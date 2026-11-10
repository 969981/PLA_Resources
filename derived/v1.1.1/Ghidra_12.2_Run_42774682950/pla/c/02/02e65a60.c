/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65a60; name: FUN_02e65a60
 */


void FUN_02e65a60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_042a5f90;
  lVar2 = param_1[1];
  if (*(int *)(param_1 + 2) != 0) {
    lVar3 = lVar2 + 8;
    do {
      (**(code **)(*(long *)**(undefined8 **)(lVar3 + 8) + 0x10))();
      **(undefined8 **)(lVar3 + 8) = 0;
      FUN_02e65b0c(lVar3);
      lVar2 = param_1[1];
      lVar1 = lVar3 + 0x10;
      lVar3 = lVar3 + 0x18;
    } while (lVar1 != lVar2 + (ulong)*(uint *)(param_1 + 2) * 0x18);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    (*DAT_0442d150)(7);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  DAT_0440a098 = 0;
  return;
}


