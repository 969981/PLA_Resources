/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3a1e8; name: FUN_02f3a1e8
 */


int FUN_02f3a1e8(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0xf8);
  if ((plVar3 != (long *)0x0) && ((int)plVar3[1] != 0)) {
    lVar2 = *plVar3;
    do {
      iVar1 = FUN_02ed52f0(*(undefined4 *)(lVar2 + 4));
      if (iVar1 != 1) {
        for (lVar4 = *plVar3; lVar4 != lVar2; lVar4 = lVar4 + 0x18) {
          FUN_02ed53a8(*(undefined4 *)(lVar4 + 4));
        }
        return iVar1;
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x18);
  }
  return 1;
}


