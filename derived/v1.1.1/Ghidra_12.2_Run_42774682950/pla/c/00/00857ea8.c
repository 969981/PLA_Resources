/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00857ea8; name: FUN_00857ea8
 */


void FUN_00857ea8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    if (*(int *)(param_1 + 0xb0) != 4) {
      *(undefined4 *)(param_1 + 0xb0) = 0x14;
      FUN_008248e4(param_1 + 0x68);
      if (*(int *)(param_1 + 0xb0) != 4) {
        lVar1 = *(long *)PTR_DAT_043774c8;
        do {
          FUN_00824d50(lVar1 / 10000);
          if (*(int *)(param_1 + 0xb0) == 3) {
            *(undefined4 *)(param_1 + 0xb0) = 0x14;
            FUN_008248e4(param_1 + 0x68);
          }
        } while (*(int *)(param_1 + 0xb0) != 4);
      }
    }
    (**(code **)(**(long **)(param_1 + 0x60) + 0x40))();
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_0081a800(puVar2);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_00845bd4(param_1 + 8);
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee660(param_1 + 0xb8,local_40);
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 != 0) {
    FUN_00855c1c(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}


