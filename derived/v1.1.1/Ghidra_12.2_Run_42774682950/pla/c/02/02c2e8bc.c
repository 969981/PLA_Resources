/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2e8bc; name: FUN_02c2e8bc
 */


bool FUN_02c2e8bc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x270);
    if (plVar2 != *(long **)(lVar3 + 0x278)) {
      uVar4 = 0;
      do {
        plVar1 = (long *)PTR_DAT_04379c88;
        if (*plVar2 != 0) {
          plVar1 = (long *)(*plVar2 + 0x58);
        }
        if (*plVar1 == *param_2) {
          return uVar4 < *(ushort *)(*(long *)(param_1 + 0x90) + 2);
        }
        plVar2 = plVar2 + 1;
        uVar4 = uVar4 + 1;
      } while (*(long **)(lVar3 + 0x278) != plVar2);
    }
  }
  return false;
}


