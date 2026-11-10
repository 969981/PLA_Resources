/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed01a0; name: FUN_02ed01a0
 */


undefined8
FUN_02ed01a0(ulong param_1,long param_2,undefined8 param_3,long *param_4,float *param_5,long param_6
            ,uint param_7,long *param_8)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  ushort uVar16;
  long lVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  long local_90;
  ulong local_88;
  ulong local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x8e);
  if ((*(ushort *)(param_2 + 0x8e) >> 9 & 1) == 0) {
    lVar17 = *param_4;
    if (((*(uint *)(param_1 + 0xa0) & 0x1f000) == 0) && (*(long *)(param_1 + 0x80) != 0)) {
      uVar8 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar16 = 0;
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar7 != 0) goto LAB_02ed04b0;
LAB_02ed04b8:
        uVar14 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))((long *)(param_1 + 0x18),0x21);
        if ((uVar14 & 1) != 0) goto LAB_02ed095c;
        plVar9 = *(long **)(param_1 + 0x60);
        if (plVar9 == (long *)0x0) {
LAB_02ed04d8:
          lVar17 = *(long *)(param_1 + 0x58);
          if (lVar17 != 0) goto LAB_02ed0b50;
        }
        else {
          plVar6 = (long *)*plVar9;
          uVar3 = *(uint *)(plVar9 + 1);
          if ((uVar3 == 0) || (*plVar6 == lVar17)) {
            plVar9 = plVar6;
          }
          else {
            lVar7 = (ulong)uVar3 * 0x10;
            plVar15 = plVar6;
            do {
              lVar7 = lVar7 + -0x10;
              if (lVar7 == 0) goto LAB_02ed04d8;
              plVar9 = plVar15 + 2;
              plVar1 = plVar15 + 2;
              plVar15 = plVar9;
            } while (*plVar1 != lVar17);
          }
          if (plVar9 == plVar6 + (ulong)uVar3 * 2) goto LAB_02ed04d8;
          lVar17 = plVar9[1];
LAB_02ed0b50:
          uVar16 = *(byte *)(lVar17 + 0x20) >> 4 & 1;
        }
      }
      else {
        uVar16 = *(byte *)(*(long *)(param_1 + 0x68) + 0x24) >> 4 & 1;
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar7 == 0) goto LAB_02ed04b8;
LAB_02ed04b0:
        if ((*(byte *)(lVar7 + 4) >> 1 & 1) == 0) goto LAB_02ed04b8;
