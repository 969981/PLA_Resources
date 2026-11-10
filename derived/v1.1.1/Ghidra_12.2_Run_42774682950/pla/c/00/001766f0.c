/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001766f0; name: FUN_001766f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001766f0(long param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  double *pdVar12;
  long *plVar13;
  double dVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  double dVar21;
  long *plVar22;
  uint uVar23;
  long *plVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  double *pdVar28;
  ulong uVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  double *pdVar35;
  long lVar36;
  long *plVar37;
  uint uVar38;
  ulong uVar39;
  double dVar40;
  double local_80;
  uint local_78;
  
  plVar37 = *(long **)(param_1 + 0x20);
  *(ushort *)((long)plVar37 + 0x42) = *(ushort *)((long)plVar37 + 0x42) | 8;
LAB_00176730:
  plVar30 = plVar37 + 5;
  lVar16 = *(long *)*plVar37;
  lVar17 = *(long *)(*(long *)(lVar16 + 0x18) + 0x30);
  plVar33 = plVar37 + 4;
  lVar32 = *plVar33;
switchD_001767c0_default:
  puVar18 = (uint *)*plVar30;
  *plVar30 = (long)(puVar18 + 1);
  uVar8 = *puVar18;
  if ((*(byte *)(param_1 + 200) & 0xc) != 0) {
    FUN_00159e30(param_1);
    lVar32 = *plVar33;
  }
  pdVar35 = (double *)(lVar32 + (ulong)(byte)(uVar8 >> 6) * 0x10);
  uVar39 = (ulong)(uVar8 >> 6) & 0xff;
  uVar38 = (uint)uVar39;
  switch(uVar8 & 0x3f) {
  case 0:
    pdVar28 = (double *)(lVar32 + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
    goto LAB_00176f38;
  case 1:
    uVar39 = (ulong)(uVar8 >> 10) & 0x3ffff0;
    goto LAB_00176d2c;
  case 2:
    puVar18 = (uint *)*plVar30;
    *plVar30 = (long)(puVar18 + 1);
    uVar39 = (ulong)(*puVar18 >> 2) & 0x3ffffff0;
LAB_00176d2c:
    pdVar28 = (double *)(lVar17 + uVar39);
    goto LAB_00176f38;
  case 3:
    *(uint *)pdVar35 = uVar8 >> 0x17;
    *(undefined4 *)(lVar32 + uVar39 * 0x10 + 8) = 1;
    if ((uVar8 & 0x7fc000) != 0) goto LAB_00176d04;
    goto switchD_001767c0_default;
  case 4:
    uVar8 = uVar8 >> 0x17;
    uVar38 = uVar8 + 1 & 7;
    uVar23 = uVar8;
    if (uVar38 != 0) {
      pdVar28 = pdVar35;
      do {
        pdVar35 = pdVar28 + 2;
        *(uint *)(pdVar28 + 1) = 0;
        uVar23 = uVar23 - 1;
        uVar38 = uVar38 - 1;
        pdVar28 = pdVar35;
      } while (uVar38 != 0);
    }
    if (6 < uVar8) {
      iVar11 = uVar23 + 1;
      pdVar35 = pdVar35 + 9;
      do {
        *(uint *)(pdVar35 + -8) = 0;
        iVar11 = iVar11 + -8;
        *(uint *)(pdVar35 + -6) = 0;
        *(uint *)(pdVar35 + -4) = 0;
        *(uint *)(pdVar35 + -2) = 0;
        *(uint *)pdVar35 = 0;
        *(uint *)(pdVar35 + 2) = 0;
        *(uint *)(pdVar35 + 4) = 0;
        *(uint *)(pdVar35 + 6) = 0;
        pdVar35 = pdVar35 + 0x10;
      } while (iVar11 != 0);
    }
    goto switchD_001767c0_default;
  case 5:
    pdVar28 = (double *)**(undefined8 **)(lVar16 + ((ulong)(uVar8 >> 0x14) & 0xff8) + 0x20);
LAB_00176f38:
    dVar14 = pdVar28[1];
    *pdVar35 = *pdVar28;
    pdVar35[1] = dVar14;
    goto switchD_001767c0_default;
  case 6:
    pdVar28 = (double *)**(undefined8 **)(lVar16 + ((ulong)(uVar8 >> 0x14) & 0xff8) + 0x20);
    goto LAB_00176fb4;
  case 7:
    pdVar28 = (double *)(lVar32 + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
LAB_00176fb4:
    puVar31 = (undefined8 *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      puVar31 = (undefined8 *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    if (*(int *)(pdVar28 + 1) == 0x45) {
      pdVar12 = (double *)FUN_00172500(*pdVar28,puVar31);
      iVar11 = *(int *)(pdVar12 + 1);
joined_r0x00176b7c:
      if (iVar11 != 0) {
        dVar14 = pdVar12[1];
        *pdVar35 = *pdVar12;
        pdVar35[1] = dVar14;
        goto switchD_001767c0_default;
      }
    }
    else {
LAB_00177000:
      pdVar12 = (double *)0x0;
    }
    FUN_001754a0(param_1,pdVar28,puVar31,pdVar35,pdVar12);
    lVar32 = *plVar33;
    goto switchD_001767c0_default;
  case 8:
    pdVar35 = (double *)**(undefined8 **)(lVar16 + uVar39 * 8 + 0x20);
    lVar20 = lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10;
    if (-1 < (int)uVar8) {
      lVar20 = lVar32 + (ulong)(uVar8 >> 0x17) * 0x10;
    }
    plVar34 = (long *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      plVar34 = (long *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    if (*(uint *)(pdVar35 + 1) != 0x45) {
      plVar13 = (long *)0x0;
      goto LAB_00177868;
    }
    plVar13 = (long *)FUN_00172500(*pdVar35,lVar20);
    if ((int)plVar13[1] != 0) {
      if ((((*(byte *)(plVar34 + 1) >> 6 & 1) != 0) &&
          ((*(byte *)((long)*pdVar35 + 9) >> 2 & 1) != 0)) && ((*(byte *)(*plVar34 + 9) & 3) != 0))
      {
        FUN_0015cbe0(param_1);
      }
      lVar20 = *plVar34;
      lVar36 = plVar34[1];
LAB_001771f4:
      *plVar13 = lVar20;
      plVar13[1] = lVar36;
      goto switchD_001767c0_default;
    }
    goto LAB_00177868;
  case 9:
    dVar14 = pdVar35[1];
    puVar31 = *(undefined8 **)(lVar16 + ((ulong)(uVar8 >> 0x14) & 0xff8) + 0x20);
    pdVar28 = (double *)*puVar31;
    *pdVar28 = *pdVar35;
    pdVar28[1] = dVar14;
    if (((*(byte *)((undefined8 *)*puVar31 + 1) >> 6 & 1) != 0) &&
       ((undefined8 *)*puVar31 == puVar31 + 2)) {
      FUN_0015cc00(param_1);
    }
    goto switchD_001767c0_default;
  case 10:
    lVar20 = lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10;
    if (-1 < (int)uVar8) {
      lVar20 = lVar32 + (ulong)(uVar8 >> 0x17) * 0x10;
    }
    plVar34 = (long *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      plVar34 = (long *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    if (*(int *)(lVar32 + uVar39 * 0x10 + 8) == 0x45) {
      plVar13 = (long *)FUN_00172500(*pdVar35,lVar20);
      if ((int)plVar13[1] != 0) {
        if ((((*(byte *)(plVar34 + 1) >> 6 & 1) != 0) &&
            ((*(byte *)((long)*pdVar35 + 9) >> 2 & 1) != 0)) && ((*(byte *)(*plVar34 + 9) & 3) != 0)
           ) {
          FUN_0015cbe0(param_1);
        }
        lVar20 = *plVar34;
        lVar36 = plVar34[1];
        goto LAB_001771f4;
      }
    }
    else {
      plVar13 = (long *)0x0;
    }
LAB_00177868:
    FUN_001755e0(param_1,pdVar35,lVar20,plVar34,plVar13);
    lVar32 = *plVar33;
    goto switchD_001767c0_default;
  case 0xb:
    uVar38 = uVar8 >> 0xe & 0x1ff;
    dVar14 = (double)FUN_00171cf0(param_1);
    *pdVar35 = dVar14;
    *(undefined4 *)(lVar32 + uVar39 * 0x10 + 8) = 0x45;
    if (uVar38 != 0 || uVar8 >> 0x17 != 0) {
      uVar9 = FUN_00162300(uVar8 >> 0x17);
      uVar10 = FUN_00162300(uVar38);
      FUN_00171860(param_1,dVar14,uVar9,uVar10);
    }
    lVar20 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    goto joined_r0x00177a50;
  case 0xc:
    pdVar28 = (double *)(lVar32 + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
    puVar31 = (undefined8 *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      puVar31 = (undefined8 *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    dVar14 = pdVar28[1];
    uVar15 = *puVar31;
    pdVar35[2] = *pdVar28;
    pdVar35[3] = dVar14;
    if (*(int *)(pdVar28 + 1) == 0x45) {
      pdVar12 = (double *)FUN_00172420(*pdVar28,uVar15);
      iVar11 = *(int *)(pdVar12 + 1);
      goto joined_r0x00176b7c;
    }
    goto LAB_00177000;
  case 0xd:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 != 3) {
      if (uVar8 == 0x13) {
        if (*(int *)(pdVar12 + 1) == 0x13) {
          dVar14 = (double)((long)*pdVar12 + (long)*pdVar28);
          goto LAB_001774ac;
        }
        dVar14 = (double)(long)*pdVar28;
        uVar8 = *(uint *)(pdVar12 + 1);
        goto joined_r0x00178798;
      }
      if ((uVar8 & 0xf) == 4) {
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(long *)((long)dVar14 + 0x10);
        }
        if (lVar20 == uVar27 + 1) {
          dVar14 = (double)(long)local_80;
          if (local_78 != 0x13) {
            dVar14 = local_80;
          }
          uVar8 = *(uint *)(pdVar12 + 1);
          goto joined_r0x00178798;
        }
      }
      goto LAB_00178e2c;
    }
    dVar14 = *pdVar28;
    uVar8 = *(uint *)(pdVar12 + 1);
joined_r0x00178798:
    if (uVar8 == 3) {
      dVar21 = *pdVar12;
    }
    else {
      if (uVar8 != 0x13) {
        if ((uVar8 & 0xf) == 4) {
          lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
          dVar21 = *pdVar12;
          if (*(char *)((long)dVar21 + 8) == '\x04') {
            uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
          }
          else {
            uVar27 = *(ulong *)((long)dVar21 + 0x10);
          }
          if (lVar20 == uVar27 + 1) {
            dVar21 = (double)(long)local_80;
            if (local_78 != 0x13) {
              dVar21 = local_80;
            }
            goto LAB_001780cc;
          }
        }
LAB_00178e2c:
        uVar15 = 6;
        goto LAB_00178d5c;
      }
      dVar21 = (double)(long)*pdVar12;
    }
LAB_001780cc:
    dVar14 = dVar14 + dVar21;
    break;
  case 0xe:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 != 3) {
      if (uVar8 == 0x13) {
        if (*(int *)(pdVar12 + 1) == 0x13) {
          dVar14 = (double)((long)*pdVar28 - (long)*pdVar12);
          goto LAB_001774ac;
        }
        dVar14 = (double)(long)*pdVar28;
        uVar8 = *(uint *)(pdVar12 + 1);
        goto joined_r0x001786d8;
      }
      if ((uVar8 & 0xf) == 4) {
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(long *)((long)dVar14 + 0x10);
        }
        if (lVar20 == uVar27 + 1) {
          dVar14 = (double)(long)local_80;
          if (local_78 != 0x13) {
            dVar14 = local_80;
          }
          uVar8 = *(uint *)(pdVar12 + 1);
          goto joined_r0x001786d8;
        }
      }
      goto LAB_00178d9c;
    }
    dVar14 = *pdVar28;
    uVar8 = *(uint *)(pdVar12 + 1);
joined_r0x001786d8:
    if (uVar8 == 3) {
      dVar21 = *pdVar12;
    }
    else {
      if (uVar8 != 0x13) {
        if ((uVar8 & 0xf) == 4) {
          lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
          dVar21 = *pdVar12;
          if (*(char *)((long)dVar21 + 8) == '\x04') {
            uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
          }
          else {
            uVar27 = *(ulong *)((long)dVar21 + 0x10);
          }
          if (lVar20 == uVar27 + 1) {
            dVar21 = (double)(long)local_80;
            if (local_78 != 0x13) {
              dVar21 = local_80;
            }
            goto LAB_00178d90;
          }
        }
LAB_00178d9c:
        uVar15 = 7;
        goto LAB_00178d5c;
      }
      dVar21 = (double)(long)*pdVar12;
    }
LAB_00178d90:
    dVar14 = dVar14 - dVar21;
    break;
  case 0xf:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 != 3) {
      if (uVar8 == 0x13) {
        if (*(int *)(pdVar12 + 1) == 0x13) {
          dVar14 = (double)((long)*pdVar12 * (long)*pdVar28);
          goto LAB_001774ac;
        }
        dVar14 = (double)(long)*pdVar28;
        uVar8 = *(uint *)(pdVar12 + 1);
        goto joined_r0x0017873c;
      }
      if ((uVar8 & 0xf) == 4) {
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(long *)((long)dVar14 + 0x10);
        }
        if (lVar20 == uVar27 + 1) {
          dVar14 = (double)(long)local_80;
          if (local_78 != 0x13) {
            dVar14 = local_80;
          }
          uVar8 = *(uint *)(pdVar12 + 1);
          goto joined_r0x0017873c;
        }
      }
      goto LAB_00178de8;
    }
    dVar14 = *pdVar28;
    uVar8 = *(uint *)(pdVar12 + 1);
joined_r0x0017873c:
    if (uVar8 == 3) {
      dVar21 = *pdVar12;
    }
    else {
      if (uVar8 != 0x13) {
        if ((uVar8 & 0xf) == 4) {
          lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
          dVar21 = *pdVar12;
          if (*(char *)((long)dVar21 + 8) == '\x04') {
            uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
          }
          else {
            uVar27 = *(ulong *)((long)dVar21 + 0x10);
          }
          if (lVar20 == uVar27 + 1) {
            dVar21 = (double)(long)local_80;
            if (local_78 != 0x13) {
              dVar21 = local_80;
            }
            goto LAB_00178ddc;
          }
        }
LAB_00178de8:
        uVar15 = 8;
        goto LAB_00178d5c;
      }
      dVar21 = (double)(long)*pdVar12;
    }
LAB_00178ddc:
    dVar14 = dVar14 * dVar21;
    break;
  case 0x10:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 != 3) {
      if (uVar8 == 0x13) {
        if (*(int *)(pdVar12 + 1) == 0x13) {
          dVar14 = *pdVar12;
          if ((long)dVar14 + 1U < 2) {
            if (dVar14 == 0.0) {
                    /* WARNING: Subroutine does not return */
              FUN_001599d0(param_1,"attempt to perform \'n%%0\'");
            }
          }
          else {
            dVar21 = *pdVar28;
            lVar20 = 0;
            if (dVar14 != 0.0) {
              lVar20 = (long)dVar21 / (long)dVar14;
            }
            lVar20 = (long)dVar21 - lVar20 * (long)dVar14;
            if (lVar20 != 0) {
              dVar14 = (double)(lVar20 + ((ulong)dVar14 &
                                         (long)((ulong)dVar14 ^ (ulong)dVar21) >> 0x3f));
              goto LAB_001774ac;
            }
          }
          dVar14 = 0.0;
          goto LAB_001774ac;
        }
        dVar14 = (double)(long)*pdVar28;
        uVar8 = *(uint *)(pdVar12 + 1);
        goto joined_r0x001786a0;
      }
      if ((uVar8 & 0xf) == 4) {
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(long *)((long)dVar14 + 0x10);
        }
        if (lVar20 == uVar27 + 1) {
          dVar14 = (double)(long)local_80;
          if (local_78 != 0x13) {
            dVar14 = local_80;
          }
          uVar8 = *(uint *)(pdVar12 + 1);
          goto joined_r0x001786a0;
        }
      }
      goto LAB_00178d48;
    }
    dVar14 = *pdVar28;
    uVar8 = *(uint *)(pdVar12 + 1);
joined_r0x001786a0:
    if (uVar8 == 3) {
      dVar21 = *pdVar12;
    }
    else {
      if (uVar8 != 0x13) {
        if ((uVar8 & 0xf) == 4) {
          lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
          dVar21 = *pdVar12;
          if (*(char *)((long)dVar21 + 8) == '\x04') {
            uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
          }
          else {
            uVar27 = *(ulong *)((long)dVar21 + 0x10);
          }
          if (lVar20 == uVar27 + 1) {
            dVar21 = (double)(long)local_80;
            if (local_78 != 0x13) {
              dVar21 = local_80;
            }
            goto LAB_00178028;
          }
        }
LAB_00178d48:
        uVar15 = 9;
        goto LAB_00178d5c;
      }
      dVar21 = (double)(long)*pdVar12;
    }
LAB_00178028:
    dVar40 = fmod(dVar14,dVar21);
    dVar14 = dVar40 + dVar21;
    if (0.0 <= dVar40 * dVar21) {
      dVar14 = dVar40;
    }
    break;
  case 0x11:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 != 3) {
      if (uVar8 == 0x13) {
        dVar14 = (double)(long)*pdVar28;
        uVar8 = *(uint *)(pdVar12 + 1);
        goto joined_r0x00178808;
      }
      if ((uVar8 & 0xf) == 4) {
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 == uVar27 + 1) {
          dVar14 = (double)(long)local_80;
          if (local_78 != 0x13) {
            dVar14 = local_80;
          }
          uVar8 = *(uint *)(pdVar12 + 1);
          goto joined_r0x00178808;
        }
      }
      goto LAB_00178a10;
    }
    dVar14 = *pdVar28;
    uVar8 = *(uint *)(pdVar12 + 1);
joined_r0x00178808:
    if (uVar8 == 3) {
      dVar21 = *pdVar12;
    }
    else {
      if (uVar8 != 0x13) {
        if ((uVar8 & 0xf) == 4) {
          lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
          dVar21 = *pdVar12;
          if (*(char *)((long)dVar21 + 8) == '\x04') {
            uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
          }
          else {
            uVar27 = *(ulong *)((long)dVar21 + 0x10);
          }
          if (lVar20 == uVar27 + 1) {
            dVar21 = (double)(long)local_80;
            if (local_78 != 0x13) {
              dVar21 = local_80;
            }
            goto LAB_00176758;
          }
        }
LAB_00178a10:
        uVar15 = 10;
        goto LAB_00178d5c;
      }
      dVar21 = (double)(long)*pdVar12;
    }
LAB_00176758:
    dVar14 = pow(dVar14,dVar21);
    break;
  case 0x12:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 != 3) {
      if (uVar8 == 0x13) {
        dVar14 = (double)(long)*pdVar28;
        uVar8 = *(uint *)(pdVar12 + 1);
        goto joined_r0x00178840;
      }
      if ((uVar8 & 0xf) == 4) {
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(long *)((long)dVar14 + 0x10);
        }
        if (lVar20 == uVar27 + 1) {
          dVar14 = (double)(long)local_80;
          if (local_78 != 0x13) {
            dVar14 = local_80;
          }
          uVar8 = *(uint *)(pdVar12 + 1);
          goto joined_r0x00178840;
        }
      }
      goto LAB_00178a44;
    }
    dVar14 = *pdVar28;
    uVar8 = *(uint *)(pdVar12 + 1);
joined_r0x00178840:
    if (uVar8 == 3) {
      dVar21 = *pdVar12;
    }
    else {
      if (uVar8 != 0x13) {
        if ((uVar8 & 0xf) == 4) {
          lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
          dVar21 = *pdVar12;
          if (*(char *)((long)dVar21 + 8) == '\x04') {
            uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
          }
          else {
            uVar27 = *(ulong *)((long)dVar21 + 0x10);
          }
          if (lVar20 == uVar27 + 1) {
            dVar21 = (double)(long)local_80;
            if (local_78 != 0x13) {
              dVar21 = local_80;
            }
            goto LAB_001778ac;
          }
        }
LAB_00178a44:
        uVar15 = 0xb;
        goto LAB_00178d5c;
      }
      dVar21 = (double)(long)*pdVar12;
    }
LAB_001778ac:
    dVar14 = dVar14 / dVar21;
    break;
  case 0x13:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 == 3) {
      dVar14 = *pdVar28;
      uVar8 = *(uint *)(pdVar12 + 1);
joined_r0x001787d0:
      if (uVar8 == 3) {
        dVar21 = *pdVar12;
      }
      else {
        if (uVar8 != 0x13) {
          if ((uVar8 & 0xf) == 4) {
            lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
            dVar21 = *pdVar12;
            if (*(char *)((long)dVar21 + 8) == '\x04') {
              uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
            }
            else {
              uVar27 = *(ulong *)((long)dVar21 + 0x10);
            }
            if (lVar20 == uVar27 + 1) {
              dVar21 = (double)(long)local_80;
              if (local_78 != 0x13) {
                dVar21 = local_80;
              }
              goto LAB_00178e6c;
            }
          }
LAB_00178e7c:
          uVar15 = 0xc;
          goto LAB_00178d5c;
        }
        dVar21 = (double)(long)*pdVar12;
      }
LAB_00178e6c:
      dVar14 = (double)(long)(dVar14 / dVar21);
      break;
    }
    if (uVar8 != 0x13) {
      if ((uVar8 & 0xf) == 4) {
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 == uVar27 + 1) {
          dVar14 = (double)(long)local_80;
          if (local_78 != 0x13) {
            dVar14 = local_80;
          }
          uVar8 = *(uint *)(pdVar12 + 1);
          goto joined_r0x001787d0;
        }
      }
      goto LAB_00178e7c;
    }
    if (*(int *)(pdVar12 + 1) != 0x13) {
      dVar14 = (double)(long)*pdVar28;
      uVar8 = *(uint *)(pdVar12 + 1);
      goto joined_r0x001787d0;
    }
    dVar21 = *pdVar12;
    dVar14 = *pdVar28;
    if ((long)dVar21 + 1U < 2) {
      if (dVar21 == 0.0) {
                    /* WARNING: Subroutine does not return */
        FUN_001599d0(param_1,"attempt to divide by zero");
      }
      *pdVar35 = (double)-(long)dVar14;
    }
    else {
      dVar40 = 0.0;
      if (dVar21 != 0.0) {
        dVar40 = (double)((long)dVar14 / (long)dVar21);
      }
      if ((long)((ulong)dVar21 ^ (ulong)dVar14) < 0) {
        dVar40 = (double)((long)dVar40 - (ulong)(dVar14 != (double)((long)dVar40 * (long)dVar21)));
      }
      *pdVar35 = dVar40;
    }
    goto LAB_001774b0;
  case 0x14:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    pdVar3 = pdVar28;
    if (uVar8 == 0x13) {
      dVar14 = *pdVar28;
      uVar8 = *(uint *)(pdVar12 + 1);
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_001788b0;
          dVar14 = (double)(long)dVar14;
          goto LAB_00178308;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_001788b0;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar14 = *pdVar3;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_001788b0;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar14 = *pdVar3;
LAB_00178308:
      uVar8 = *(uint *)(pdVar12 + 1);
    }
    pdVar3 = pdVar12;
    if (uVar8 == 0x13) {
      dVar14 = (double)((ulong)*pdVar12 & (ulong)dVar14);
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar21 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar21) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar21)) {
              bVar6 = dVar21 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar21))) {
            bVar5 = dVar21 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_001788b0;
          dVar21 = (double)(long)dVar21;
          goto LAB_0017890c;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_001788b0;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar21 = *pdVar3;
        if (*(char *)((long)dVar21 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar21 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_001788b0;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar21 = *pdVar3;
LAB_0017890c:
      dVar14 = (double)((ulong)dVar21 & (ulong)dVar14);
    }
    goto LAB_001774ac;
  case 0x15:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    pdVar3 = pdVar28;
    if (uVar8 == 0x13) {
      dVar14 = *pdVar28;
      uVar8 = *(uint *)(pdVar12 + 1);
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_001788f0;
          dVar14 = (double)(long)dVar14;
          goto LAB_001783c8;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_001788f0;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar14 = *pdVar3;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_001788f0;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar14 = *pdVar3;
LAB_001783c8:
      uVar8 = *(uint *)(pdVar12 + 1);
    }
    pdVar3 = pdVar12;
    if (uVar8 == 0x13) {
      dVar14 = (double)((ulong)*pdVar12 | (ulong)dVar14);
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar21 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar21) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar21)) {
              bVar6 = dVar21 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar21))) {
            bVar5 = dVar21 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_001788f0;
          dVar21 = (double)(long)dVar21;
          goto LAB_00178920;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_001788f0;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar21 = *pdVar3;
        if (*(char *)((long)dVar21 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar21 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_001788f0;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar21 = *pdVar3;
LAB_00178920:
      dVar14 = (double)((ulong)dVar21 | (ulong)dVar14);
    }
    goto LAB_001774ac;
  case 0x16:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    pdVar3 = pdVar28;
    if (uVar8 == 0x13) {
      dVar14 = *pdVar28;
      uVar8 = *(uint *)(pdVar12 + 1);
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_0017896c;
          dVar14 = (double)(long)dVar14;
          goto LAB_00178488;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_0017896c;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar14 = *pdVar3;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_0017896c;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar14 = *pdVar3;
LAB_00178488:
      uVar8 = *(uint *)(pdVar12 + 1);
    }
    pdVar3 = pdVar12;
    if (uVar8 == 0x13) {
      dVar14 = (double)((ulong)*pdVar12 ^ (ulong)dVar14);
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar21 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar21) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar21)) {
              bVar6 = dVar21 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar21))) {
            bVar5 = dVar21 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_0017896c;
          dVar21 = (double)(long)dVar21;
          goto LAB_00178934;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_0017896c;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar21 = *pdVar3;
        if (*(char *)((long)dVar21 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar21 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar21 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_0017896c;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar21 = *pdVar3;
LAB_00178934:
      dVar14 = (double)((ulong)dVar21 ^ (ulong)dVar14);
    }
    goto LAB_001774ac;
  case 0x17:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    pdVar3 = pdVar28;
    pdVar4 = pdVar12;
    if (uVar8 == 0x13) {
      dVar21 = *pdVar28;
      uVar8 = *(uint *)(pdVar12 + 1);
      if (uVar8 != 0x13) goto joined_r0x00178564;
LAB_001773cc:
      dVar40 = *pdVar12;
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_001789ac;
          dVar21 = (double)(long)dVar14;
          goto LAB_00178548;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_001789ac;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar14 = *pdVar3;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_001789ac;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar21 = *pdVar3;
LAB_00178548:
      uVar8 = *(uint *)(pdVar12 + 1);
      if (uVar8 == 0x13) goto LAB_001773cc;
joined_r0x00178564:
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar4;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar4 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_001789ac;
          dVar40 = (double)(long)dVar14;
          goto LAB_001773d0;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_001789ac;
        lVar20 = FUN_00162710((long)*pdVar4 + 0x18,&local_80);
        dVar14 = *pdVar4;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_001789ac;
        pdVar4 = &local_80;
        uVar8 = local_78;
      }
      dVar40 = *pdVar4;
    }
LAB_001773d0:
    dVar14 = 0.0;
    if ((long)dVar40 < 0x40) {
      dVar14 = (double)((long)dVar21 << ((ulong)dVar40 & 0x3f));
    }
    dVar2 = 0.0;
    if (-0x40 < (long)dVar40) {
      dVar2 = (double)((ulong)dVar21 >> (-(long)dVar40 & 0x3fU));
    }
    if (((ulong)dVar40 & 0x8000000000000000) != 0) {
      dVar14 = dVar2;
    }
    goto LAB_001774ac;
  case 0x18:
    pdVar28 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10);
    if (-1 < (int)uVar8) {
      pdVar28 = (double *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10);
    }
    pdVar12 = (double *)(lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      pdVar12 = (double *)(lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10);
    }
    uVar8 = *(uint *)(pdVar28 + 1);
    pdVar3 = pdVar28;
    pdVar4 = pdVar12;
    if (uVar8 == 0x13) {
      dVar21 = *pdVar28;
      uVar8 = *(uint *)(pdVar12 + 1);
      if (uVar8 != 0x13) goto joined_r0x00178294;
LAB_00176c14:
      dVar40 = *pdVar12;
    }
    else {
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar3;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar3 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_00178880;
          dVar21 = (double)(long)dVar14;
          goto LAB_00178278;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_00178880;
        lVar20 = FUN_00162710((long)*pdVar3 + 0x18,&local_80);
        dVar14 = *pdVar3;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_00178880;
        pdVar3 = &local_80;
        uVar8 = local_78;
      }
      dVar21 = *pdVar3;
