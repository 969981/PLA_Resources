/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c76c; name: FUN_02f0c76c
 */


ulong FUN_02f0c76c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1c0) < 1) {
    uVar2 = FUN_02f0c7d0(param_1,param_2,param_3);
    return uVar2;
  }
  puVar1 = (undefined4 *)FUN_02f0d3a0(param_1 + 0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = param_2;
    puVar1[4] = param_3;
  }
  uVar3 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 2;
  }
  return (ulong)uVar3;
}


