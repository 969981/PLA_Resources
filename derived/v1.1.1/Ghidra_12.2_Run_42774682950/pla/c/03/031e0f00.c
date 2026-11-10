/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e0f00; name: FUN_031e0f00
 */


void FUN_031e0f00(undefined8 param_1,long param_2,undefined8 *param_3,int *param_4,long param_5,
                 uint param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  float *pfVar18;
  int iVar19;
  long lVar20;
  int *piVar21;
  int iVar22;
  ulong uVar23;
  float fVar24;
  int local_90 [2];
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70 [2];
  int local_68 [2];
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar20 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar20 = FUN_02898b44();
  }
  FUN_031e1300(param_2,param_4 + 1);
  iVar5 = *param_4;
  iVar19 = iVar5 - *(int *)(lVar20 + 0x20);
  if (iVar5 < *(int *)(lVar20 + 0x20)) {
    iVar19 = iVar5;
    if (*(int *)(lVar20 + 0x98) != 0) {
      iVar19 = *(int *)(*(long *)(lVar20 + 0x90) + (long)iVar5 * 4);
    }
    if (iVar19 != -1) {
      lVar13 = *(long *)(lVar20 + 0xb0);
      goto LAB_031e0fb0;
    }
    piVar12 = (int *)FUN_031e1380(*(undefined8 *)(lVar20 + 0x18),(long *)(lVar20 + 0xb0),
                                  *(undefined8 *)(lVar20 + 0x48),lVar20 + 0x120,
                                  (long *)(lVar20 + 0x90),lVar20 + 0xa0,iVar5,
                                  *(undefined4 *)(lVar20 + 0x50));
  }
  else {
    lVar13 = *(long *)(lVar20 + 0xd0);
LAB_031e0fb0:
    piVar12 = (int *)(lVar13 + (long)iVar19 * 0x10);
  }
  iVar5 = param_4[1];
  iVar19 = piVar12[1];
  if (iVar19 <= iVar5) {
    sVar8 = *(short *)((long)piVar12 + 10);
    iVar15 = (int)sVar8;
    if (iVar5 < iVar19 + sVar8) {
      if (*(int *)(*(long *)(param_2 + 0x20) + 0x30) <= iVar19) {
        *(int *)(lVar20 + 0x164) = *(int *)(lVar20 + 0x164) + (int)sVar8;
      }
      bVar11 = true;
      goto LAB_031e1038;
    }
  }
  iVar19 = *piVar12;
  iVar15 = (int)(short)piVar12[2];
  if (iVar19 < *(int *)(*(long *)(param_2 + 0x20) + 0x30)) {
    bVar11 = false;
  }
  else {
    bVar11 = false;
    *(int *)(lVar20 + 0x164) = *(int *)(lVar20 + 0x164) + (int)(short)piVar12[2];
  }
LAB_031e1038:
  sVar8 = (short)iVar15 + (short)param_6 + -1;
  iVar6 = *(int *)(*(long *)(param_2 + 0x20) + 0x30);
  iVar7 = *(int *)(*(long *)(param_2 + 0x20) + 0xe8);
  uVar9 = iVar5 - iVar19;
  FUN_0318aeac(param_2);
  local_70[0] = iVar19 - iVar6;
  local_68[0] = iVar7;
  FUN_031de520(param_1,param_2,local_68,local_70,uVar9);
  uVar1 = iVar7 + uVar9;
  if ((int)param_6 < 1) {
LAB_031e1244:
    local_88[0] = uVar1 + param_6;
    local_90[0] = (iVar5 - iVar6) + 1;
    FUN_031de520(param_1,param_2,local_88,local_90,iVar15 + ~uVar9);
    if (bVar11) {
      piVar12[1] = iVar7 + iVar6;
      *(short *)((long)piVar12 + 10) = sVar8;
    }
    else {
      *piVar12 = iVar7 + iVar6;
      *(short *)(piVar12 + 2) = sVar8;
    }
    return;
  }
  pfVar18 = (float *)(param_5 + 4);
  iVar10 = iVar5 - iVar6;
  lVar13 = ((long)(int)uVar1 + (long)(int)uVar1 * 4) * 4;
  iVar2 = *(int *)(*(long *)(param_2 + 0x20) + 0xf8) + *(int *)(*(long *)(param_2 + 0x20) + 0x40);
  uVar23 = 0;
  piVar21 = (int *)(param_7 + 4);
  if (iVar19 == iVar7 + iVar6) goto LAB_031e11d4;
  do {
    puVar16 = (undefined4 *)(*(long *)(lVar20 + 0xe0) + (long)iVar10 * 0x14);
    puVar3 = (undefined4 *)(*(long *)(lVar20 + 0xe0) + lVar13);
    *puVar3 = *puVar16;
    puVar3[1] = puVar16[1];
    uVar17 = *(undefined8 *)(puVar16 + 2);
    *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar16 + 4);
    *(undefined8 *)(puVar3 + 2) = uVar17;
    *(undefined2 *)((long)puVar3 + 0x12) = *(undefined2 *)((long)puVar16 + 0x12);
    *(undefined2 *)
     (*(long *)(lVar20 + 0x110) + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1)
     + uVar23 * 2) = *(undefined2 *)(*(long *)(lVar20 + 0x110) + (long)iVar10 * 2);
    iVar22 = *(int *)(lVar20 + 0x60);
    memcpy((void *)(*(long *)(lVar20 + 0x150) + ((long)(int)uVar1 + uVar23) * (long)iVar22 * 4),
           (void *)(*(long *)(lVar20 + 0x150) + (long)(iVar22 * iVar10) * 4),(long)iVar22 << 2);
LAB_031e11d4:
    do {
      lVar14 = *(long *)(lVar20 + 0xe0);
      lVar4 = lVar14 + lVar13;
      *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
      *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xbf;
      iVar22 = (int)uVar23;
      if (uVar23 != 0) {
        *(int *)(lVar14 + lVar13) = iVar2 + -1 + iVar22;
      }
      if (param_6 - 1 != uVar23) {
        *(int *)(lVar4 + 4) = iVar2 + iVar22;
        fVar24 = *pfVar18;
        uStack_78 = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                             (float)((ulong)param_3[3] >> 0x20) * fVar24,
                             (float)param_3[1] + (float)param_3[3] * fVar24);
        local_80 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                            (float)((ulong)param_3[2] >> 0x20) * fVar24,
                            (float)*param_3 + (float)param_3[2] * fVar24);
        FUN_0318a9b0(param_2,&local_80,1);
      }
      uVar23 = uVar23 + 1;
      lVar13 = lVar13 + 0x14;
      piVar21[-1] = *param_4;
      *piVar21 = ((iVar7 + iVar5 + iVar6) - iVar19) + iVar22;
      pfVar18 = pfVar18 + 4;
      piVar21 = piVar21 + 2;
      if (param_6 == uVar23) goto LAB_031e1244;
    } while (iVar19 - (iVar7 + iVar6) == (int)uVar23);
  } while( true );
}


