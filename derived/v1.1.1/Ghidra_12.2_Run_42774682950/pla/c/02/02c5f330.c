/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5f330; name: FUN_02c5f330
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_02c5f330(long param_1,uint param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  int *piVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar5 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar7 = FUN_02c6849c();
    uVar8 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar6 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar10 = 1;
    do {
      uVar9 = FUN_02c524b0(uVar7,uVar8,uVar10);
      if (uVar6 < uVar9) break;
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xff) < 0x65);
    uVar6 = uVar10 - 1;
    if ((uVar10 & 0xff) < 2) {
      uVar6 = 1;
    }
    uVar6 = uVar6 & 0xff;
  }
  else {
    uVar6 = FUN_02c68174();
  }
  uVar10 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar15 = (ulong)uVar10;
  uVar4 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  switch(param_2) {
  case 0:
    bVar3 = (uVar10 | 1) != 0x38b;
    uVar11 = 0;
    if ((int)uVar10 < 0x38a && bVar3) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1c) {
      uVar15 = 0;
      if ((int)uVar10 < 0x38a && bVar3) {
        uVar15 = (ulong)uVar10;
      }
      lVar13 = *(&DAT_043f23a0)[uVar15 * 4];
      uVar15 = (&DAT_043f23a0)[uVar15 * 4][1] - lVar13 >> 3;
      if ((uVar15 <= uVar11) || (*(long *)(lVar13 + (ulong)uVar11 * 8) == 0)) goto LAB_02c5f478;
    }
    else {
LAB_02c5f478:
      uVar11 = 0;
      lVar13 = *DAT_043f23a0;
      uVar15 = DAT_043f23a0[1] - lVar13 >> 3;
    }
    if (uVar15 <= uVar11) {
LAB_02c5fb28:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    piVar12 = *(int **)(lVar13 + (ulong)uVar11 * 8);
    if (0x14 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
      uVar4 = ((ushort *)((long)piVar12 - (long)*piVar12))[10];
      goto joined_r0x02c5f568;
    }
    break;
  case 1:
    bVar3 = (uVar10 | 1) != 0x38b;
    uVar11 = 0;
    if ((int)uVar10 < 0x38a && bVar3) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1c) {
      uVar1 = 0;
      if ((int)uVar10 < 0x38a && bVar3) {
        uVar1 = uVar15;
      }
      lVar13 = *(&DAT_043f23a0)[uVar1 * 4];
      uVar15 = (&DAT_043f23a0)[uVar1 * 4][1] - lVar13 >> 3;
      if ((uVar15 <= uVar11) || (*(long *)(lVar13 + (ulong)uVar11 * 8) == 0)) goto LAB_02c5f688;
    }
    else {
LAB_02c5f688:
      uVar11 = 0;
      lVar13 = *DAT_043f23a0;
      uVar15 = DAT_043f23a0[1] - lVar13 >> 3;
    }
    if (uVar15 <= uVar11) goto LAB_02c5fb28;
    piVar12 = *(int **)(lVar13 + (ulong)uVar11 * 8);
    if (0x16 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
      uVar4 = ((ushort *)((long)piVar12 - (long)*piVar12))[0xb];
      goto joined_r0x02c5f568;
    }
    break;
  case 2:
    bVar3 = (uVar10 | 1) != 0x38b;
    uVar11 = 0;
    if ((int)uVar10 < 0x38a && bVar3) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1c) {
      uVar1 = 0;
      if ((int)uVar10 < 0x38a && bVar3) {
        uVar1 = uVar15;
      }
      lVar13 = *(&DAT_043f23a0)[uVar1 * 4];
      uVar15 = (&DAT_043f23a0)[uVar1 * 4][1] - lVar13 >> 3;
      if ((uVar15 <= uVar11) || (*(long *)(lVar13 + (ulong)uVar11 * 8) == 0)) goto LAB_02c5f5d8;
    }
    else {
LAB_02c5f5d8:
      uVar11 = 0;
      lVar13 = *DAT_043f23a0;
      uVar15 = DAT_043f23a0[1] - lVar13 >> 3;
    }
    if (uVar15 <= uVar11) goto LAB_02c5fb28;
    piVar12 = *(int **)(lVar13 + (ulong)uVar11 * 8);
    if (0x18 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
      uVar4 = ((ushort *)((long)piVar12 - (long)*piVar12))[0xc];
      goto joined_r0x02c5f568;
    }
    break;
  case 3:
    bVar3 = (uVar10 | 1) != 0x38b;
    uVar11 = 0;
    if ((int)uVar10 < 0x38a && bVar3) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1c) {
      uVar1 = 0;
      if ((int)uVar10 < 0x38a && bVar3) {
        uVar1 = uVar15;
      }
      lVar13 = *(&DAT_043f23a0)[uVar1 * 4];
      uVar15 = (&DAT_043f23a0)[uVar1 * 4][1] - lVar13 >> 3;
      if ((uVar15 <= uVar11) || (*(long *)(lVar13 + (ulong)uVar11 * 8) == 0)) goto LAB_02c5f738;
    }
    else {
LAB_02c5f738:
      uVar11 = 0;
      lVar13 = *DAT_043f23a0;
      uVar15 = DAT_043f23a0[1] - lVar13 >> 3;
    }
    if (uVar15 <= uVar11) goto LAB_02c5fb28;
    piVar12 = *(int **)(lVar13 + (ulong)uVar11 * 8);
    if (0x1a < *(ushort *)((long)piVar12 - (long)*piVar12)) {
      uVar4 = ((ushort *)((long)piVar12 - (long)*piVar12))[0xd];
      goto joined_r0x02c5f568;
    }
    break;
  case 4:
    bVar3 = (uVar10 | 1) != 0x38b;
    uVar11 = 0;
    if ((int)uVar10 < 0x38a && bVar3) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1c) {
      uVar1 = 0;
      if ((int)uVar10 < 0x38a && bVar3) {
        uVar1 = uVar15;
      }
      lVar13 = *(&DAT_043f23a0)[uVar1 * 4];
      uVar15 = (&DAT_043f23a0)[uVar1 * 4][1] - lVar13 >> 3;
      if ((uVar15 <= uVar11) || (*(long *)(lVar13 + (ulong)uVar11 * 8) == 0)) goto LAB_02c5f528;
    }
    else {
LAB_02c5f528:
      uVar11 = 0;
      lVar13 = *DAT_043f23a0;
      uVar15 = DAT_043f23a0[1] - lVar13 >> 3;
    }
    if (uVar15 <= uVar11) goto LAB_02c5fb28;
    piVar12 = *(int **)(lVar13 + (ulong)uVar11 * 8);
    if (*(ushort *)((long)piVar12 - (long)*piVar12) < 0x1d) break;
    uVar4 = ((ushort *)((long)piVar12 - (long)*piVar12))[0xe];
