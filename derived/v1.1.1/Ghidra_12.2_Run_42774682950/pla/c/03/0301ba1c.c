/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301ba1c; name: FUN_0301ba1c
 */


void FUN_0301ba1c(long *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar15 = (ulong)*(uint *)(param_1 + 1);
  if ((int)param_3 < (int)*(uint *)(param_1 + 1)) {
    lVar13 = (long)(int)param_3;
    lVar10 = tpidr_el0;
    do {
      FUN_0301e490(((long *)*param_1)[lVar13],*(undefined8 *)(*(long *)*param_1 + 0x4e0));
      lVar11 = *(long *)(*param_1 + lVar13 * 8);
      if (lVar11 != 0) {
        FUN_0301db4c(lVar11);
        lVar16 = *(long *)(lVar10 + 0x38d490);
        if (lVar16 == 0) {
          lVar16 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar16;
        }
        plVar6 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,0x7c0);
      }
      uVar14 = *(uint *)(param_1 + 1);
      uVar15 = (ulong)(int)uVar14;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (long)uVar15);
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)param_3) {
      lVar13 = FUN_0301dac4(PTR_PTR_0434a080,param_3,*param_1,uVar14);
      uVar14 = *(uint *)(param_1 + 1);
      uVar15 = (ulong)uVar14;
      *param_1 = lVar13;
      iVar4 = uVar14 - param_3;
    }
    else {
      iVar4 = uVar14 - param_3;
    }
    if (((int)uVar14 < (int)param_3) || (uVar14 != param_3 && iVar4 < 0 == SBORROW4(uVar14,param_3))
       ) {
      *(uint *)(param_1 + 1) = param_3;
      uVar15 = (ulong)param_3;
      uVar14 = param_3;
      goto joined_r0x0301be68;
    }
  }
  uVar14 = (uint)uVar15;
