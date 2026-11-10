/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef9610; name: FUN_02ef9610
 */


void FUN_02ef9610(undefined4 param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if (param_4 != 0) {
    uVar1 = (ulong)param_4;
    puVar2 = (undefined4 *)(param_3 + 8);
    do {
      FUN_02ef9108(*puVar2,-(float)puVar2[-2],puVar2[-1],param_1,param_4,param_2);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
    } while (uVar1 != 0);
  }
  return;
}


