/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da90e0; name: FUN_02da90e0
 */


void FUN_02da90e0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long local_28;
  
  if ((((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 0xc) != 0)) &&
      (plVar6 = *(long **)(param_1 + 0x88), plVar6 != (long *)0x0)) &&
     (local_28 = param_2, lVar2 = (**(code **)(*plVar6 + 0x20))(plVar6), lVar2 != param_2)) {
    uVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,&local_28);
    uVar1 = (uint)uVar3 & 0xff;
    if (uVar1 != 0xfd) {
      if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_02daa440();
      }
      lVar2 = *(long *)(param_1 + 0xa0);
      uVar4 = 1L << (uVar3 & 0x3f);
      uVar3 = ~uVar4;
      *(ulong *)(param_1 + 0x98) = *(ulong *)(param_1 + 0x98) & (uVar4 ^ 0xffffffffffffffff);
      lVar5 = *(long *)(param_1 + 0xa8);
      for (; lVar2 != lVar5; lVar2 = lVar2 + 0x18) {
        *(ulong *)(lVar2 + 8) = *(ulong *)(lVar2 + 8) & uVar3;
      }
      lVar5 = *(long *)(param_1 + 0xe0);
      for (lVar2 = *(long *)(param_1 + 0xd8); lVar2 != lVar5; lVar2 = lVar2 + 0x18) {
        *(ulong *)(lVar2 + 8) = *(ulong *)(lVar2 + 8) & uVar3;
      }
    }
  }
  return;
}


