/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eec85c; name: FUN_02eec85c
 */


void FUN_02eec85c(long param_1,long param_2)

{
  long lVar1;
  char local_24 [4];
  
  if ((*(ushort *)(param_1 + 0x115) >> 6 & 1) == 0) {
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0xf0) != 0) {
        lVar1 = *(long *)(param_1 + 0xe8);
        do {
          (**(code **)(**(long **)(lVar1 + 8) + 0x10))();
          lVar1 = lVar1 + 0x10;
        } while (lVar1 != *(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10);
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))();
        *(undefined8 *)(param_1 + 0xf8) = 0;
      }
    }
    else if ((*(ushort *)(param_1 + 0x115) >> 7 & 1) == 0) {
      lVar1 = FUN_02eedca0(param_1 + 0xe8,param_2,local_24);
      if ((lVar1 != 0) && (local_24[0] != '\0')) {
        (**(code **)(**(long **)(lVar1 + 8) + 0x10))();
        FUN_02eeb7e0(param_1 + 0xe8,param_2);
        return;
      }
    }
  }
  return;
}


