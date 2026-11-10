/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef127c; name: FUN_02ef127c
 */


void FUN_02ef127c(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 1;
  plVar4 = (long *)FUN_02ef139c(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    uVar3 = param_5;
    if (param_5 <= *(uint *)(plVar4 + 1)) {
      uVar3 = *(uint *)(plVar4 + 1);
    }
    uVar5 = FUN_02ef1428(plVar4,uVar3);
    if ((param_5 != 0) && ((uVar5 & 1) != 0)) {
      uVar5 = (ulong)param_5;
      lVar6 = 0;
      do {
        lVar7 = lVar6 * 4;
        *(undefined4 *)(*plVar4 + lVar7 + 8) = *(undefined4 *)(param_3 + lVar6);
        puVar1 = (undefined4 *)(param_4 + lVar6);
        lVar6 = lVar6 + 4;
        *(undefined4 *)(*plVar4 + lVar7 + 0xc) = *puVar1;
      } while (uVar5 * 4 != lVar6);
      if (param_5 < *(uint *)(plVar4 + 1)) {
        lVar6 = uVar5 << 4;
        lVar7 = (ulong)(param_5 - 1) * 4;
        do {
          uVar5 = uVar5 + 1;
          *(undefined4 *)(*plVar4 + lVar6 + 8) = *(undefined4 *)(param_3 + lVar7);
          lVar2 = *plVar4 + lVar6;
          lVar6 = lVar6 + 0x10;
          *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_4 + lVar7);
        } while (uVar5 < *(uint *)(plVar4 + 1));
      }
    }
  }
  return;
}


