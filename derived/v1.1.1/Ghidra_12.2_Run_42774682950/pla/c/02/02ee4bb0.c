/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4bb0; name: FUN_02ee4bb0
 */


void FUN_02ee4bb0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar3 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    lVar2 = *plVar1;
    while( true ) {
      if (lVar2 != 0) {
        *(undefined4 *)(plVar1 + 1) = 0;
        (*DAT_0442d150)(0);
        *plVar1 = 0;
        *(undefined4 *)((long)plVar1 + 0xc) = 0;
      }
      lVar3 = lVar3 + -0x28;
      plVar1 = plVar1 + 5;
      if (lVar3 == 0) break;
      lVar2 = *plVar1;
    }
  }
  FUN_02ee4f74((long *)(param_1 + 0x10));
  return;
}


