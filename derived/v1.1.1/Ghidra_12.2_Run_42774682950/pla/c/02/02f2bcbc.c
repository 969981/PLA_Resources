/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2bcbc; name: FUN_02f2bcbc
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02f2bcbc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_68 [4];
  undefined1 auStack_64 [4];
  
  plVar16 = *(long **)(param_1 + 0x128);
  uVar4 = *(undefined4 *)(param_1 + 0x198);
  plVar15 = (long *)plVar16[3];
  lVar13 = plVar15[0x5f];
  if (((int)lVar13 != -1) && (*(undefined4 *)(param_1 + 0x140) = 2, (int)lVar13 == 0)) {
    return 0;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar4;
  *(short *)(param_2 + 2) = (short)_DAT_042ab268;
  local_78 = (undefined4)plVar15[0x42];
  fVar22 = *(float *)((long)plVar15 + 0x1ec) + *(float *)((long)plVar15 + 0x8c);
  if (fVar22 == *(float *)(param_1 + 0x19c)) {
    uVar20 = (undefined2)*(undefined4 *)(param_1 + 0x1a0);
  }
  else {
    pfVar14 = (float *)plVar16[2];
    if (pfVar14 == (float *)0x0) {
      fVar24 = 1.0;
    }
    else {
      fVar24 = pfVar14[1];
      if ((*(byte *)(plVar16[3] + 0x106) >> 5 & 1) != 0) {
        fVar24 = *pfVar14 * fVar24;
      }
    }
    if (fVar22 * 0.05 < -37.0) {
      fVar23 = 0.0;
    }
    else {
      uVar12 = (uint)(fVar22 * 1393317.6 + 1.0653532e+09);
      fVar23 = (float)(uVar12 & 0x7fffff | 0x3f800000);
      fVar23 = (fVar23 * (fVar23 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar12 & 0xff800000);
    }
    uVar20 = SUB42(fVar23 * fVar24,0);
    *(float *)(param_1 + 0x1a0) = fVar23 * fVar24;
    *(float *)(param_1 + 0x19c) = fVar22;
  }
  plVar1 = plVar15 + 3;
  if ((*(byte *)(plVar15 + 1) >> 4 & 1) == 0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11 = &local_78;
  }
  uStack_74 = uVar4;
  FUN_02f259a4(uVar20,param_1,plVar1,uVar4,*(uint *)(plVar16[3] + 0x2a3) >> 0x1b & 1,auStack_64,
               local_68,puVar11);
  fVar24 = 0.0;
  fVar22 = (float)NEON_fminnm((int)plVar15[0x10],0x42c80000);
  uVar20 = SUB42(fVar22,0);
  uVar21 = (undefined2)((uint)fVar22 >> 0x10);
  if (fVar22 <= 0.0) {
    uVar20 = 0;
    uVar21 = 0;
  }
  if ((float)CONCAT22(uVar21,uVar20) != *(float *)(param_1 + 0xcc)) {
    *(undefined1 *)(param_1 + 0xd3) = 1;
    fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xd0));
    fVar22 = (float)NEON_ucvtf((uint)DAT_042ab26c);
    *(float *)(param_1 + 200) =
         ((*(float *)(param_1 + 0xcc) - *(float *)(param_1 + 200)) * fVar23) / fVar22 +
         *(float *)(param_1 + 200);
    *(uint *)(param_1 + 0xcc) = CONCAT22(uVar21,uVar20);
  }
  fVar22 = (float)NEON_fminnm(*(undefined4 *)((long)plVar15 + 0x84),0x42c80000);
  uVar20 = SUB42(fVar22,0);
  uVar21 = (undefined2)((uint)fVar22 >> 0x10);
  if (fVar22 <= 0.0) {
    uVar20 = 0;
    uVar21 = 0;
  }
  if ((float)CONCAT22(uVar21,uVar20) != *(float *)(param_1 + 0xdc)) {
    *(undefined1 *)(param_1 + 0xe3) = 1;
    fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xe0));
    fVar22 = (float)NEON_ucvtf((uint)DAT_042ab26c);
    *(float *)(param_1 + 0xd8) =
         ((*(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd8)) * fVar23) / fVar22 +
         *(float *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xdc) = CONCAT22(uVar21,uVar20);
  }
  plVar2 = (long *)(param_1 + 0x68);
  fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 2));
  fVar22 = *(float *)((long)plVar15 + 0x24c) * fVar22;
  fVar23 = 0.5;
  if (fVar22 <= 0.0) {
    fVar23 = -0.5;
  }
  iVar17 = (int)(fVar23 + fVar22);
  if (local_68[0] == '\0') {
    if (*(int *)(param_1 + 0x15c) == 2) {
      if (((*(byte *)(param_1 + 0x50) & 1) != 0) &&
         ((**(code **)(*(long *)(param_1 + 0x68) + 0x28))(plVar2,*(undefined4 *)(param_1 + 0x158)),
         *(int *)(param_1 + 0x158) != 2)) {
        (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(plVar2);
        uVar10 = DAT_0440a170;
        uVar12 = *(uint *)(param_1 + 0x150);
        if (uVar12 == 0) {
          uVar18 = 0;
        }
        else {
          lVar13 = *(long *)(param_1 + 0x148);
          uVar19 = (ulong)uVar12;
          do {
            FUN_02edd3b8(uVar10,*(undefined8 *)(lVar13 + 0x18),lVar13);
            uVar19 = uVar19 - 1;
            lVar13 = lVar13 + 0x20;
          } while (uVar19 != 0);
          uVar18 = *(int *)(param_1 + 0x150) - uVar12;
          if (uVar18 != 0) {
            memmove(*(void **)(param_1 + 0x148),
                    (void *)((long)*(void **)(param_1 + 0x148) + (ulong)uVar12 * 0x20),
                    (ulong)uVar18 << 5);
          }
        }
        *(uint *)(param_1 + 0x150) = uVar18;
      }
      if ((*(int *)(param_1 + 0x158) == 1) && ((int)plVar15[0x58] < iVar17)) {
        local_80 = iVar17;
        uVar8 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_80);
        bVar6 = false;
        bVar7 = 0;
        *(undefined4 *)((long)param_2 + 0x2c) = uVar8;
        bVar5 = *(byte *)(param_1 + 0x160);
      }
      else {
        bVar6 = false;
        bVar7 = 0;
        bVar5 = *(byte *)(param_1 + 0x160);
      }
    }
    else {
      if (*(int *)(param_1 + 0x15c) != 1) {
        bVar6 = false;
        goto LAB_02f2bdfc;
      }
      if (*(long *)(param_1 + 0x128) != 0) {
        lVar13 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
        *(byte *)(lVar13 + 0x2a2) = *(byte *)(lVar13 + 0x2a2) & 0x87;
      }
      bVar6 = false;
      bVar7 = 0;
      *(undefined4 *)(param_1 + 0x140) = 2;
      bVar5 = *(byte *)(param_1 + 0x160);
    }
  }
  else {
    if ((((*(byte *)(param_1 + 0x50) & 1) == 0) || ((*(byte *)(plVar16 + 4) & 1) == 0)) &&
       (*(int *)(param_1 + 0x15c) == 2)) {
      if ((*(byte *)(plVar16 + 4) & 1) == 0) {
        iVar9 = (**(code **)(*plVar16 + 0x70))(plVar16,plVar15[0x59],(int)plVar15[0x5a]);
        if (iVar9 != 1) {
          if (iVar9 != 0x3f) {
            if (*(long *)(param_1 + 0x128) != 0) {
              lVar13 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
              *(byte *)(lVar13 + 0x2a2) = *(byte *)(lVar13 + 0x2a2) & 0x87;
            }
            *(undefined4 *)(param_1 + 0x140) = 2;
          }
          bVar6 = false;
          bVar7 = 0;
          local_68[0] = '\0';
          bVar5 = *(byte *)(param_1 + 0x160);
          goto joined_r0x02f2c154;
        }
        *(byte *)(plVar16 + 4) = *(byte *)(plVar16 + 4) | 1;
      }
      else {
        iVar9 = (**(code **)(*plVar15 + 0x80))(plVar15,*(undefined4 *)(param_1 + 0x158));
        if (iVar9 == 1) {
          uVar10 = 1;
        }
        else {
          if (iVar9 == 2) goto LAB_02f2c120;
          uVar10 = 0;
        }
        iVar9 = (**(code **)(*(long *)(param_1 + 0x68) + 0x30))
                          (plVar2,*(undefined4 *)(param_1 + 0x158),uVar10);
        if (iVar9 != 1) {
LAB_02f2c120:
          if (*(long *)(param_1 + 0x128) != 0) {
            lVar13 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
            *(byte *)(lVar13 + 0x2a2) = *(byte *)(lVar13 + 0x2a2) & 0x87;
          }
          *(undefined4 *)(param_1 + 0x140) = 2;
          return 0;
        }
      }
    }
    bVar6 = true;
LAB_02f2bdfc:
    bVar7 = 1;
    bVar5 = *(byte *)(param_1 + 0x160);
  }
