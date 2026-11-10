/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f32ba8; name: FUN_02f32ba8
 */


void FUN_02f32ba8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,uint param_6)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  FUN_02f32c10(param_1,param_2,param_4,param_5);
  if (param_6 != 0) {
    uVar1 = (ulong)param_6;
    puVar2 = (undefined4 *)(param_3 + 4);
    do {
      FUN_02f32c60(puVar2[-1],*puVar2,param_1);
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 2;
    } while (uVar1 != 0);
  }
  return;
}


