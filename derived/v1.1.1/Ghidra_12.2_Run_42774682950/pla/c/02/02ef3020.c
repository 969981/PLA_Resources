/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef3020; name: FUN_02ef3020
 */


void FUN_02ef3020(undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_3 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(param_2 + 0x30) + (ulong)((uint)param_3 - uVar2 * uVar1) * 8)
        ; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] == param_3) {
        lVar3 = FUN_02ef2a30(plVar5[2]);
        if (lVar3 == 0) {
          return;
        }
        if (param_4 == -1) {
          FUN_02ea7544(param_1,lVar3);
        }
        else {
          FUN_02ef2fe4(param_2,param_4);
          FUN_02ea7320(param_1,lVar3,param_4);
        }
        if (*(int *)(plVar5[2] + 0x40) == 0) {
          return;
        }
        lVar4 = **(long **)(plVar5[2] + 0x38);
        if (lVar4 == 0) {
          return;
        }
        *(byte *)(lVar4 + 0x54) = *(byte *)(lVar4 + 0x54) | 1;
        FUN_02ef2c4c(lVar4 + 0x20,lVar3 + 0xa0);
        return;
      }
    }
  }
  return;
}


