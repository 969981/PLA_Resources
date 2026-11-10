/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e41f4; name: FUN_001e41f4
 */


size_t FUN_001e41f4(void *param_1,undefined8 param_2,size_t param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_4 + 0x98);
  uVar2 = *(long *)(param_4 + 0x78) - lVar1;
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    memcpy(param_1,(void *)(*(long *)(param_4 + 0x20) + lVar1),param_3);
    lVar1 = *(long *)(param_4 + 0x98);
  }
  *(size_t *)(param_4 + 0x98) = lVar1 + param_3;
  return param_3;
}