LAB_02ed095c:
        local_80 = local_80 & 0xffffffff00000000;
        local_88 = local_88 & 0xffffffff00000000;
        local_78 = 0xff;
        local_70 = 0xff;
        local_68 = 0;
        local_90 = lVar17;
        fVar18 = (float)FUN_02ed2e94(param_1,0x21,&local_90);
        uVar16 = (ushort)(int)fVar18;
      }
      uVar3 = (uint)*(ushort *)(param_2 + 0x8e);
      uVar8 = 0x200;
      *(ushort *)(param_2 + 0x8c) = uVar16;
    }
    uVar3 = uVar3 & 0xfffffdff | uVar8;
    *(short *)(param_2 + 0x8e) = (short)uVar3;
  }
  if (((uVar3 >> 6 & 1) == 0) &&
     (((*(byte *)(param_1 + 0xc1) >> 4 & 1) != 0 || (*(long *)(param_1 + 0x80) == 0)))) {
    uVar8 = uVar3 & 0xffffff9f | *(byte *)(param_1 + 0xc1) & 0x20 | 0x40;
    *(short *)(param_2 + 0x8e) = (short)uVar8;
    if ((uVar3 & 0x80) != 0) goto LAB_02ed0230;
LAB_02ed0228:
    if (((*(uint *)(param_2 + 0x84) >> 1 & 1) == 0) ||
       (((*(byte *)(param_1 + 0xa2) >> 4 & 1) == 0 && (*(long *)(param_1 + 0x80) != 0))))
    goto LAB_02ed0230;
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffd;
    if ((*(long *)(param_1 + 0x38) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x38) + 4) >> 5 & 1) == 0)) {
      local_90 = CONCAT44(local_90._4_4_,0x41400000);
      pbVar11 = *(byte **)(param_1 + 0x98);
      pbVar10 = pbVar11;
      if (pbVar11 != (byte *)0x0) {
        uVar14 = 0;
        pbVar10 = pbVar11 + ((ulong)(*pbVar11 + 4) & 0x1fc);
        do {
          if (pbVar11[uVar14 + 1] == 0x21) goto LAB_02ed092c;
          uVar14 = uVar14 + 1;
          pbVar10 = pbVar10 + 4;
        } while (uVar14 < *pbVar11);
        pbVar10 = (byte *)0x0;
      }
LAB_02ed092c:
      if (pbVar10 == (byte *)0x0) {
        pbVar10 = (byte *)&local_90;
      }
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)pbVar10;
      uVar3 = uVar8;
    }
    else {
      uVar3 = *(uint *)(DAT_0440a160 + 0x20);
      uVar19 = 0;
      if (uVar3 != 0) {
        uVar8 = (int)(param_1 + 0x30) + 0x25;
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar8 / uVar3;
        }
        for (plVar9 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar8 - uVar2 * uVar3) * 8
                                ); plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
          if ((*plVar9 == param_1 + 0x30) && ((int)plVar9[1] == 0x25)) {
            if (*(int *)((long)plVar9 + 0x4c) == 3) {
              uVar19 = FUN_02eb1180(DAT_0440a160,plVar9,param_4);
            }
            else {
              uVar19 = FUN_02eb1334();
            }
            break;
          }
        }
      }
      uVar3 = (uint)*(ushort *)(param_2 + 0x8e);
      *(undefined4 *)(param_2 + 0x38) = uVar19;
    }
    uVar8 = uVar3 & 0xfffffe00 | uVar3 & 0x7f | (*(byte *)(param_1 + 0xc1) >> 6 & 1) << 8 | 0x80;
    *(short *)(param_2 + 0x8e) = (short)uVar8;
    if ((uVar3 & 4) == 0) goto LAB_02ed0234;
LAB_02ed024c:
    uVar3 = uVar8;
    if ((uVar8 >> 1 & 1) != 0) goto LAB_02ed0260;
LAB_02ed0250:
    if (((*(byte *)(param_1 + 0xa2) >> 5 & 1) == 0) && (*(long *)(param_1 + 0x80) != 0))
    goto LAB_02ed0260;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(ushort *)(param_2 + 0x8e) = (ushort)uVar3 | 2;
    uVar8 = *(uint *)(param_1 + 0xaa);
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x800000;
    uVar8 = uVar3 & 0xfffffffe | 2 | uVar8 >> 0x12 & 1;
    *(short *)(param_2 + 0x8e) = (short)uVar8;
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | 0x30;
    if ((uVar3 & 8) == 0) goto LAB_02ed0264;
LAB_02ed026c:
    uVar16 = (ushort)uVar8;
  }
  else {
    uVar8 = uVar3;
    if ((uVar3 >> 7 & 1) == 0) goto LAB_02ed0228;
LAB_02ed0230:
    if ((uVar8 >> 2 & 1) != 0) goto LAB_02ed024c;
LAB_02ed0234:
    if (((*(ushort *)(param_1 + 0xa2) & 0x83c0) == 0) && (*(long *)(param_1 + 0x80) != 0))
    goto LAB_02ed024c;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x3c) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined8 *)(param_2 + 0x54) = 0;
    if (*(long *)(param_1 + 0x90) == 0) {
      if ((*(uint *)(param_1 + 0xa0) & 0x83c00000) != 0) {
        *(undefined8 *)(param_2 + 0x74) = 0;
        *(undefined8 *)(param_2 + 0x6c) = 0;
      }
    }
    else {
      *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x780000;
      *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0xf0000000;
      *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | 0xf;
      *(undefined4 *)(param_2 + 0x6c) = **(undefined4 **)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 4);
      *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 8);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0xc);
    }
    uVar3 = uVar8 | 4;
    *(short *)(param_2 + 0x8e) = (short)uVar3;
    if ((uVar8 & 2) == 0) goto LAB_02ed0250;