joined_r0x02f2c154:
  if ((bVar5 & 1) != 0) {
    iVar9 = (**(code **)(*plVar15 + 0x80))(plVar15,*(undefined4 *)(param_1 + 0x158));
    if (iVar9 == 1) {
      FUN_02f2c478(param_1);
      FUN_02f25ff4(param_1,1);
    }
    else if (iVar9 == 2) {
      if (*(long *)(param_1 + 0x128) != 0) {
        lVar13 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
        *(byte *)(lVar13 + 0x2a2) = *(byte *)(lVar13 + 0x2a2) & 0x87;
      }
      bVar7 = 0;
      *(undefined4 *)(param_1 + 0x140) = 2;
    }
    *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) & 0xfe;
  }
  iVar9 = (int)plVar15[0x58];
  if (-1 < iVar9) {
    *(int *)(plVar15 + 0x58) = iVar9 - iVar17;
  }
  if (*(int *)(param_1 + 0x15c) != 0) {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      if (bVar6) {
        FUN_02ecdc84(plVar15,1);
      }
    }
    else if (!bVar6) {
      FUN_02ecefd4(plVar15);
    }
  }
  *(bool *)(param_1 + 0x50) = bVar6;
  if ((bool)(bVar7 & iVar9 < iVar17)) {
    if ((*(byte *)(param_1 + 0x160) >> 1 & 1) == 0) {
      iVar17 = FUN_02f2c538(param_1);
      if (iVar17 != 1) {
        if (*(long *)(param_1 + 0x128) != 0) {
          lVar13 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
          *(byte *)(lVar13 + 0x2a2) = *(byte *)(lVar13 + 0x2a2) & 0x87;
        }
        uVar10 = 0;
        *(undefined4 *)(param_1 + 0x140) = 2;
        goto LAB_02f2beec;
      }
      if ((*(ushort *)(plVar15 + 0x33) & 1) == 0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,0);
      }
      else if ((*(ushort *)(plVar15 + 0x33) >> 4 & 1) != 0) {
        (**(code **)(*plVar1 + 0x58))(plVar1);
      }
      *(undefined4 *)(plVar15 + 0x25) = 0x42ca0000;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x198);
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfd;
      FUN_02f25350(param_1);
      fVar22 = *(float *)((long)plVar15 + 0x1ec) + *(float *)((long)plVar15 + 0x8c);
      if (fVar22 == *(float *)(param_1 + 0x19c)) {
        uVar20 = (undefined2)*(undefined4 *)(param_1 + 0x1a0);
      }
      else {
        pfVar14 = (float *)plVar16[2];
        if (pfVar14 == (float *)0x0) {
          fVar23 = 1.0;
        }
        else {
          fVar23 = pfVar14[1];
          if ((*(byte *)(plVar16[3] + 0x106) >> 5 & 1) != 0) {
            fVar23 = *pfVar14 * fVar23;
          }
        }
        if (-37.0 <= fVar22 * 0.05) {
          uVar12 = (uint)(fVar22 * 1393317.6 + 1.0653532e+09);
          fVar24 = (float)(uVar12 & 0x7fffff | 0x3f800000);
          fVar24 = (fVar24 * (fVar24 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar12 & 0xff800000);
        }
        uVar20 = SUB42(fVar24 * fVar23,0);
        *(float *)(param_1 + 0x1a0) = fVar24 * fVar23;
        *(float *)(param_1 + 0x19c) = fVar22;
      }
      local_80 = (int)plVar15[0x42];
      piVar3 = (int *)0x0;
      if ((*(uint *)(plVar15 + 1) & 0x10) != 0) {
        piVar3 = &local_80;
      }
      uStack_7c = uVar4;
      FUN_02f259a4(uVar20,param_1,plVar1,*(undefined4 *)(param_1 + 0x198),
                   *(uint *)(plVar16[3] + 0x2a3) >> 0x1b & 1,auStack_64,local_68,piVar3);
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_02f2beec:
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  return uVar10;
}


