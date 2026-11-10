/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00243fd4; name: FUN_00243fd4
 */


void FUN_00243fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x58) >> 1 & 1) == 0) || (*(char *)(param_1 + 0x5a) != '\0')) {
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != param_1 + 0x20; lVar1 = *(long *)(lVar1 + 8)) {
      (**(code **)(*(long *)(lVar1 + -8) + 0xb8))((long *)(lVar1 + -8),param_2,param_3);
    }
  }
  return;
}