joined_r0x02c5f568:
    if ((ulong)uVar4 == 0) break;
    bVar14 = *(byte *)((long)piVar12 + (ulong)uVar4);
    goto LAB_02c5f844;
  case 5:
    bVar3 = (uVar10 | 1) != 0x38b;
    uVar11 = 0;
    if ((int)uVar10 < 0x38a && bVar3) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1c) {
      uVar1 = 0;
      if ((int)uVar10 < 0x38a && bVar3) {
        uVar1 = uVar15;
      }
      lVar13 = *(&DAT_043f23a0)[uVar1 * 4];
      uVar15 = (&DAT_043f23a0)[uVar1 * 4][1] - lVar13 >> 3;
      if ((uVar15 <= uVar11) || (*(long *)(lVar13 + (ulong)uVar11 * 8) == 0)) goto LAB_02c5f7e8;
    }
    else {
LAB_02c5f7e8:
      uVar11 = 0;
      lVar13 = *DAT_043f23a0;
      uVar15 = DAT_043f23a0[1] - lVar13 >> 3;
    }
    if (uVar15 <= uVar11) goto LAB_02c5fb28;
    piVar12 = *(int **)(lVar13 + (ulong)uVar11 * 8);
    if (0x1e < *(ushort *)((long)piVar12 - (long)*piVar12)) {
      uVar4 = ((ushort *)((long)piVar12 - (long)*piVar12))[0xf];
      goto joined_r0x02c5f568;
    }
    break;
  default:
    bVar14 = 0;
    if ((int)param_2 < 6) goto LAB_02c5f844;
    goto LAB_02c5f860;
  }
  bVar14 = 0;
