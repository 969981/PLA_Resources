/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c44428; name: FUN_02c44428
 */


byte FUN_02c44428(long param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  
  if ((param_2 < *(uint *)(param_1 + 0x278)) &&
     (lVar4 = *(long *)(param_1 + 600), *(char *)(lVar4 + (ulong)param_2 * 0x48 + 8) != '\0')) {
    uVar5 = (ulong)param_2;
    plVar6 = (long *)(lVar4 + uVar5 * 0x48 + 0x10);
    lVar3 = *plVar6;
    if (lVar3 == 0) {
      return 0;
    }
    if (*(char *)(lVar4 + uVar5 * 0x48 + 0xb) != '\0') {
      if (*(char *)(lVar4 + uVar5 * 0x48 + 9) == '\0') {
        fVar7 = *(float *)(lVar3 + 0x20);
        uVar2 = FUN_00227728();
        bVar1 = FUN_00227744(*plVar6);
        return (float)uVar2 <= fVar7 & (bVar1 ^ 1);
      }
      return 0;
    }
  }
  return 1;
}


