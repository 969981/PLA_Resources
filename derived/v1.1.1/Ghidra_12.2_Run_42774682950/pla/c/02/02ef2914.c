/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2914; name: FUN_02ef2914
 */


void FUN_02ef2914(long param_1,long param_2,undefined8 param_3,int param_4)

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
        if (plVar5[2] == 0) {
          return;
        }
        lVar3 = FUN_02ef2a30();
        if (lVar3 == 0) {
          return;
        }
        if (param_4 == 2) {
          FUN_02ea76a0(lVar3,param_3);
        }
        else if (param_4 == 1) {
          FUN_02ef2bf8(param_1,param_3);
          FUN_02ea7648(lVar3,param_3);
        }
        else if (param_4 == 0) {
          FUN_02ef2bf8(param_1,param_3);
          FUN_02ea7600(lVar3,param_3);
        }
        FUN_02f14074(0);
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


