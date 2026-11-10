/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5e31c; name: FUN_02c5e31c
 */


int FUN_02c5e31c(long param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float __x;
  float fVar14;
  
  iVar3 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar5 = FUN_02c6849c();
    uVar6 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar4 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar7 = 1;
    do {
      uVar8 = FUN_02c524b0(uVar5,uVar6,uVar7);
      if (uVar4 < uVar8) break;
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xff) < 0x65);
    uVar4 = uVar7 - 1;
    if ((uVar7 & 0xff) < 2) {
      uVar4 = 1;
    }
    uVar4 = uVar4 & 0xff;
  }
  else {
    uVar4 = FUN_02c68174();
  }
  uVar7 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar1 = (uVar7 | 1) != 0x38b;
  uVar9 = 0;
  if ((int)uVar7 < 0x38a && bVar1) {
    uVar9 = uVar2;
  }
  if (uVar9 < 0x1c) {
    uVar12 = 0;
    if ((int)uVar7 < 0x38a && bVar1) {
      uVar12 = (ulong)uVar7;
    }
    lVar11 = *(&DAT_043f23a0)[uVar12 * 4];
    uVar12 = (&DAT_043f23a0)[uVar12 * 4][1] - lVar11 >> 3;
    if ((uVar9 < uVar12) && (*(long *)(lVar11 + (ulong)uVar9 * 8) != 0)) goto LAB_02c5e454;
  }
  uVar9 = 0;
  lVar11 = *DAT_043f23a0;
  uVar12 = DAT_043f23a0[1] - lVar11 >> 3;
LAB_02c5e454:
  if (uVar12 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar10 = *(int **)(lVar11 + (ulong)uVar9 * 8);
  __x = 0.0;
  if ((0x14 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[10], uVar12 != 0)) {
    __x = (float)NEON_ucvtf((uint)*(byte *)((long)piVar10 + uVar12));
  }
  uVar12 = FUN_02c8b05c(*(undefined8 *)(param_1 + 0x98));
  if ((uVar12 & 1) == 0) {
    FUN_02c6bbd4(*(undefined8 *)(param_1 + 0x98));
  }
  uVar7 = FUN_02c6df60(*(undefined8 *)(param_1 + 0x98));
  uVar7 = uVar7 & 0xff;
  uVar12 = FUN_02c8b05c(*(undefined8 *)(param_1 + 0x98));
  if (((uVar12 & 1) == 0) && (uVar8 = FUN_02c6bbd4(*(undefined8 *)(param_1 + 0x98)), uVar8 < 0x1f))
  {
    if (uVar8 < 0x1a) {
      if (0x13 < uVar8) {
        uVar7 = uVar7 + 1;
      }
    }
    else {
      uVar7 = uVar7 + 2;
    }
  }
  else {
    uVar7 = uVar7 + 3;
  }
  if (9 < uVar7) {
    uVar7 = 10;
  }
  if (iVar3 == 0x124) {
    iVar3 = 1;
  }
  else {
    fVar14 = (float)(uVar4 & 0xff);
    if (9 < (uVar7 & 0xff)) {
      uVar7 = 10;
    }
    iVar3 = *(int *)(&UNK_03a84ed8 + ((ulong)uVar7 & 0xff) * 4);
    fVar13 = SQRT(__x);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(__x);
    }
    iVar3 = (int)((ABS(fVar13) * (float)iVar3 + fVar14) / 2.5) +
            (int)((fVar14 / 100.0 + 1.0) * __x + fVar14);
  }
  return iVar3;
}


