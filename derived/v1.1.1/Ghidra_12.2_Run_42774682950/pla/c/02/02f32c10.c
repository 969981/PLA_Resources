/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f32c10; name: FUN_02f32c10
 */


void FUN_02f32c10(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if (param_4 != 0) {
    uVar1 = (ulong)param_4;
    puVar2 = (undefined4 *)(param_2 + 4);
    do {
      FUN_02f32d10(puVar2[-1],*puVar2,param_1,*param_3);
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 2;
      param_3 = param_3 + 1;
    } while (uVar1 != 0);
  }
  return;
}


