/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef1180; name: FUN_02ef1180
 */


void FUN_02ef1180(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  plVar2 = (long *)FUN_02ef139c(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    uVar1 = param_4;
    if (param_4 <= *(uint *)(plVar2 + 1)) {
      uVar1 = *(uint *)(plVar2 + 1);
    }
    uVar3 = FUN_02ef1428(plVar2,uVar1);
    if ((param_4 != 0) && ((uVar3 & 1) != 0)) {
      uVar3 = (ulong)param_4;
      lVar5 = 0;
      puVar6 = (undefined4 *)(param_3 + 4);
      lVar4 = uVar3 * 0x10;
      do {
        *(undefined4 *)(*plVar2 + lVar5 + 4) = *puVar6;
        *(undefined4 *)(*plVar2 + lVar5) = puVar6[-1];
        lVar5 = lVar5 + 0x10;
        puVar6 = puVar6 + 2;
      } while (lVar4 != lVar5);
      if (param_4 < *(uint *)(plVar2 + 1)) {
        puVar6 = (undefined4 *)(param_3 + (ulong)(param_4 - 1) * 8);
        do {
          *(undefined4 *)(*plVar2 + lVar4 + 4) = puVar6[1];
          *(undefined4 *)(*plVar2 + lVar4) = *puVar6;
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 0x10;
        } while (uVar3 < *(uint *)(plVar2 + 1));
      }
    }
  }
  return;
}