LAB_00178278:
      uVar8 = *(uint *)(pdVar12 + 1);
      if (uVar8 == 0x13) goto LAB_00176c14;
joined_r0x00178294:
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar4;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar4 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (!bVar5) goto LAB_00178880;
          dVar40 = (double)(long)dVar14;
          goto LAB_00176c18;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_00178880;
        lVar20 = FUN_00162710((long)*pdVar4 + 0x18,&local_80);
        dVar14 = *pdVar4;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_00178880;
        pdVar4 = &local_80;
        uVar8 = local_78;
      }
      dVar40 = *pdVar4;
    }
LAB_00176c18:
    dVar14 = 0.0;
    if (-0x40 < (long)dVar40) {
      dVar14 = (double)((long)dVar21 << (-(long)dVar40 & 0x3fU));
    }
    dVar2 = 0.0;
    if ((long)dVar40 < 0x40) {
      dVar2 = (double)((ulong)dVar21 >> ((ulong)dVar40 & 0x3f));
    }
    if (0 < (long)dVar40) {
      dVar14 = dVar2;
    }
    goto LAB_001774ac;
  case 0x19:
    pdVar28 = (double *)(lVar32 + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
    uVar8 = *(uint *)(pdVar28 + 1);
    if (uVar8 == 3) {
      dVar14 = *pdVar28;
LAB_00177d4c:
      dVar14 = -dVar14;
      break;
    }
    if (uVar8 == 0x13) {
      dVar14 = (double)-(long)*pdVar28;
      goto LAB_001774ac;
    }
    if ((uVar8 & 0xf) == 4) {
      lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
      dVar14 = *pdVar28;
      if (*(char *)((long)dVar14 + 8) == '\x04') {
        uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
      }
      else {
        uVar27 = *(ulong *)((long)dVar14 + 0x10);
      }
      if (lVar20 == uVar27 + 1) {
        dVar14 = (double)(long)local_80;
        if (local_78 != 0x13) {
          dVar14 = local_80;
        }
        goto LAB_00177d4c;
      }
    }
    uVar15 = 0x12;
LAB_00178630:
    pdVar12 = pdVar28;
LAB_00178d5c:
    FUN_00173ca0(param_1,pdVar28,pdVar12,pdVar35,uVar15);
    lVar32 = *plVar33;
    goto switchD_001767c0_default;
  case 0x1a:
    pdVar28 = (double *)(lVar32 + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
    if (*(int *)(pdVar28 + 1) == 0x13) {
      dVar14 = *pdVar28;
    }
    else {
      pdVar12 = pdVar28;
      uVar8 = *(uint *)(pdVar28 + 1);
      while (uVar8 != 0x13) {
        if (uVar8 == 3) {
          dVar14 = (double)(long)*pdVar12;
          bVar6 = true;
          bVar7 = false;
          if (*pdVar12 == dVar14) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(dVar14)) {
              bVar6 = dVar14 < -9.223372036854776e+18;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(dVar14))) {
            bVar5 = dVar14 < 9.223372036854776e+18;
          }
          if (bVar5) {
            dVar14 = (double)(long)dVar14;
            goto LAB_001774a8;
          }
LAB_0017862c:
          uVar15 = 0x13;
          goto LAB_00178630;
        }
        if ((uVar8 & 0xf) != 4) goto LAB_0017862c;
        lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
        dVar14 = *pdVar12;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar27 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar27 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar27 + 1) goto LAB_0017862c;
        pdVar12 = &local_80;
        uVar8 = local_78;
      }
      dVar14 = *pdVar12;
    }
