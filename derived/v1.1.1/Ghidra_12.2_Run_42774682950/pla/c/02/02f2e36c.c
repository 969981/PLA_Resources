/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2e36c; name: FUN_02f2e36c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2e36c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *__s;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  short sVar15;
  long lVar16;
  long *plVar17;
  size_t __n;
  uint uVar18;
  float fVar19;
  ushort uVar20;
  float fVar21;
  
  if (*(int *)((long)param_2 + 0x2c) == 0x11) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  plVar2 = (long *)(param_1 + 0x80);
  if (*(short *)(param_1 + 0x92) == 0) {
    if (*plVar2 == 0) {
      sVar5 = *(short *)((long)param_2 + 0x12);
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
      sVar5 = *(short *)((long)param_2 + 0x12);
    }
    if ((sVar5 == 0) && (*(int *)((long)param_2 + 0x2c) == 0x2d)) {
      iVar8 = 0x2b;
      goto LAB_02f2e560;
    }
    lVar12 = param_2[1];
    *plVar2 = *param_2;
    *(long *)(param_1 + 0x88) = lVar12;
    lVar13 = param_2[4];
    lVar12 = param_2[2];
    lVar16 = param_2[3];
    *(int *)(param_1 + 0xa8) = (int)param_2[5];
    *(long *)(param_1 + 0x98) = lVar16;
    *(long *)(param_1 + 0xa0) = lVar13;
    *(long *)(param_1 + 0x90) = lVar12;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
  }
  plVar17 = (long *)(param_1 + 0xb0);
  if (*plVar17 == 0) {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0x88);
    uVar9 = _DAT_042ab268;
    uVar10 = *(uint *)(param_1 + 0x88) & 0xff;
    uVar18 = _DAT_042ab268 & 0xffff;
    *(short *)(param_1 + 0xc0) = (short)_DAT_042ab268;
    if ((uVar10 < 9) && (uVar9 >> 0x10 == 0)) {
      plVar1 = &DAT_0440a3d0 + (uVar10 - 1);
      __s = (long *)*plVar1;
      while (__s != (long *)0x0) {
        lVar12 = *__s;
        while ((long *)*plVar1 == __s) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02f2e610;
        }
        ClearExclusiveLocal();
        __s = (long *)*plVar1;
      }
      uVar18 = (uint)*(ushort *)(param_1 + 0xc0);
    }
    __s = (long *)(*DAT_0442d140)(5,uVar10 * uVar18 * 4,0x10);
    if (__s == (void *)0x0) {
      iVar8 = 2;
      goto LAB_02f2e560;
    }
