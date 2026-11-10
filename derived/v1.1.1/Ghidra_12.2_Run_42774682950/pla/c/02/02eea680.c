/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eea680; name: FUN_02eea680
 */


void FUN_02eea680(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x18) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    do {
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))(*(long **)(lVar1 + 8),param_2 & 1,param_3);
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 & 0xffffffff;
    } while (lVar1 != *(long *)(*(long *)(param_1 + 8) + 0x10) +
                      (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x18) * 0x10);
  }
  return;
}


