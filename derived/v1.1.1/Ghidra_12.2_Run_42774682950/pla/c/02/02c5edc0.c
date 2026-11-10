/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5edc0; name: FUN_02c5edc0
 */


int FUN_02c5edc0(long param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float __x;
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar4 = FUN_02c6849c();
    uVar5 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar6 = 1;
    do {
      uVar7 = FUN_02c524b0(uVar4,uVar5,uVar6);
      if (uVar3 < uVar7) break;
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xff) < 0x65);
    uVar3 = uVar6 - 1;
    if ((uVar6 & 0xff) < 2) {
      uVar3 = 1;
    }
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = FUN_02c68174();
  }
  uVar6 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar1 = (uVar6 | 1) != 0x38b;
  uVar8 = 0;
  if ((int)uVar6 < 0x38a && bVar1) {
    uVar8 = uVar2;
  }
  if (uVar8 < 0x1c) {
    uVar11 = 0;
    if ((int)uVar6 < 0x38a && bVar1) {
      uVar11 = (ulong)uVar6;
    }
    lVar10 = *(&DAT_043f23a0)[uVar11 * 4];
    uVar11 = (&DAT_043f23a0)[uVar11 * 4][1] - lVar10 >> 3;
    if ((uVar11 <= uVar8) || (*(long *)(lVar10 + (ulong)uVar8 * 8) == 0)) goto LAB_02c5eed4;
  }
  else {
LAB_02c5eed4:
    uVar8 = 0;
    lVar10 = *DAT_043f23a0;
    uVar11 = DAT_043f23a0[1] - lVar10 >> 3;
  }
  if (uVar11 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar9 = *(int **)(lVar10 + (ulong)uVar8 * 8);
  __x = 0.0;
  if ((0x1c < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
     (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xe], uVar11 != 0)) {
    __x = (float)NEON_ucvtf((uint)*(byte *)((long)piVar9 + uVar11));
  }
  uVar6 = FUN_02c8b05c(*(undefined8 *)(param_1 + 0x98));
  if ((uVar6 >> 4 & 1) == 0) {
    FUN_02c6c8c4(*(undefined8 *)(param_1 + 0x98));
  }
  uVar6 = FUN_02c6ef78(*(undefined8 *)(param_1 + 0x98));
  uVar6 = uVar6 & 0xff;
  uVar7 = FUN_02c8b05c(*(undefined8 *)(param_1 + 0x98));
  if (((uVar7 >> 4 & 1) == 0) &&
     (uVar7 = FUN_02c6c8c4(*(undefined8 *)(param_1 + 0x98)), uVar7 < 0x1f)) {
    uVar12 = uVar6;
    if (0x13 < uVar7) {
      uVar12 = uVar6 + 1;
    }
    if (0x19 < uVar7) {
      uVar12 = uVar6 + 2;
    }
  }
  else {
    uVar12 = uVar6 + 3;
  }
  if (9 < uVar12) {
    uVar12 = 10;
  }
  uVar6 = FUN_02c6ffa8(*(undefined8 *)(param_1 + 0x98));
  uVar7 = (uint)((((float)(uVar3 & 0xff) / 50.0 + 1.0) * __x) / 1.5);
  if ((&DAT_03a84f07)[(ulong)(uVar6 & 0xffff) * 5] == -1) {
    iVar13 = 0x5a;
  }
  else {
    if ((&DAT_03a84f07)[(ulong)(uVar6 & 0xffff) * 5] != '\x01') goto LAB_02c5f008;
    iVar13 = 0x6e;
  }
  uVar7 = (uVar7 * iVar13 & 0xfffe) / 100;
LAB_02c5f008:
  if (9 < (uVar12 & 0xff)) {
    uVar12 = 10;
  }
  iVar13 = *(int *)(&UNK_03a84ed8 + ((ulong)uVar12 & 0xff) * 4);
  fVar14 = SQRT(__x);
  if (NAN(fVar14)) {
    fVar14 = sqrtf(__x);
  }
  return uVar7 + (int)((ABS(fVar14) * (float)iVar13 + (float)(uVar3 & 0xff)) / 2.5);
}