LAB_001774a8:
    dVar14 = (double)~(ulong)dVar14;
LAB_001774ac:
    *pdVar35 = dVar14;
LAB_001774b0:
    *(undefined4 *)(lVar32 + uVar39 * 0x10 + 8) = 0x13;
    goto switchD_001767c0_default;
  case 0x1b:
    iVar11 = *(int *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10 + 8);
    if (iVar11 == 0) {
      uVar8 = 1;
    }
    else if (iVar11 == 1) {
      uVar8 = (uint)(*(int *)(lVar32 + (ulong)(uVar8 >> 0x17) * 0x10) == 0);
    }
    else {
      uVar8 = 0;
    }
    *(uint *)pdVar35 = uVar8;
    *(undefined4 *)(lVar32 + uVar39 * 0x10 + 8) = 1;
    goto switchD_001767c0_default;
  case 0x1c:
    FUN_00176390(param_1,pdVar35,lVar32 + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
    lVar32 = *plVar33;
    goto switchD_001767c0_default;
  case 0x1d:
    uVar27 = (ulong)(uVar8 >> 0xe) & 0x1ff;
    uVar8 = uVar8 >> 0x17;
    *(ulong *)(param_1 + 0x10) = lVar32 + uVar27 * 0x10 + 0x10;
    FUN_00176070(param_1,((int)uVar27 - uVar8) + 1);
    lVar32 = *plVar33;
    puVar31 = (undefined8 *)(lVar32 + (ulong)uVar8 * 0x10);
    puVar1 = (undefined8 *)(lVar32 + uVar39 * 0x10);
    uVar15 = puVar31[1];
    *puVar1 = *puVar31;
    puVar1[1] = uVar15;
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      if (uVar8 <= uVar38) {
        puVar31 = puVar1 + 2;
      }
      *(undefined8 **)(param_1 + 0x10) = puVar31;
      FUN_0015dc70(param_1);
      *(long *)(param_1 + 0x10) = plVar37[1];
      lVar32 = plVar37[4];
    }
    *(long *)(param_1 + 0x10) = plVar37[1];
    goto switchD_001767c0_default;
  case 0x1e:
    if (uVar38 != 0) {
      FUN_0015c870(param_1,*plVar33 + uVar39 * 0x10 + -0x10);
    }
    goto LAB_00178ec0;
  case 0x1f:
    lVar20 = lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10;
    if (-1 < (int)uVar8) {
      lVar20 = lVar32 + (ulong)(uVar8 >> 0x17) * 0x10;
    }
    lVar32 = lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10;
    if ((uVar8 & 0x400000) != 0) {
      lVar32 = lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10;
    }
    uVar8 = FUN_00175d10(param_1,lVar20,lVar32);
    puVar18 = (uint *)*plVar30;
    if (uVar8 == uVar38) goto LAB_00176a54;
    goto LAB_00176de0;
  case 0x20:
    lVar20 = lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10;
    if (-1 < (int)uVar8) {
      lVar20 = lVar32 + (ulong)(uVar8 >> 0x17) * 0x10;
    }
    lVar32 = lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10;
    if ((uVar8 & 0x400000) != 0) {
      lVar32 = lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10;
    }
    uVar8 = FUN_001757d0(param_1,lVar20,lVar32);
    puVar18 = (uint *)*plVar30;
    goto joined_r0x00176a50;
  case 0x21:
    lVar20 = lVar17 + (ulong)(byte)(uVar8 >> 0x17) * 0x10;
    if (-1 < (int)uVar8) {
      lVar20 = lVar32 + (ulong)(uVar8 >> 0x17) * 0x10;
    }
    lVar32 = lVar32 + ((ulong)(uVar8 >> 0xe) & 0x1ff) * 0x10;
    if ((uVar8 & 0x400000) != 0) {
      lVar32 = lVar17 + (ulong)(byte)(uVar8 >> 0xe) * 0x10;
    }
    uVar8 = FUN_00175a50(param_1,lVar20,lVar32);
    puVar18 = (uint *)*plVar30;
