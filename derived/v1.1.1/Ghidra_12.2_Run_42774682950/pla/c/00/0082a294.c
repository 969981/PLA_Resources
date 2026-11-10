/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a294; name: FUN_0082a294
 */


void FUN_0082a294(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (**(int **)(param_2 + 0xa8) - 2U < 3) {
    puVar2 = (undefined4 *)(param_2 + 0x120);
    FUN_007ee578(local_38,*(int **)(param_2 + 0xa8) + 1);
    uVar1 = FUN_007f01a4(puVar2,local_38);
    if ((uVar1 & 1) == 0) {
      puVar2 = (undefined4 *)(*(long *)(param_2 + 0xa8) + 4);
    }
  }
  else {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    puVar2 = local_38;
  }
  FUN_007ee578(param_1,puVar2);
  return;
}


