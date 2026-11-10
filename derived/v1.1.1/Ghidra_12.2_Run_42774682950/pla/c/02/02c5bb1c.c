/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5bb1c; name: FUN_02c5bb1c
 */


void FUN_02c5bb1c(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  
  lVar10 = *(long *)(param_1 + 0x98);
  bVar1 = *(char *)(lVar10 + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
    lVar10 = *(long *)(param_1 + 0x98);
  }
  uVar6 = FUN_02c6849c(lVar10);
  uVar7 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  uVar8 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
  uVar14 = 1;
  do {
    uVar9 = FUN_02c524b0(uVar6,uVar7,uVar14);
    if (uVar8 < uVar9) break;
    uVar14 = uVar14 + 1;
  } while ((uVar14 & 0xff) < 0x65);
  iVar2 = uVar14 - 1;
  if ((uVar14 & 0xff) < 2) {
    iVar2 = 1;
  }
  FUN_02c78264(*(undefined8 *)(param_1 + 0x98),iVar2);
  FUN_02c5dba8(param_1,param_2 & 1);
  uVar6 = FUN_02c5e59c(param_1);
  FUN_02c78bfc(*(undefined8 *)(param_1 + 0x98),uVar6);
  uVar6 = FUN_02c5e850(param_1);
  FUN_02c78f24(*(undefined8 *)(param_1 + 0x98),uVar6);
  uVar6 = FUN_02c5eb08(param_1);
  FUN_02c7924c(*(undefined8 *)(param_1 + 0x98),uVar6);
  uVar6 = FUN_02c5edc0(param_1);
  FUN_02c79574(*(undefined8 *)(param_1 + 0x98),uVar6);
  uVar6 = FUN_02c5f078(param_1);
  FUN_02c7989c(*(undefined8 *)(param_1 + 0x98),uVar6);
  uVar8 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar9 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar4 = FUN_02c76bec(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_02c76f24(*(undefined8 *)(param_1 + 0x98));
  bVar3 = (uVar8 | 1) != 0x38b;
  uVar14 = 0;
  if ((int)uVar8 < 0x38a && bVar3) {
    uVar14 = uVar9;
  }
  uVar12 = (ulong)uVar14;
  if ((uVar14 & 0xffff) < 0x1c) {
    uVar13 = 0;
    if ((int)uVar8 < 0x38a && bVar3) {
      uVar13 = (ulong)uVar8;
    }
    lVar10 = *(&DAT_043f23a0)[uVar13 * 4];
    uVar13 = (&DAT_043f23a0)[uVar13 * 4][1] - lVar10 >> 3;
    if (((uVar12 & 0xffff) < uVar13) && (*(long *)(lVar10 + (uVar12 & 0xffff) * 8) != 0))
    goto LAB_02c5bce0;
  }
  uVar12 = 0;
  lVar10 = *DAT_043f23a0;
  uVar13 = DAT_043f23a0[1] - lVar10 >> 3;
LAB_02c5bce0:
  if (uVar13 <= (uVar12 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar11 = *(int **)(lVar10 + (uVar12 & 0xffff) * 8);
  fVar15 = 0.0;
  if ((0x2c < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x16], uVar12 != 0)) {
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)((long)piVar11 + uVar12));
  }
  uVar16 = FUN_02c8b51c(uVar8,uVar9,uVar5);
  FUN_02c89bcc((((float)bVar4 / 255.0) * 0.40000004 + 0.8) * fVar15,*(undefined8 *)(param_1 + 0x98))
  ;
  FUN_02c89f0c(uVar16,*(undefined8 *)(param_1 + 0x98));
  if (bVar1 && *(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0') {
    FUN_02c66640();
    return;
  }
  return;
}