joined_r0x00176a50:
    if (uVar8 == uVar38) {
LAB_00176a54:
      uVar8 = *puVar18;
      uVar39 = (ulong)(uVar8 >> 6) & 0xff;
      if ((int)uVar39 != 0) {
        FUN_0015c870(param_1,*plVar33 + uVar39 * 0x10 + -0x10);
        puVar18 = (uint *)*plVar30;
      }
      puVar18 = puVar18 + (int)((uVar8 >> 0xe) - 0x1fffe);
    }
    else {
LAB_00176de0:
      puVar18 = puVar18 + 1;
    }
    *plVar30 = (long)puVar18;
    lVar32 = *plVar33;
    goto switchD_001767c0_default;
  case 0x22:
    iVar11 = *(int *)(lVar32 + uVar39 * 0x10 + 8);
    if ((uVar8 & 0x7fc000) == 0) {
      if ((iVar11 != 0) && ((iVar11 != 1 || (*(uint *)pdVar35 != 0)))) goto LAB_00176d04;
LAB_00177bb8:
      puVar18 = (uint *)*plVar30;
      uVar8 = *puVar18;
      uVar39 = (ulong)(uVar8 >> 6) & 0xff;
      iVar11 = (int)uVar39;
joined_r0x00177aa0:
      if (iVar11 != 0) {
        FUN_0015c870(param_1,*plVar33 + uVar39 * 0x10 + -0x10);
        puVar18 = (uint *)*plVar30;
      }
      *plVar30 = (long)(puVar18 + (int)((uVar8 >> 0xe) - 0x1fffe));
      goto switchD_001767c0_default;
    }
    if ((iVar11 != 0) && ((iVar11 != 1 || (*(uint *)pdVar35 != 0)))) goto LAB_00177bb8;
    goto LAB_00176d04;
  case 0x23:
    pdVar28 = (double *)(lVar32 + ((ulong)(uVar8 >> 0x13) & 0x1ff0));
    iVar11 = *(int *)(pdVar28 + 1);
    if ((uVar8 & 0x7fc000) == 0) {
      if ((iVar11 == 0) || ((iVar11 == 1 && (*(int *)pdVar28 == 0)))) goto LAB_00177a8c;
    }
    else if ((iVar11 != 0) && ((iVar11 != 1 || (*(int *)pdVar28 != 0)))) {
LAB_00177a8c:
      dVar14 = pdVar28[1];
      *pdVar35 = *pdVar28;
      pdVar35[1] = dVar14;
      puVar18 = (uint *)*plVar30;
      uVar8 = *puVar18;
      uVar39 = (ulong)(uVar8 >> 6) & 0xff;
      iVar11 = (int)uVar39;
      goto joined_r0x00177aa0;
    }
