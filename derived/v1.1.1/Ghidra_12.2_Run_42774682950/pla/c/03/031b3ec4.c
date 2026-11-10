/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b3ec4; name: FUN_031b3ec4
 */


void FUN_031b3ec4(long *param_1,long *param_2,undefined4 *param_3,undefined8 *param_4,ulong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  float *pfVar7;
  short sVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = *param_3;
  *param_1 = (long)param_2;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  param_1[0x58] = -1;
  if ((param_5 & 1) == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    lVar18 = *param_2;
    plVar6 = param_1 + 0x5a;
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5a] = lVar18;
  }
  local_50 = *param_4;
  uStack_48 = param_4[1];
  uVar3 = *(uint *)(param_4 + 5);
  lVar18 = param_4[4];
  uVar11 = *(uint *)(param_4 + 3);
  FUN_031b5e7c(param_1 + 0x10,param_2,plVar6,(ulong)uVar11,&local_50,lVar18,param_4[2],(ulong)uVar3)
  ;
  plVar6 = (long *)*param_1;
  uVar1 = uVar11 >> 0x16;
  if (*(uint *)(plVar6 + 0x4f) == uVar1) {
    lVar9 = plVar6[0x3d];
  }
  else {
    lVar15 = *(long *)(*(long *)(*plVar6 + 0x38) + (ulong)uVar1 * 0xf0);
    lVar9 = *(long *)(lVar15 + 0x20);
    plVar6[0x3d] = lVar9;
    lVar20 = *(long *)(lVar15 + 0x60);
    plVar6[0x47] = *(long *)(lVar15 + 0x68);
    plVar6[0x46] = lVar20;
    lVar20 = *(long *)(lVar15 + 0x70);
    plVar6[0x49] = *(long *)(lVar15 + 0x78);
    plVar6[0x48] = lVar20;
    lVar20 = *(long *)(lVar15 + 0x80);
    plVar6[0x4b] = *(long *)(lVar15 + 0x88);
    plVar6[0x4a] = lVar20;
    lVar20 = *(long *)(lVar15 + 0x98);
    lVar15 = *(long *)(lVar15 + 0x90);
    *(uint *)(plVar6 + 0x4f) = uVar1;
    plVar6[0x4d] = lVar20;
    plVar6[0x4c] = lVar15;
  }
  uVar14 = (ulong)uVar11 & 0x3fffff;
  iVar13 = (int)uVar14;
  iVar16 = iVar13 - *(int *)(lVar9 + 0x20);
  iVar4 = *(int *)(lVar9 + 0x50);
  if (iVar13 < *(int *)(lVar9 + 0x20)) {
    if (*(int *)(lVar9 + 0x98) == 0) {
      iVar16 = iVar13;
    }
    else {
      iVar16 = *(int *)(*(long *)(lVar9 + 0x90) + uVar14 * 4);
      if (iVar16 == -1) {
        lVar15 = *(long *)(lVar9 + 0x48) + (long)(iVar4 * iVar13) * 4;
        puVar10 = (undefined4 *)(*(long *)(lVar9 + 0x18) + uVar14 * 0x10);
        goto LAB_031b3f9c;
      }
    }
    lVar15 = *(long *)(lVar9 + 0x120) + (long)(iVar16 * iVar4) * 4;
    lVar9 = *(long *)(lVar9 + 0xb0);
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x140) + (long)(iVar4 * iVar16) * 4;
    lVar9 = *(long *)(lVar9 + 0xd0);
  }
  puVar10 = (undefined4 *)(lVar9 + (long)iVar16 * 0x10);
LAB_031b3f9c:
  lVar9 = lVar15 + (long)iVar4 * 4;
  *(uint *)(plVar6 + 0x4e) = uVar11;
  *(undefined4 *)(plVar6 + 3) = *puVar10;
  *(undefined4 *)((long)plVar6 + 0x1c) = puVar10[1];
  plVar6[4] = *(long *)(puVar10 + 2);
  plVar6[5] = lVar15;
  plVar6[6] = lVar9;
  *(uint *)(plVar6 + 0x36) = uVar11;
  plVar6[0x37] = (long)(plVar6 + 3);
  plVar6[0x38] = lVar15;
  plVar6[0x39] = lVar9;
  lVar9 = param_1[2];
  for (sVar8 = *(short *)(param_1[4] + 0x4e); -1 < sVar8;
      sVar8 = *(short *)(param_1[3] + (long)sVar8 * 2)) {
    if (*(int *)(lVar9 + (long)sVar8 * 0x10 + 8) == -0x800000) {
      puVar17 = (undefined8 *)(lVar9 + (long)sVar8 * 0x10);
      goto LAB_031b4040;
    }
  }
  iVar16 = *(int *)((long)param_1 + 0x2c);
  puVar17 = (undefined8 *)(lVar9 + (long)iVar16 * 0x10);
  *(int *)((long)param_1 + 0x2c) = iVar16 + 1;
  *puVar17 = 0x7f7fffee7f7fffee;
  puVar17[1] = 0xffffff800000;
  *(undefined2 *)(param_1[3] + (long)(short)iVar16 * 2) = *(undefined2 *)(param_1[4] + 0x4e);
  *(short *)(param_1[4] + 0x4e) = (short)iVar16;