LAB_02ed0260:
    uVar8 = uVar3;
    if ((uVar3 >> 3 & 1) != 0) goto LAB_02ed026c;
LAB_02ed0264:
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_02ed026c;
    if ((param_7 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x2c) = 0;
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    uVar16 = (ushort)uVar8 | 8;
    *(ushort *)(param_2 + 0x8e) = uVar16;
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 0x7000000;
  }
  if (((uVar8 >> 4 & 1) == 0) &&
     (((*(byte *)(param_1 + 0xa3) >> 6 & 1) != 0 || (*(long *)(param_1 + 0x80) == 0)))) {
    *(undefined4 *)(param_2 + 100) = 0;
    *(ushort *)(param_2 + 0x8e) = uVar16 | 0x10;
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0xa4);
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | 0x100;
  }
  FUN_02ed6688(param_1,param_2,param_4);
  if (*(long *)(param_1 + 0x58) == 0) {
    plVar9 = *(long **)(param_1 + 0x60);
  }
  else {
    FUN_02ed69d4(param_1,*(long *)(param_1 + 0x58),param_3,param_2);
    plVar9 = *(long **)(param_1 + 0x60);
  }
  if (plVar9 != (long *)0x0) {
    plVar6 = (long *)*plVar9;
    uVar3 = *(uint *)(plVar9 + 1);
    if ((uVar3 == 0) || (*plVar6 == *param_4)) {
      plVar9 = plVar6;
    }
    else {
      lVar17 = (ulong)uVar3 * 0x10;
      plVar15 = plVar6;
      do {
        lVar17 = lVar17 + -0x10;
        if (lVar17 == 0) goto LAB_02ed02a0;
        plVar9 = plVar15 + 2;
        plVar1 = plVar15 + 2;
        plVar15 = plVar9;
      } while (*plVar1 != *param_4);
    }
    if (plVar9 != plVar6 + (ulong)uVar3 * 2) {
      FUN_02ed69d4(param_1,plVar9[1],param_3,param_2);
    }
  }
LAB_02ed02a0:
  *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xf807ffff;
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffff;
  *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) & 0xfffffec0;
  if ((param_5 != (float *)0x0) && (pbVar10 = *(byte **)(param_1 + 0xb0), pbVar10 != (byte *)0x0)) {
    uVar12 = (ulong)*pbVar10;
    uVar14 = 0;
    pfVar13 = (float *)(pbVar10 + ((ulong)(*pbVar10 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar14 + 1] == 0) {
        fVar18 = *pfVar13;
        if (pfVar13[1] - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          fVar20 = (pfVar13[1] - fVar18) * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21)
          ;
          fVar18 = *pfVar13;
        }
        *param_5 = fVar20 + fVar18 + *param_5;
        pbVar10 = *(byte **)(param_1 + 0xb0);
        if (pbVar10 == (byte *)0x0) goto LAB_02ed02cc;
        uVar12 = (ulong)*pbVar10;
        break;
      }
      uVar14 = uVar14 + 1;
      pfVar13 = pfVar13 + 2;
    } while (uVar14 < uVar12);
    uVar14 = 0;
    pfVar13 = (float *)(pbVar10 + ((ulong)((int)uVar12 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar14 + 1] == 2) {
        fVar18 = *pfVar13;
        if (pfVar13[1] - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          fVar20 = (pfVar13[1] - fVar18) * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21)
          ;
          fVar18 = *pfVar13;
        }
        param_5[2] = fVar20 + fVar18 + param_5[2];
        pbVar10 = *(byte **)(param_1 + 0xb0);
        if (pbVar10 == (byte *)0x0) goto LAB_02ed02cc;
        uVar12 = (ulong)*pbVar10;
        break;
      }
      uVar14 = uVar14 + 1;
      pfVar13 = pfVar13 + 2;
    } while (uVar14 < uVar12);
    uVar14 = 0;
    pfVar13 = (float *)(pbVar10 + ((ulong)((int)uVar12 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar14 + 1] == 3) {
        fVar18 = *pfVar13;
        if (pfVar13[1] - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          fVar20 = (pfVar13[1] - fVar18) * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21)
          ;
          fVar18 = *pfVar13;
        }
        param_5[3] = fVar20 + fVar18 + param_5[3];
        pbVar10 = *(byte **)(param_1 + 0xb0);
        if (pbVar10 == (byte *)0x0) goto LAB_02ed02cc;
        uVar12 = (ulong)*pbVar10;
        break;
      }
      uVar14 = uVar14 + 1;
      pfVar13 = pfVar13 + 2;
    } while (uVar14 < uVar12);
    uVar14 = 0;
    pfVar13 = (float *)(pbVar10 + ((ulong)((int)uVar12 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar14 + 1] == 4) {
        fVar18 = *pfVar13;
        if (pfVar13[1] - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          fVar20 = (pfVar13[1] - fVar18) * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21)
          ;
          fVar18 = *pfVar13;
        }
        param_5[4] = fVar20 + fVar18 + param_5[4];
        pbVar10 = *(byte **)(param_1 + 0xb0);
        if (pbVar10 == (byte *)0x0) goto LAB_02ed02cc;
        uVar12 = (ulong)*pbVar10;
        break;
      }
      uVar14 = uVar14 + 1;
      pfVar13 = pfVar13 + 2;
    } while (uVar14 < uVar12);
    uVar14 = 0;
    pfVar13 = (float *)(pbVar10 + ((ulong)((int)uVar12 + 4) & 0x1fc));
    do {
      if (pbVar10[uVar14 + 1] == 6) {
        fVar18 = *pfVar13;
        if (pfVar13[1] - fVar18 == 0.0) {
          fVar20 = 0.0;
        }
        else {
          DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
          fVar20 = (pfVar13[1] - fVar18) * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21)
          ;
          fVar18 = *pfVar13;
        }
        param_5[1] = fVar20 + fVar18 + param_5[1];
        if (param_6 != 0) goto LAB_02ed02d0;
        goto LAB_02ed02e0;
      }
      uVar14 = uVar14 + 1;
      pfVar13 = pfVar13 + 2;
    } while (uVar14 < uVar12);
  }
