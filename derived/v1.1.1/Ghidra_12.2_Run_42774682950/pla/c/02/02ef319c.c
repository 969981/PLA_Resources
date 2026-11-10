/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef319c; name: FUN_02ef319c
 */


undefined8
FUN_02ef319c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_3 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_4 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(param_3 + 0x30) + (ulong)((uint)param_4 - uVar2 * uVar1) * 8)
        ; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] == param_4) {
        uVar4 = plVar5[2];
        FUN_02ef2fe4(param_3,param_5);
        lVar3 = FUN_02e52664(uVar4);
        if (lVar3 == 0) {
          return 2;
        }
        uVar4 = FUN_02ef1140(param_1,param_2,lVar3,param_5);
        return uVar4;
      }
    }
  }
  return 2;
}