LAB_031b4040:
  *(undefined4 *)puVar17 = 0;
  fVar19 = (float)FUN_031b612c(param_1 + 0x10,0xff800000);
  *(float *)((long)puVar17 + 4) = fVar19;
  *(ushort *)((long)puVar17 + 0xe) = *(ushort *)((long)puVar17 + 0xe) | 5;
  if (fVar19 < *(float *)((long)param_1 + 0x44)) {
    *(float *)((long)param_1 + 0x44) = fVar19;
    *(undefined4 *)(param_1 + 8) = 0xff800000;
    fVar19 = *(float *)((long)puVar17 + 4);
  }
  if (fVar19 < 3.40282e+38) {
    sVar8 = *(short *)(param_1[4] + 0x4e);
    if (-1 < sVar8) {
      do {
        if (*(int *)(param_1[2] + (long)sVar8 * 0x10 + 8) == -0x800000) {
          pfVar7 = (float *)(param_1[2] + (long)sVar8 * 0x10);
          goto LAB_031b40bc;
        }
        sVar8 = *(short *)(param_1[3] + (long)sVar8 * 2);
      } while (-1 < sVar8);
    }
    pfVar7 = (float *)(param_1 + 6);
LAB_031b40bc:
    fVar19 = *(float *)((long)param_1 + 0x4c);
    fVar21 = *pfVar7;
    fVar22 = pfVar7[1];
    uVar11 = *(uint *)(param_1 + 0xf);
    uVar12 = (ulong)uVar11;
    uVar14 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
    *(uint *)(param_1 + 0xf) = uVar11 + 1;
    puVar10 = (undefined4 *)(param_1[0xe] + uVar14);
    *puVar10 = 0xff800000;
    puVar10[1] = fVar21 + fVar19 * fVar22;
    lVar9 = param_1[0xe];
    puVar10 = (undefined4 *)(lVar9 + uVar14);
    uVar2 = *puVar10;
    iVar16 = puVar10[1];
    if ((int)uVar11 < 1) {
LAB_031b4144:
      lVar15 = (long)(int)uVar11;
    }
    else {
      do {
        uVar11 = (uint)uVar12;
        uVar5 = uVar11 - 1;
        uVar1 = uVar11;
        if (-1 < (int)uVar5) {
          uVar1 = uVar5;
        }
        if (*(int *)(lVar9 + (long)((int)uVar1 >> 1) * 8 + 4) <= iVar16) goto LAB_031b4144;
        lVar15 = (long)((ulong)uVar1 << 0x20) >> 0x21;
        *(undefined8 *)(lVar9 + (long)(int)uVar11 * 8) = *(undefined8 *)(lVar9 + lVar15 * 8);
        lVar9 = param_1[0xe];
        uVar12 = (ulong)(uint)((int)uVar1 >> 1);
      } while (1 < (int)uVar5);
    }
    *(undefined4 *)(lVar9 + lVar15 * 8) = uVar2;
    *(int *)(param_1[0xe] + lVar15 * 8 + 4) = iVar16;
  }
  if (0 < (int)uVar3) {
    uVar14 = 0;
    do {
      if (*(int *)(lVar18 + uVar14 * 4) != -1) {
        uVar11 = (uint)uVar14 | 0xff400000;
        uVar12 = (ulong)(uVar11 * -0x61c8864f >> 0x18);
        lVar9 = param_1[2];
        for (sVar8 = *(short *)(param_1[4] + uVar12 * 2); -1 < sVar8;
            sVar8 = *(short *)(param_1[3] + (long)sVar8 * 2)) {
          if (*(uint *)(lVar9 + (long)sVar8 * 0x10 + 8) == uVar11) {
            puVar17 = (undefined8 *)(lVar9 + (long)sVar8 * 0x10);
            goto LAB_031b4208;
          }
        }
        iVar16 = *(int *)((long)param_1 + 0x2c);
        puVar17 = (undefined8 *)(lVar9 + (long)iVar16 * 0x10);
        *(int *)((long)param_1 + 0x2c) = iVar16 + 1;
        *puVar17 = 0x7f7fffee7f7fffee;
        *(uint *)(puVar17 + 1) = uVar11;
        *(undefined4 *)((long)puVar17 + 0xc) = 0xffff;
        lVar9 = uVar12 * 2;
        *(undefined2 *)(param_1[3] + (long)(short)iVar16 * 2) = *(undefined2 *)(param_1[4] + lVar9);
        *(short *)(param_1[4] + lVar9) = (short)iVar16;
LAB_031b4208:
        *(undefined4 *)((long)puVar17 + 4) = 0;
        *(ushort *)((long)puVar17 + 0xe) = *(ushort *)((long)puVar17 + 0xe) | 8;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar3);
  }
  return;
}


