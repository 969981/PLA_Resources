/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e528b8; name: FUN_02e528b8
 */


void FUN_02e528b8(long param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar7;
  long *plVar6;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_34 [4];
  
  uVar11 = param_3;
  uVar3 = param_2;
  if (param_3 <= param_2) {
    uVar11 = param_2;
    uVar3 = param_3;
  }
  lVar4 = FUN_02e538c4(param_1 + 0x50,uVar3,uVar11,auStack_34);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x24) = *(undefined1 *)(param_4 + 0xc);
    *(undefined1 *)(lVar4 + 0x25) = *(undefined1 *)(param_4 + 0xd);
    FUN_02e44c8c(lVar4 + 0x28,param_4 + 0x10);
    if (*(char *)(lVar4 + 0x24) == '\0') {
      if ((*(char *)(lVar4 + 0x25) == '\0') && (lVar10 = FUN_02e58f1c(lVar4 + 0x18), lVar10 != 0)) {
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar10 + 0x7c);
        *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar10 + 0x80);
      }
      else {
        *(undefined8 *)(lVar4 + 0x10) = 0x7f7fffff3f800000;
      }
    }
    else {
      *(undefined4 *)(lVar4 + 0x10) = 0;
      plVar9 = *(long **)(param_1 + 0x28);
      lVar10 = (ulong)*(uint *)(param_1 + 0x30) * 8 + -8;
      if (((uint)lVar10 >> 3 & 1) == 0) {
        plVar6 = plVar9 + 1;
        lVar8 = *plVar9;
        lVar1 = lVar8;
        if (*(ulong *)(lVar8 + 0x40) != param_3) {
          lVar1 = 0;
        }
        lVar5 = 0;
        if (*(ulong *)(lVar8 + 0x40) != param_2) {
          lVar8 = 0;
          lVar5 = lVar1;
        }
      }
      else {
        lVar8 = 0;
        plVar6 = plVar9;
        lVar5 = 0;
      }
      if (lVar10 != 0) {
        do {
          plVar7 = plVar6 + 2;
          lVar1 = *plVar6;
          lVar2 = plVar6[1];
          uVar11 = *(ulong *)(lVar1 + 0x40);
          lVar10 = lVar1;
          if (uVar11 != param_3) {
            lVar10 = lVar5;
          }
          if (uVar11 != param_2) {
            lVar1 = lVar8;
          }
          if (uVar11 != param_2) {
            lVar5 = lVar10;
          }
          lVar10 = lVar2;
          if (*(ulong *)(lVar2 + 0x40) != param_3) {
            lVar10 = lVar5;
          }
          lVar8 = lVar2;
          if (*(ulong *)(lVar2 + 0x40) != param_2) {
            lVar8 = lVar1;
            lVar5 = lVar10;
          }
          plVar6 = plVar7;
        } while (plVar7 != plVar9 + *(uint *)(param_1 + 0x30));
      }
      fVar13 = *(float *)(lVar8 + 0x54) - *(float *)(lVar5 + 0x54);
      fVar12 = *(float *)(lVar8 + 0x50) - *(float *)(lVar5 + 0x50);
      fVar14 = *(float *)(lVar8 + 0x58) - *(float *)(lVar5 + 0x58);
      *(float *)(lVar4 + 0x14) = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
    }
  }
  return;
}


