/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e62918; name: FUN_02e62918
 */


long FUN_02e62918(long param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_02f59e30(0xb,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar1 = (param_3 & 0xffffffff) * 8;
    *puVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar1);
    *(undefined4 *)(puVar2 + 1) = param_2;
    lVar3 = (long)puVar2 + 0xc;
    *(undefined8 **)(*(long *)(param_1 + 8) + lVar1) = puVar2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return lVar3;
}