LAB_00176d04:
    *plVar30 = *plVar30 + 4;
    goto switchD_001767c0_default;
  case 0x24:
    uVar38 = uVar8 >> 0xe & 0x1ff;
    if (uVar8 >> 0x17 != 0) {
      *(double **)(param_1 + 0x10) = pdVar35 + (ulong)(uVar8 >> 0x17) * 2;
    }
    iVar11 = FUN_0015abc0(param_1,pdVar35,uVar38 - 1);
    if (iVar11 == 0) {
      plVar37 = *(long **)(param_1 + 0x20);
      goto LAB_00176730;
    }
    if (uVar38 != 0) {
      *(long *)(param_1 + 0x10) = plVar37[1];
    }
    lVar32 = *plVar33;
    goto switchD_001767c0_default;
  case 0x25:
    if (uVar8 >> 0x17 != 0) {
      *(double **)(param_1 + 0x10) = pdVar35 + (ulong)(uVar8 >> 0x17) * 2;
    }
    iVar11 = FUN_0015abc0(param_1,pdVar35,0xffffffff);
    if (iVar11 != 0) {
      lVar32 = *plVar33;
      goto switchD_001767c0_default;
    }
    puVar31 = *(undefined8 **)(param_1 + 0x20);
    plVar33 = (long *)*puVar31;
    plVar37 = (long *)puVar31[2];
    plVar34 = (long *)*plVar37;
    plVar30 = (long *)(puVar31[4] + (ulong)*(byte *)(*(long *)(*plVar33 + 0x18) + 10) * 0x10);
    if (0 < *(int *)(*(long *)(lVar16 + 0x18) + 0x20)) {
      FUN_0015c870(param_1,plVar37[4]);
    }
    if (plVar33 < plVar30) {
      plVar13 = plVar33;
      plVar24 = plVar34;
      do {
        plVar22 = plVar13 + 2;
        lVar16 = plVar13[1];
        *plVar24 = *plVar13;
        plVar24[1] = lVar16;
        plVar13 = plVar22;
        plVar24 = plVar24 + 2;
      } while (plVar22 < plVar30);
    }
    plVar37[4] = (long)plVar34 + (puVar31[4] - (long)plVar33);
    lVar16 = (long)plVar34 + (*(long *)(param_1 + 0x10) - (long)plVar33);
    *(long *)(param_1 + 0x10) = lVar16;
    plVar37[1] = lVar16;
    plVar37[5] = puVar31[5];
    *(ushort *)((long)plVar37 + 0x42) = *(ushort *)((long)plVar37 + 0x42) | 0x20;
    *(long **)(param_1 + 0x20) = plVar37;
    goto LAB_00176730;
  case 0x26:
    goto switchD_001767c0_caseD_26;
  case 0x27:
    if (*(int *)(lVar32 + uVar39 * 0x10 + 8) != 0x13) {
      dVar14 = pdVar35[4] + *pdVar35;
      if (pdVar35[4] <= 0.0) {
        if (dVar14 < pdVar35[2]) goto switchD_001767c0_default;
      }
      else if (pdVar35[2] < dVar14) goto switchD_001767c0_default;
      *plVar30 = *plVar30 + (long)(int)((uVar8 >> 0xe) - 0x1ffff) * 4;
      *pdVar35 = dVar14;
      pdVar35[6] = dVar14;
      *(uint *)(pdVar35 + 7) = 3;
      goto switchD_001767c0_default;
    }
    dVar14 = (double)((long)*pdVar35 + (long)pdVar35[4]);
    if ((long)pdVar35[4] < 1) {
      if ((long)dVar14 < (long)pdVar35[2]) goto switchD_001767c0_default;
    }
    else if ((long)pdVar35[2] < (long)dVar14) goto switchD_001767c0_default;
    *plVar30 = *plVar30 + (long)(int)((uVar8 >> 0xe) - 0x1ffff) * 4;
    *pdVar35 = dVar14;
    pdVar35[6] = dVar14;
    *(uint *)(pdVar35 + 7) = 0x13;
    goto switchD_001767c0_default;
  case 0x28:
    puVar18 = (uint *)(lVar32 + uVar39 * 0x10 + 8);
    pdVar28 = pdVar35 + 2;
    if ((*puVar18 == 0x13) && (*(uint *)(pdVar35 + 5) == 0x13)) {
      dVar14 = pdVar35[4];
      pdVar12 = pdVar28;
      uVar38 = *(uint *)(pdVar35 + 3);
      while (uVar38 != 0x13) {
        if (uVar38 == 3) {
          dVar40 = (double)(long)*pdVar12;
          dVar21 = dVar40 + 1.0;
          if (*pdVar12 == dVar40 || -1 < (long)dVar14) {
            dVar21 = dVar40;
          }
          bVar6 = false;
          if ((-9.223372036854776e+18 <= dVar21) && (bVar6 = false, !NAN(dVar21))) {
            bVar6 = dVar21 < 9.223372036854776e+18;
          }
          if (bVar6) {
            dVar21 = (double)(long)dVar21;
            goto LAB_00178ea0;
          }
LAB_00178a8c:
          uVar38 = *(uint *)(pdVar35 + 3);
          if (uVar38 == 3) {
            dVar21 = *pdVar28;
joined_r0x00178f10:
            if (0.0 < dVar21) goto LAB_00178ab0;
LAB_00178ae4:
            dVar21 = -0.0;
            if ((long)dVar14 < 0) goto LAB_00178ea0;
          }
          else {
            if (uVar38 != 0x13) {
              if ((uVar38 & 0xf) == 4) {
                lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
                dVar21 = *pdVar28;
                if (*(char *)((long)dVar21 + 8) == '\x04') {
                  uVar39 = (ulong)*(byte *)((long)dVar21 + 0xb);
                }
                else {
                  uVar39 = *(ulong *)((long)dVar21 + 0x10);
                }
                if (lVar20 == uVar39 + 1) {
                  dVar21 = (double)(long)local_80;
                  if (local_78 != 0x13) {
                    dVar21 = local_80;
                  }
                  goto joined_r0x00178f10;
                }
              }
              goto LAB_00178b30;
            }
            if ((double)(long)*pdVar28 <= 0.0) goto LAB_00178ae4;
LAB_00178ab0:
            dVar21 = NAN;
            if (-1 < (long)dVar14) goto LAB_00178ea0;
          }
          dVar14 = 0.0;
          goto LAB_00178ea4;
        }
        if ((uVar38 & 0xf) != 4) goto LAB_00178a8c;
        lVar20 = FUN_00162710((long)*pdVar12 + 0x18,&local_80);
        dVar21 = *pdVar12;
        if (*(char *)((long)dVar21 + 8) == '\x04') {
          uVar39 = (ulong)*(byte *)((long)dVar21 + 0xb);
        }
        else {
          uVar39 = *(ulong *)((long)dVar21 + 0x10);
        }
        if (lVar20 != uVar39 + 1) goto LAB_00178a8c;
        pdVar12 = &local_80;
        uVar38 = local_78;
      }
      dVar21 = *pdVar12;
LAB_00178ea0:
      dVar14 = *pdVar35;
LAB_00178ea4:
      pdVar35[2] = dVar21;
      uVar38 = 0x13;
      *(uint *)(pdVar35 + 3) = 0x13;
      *pdVar35 = (double)((long)dVar14 - (long)pdVar35[4]);
    }
    else {
LAB_00178b30:
      uVar38 = *(uint *)(pdVar35 + 3);
      if (uVar38 == 3) {
        dVar14 = *pdVar28;
      }
      else if (uVar38 == 0x13) {
        dVar14 = (double)(long)*pdVar28;
      }
      else {
        if ((uVar38 & 0xf) != 4) {
LAB_0017909c:
                    /* WARNING: Subroutine does not return */
          FUN_001599d0(param_1,"\'for\' limit must be a number");
        }
        lVar20 = FUN_00162710((long)*pdVar28 + 0x18,&local_80);
        dVar14 = *pdVar28;
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar39 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar39 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar39 + 1) goto LAB_0017909c;
        dVar14 = (double)(long)local_80;
        if (local_78 != 0x13) {
          dVar14 = local_80;
        }
      }
      pdVar35[2] = dVar14;
      *(uint *)(pdVar35 + 3) = 3;
      uVar38 = *(uint *)(pdVar35 + 5);
      if (uVar38 == 3) {
        dVar14 = pdVar35[4];
      }
      else if (uVar38 == 0x13) {
        dVar14 = (double)(long)pdVar35[4];
      }
      else {
        if ((uVar38 & 0xf) != 4) {
LAB_001790ac:
                    /* WARNING: Subroutine does not return */
          FUN_001599d0(param_1,"\'for\' step must be a number");
        }
        lVar20 = FUN_00162710((long)pdVar35[4] + 0x18,&local_80);
        dVar14 = pdVar35[4];
        if (*(char *)((long)dVar14 + 8) == '\x04') {
          uVar39 = (ulong)*(byte *)((long)dVar14 + 0xb);
        }
        else {
          uVar39 = *(ulong *)((long)dVar14 + 0x10);
        }
        if (lVar20 != uVar39 + 1) goto LAB_001790ac;
        dVar14 = (double)(long)local_80;
        if (local_78 != 0x13) {
          dVar14 = local_80;
        }
      }
      pdVar35[4] = dVar14;
      *(uint *)(pdVar35 + 5) = 3;
      uVar38 = *puVar18;
      if (uVar38 == 3) {
        dVar21 = *pdVar35;
      }
      else if (uVar38 == 0x13) {
        dVar21 = (double)(long)*pdVar35;
      }
      else {
        if ((uVar38 & 0xf) != 4) {
LAB_001790bc:
                    /* WARNING: Subroutine does not return */
          FUN_001599d0(param_1,"\'for\' initial value must be a number");
        }
        lVar20 = FUN_00162710((long)*pdVar35 + 0x18,&local_80);
        dVar21 = *pdVar35;
        if (*(char *)((long)dVar21 + 8) == '\x04') {
          uVar39 = (ulong)*(byte *)((long)dVar21 + 0xb);
        }
        else {
          uVar39 = *(ulong *)((long)dVar21 + 0x10);
        }
        if (lVar20 != uVar39 + 1) goto LAB_001790bc;
        dVar21 = (double)(long)local_80;
        if (local_78 != 0x13) {
          dVar21 = local_80;
        }
      }
      uVar38 = 3;
      *pdVar35 = dVar21 - dVar14;
    }
    *puVar18 = uVar38;
    goto LAB_00178ec0;
  case 0x29:
    pdVar35[6] = *pdVar35;
    pdVar35[10] = pdVar35[4];
    pdVar35[0xb] = pdVar35[5];
    pdVar35[7] = pdVar35[1];
    pdVar35[8] = pdVar35[2];
    pdVar35[9] = pdVar35[3];
    *(double **)(param_1 + 0x10) = pdVar35 + 0xc;
    FUN_0015b0e0(param_1,pdVar35 + 6,uVar8 >> 0xe & 0x1ff);
    lVar32 = plVar37[4];
    *(long *)(param_1 + 0x10) = plVar37[1];
    puVar18 = (uint *)plVar37[5];
    plVar37[5] = (long)(puVar18 + 1);
    uVar8 = *puVar18;
    pdVar35 = (double *)(lVar32 + (ulong)(byte)(uVar8 >> 6) * 0x10);
  case 0x2a:
    if (*(uint *)(pdVar35 + 3) != 0) {
      *pdVar35 = pdVar35[2];
      pdVar35[1] = pdVar35[3];
LAB_00178ec0:
      *plVar30 = *plVar30 + (long)(int)((uVar8 >> 0xe) - 0x1ffff) * 4;
    }
    goto switchD_001767c0_default;
  case 0x2b:
    uVar38 = uVar8 >> 0x17;
    uVar8 = uVar8 >> 0xe & 0x1ff;
    if (uVar38 == 0) {
      uVar38 = (int)((ulong)(*(long *)(param_1 + 0x10) - (long)pdVar35) >> 4) - 1;
    }
    if (uVar8 == 0) {
      puVar18 = (uint *)*plVar30;
      *plVar30 = (long)(puVar18 + 1);
      uVar8 = *puVar18 >> 6;
    }
    dVar14 = *pdVar35;
    uVar8 = (uVar38 + uVar8 * 0x32) - 0x32;
    if (*(uint *)((long)dVar14 + 0xc) < uVar8) {
      FUN_00171cd0(param_1,dVar14,uVar8);
    }
    if (0 < (int)uVar38) {
      lVar20 = (long)(int)uVar38;
      plVar34 = (long *)(lVar32 + (lVar20 + uVar39) * 0x10);
      do {
        FUN_00171ba0(param_1,dVar14,uVar8,plVar34);
        if ((((*(byte *)(plVar34 + 1) >> 6 & 1) != 0) &&
            ((*(byte *)((long)dVar14 + 9) >> 2 & 1) != 0)) && ((*(byte *)(*plVar34 + 9) & 3) != 0))
        {
          FUN_0015cbe0(param_1,dVar14);
        }
        lVar20 = lVar20 + -1;
        plVar34 = plVar34 + -2;
        uVar8 = uVar8 - 1;
      } while (0 < lVar20);
    }
    *(long *)(param_1 + 0x10) = plVar37[1];
    goto switchD_001767c0_default;
  case 0x2c:
    lVar36 = *(long *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x40) +
                      ((ulong)(uVar8 >> 0xb) & 0x1ffff8));
    uVar8 = *(uint *)(lVar36 + 0x10);
    uVar27 = (ulong)uVar8;
    lVar20 = *(long *)(lVar36 + 0x58);
    dVar14 = *(double *)(lVar36 + 0x60);
    if (dVar14 == 0.0) {
LAB_001775f8:
      dVar14 = (double)FUN_0015c6c0(param_1,uVar27);
      *(long *)((long)dVar14 + 0x18) = lVar36;
      *pdVar35 = dVar14;
      *(undefined4 *)(lVar32 + uVar39 * 0x10 + 8) = 0x46;
      if (0 < (int)uVar8) {
        plVar34 = (long *)((long)dVar14 + 0x20);
        pbVar25 = (byte *)(lVar20 + 9);
        uVar39 = (ulong)*pbVar25;
        if (*(char *)(lVar20 + 8) == '\0') goto LAB_0017766c;
        do {
          lVar20 = FUN_0015c7b0(param_1,lVar32 + uVar39 * 0x10);
          plVar13 = plVar34;
          pbVar26 = pbVar25;
          while( true ) {
            plVar34 = plVar13 + 1;
            *plVar13 = lVar20;
            uVar27 = uVar27 - 1;
            pbVar25 = pbVar26 + 0x10;
            *(long *)(lVar20 + 8) = *(long *)(lVar20 + 8) + 1;
            if (uVar27 == 0) goto LAB_0017767c;
            uVar39 = (ulong)*pbVar25;
            if (pbVar26[0xf] != 0) break;
LAB_0017766c:
            lVar20 = *(long *)(lVar16 + uVar39 * 8 + 0x20);
            plVar13 = plVar34;
            pbVar26 = pbVar25;
          }
        } while( true );
      }
LAB_0017767c:
      if ((*(byte *)(lVar36 + 9) >> 2 & 1) == 0) {
        *(double *)(lVar36 + 0x60) = dVar14;
      }
    }
    else {
      if (0 < (int)uVar8) {
        puVar31 = (undefined8 *)((long)dVar14 + 0x20);
        pbVar25 = (byte *)(lVar20 + 9);
        uVar29 = (ulong)*pbVar25;
        uVar19 = uVar27;
        if (*(char *)(lVar20 + 8) != '\0') goto LAB_001775e4;
        while (pbVar26 = pbVar25, *(long *)*puVar31 == **(long **)(lVar16 + uVar29 * 8 + 0x20)) {
          while( true ) {
            uVar19 = uVar19 - 1;
            puVar31 = puVar31 + 1;
            pbVar25 = pbVar26 + 0x10;
            if (uVar19 == 0) goto LAB_00177a2c;
            uVar29 = (ulong)*pbVar25;
            if (pbVar26[0xf] == 0) break;
LAB_001775e4:
            pbVar26 = pbVar25;
            if (*(long *)*puVar31 != lVar32 + uVar29 * 0x10) goto LAB_001775f8;
          }
        }
        goto LAB_001775f8;
      }
LAB_00177a2c:
      *pdVar35 = dVar14;
      *(undefined4 *)(lVar32 + uVar39 * 0x10 + 8) = 0x46;
    }
    lVar20 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