LAB_02c5f844:
  uVar10 = FUN_02c8b05c(*(undefined8 *)(param_1 + 0x98));
  if ((uVar10 & 1 << (ulong)(param_2 & 0x1f) & 0xff) == 0) {
LAB_02c5f860:
    FUN_02c5db4c(param_1,param_2);
  }
  uVar10 = FUN_02c6ffa8(*(undefined8 *)(param_1 + 0x98));
  switch(param_2) {
  case 0:
    if (iVar5 == 0x124) {
      uVar10 = 1;
    }
    else {
      fVar18 = (float)(uVar6 & 0xff);
      fVar17 = (float)bVar14;
      fVar16 = SQRT(fVar17);
      if (NAN(fVar16)) {
        fVar16 = sqrtf(fVar17);
      }
      uVar10 = (int)((ABS(fVar16) * 0.0 + fVar18) / 2.5) +
               (int)((fVar18 / 100.0 + 1.0) * fVar17 + fVar18);
    }
    goto LAB_02c5f9a4;
  case 1:
    fVar17 = (float)(uVar6 & 0xff);
    fVar16 = (fVar17 / 50.0 + 1.0) * (float)bVar14;
    cVar2 = (&DAT_03a84f04)[(ulong)(uVar10 & 0xffff) * 5];
    break;
  case 2:
    fVar17 = (float)(uVar6 & 0xff);
    fVar16 = (fVar17 / 50.0 + 1.0) * (float)bVar14;
    cVar2 = (&DAT_03a84f05)[(ulong)(uVar10 & 0xffff) * 5];
    break;
  case 3:
    fVar17 = (float)(uVar6 & 0xff);
    fVar16 = (fVar17 / 50.0 + 1.0) * (float)bVar14;
    cVar2 = (&DAT_03a84f06)[(ulong)(uVar10 & 0xffff) * 5];
    break;
  case 4:
    fVar17 = (float)(uVar6 & 0xff);
    fVar16 = (fVar17 / 50.0 + 1.0) * (float)bVar14;
    cVar2 = (&DAT_03a84f07)[(ulong)(uVar10 & 0xffff) * 5];
    break;
  case 5:
    fVar17 = (float)(uVar6 & 0xff);
    fVar16 = (fVar17 / 50.0 + 1.0) * (float)bVar14;
    cVar2 = (&DAT_03a84f08)[(ulong)(uVar10 & 0xffff) * 5];
    break;
  default:
    uVar10 = 0;
    goto LAB_02c5f9a4;
  }
  uVar10 = (uint)(fVar16 / 1.5);
  if (cVar2 == -1) {
    iVar5 = 0x5a;
LAB_02c5f958:
    uVar10 = (uVar10 * iVar5 & 0xfffe) / 100;
  }
  else if (cVar2 == '\x01') {
    iVar5 = 0x6e;
    goto LAB_02c5f958;
  }
  fVar16 = SQRT((float)bVar14);
  if (NAN(fVar16)) {
    fVar16 = sqrtf((float)bVar14);
  }
  uVar10 = uVar10 + (int)((ABS(fVar16) * 0.0 + fVar17) / 2.5);
LAB_02c5f9a4:
  return uVar10 & 0xffff;
}


