/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038df60; name: FUN_0038df60
 */


long FUN_0038df60(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_3 + 0x18) == 1) {
    lVar2 = **(long **)(param_3 + 0x20);
    if (*(char *)(lVar2 + 0x41) != '\0') {
      uVar1 = FUN_00386684(param_1,param_2,lVar2);
      if ((uVar1 & 1) == 0) {
        lVar2 = 0;
      }
      return lVar2;
    }
  }
  if (*(int *)(param_2 +
              (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                           (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >> 4
                                ) * -0x55555554)) == 0) {
    return 0;
  }
  lVar2 = FUN_00342e08(*param_1);
  return lVar2;
}