LAB_02ed02cc:
  if (param_6 == 0) {
LAB_02ed02e0:
    if ((param_7 & 1) == 0) goto LAB_02ed02ec;
LAB_02ed02e4:
    plVar9 = *(long **)(param_1 + 0x88);
    if (plVar9 == (long *)0x0) goto LAB_02ed02ec;
    plVar6 = *(long **)(param_1 + 0x80);
    if ((plVar6 != (long *)0x0) && (plVar6 != param_8)) {
      (**(code **)(*plVar6 + 0x158))(plVar6,param_2,param_3,param_4,param_5,param_6,0,param_8);
      plVar9 = *(long **)(param_1 + 0x88);
    }
    pcVar4 = *(code **)(*plVar9 + 0x158);
    param_7 = 0;
  }
  else {
LAB_02ed02d0:
    if ((*(long *)(param_1 + 0x38) == 0) || (*(char *)(*(long *)(param_1 + 0x38) + 0x20) == '\0'))
    goto LAB_02ed02e0;
    local_90 = param_1 + 0x30;
    local_80 = 2;
    local_88 = param_1;
    FUN_02ec4fac(DAT_0440a180,&local_90,param_6);
    if ((param_7 & 1) != 0) goto LAB_02ed02e4;
LAB_02ed02ec:
    plVar9 = *(long **)(param_1 + 0x80);
    if ((plVar9 == (long *)0x0) || (plVar9 == param_8)) goto LAB_02ed0324;
    param_7 = param_7 & 1;
    pcVar4 = *(code **)(*plVar9 + 0x158);
  }
  (*pcVar4)(plVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_02ed0324:
  puVar5 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(puVar5 + 1);
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      FUN_02eb5de4(*puVar5,param_1,param_2,param_3,param_4,param_6);
      if (uVar3 != 1) {
        lVar17 = (ulong)uVar3 * 8 + -8;
        do {
          puVar5 = puVar5 + 1;
          FUN_02eb5de4(*puVar5,param_1,param_2,param_3,param_4,param_6);
          lVar17 = lVar17 + -8;
        } while (lVar17 != 0);
      }
    }
  }
  return 1;
}