joined_r0x0301be68:
  if (0 < (int)uVar14) {
    lVar13 = 0;
    do {
      lVar16 = *(long *)(*param_1 + lVar13 * 8);
      FUN_032be7c0(lVar16 + 0x520,*(undefined8 *)(lVar16 + 0x4e0));
      FUN_032be7c0(lVar16 + 0x620,*(undefined8 *)(lVar16 + 0x4e0));
      puVar9 = *(undefined4 **)(*(long *)(lVar16 + 0x530) + (long)*(int *)(lVar16 + 0x538) * 8 + -8)
      ;
      uVar2 = *puVar9;
      uVar3 = *puVar9;
      *(undefined4 **)(lVar16 + 0x730) = puVar9;
      *(short *)(lVar16 + 0x738) = (short)((uint)uVar2 >> 0x10);
      *(short *)(lVar16 + 0x73a) = (short)uVar3;
      *(int *)(lVar16 + 0x73c) = -*(int *)(lVar16 + 0x528);
      lVar10 = *(long *)(lVar16 + 8);
      *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(lVar10 + 0x490);
      *(undefined8 *)(lVar16 + 0x48) = *(undefined8 *)(lVar10 + 0x8e8);
      lVar11 = *(long *)(lVar10 + 0x8a8);
      *(long *)(lVar16 + 0x10) = lVar11 + 0x20;
      *(long *)(lVar16 + 0x18) = lVar11 + 0x820;
      lVar11 = *(long *)(*(long *)(lVar10 + 0x898) + 0x48);
      uVar14 = *(uint *)(*(long *)(lVar10 + 0x898) + 0x50);
      *(long *)(lVar16 + 0x20) = lVar11;
      *(ulong *)(lVar16 + 0x28) = lVar11 + (ulong)uVar14 * 0x50;
      lVar11 = *(long *)(*(long *)(lVar10 + 0x8a0) + 0x40);
      iVar4 = *(int *)(*(long *)(lVar10 + 0x8a0) + 0x48);
      *(long *)(lVar16 + 0x30) = lVar11;
      *(long *)(lVar16 + 0x38) = lVar11 + (long)iVar4 * 0x70;
      *(undefined8 *)(lVar16 + 0x500) = *(undefined8 *)(lVar10 + 0x118);
      FUN_0301be9c(*(long *)(*param_1 + lVar13 * 8) + 0x758,param_2 + 0x810);
      uVar15 = (ulong)(int)param_1[1];
      lVar13 = lVar13 + 1;
    } while (lVar13 < (long)uVar15);
  }
  puVar5 = PTR_PTR_0434a080;
  if ((int)uVar15 < (int)param_3) {
    puVar12 = (uint *)((long)param_1 + 0xc);
    if ((int)(*puVar12 & 0x3fffffff) < (int)param_3) {
      lVar13 = FUN_0301dac4(PTR_PTR_0434a080,param_3,*param_1,uVar15 & 0xffffffff,puVar12);
      *param_1 = lVar13;
    }
    uVar17 = -(uVar15 >> 0x1f & 1) & 0xfffffff800000000 | (uVar15 & 0xffffffff) << 3;
    lVar13 = tpidr_el0;
    do {
      lVar10 = *(long *)(lVar13 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar10;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      piVar7 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x7c0,0);
      *piVar7 = (int)uVar15;
      piVar7[2] = 0;
      piVar7[3] = 0;
      piVar7[4] = 0;
      piVar7[5] = 0;
      piVar7[0x12] = 0;
      piVar7[0x13] = 0;
      piVar7[6] = 0;
      piVar7[7] = 0;
      piVar7[8] = 0;
      piVar7[9] = 0;
      piVar7[10] = 0;
      piVar7[0xb] = 0;
      piVar7[0xc] = 0;
      piVar7[0xd] = 0;
      piVar7[0xe] = 0;
      piVar7[0xf] = 0;
      piVar7[0x10] = 0;
      piVar7[0x11] = 0;
      FUN_02fd9898(piVar7 + 0x14);
      FUN_02fd9898(piVar7 + 0x58);
      FUN_02fd9898(piVar7 + 0x9c);
      FUN_02fd9898(piVar7 + 0xe0);
      *(int **)(piVar7 + 0x14c) = piVar7 + 0x154;
      piVar7[0x14f] = -0x7fffffe8;
      piVar7[0x136] = 0;
      piVar7[0x137] = 0;
      piVar7[0x134] = 0;
      piVar7[0x135] = 0;
      piVar7[0x132] = 0;
      piVar7[0x133] = 0;
      piVar7[0x130] = 0;
      piVar7[0x131] = 0;
      piVar7[0x12e] = 0;
      piVar7[0x12f] = 0;
      piVar7[300] = 0;
      piVar7[0x12d] = 0;
      piVar7[0x140] = 0;
      piVar7[0x141] = 0;
      piVar7[0x142] = 0;
      piVar7[0x143] = 0;
      piVar7[0x144] = 0;
      piVar7[0x145] = -0x80000000;
      piVar7[0x146] = 0;
      piVar7[0x147] = 0;
      piVar7[0x148] = 0;
      piVar7[0x149] = 0;
      piVar7[0x14e] = 0;
      piVar7[0x188] = 0;
      piVar7[0x189] = 0;
      *(int **)(piVar7 + 0x18c) = piVar7 + 0x194;
      piVar7[0x18e] = 0;
      piVar7[399] = -0x7fffffe8;
      piVar7[0x1cf] = 0;
      piVar7[0x1d0] = 0;
      piVar7[0x1d1] = 0;
      piVar7[0x1d6] = 0;
      piVar7[0x1d7] = 0;
      piVar7[0x1d8] = 0;
      piVar7[0x1d9] = -0x80000000;
      piVar7[0x1da] = 0;
      piVar7[0x1db] = 0;
      piVar7[0x1dc] = 0;
      piVar7[0x1dd] = -0x80000000;
      piVar7[0x1de] = 0;
      piVar7[0x1df] = 0;
      piVar7[0x1e0] = 0;
      piVar7[0x1e1] = -0x80000000;
      piVar7[0x1e2] = 0;
      piVar7[0x1e3] = 0;
      piVar7[0x1e4] = 0;
      piVar7[0x1e5] = -0x80000000;
      piVar7[0x1e6] = 0;
      piVar7[0x1e7] = 0;
      piVar7[0x1e8] = 0;
      piVar7[0x1e9] = -0x80000000;
      piVar7[0x1ea] = 0;
      piVar7[0x1eb] = 0;
      piVar7[0x1ec] = 0;
      piVar7[0x1ed] = -0x80000000;
      iVar8 = (int)param_1[1];
      lVar10 = *param_1;
      iVar4 = iVar8 + 1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar8) {
        lVar10 = FUN_0301dac4(puVar5,iVar4,lVar10,iVar8,puVar12);
        iVar8 = (int)param_1[1];
        *param_1 = lVar10;
      }
      *(int **)(lVar10 + (long)iVar8 * 8) = piVar7;
      *(int *)(param_1 + 1) = iVar4;
      FUN_0301dfd0(*(undefined8 *)(*param_1 + uVar17),*(undefined8 *)(param_2 + 0x4a0),param_2,
                   param_1 + 0xa4);
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar14;
      uVar17 = uVar17 + 8;
    } while (param_3 != uVar14);
  }
  if (0 < (int)param_1[0xa5]) {
    lVar13 = 0;
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[0xa4] + lVar13);
      *puVar1 = 0;
      *(undefined4 *)((long)puVar1 + 0xc) = 0;
      puVar1[2] = 0;
      lVar11 = param_1[0xa4] + lVar13;
      lVar13 = lVar13 + 0x20;
      *(long *)(param_1[0xa6] + lVar10 * 8) = lVar11;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[0xa5]);
  }
  return;
}


