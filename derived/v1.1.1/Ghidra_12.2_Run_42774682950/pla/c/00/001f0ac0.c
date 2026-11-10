/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f0ac0; name: FUN_001f0ac0
 */


undefined8 FUN_001f0ac0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 != 0) {
    lVar1 = FUN_00204504(1,0x10);
    if (lVar1 == 0) {
      return 0x1b;
    }
    *(long *)(lVar1 + 8) = param_2;
    plVar3 = *(long **)(param_1 + 0xef8);
    plVar2 = (long *)(param_1 + 0xef8);
    if ((plVar3 == (long *)0x0) || ((param_3 & 1) == 0)) {
      while (plVar3 != (long *)0x0) {
        *(ulong *)(plVar3[1] + 0xf40) = *(ulong *)(plVar3[1] + 0xf40) & 0xffefffffffffffff;
        plVar2 = (long *)*plVar2;
        plVar3 = (long *)*plVar2;
      }
    }
    else {
      do {
        *(long *)(plVar3[1] + 0xee8) = param_2;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      plVar3 = (long *)(param_2 + 0xef8);
      do {
        plVar4 = plVar3;
        plVar3 = (long *)*plVar4;
      } while (plVar3 != (long *)0x0);
      *plVar4 = *plVar2;
      *plVar2 = 0;
    }
    *plVar2 = lVar1;
  }
  *(long *)(param_2 + 0xee8) = param_1;
  *(ulong *)(param_2 + 0xf40) =
       *(ulong *)(param_2 + 0xf40) & 0xffe0000000000000 |
       *(ulong *)(param_2 + 0xf40) & 0xfffffffffffff | (ulong)(param_3 & 1) << 0x34;
  return 0;
}