joined_r0x00177a50:
    if (0 < lVar20) {
      *(double **)(param_1 + 0x10) = pdVar35 + 2;
      FUN_0015dc70(param_1);
      *(long *)(param_1 + 0x10) = plVar37[1];
      lVar32 = plVar37[4];
    }
    goto switchD_001767c0_default;
  case 0x2d:
    uVar38 = ~(uint)*(byte *)(*(long *)(lVar16 + 0x18) + 10) +
             (int)((ulong)(lVar32 - *plVar37) >> 4);
    uVar23 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
    if (uVar8 >> 0x17 == 0) {
      if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x10) >> 4 <= (long)(ulong)uVar23) {
        FUN_0015a5f0(param_1,uVar23);
      }
      lVar32 = *plVar33;
      pdVar35 = (double *)(lVar32 + uVar39 * 0x10);
      *(double **)(param_1 + 0x10) = pdVar35 + (ulong)uVar23 * 2;
      uVar8 = uVar23;
      if (!(0 < (int)uVar23 && 0 < (int)uVar38)) goto LAB_001768ac;
LAB_00177aec:
      pdVar28 = (double *)(lVar32 + (ulong)uVar23 * -0x10);
      uVar39 = 0;
      pdVar12 = pdVar35;
      do {
        dVar14 = pdVar28[1];
        uVar39 = uVar39 + 1;
        *pdVar12 = *pdVar28;
        pdVar12[1] = dVar14;
        if ((long)(int)uVar8 <= (long)uVar39) break;
        pdVar28 = pdVar28 + 2;
        pdVar12 = pdVar12 + 2;
      } while (uVar39 < uVar23);
      if ((int)uVar8 <= (int)uVar39) goto switchD_001767c0_default;
    }
    else {
      uVar8 = (uVar8 >> 0x17) - 1;
      if (!((int)uVar8 < 1 || (int)uVar38 < 1)) goto LAB_00177aec;
LAB_001768ac:
      uVar39 = 0;
      if ((int)uVar8 < 1) goto switchD_001767c0_default;
    }
    uVar27 = uVar39 & 0xffffffff;
    uVar38 = uVar8 - (int)uVar39;
    uVar19 = ~uVar27;
    uVar39 = (ulong)uVar38 & 7;
    if ((uVar38 & 7) != 0) {
      pdVar28 = pdVar35 + uVar27 * 2 + 1;
      do {
        uVar27 = uVar27 + 1;
        uVar39 = uVar39 - 1;
        *(uint *)pdVar28 = 0;
        pdVar28 = pdVar28 + 2;
      } while (uVar39 != 0);
    }
    if (6 < uVar19 + uVar8) {
      lVar20 = uVar8 - uVar27;
      pdVar35 = pdVar35 + uVar27 * 2 + 9;
      do {
        *(uint *)(pdVar35 + -8) = 0;
        lVar20 = lVar20 + -8;
        *(uint *)(pdVar35 + -6) = 0;
        *(uint *)(pdVar35 + -4) = 0;
        *(uint *)(pdVar35 + -2) = 0;
        *(uint *)pdVar35 = 0;
        *(uint *)(pdVar35 + 2) = 0;
        *(uint *)(pdVar35 + 4) = 0;
        *(uint *)(pdVar35 + 6) = 0;
        pdVar35 = pdVar35 + 0x10;
      } while (lVar20 != 0);
    }
    goto switchD_001767c0_default;
  default:
    goto switchD_001767c0_default;
  }
  *pdVar35 = dVar14;
  *(undefined4 *)(lVar32 + uVar39 * 0x10 + 8) = 3;
  goto switchD_001767c0_default;
