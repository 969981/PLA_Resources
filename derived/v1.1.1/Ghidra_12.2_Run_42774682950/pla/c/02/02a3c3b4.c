/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3c3b4; name: FUN_02a3c3b4
 */


void FUN_02a3c3b4(long param_1,byte param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((param_3 & 1) != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x7d) != '\x1f') {
        FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x99,*(char *)(lVar1 + 0x7d),0);
      }
      FUN_02a3a6c4(param_1,param_4);
      if (*(char *)(lVar1 + 0x7d) == '\x1f') {
        return;
      }
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x9a);
      return;
    }
  }
  FUN_02a3a6c4(param_1,param_4);
  return;
}


