/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb2fac; name: FUN_02eb2fac
 */


void FUN_02eb2fac(uint param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  
  if (DAT_0440a460 != 0) {
    lVar9 = DAT_0440a460;
    lVar6 = 0;
    do {
      while( true ) {
        lVar5 = lVar9;
        lVar7 = *(long *)(lVar5 + 8);
        lVar9 = 0;
        if (lVar7 != 0) {
          lVar9 = lVar7 + -0x18;
        }
        if (((*(uint *)(lVar9 + 0x2a3) >> 0xc & 1) != 0) && (*(int *)(lVar9 + 0x2f8) == -1)) break;
        if (((*(uint *)(lVar9 + 0x2a3) >> 0xe & 1) == 0) && (-1 < *(int *)(lVar9 + 0x2c0))) {
          fVar10 = *(float *)(lVar9 + 0x24c) * (float)param_1;
          fVar11 = 0.5;
          if (fVar10 <= 0.0) {
            fVar11 = -0.5;
          }
          *(int *)(lVar9 + 0x2c0) = *(int *)(lVar9 + 0x2c0) - (int)(fVar11 + fVar10);
        }
        lVar9 = *(long *)(lVar5 + 0x60);
        lVar6 = lVar5;
        if (*(long *)(lVar5 + 0x60) == 0) {
          return;
        }
      }
      if (DAT_0440a470 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
        puVar4 = DAT_0440a470;
        while( true ) {
          puVar3 = (undefined8 *)*puVar4;
          lVar9 = 0;
          if (puVar4[1] != 0) {
            lVar9 = puVar4[1] + 0x18;
          }
          if (lVar9 == lVar7) {
            puVar1 = &DAT_0440a470;
            if (DAT_0440a470 != puVar4) {
              puVar1 = puVar8;
            }
            *puVar1 = puVar3;
            if (DAT_0440a478 == puVar4) {
              DAT_0440a478 = puVar8;
            }
            if ((puVar4 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= puVar4)) {
              FUN_02f59e60(5);
            }
            else {
              *puVar4 = DAT_0440a480;
              DAT_0440a480 = puVar4;
            }
            DAT_0440a494 = DAT_0440a494 + -1;
            puVar4 = puVar8;
          }
          puVar8 = puVar4;
          if (puVar3 == (undefined8 *)0x0) break;
          lVar7 = *(long *)(lVar5 + 8);
          puVar4 = puVar3;
        }
      }
      lVar9 = *(long *)(lVar5 + 0x60);
      plVar2 = &DAT_0440a460;
      if (DAT_0440a460 != lVar5) {
        plVar2 = (long *)(lVar6 + 0x60);
      }
      *plVar2 = lVar9;
      if (DAT_0440a458 == lVar5) {
        DAT_0440a458 = lVar6;
      }
      FUN_02eb32d4(lVar5,0);
    } while (lVar9 != 0);
  }
  return;
}


