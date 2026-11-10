/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f25350; name: FUN_02f25350
 */


void FUN_02f25350(long param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = DAT_042ac98c;
  uVar4 = *(uint *)(param_1 + 0x48);
  if (uVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x40);
    plVar6 = plVar5;
    do {
      lVar7 = *plVar5;
      fVar8 = *(float *)(lVar7 + 0x358);
      if (*(float *)(lVar7 + 0x358) <= *(float *)(plVar5 + 1)) {
        fVar8 = *(float *)(plVar5 + 1);
      }
      fVar8 = *(float *)(lVar7 + 0x14) - fVar8;
      fVar9 = 0.0;
      if (-37.0 <= fVar8 * 0.05) {
        uVar2 = (uint)(fVar8 * 1393317.6 + 1.0653532e+09);
        fVar9 = (float)(uVar2 & 0x7fffff | 0x3f800000);
        fVar9 = (fVar9 * (fVar9 * 0.32518977 + 0.020805772) + 0.65304345) *
                (float)(uVar2 & 0xff800000);
      }
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        do {
          if (*(long *)(lVar3 + 0x60) == lVar7) {
            *(float *)(lVar3 + 0x158) = *(float *)(lVar3 + 0x158) * fVar9;
            fVar10 = *(float *)(lVar3 + 0x15c) + fVar8;
            *(byte *)(lVar3 + 0x168) = *(byte *)(lVar3 + 0x168) & 0xfe | fVar10 <= fVar1;
            *(float *)(lVar3 + 0x15c) = fVar10;
          }
          lVar3 = *(long *)(lVar3 + 0x48);
        } while (lVar3 != 0);
        plVar6 = *(long **)(param_1 + 0x40);
        uVar4 = *(uint *)(param_1 + 0x48);
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar6 + (ulong)uVar4 * 2);
  }
  return;
}