LAB_02f2e610:
    *(long **)(param_1 + 0xb0) = __s;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    if (*(char *)(param_1 + 0xf2) != '\0') {
      fVar19 = (float)NEON_ucvtf(_DAT_042ab268 & 0xffff);
      fVar21 = *(float *)(*(long *)(param_1 + 0xe8) + 0x24c);
      fVar21 = ((float)*(int *)(*(long *)(param_1 + 0xe8) + 0x2c0) + fVar19 * fVar21) / fVar21;
      uVar20 = 0x3f00;
      if (fVar21 <= 0.0) {
        uVar20 = 0xbf00;
      }
      uVar18 = (uint)((float)((uint)uVar20 << 0x10) + fVar21);
      if (0 < (int)uVar18) {
        bVar4 = *(byte *)(param_1 + 0xb8);
        if (bVar4 != 0) {
          __n = (ulong)uVar18 << 2;
          memset(__s,0,__n);
          if ((bVar4 != 1) &&
             (memset((void *)(*(long *)(param_1 + 0xb0) + (ulong)*(ushort *)(param_1 + 0xc0) * 4),0,
                     __n), bVar4 != 2)) {
            lVar16 = (ulong)bVar4 - 2;
            lVar12 = 8;
            do {
              memset((void *)(*(long *)(param_1 + 0xb0) +
                             lVar12 * (ulong)*(ushort *)(param_1 + 0xc0)),0,__n);
              lVar16 = lVar16 + -1;
              lVar12 = lVar12 + 4;
            } while (lVar16 != 0);
          }
        }
        *(uint *)(param_1 + 0x3c) = uVar18;
      }
      *(undefined1 *)(param_1 + 0xf2) = 0;
    }
  }
  lVar12 = *(long *)(param_1 + 0xe8);
  puVar3 = (uint *)(lVar12 + 0x2a3);
  if (((*puVar3 >> 0x16 & 1) == 0) && (iVar8 = *(int *)(lVar12 + 0x29c), iVar8 != 0)) {
    uVar20 = *(ushort *)(param_1 + 0x92);
    if ((int)(uint)uVar20 <= iVar8) {
      *(uint *)(lVar12 + 0x29c) = iVar8 - (uint)uVar20;
      *puVar3 = *puVar3 & 0xfe3fffff;
      *(undefined2 *)(param_1 + 0x92) = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
      iVar8 = 0x2b;
      if (*(char *)(param_1 + 0xf0) != '\0') {
        iVar8 = 0x11;
      }
      goto LAB_02f2e560;
    }
    *(int *)(param_1 + 0x38) = iVar8;
    *(ushort *)(param_1 + 0x92) = uVar20 - (short)iVar8;
    *(undefined4 *)(lVar12 + 0x29c) = 0;
    *puVar3 = *puVar3 & 0xfe3fffff;
  }
  uVar18 = *(uint *)(param_1 + 0x38);
  sVar5 = *(short *)(param_1 + 0x92);
  if (sVar5 == 0) {
    sVar15 = 0;
    iVar8 = 0x11;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x70);
    uVar10 = *(uint *)(param_1 + 0x54);
    do {
      iVar8 = (*(code *)(&DAT_0440aff0)[(ulong)uVar9 * 6 + (ulong)*(byte *)(param_1 + 0x7c)])
                        (plVar2,plVar17,uVar10,param_1 + 0x10);
      uVar9 = *(uint *)(param_1 + 0x70);
      if (uVar9 == 2) {
        if (*(uint *)(param_1 + 0x4c) < 0x400) {
          uVar9 = 2;
          sVar15 = *(short *)(param_1 + 0x92);
        }
        else {
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
          uVar9 = 1;
          *(undefined4 *)(param_1 + 0x70) = 1;
          sVar15 = *(short *)(param_1 + 0x92);
        }
      }
      else {
        sVar15 = *(short *)(param_1 + 0x92);
      }
    } while ((sVar15 != 0) &&
            (uVar10 = *(uint *)(param_1 + 0x54), *(ushort *)(param_1 + 0xc2) < uVar10));
  }
  if (*(int *)(*(long *)(param_1 + 0xe0) + 0x150) == 0) {
    lVar12 = 0;
    uVar9 = *(uint *)(param_1 + 0x98);
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 0xe0) + 0x148);
    uVar9 = *(uint *)(param_1 + 0x98);
  }
  if (uVar9 != 0) {
    uVar14 = 0;
    iVar11 = 0;
    lVar12 = lVar12 + 0x10;
    do {
      lVar16 = (ulong)*(uint *)(param_1 + 0x94) * 0x20;
      uVar10 = *(uint *)(lVar12 + lVar16);
      if (uVar18 <= uVar10 && uVar10 < uVar18 + (ushort)(sVar5 - sVar15)) {
        *(undefined4 *)(lVar12 + lVar16) = 0;
        uVar9 = *(uint *)(param_1 + 0x98);
        iVar11 = iVar11 + 1;
      }
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x20;
    } while (uVar14 < uVar9);
    *(uint *)(param_1 + 0x98) = uVar9 - iVar11;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iVar11;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + iVar11;
  }
  iVar11 = *(int *)(param_1 + 0x9c);
  if ((iVar11 != -1) && (*(char *)(param_1 + 0xf1) == '\0')) {
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_1 + 0x9c);
    *(uint *)(param_1 + 0xcc) = iVar11 + uVar18;
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
  *(float *)(param_1 + 0xd0) = (fVar19 * 1.5258789e-05) / *(float *)(param_1 + 0x74);
  if (*(short *)(param_1 + 0x92) == 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
    *param_2 = 0;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    if (*(char *)(param_1 + 0xf0) == '\0') goto LAB_02f2e52c;
    if (*(long *)(*(long *)(param_1 + 0xe0) + 0x130) != 0) {
      iVar8 = FUN_02f2cd84(*(long *)(param_1 + 0xe0),plVar17);
      if (iVar8 == 0x2d) goto LAB_02f2e53c;
      goto LAB_02f2e534;
    }
    iVar8 = 0x11;
  }
  else {
LAB_02f2e52c:
    if (iVar8 != 0x2d) {
LAB_02f2e534:
      if (iVar8 != 0x11) goto LAB_02f2e560;
    }
  }
LAB_02f2e53c:
  lVar12 = *(long *)(param_1 + 0xb8);
  *param_2 = *plVar17;
  param_2[1] = lVar12;
  lVar13 = *(long *)(param_1 + 0xd0);
  lVar12 = *(long *)(param_1 + 0xc0);
  lVar16 = *(long *)(param_1 + 200);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0xd8);
  param_2[3] = lVar16;
  param_2[4] = lVar13;
  param_2[2] = lVar12;
  *(undefined8 *)(param_1 + 0xc4) = 0;
LAB_02f2e560:
  *(int *)((long)param_2 + 0x2c) = iVar8;
  return;
}


