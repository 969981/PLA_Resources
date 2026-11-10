/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2e40; name: FUN_02ef2e40
 */


void FUN_02ef2e40(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8)
        ; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] == param_2) {
        lVar4 = plVar5[2];
        if (lVar4 == 0) {
          return;
        }
        if (*(uint *)(lVar4 + 0x40) < 2) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
        if (lVar4 == 0) {
          return;
        }
        FUN_02ea770c(lVar4);
        FUN_02f14074(0);
        lVar3 = FUN_02e52664(plVar5[2]);
        if (lVar3 == 0) {
          return;
        }
        *(byte *)(lVar3 + 0x54) = *(byte *)(lVar3 + 0x54) | 1;
        FUN_02ef2c4c(lVar3 + 0x20,lVar4 + 0xa0);
        return;
      }
    }
  }
  return;
}


