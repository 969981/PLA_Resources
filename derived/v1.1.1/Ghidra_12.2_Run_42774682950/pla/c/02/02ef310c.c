/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef310c; name: FUN_02ef310c
 */


undefined8 FUN_02ef310c(undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_2 + 0x38);
  if (uVar4 != 0) {
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (uint)param_3 / uVar4;
    }
    for (plVar2 = *(long **)(*(long *)(param_2 + 0x30) + (ulong)((uint)param_3 - uVar1 * uVar4) * 8)
        ; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2[1] == param_3) {
        lVar3 = plVar2[2];
        uVar4 = *(uint *)(lVar3 + 0x40);
        if (uVar4 == 0) {
          return 1;
        }
        lVar5 = **(long **)(lVar3 + 0x38);
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x50) = param_1;
          *(byte *)(lVar5 + 0x54) = *(byte *)(lVar5 + 0x54) | 1;
          lVar3 = plVar2[2];
          uVar4 = *(uint *)(lVar3 + 0x40);
        }
        if (uVar4 < 3) {
          return 1;
        }
        if (*(long *)(*(long *)(lVar3 + 0x38) + 0x10) == 0) {
          return 1;
        }
        FUN_02e71f88();
        return 1;
      }
    }
  }
  return 1;
}


