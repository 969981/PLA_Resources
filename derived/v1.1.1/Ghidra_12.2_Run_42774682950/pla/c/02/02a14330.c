/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14330; name: FUN_02a14330
 */


void FUN_02a14330(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  
  if (((int)param_2 < 10) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x28),
     *(int *)(lVar3 + (ulong)param_2 * 4 + 0x1a8) != 0)) {
    uVar5 = (ulong)param_2;
    lVar1 = lVar3 + uVar5 * 4;
    uVar2 = *(uint *)(lVar1 + 0x180);
    uVar4 = (ulong)uVar2;
    if (uVar2 < 6) {
      if (uVar2 == 0) {
        uVar4 = 0;
      }
      else {
        puVar6 = (uint *)(lVar3 + uVar5 * 0x18 + 0x90);
        uVar7 = uVar4;
        do {
          if (*puVar6 == (param_3 & 0xff)) {
            return;
          }
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != 0);
      }
      *(uint *)(lVar3 + uVar5 * 0x18 + uVar4 * 4 + 0x90) = param_3 & 0xff;
      *(uint *)(lVar1 + 0x180) = uVar2 + 1;
      return;
    }
  }
  return;
}