switchD_001767c0_caseD_26:
  if (0 < *(int *)(*(long *)(lVar16 + 0x18) + 0x20)) {
    FUN_0015c870(param_1,lVar32);
  }
  if (uVar8 >> 0x17 == 0) {
    uVar39 = (ulong)(*(long *)(param_1 + 0x10) - (long)pdVar35) >> 4;
  }
  else {
    uVar39 = (ulong)((uVar8 >> 0x17) - 1);
  }
  iVar11 = FUN_0015a930(param_1,plVar37,pdVar35,uVar39);
  if ((*(byte *)((long)plVar37 + 0x42) >> 3 & 1) != 0) {
    return;
  }
  plVar37 = *(long **)(param_1 + 0x20);
  if (iVar11 != 0) {
    *(long *)(param_1 + 0x10) = plVar37[1];
  }
  goto LAB_00176730;
LAB_00178880:
  uVar15 = 0x11;
  goto LAB_001789c0;
LAB_001789ac:
  uVar15 = 0x10;
  goto LAB_001789c0;
LAB_0017896c:
  uVar15 = 0xf;
  goto LAB_001789c0;
LAB_001788f0:
  uVar15 = 0xe;
  goto LAB_001789c0;
LAB_001788b0:
  uVar15 = 0xd;
LAB_001789c0:
  FUN_00173ca0(param_1,pdVar28,pdVar12,pdVar35,uVar15);
  lVar32 = *plVar33;
  goto switchD_001767c0_default;
}


