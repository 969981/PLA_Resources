/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00170190; name: FUN_00170190
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00170190(undefined8 *param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  byte *local_68;
  
  iVar6 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar6 + -1;
  if (iVar6 == 0) {
    FUN_00154110(param_1[3],"pattern too complex");
  }
LAB_001701e4:
  pbVar8 = (byte *)param_1[2];
  pbVar14 = param_3;
  if (param_3 != pbVar8) {
LAB_00170218:
    switch(*pbVar14) {
    case 0x24:
      param_3 = pbVar14 + 1;
      if (param_3 == pbVar8) {
        if (param_2 != (byte *)param_1[1]) {
          param_2 = (byte *)0x0;
        }
        pbVar8 = param_2;
        goto LAB_00170cc8;
      }
      pbVar8 = (byte *)param_1[1];
joined_r0x0017036c:
      if (pbVar8 <= param_2) goto LAB_00170370;
LAB_00170260:
      pbVar15 = pbVar14 + 1;
      bVar11 = *param_2;
      bVar2 = *pbVar14;
      if (bVar2 != 0x25) {
        if (bVar2 == 0x5b) {
          bVar4 = pbVar14[1] != 0x5e;
          pbVar16 = pbVar15;
          if (bVar4) {
            pbVar16 = pbVar14;
          }
          pbVar12 = param_3 + -1;
          pbVar13 = pbVar16 + 1;
joined_r0x00170424:
          pbVar10 = pbVar16;
          if (pbVar13 < pbVar12) {
            do {
              pbVar16 = pbVar10 + 2;
              bVar3 = pbVar10[1];
              if (bVar3 == 0x25) {
                iVar6 = FUN_00170d00(bVar11);
                if (iVar6 != 0) goto LAB_001704bc;
              }
              else if ((*pbVar16 == 0x2d) && (pbVar16 = pbVar10 + 3, pbVar16 < pbVar12)) {
                if (bVar11 < bVar3) goto code_r0x0017047c;
                if (bVar11 <= *pbVar16) goto LAB_001704bc;
              }
              else {
                pbVar16 = pbVar13;
                if (bVar3 == bVar11) goto LAB_001704bc;
              }
              pbVar13 = pbVar16 + 1;
              pbVar10 = pbVar16;
              if (pbVar12 <= pbVar13) break;
            } while( true );
          }
          bVar11 = *param_3;
          uVar9 = (ulong)bVar11;
          if (bVar4) goto LAB_001703d0;
          goto joined_r0x00170290;
        }
        if (bVar2 == 0x2e) {
          bVar11 = *param_3;
        }
        else {
          bVar4 = bVar2 == bVar11;
LAB_001704bc:
          bVar11 = *param_3;
          uVar9 = (ulong)bVar11;
          if (!bVar4) goto LAB_001703d0;
        }
joined_r0x00170290:
        if (bVar11 == 0x3f) {
          param_3 = param_3 + 1;
          pbVar8 = (byte *)FUN_00170190(param_1,param_2 + 1,param_3);
          if (pbVar8 == (byte *)0x0) goto LAB_0017020c;
          goto LAB_00170cc8;
        }
        if (bVar11 != 0x2a) {
          if (bVar11 != 0x2b) {
            if (bVar11 == 0x2d) {
              pbVar16 = param_3 + -1;
              local_68 = param_2;
              goto LAB_00170bb4;
            }
            param_2 = param_2 + 1;
            goto LAB_001701e4;
          }
          param_2 = param_2 + 1;
        }
        lVar17 = 0;
        if (pbVar8 <= param_2) goto LAB_00170b64;
        lVar17 = 0;
        pbVar16 = param_3 + -1;
        bVar11 = *param_2;
        goto joined_r0x00170a4c;
      }
      iVar6 = FUN_00170d00(bVar11,*pbVar15);
      bVar11 = *param_3;
      uVar9 = (ulong)bVar11;
      if (iVar6 != 0) goto joined_r0x00170290;
LAB_001703d0:
      pbVar8 = (byte *)0x0;
      if (0x3f < (uint)uVar9) goto LAB_00170cc8;
      break;
    case 0x25:
      goto switchD_00170240_caseD_25;
    default:
      param_3 = pbVar14 + 1;
      if (*pbVar14 == 0x5b) {
        pbVar15 = pbVar14 + 2;
        if (pbVar14[1] != 0x5e) {
          pbVar15 = param_3;
        }
        if (pbVar15 == pbVar8) goto LAB_00170338;
LAB_001702fc:
        pbVar8 = pbVar15 + 1;
        if (*pbVar15 != 0x25) goto LAB_00170354;
        do {
          pbVar15 = pbVar15 + 2;
          if ((byte *)param_1[2] <= pbVar8) {
            pbVar15 = pbVar8;
          }
          bVar11 = *pbVar15;
          while( true ) {
            if (bVar11 == 0x5d) {
              param_3 = pbVar15 + 1;
              pbVar8 = (byte *)param_1[1];
              goto joined_r0x0017036c;
            }
            if (pbVar15 != (byte *)param_1[2]) goto LAB_001702fc;
LAB_00170338:
            FUN_00154110(param_1[3],"malformed pattern (missing \']\')");
            pbVar8 = pbVar15 + 1;
            if (*pbVar15 == 0x25) break;
LAB_00170354:
            bVar11 = *pbVar8;
            pbVar15 = pbVar8;
          }
        } while( true );
      }
      pbVar8 = (byte *)param_1[1];
joined_r0x00170390:
      if (param_2 < pbVar8) goto LAB_00170260;
LAB_00170370:
      uVar9 = (ulong)*param_3;
      pbVar8 = (byte *)0x0;
      if (0x3f < *param_3) goto LAB_00170cc8;
      break;
    case 0x28:
      if (pbVar14[1] == 0x29) {
        bVar11 = *(byte *)((long)param_1 + 0x24);
        uVar9 = (ulong)bVar11;
        if (0x1f < uVar9) {
          FUN_00154110(param_1[3],"too many captures");
        }
        param_1[uVar9 * 2 + 5] = param_2;
        param_1[uVar9 * 2 + 6] = 0xfffffffffffffffe;
        *(byte *)((long)param_1 + 0x24) = bVar11 + 1;
        pbVar8 = (byte *)FUN_00170190(param_1,param_2,pbVar14 + 2);
      }
      else {
        bVar11 = *(byte *)((long)param_1 + 0x24);
        uVar9 = (ulong)bVar11;
        if (0x1f < uVar9) {
          FUN_00154110(param_1[3],"too many captures");
        }
        param_1[uVar9 * 2 + 5] = param_2;
        param_1[uVar9 * 2 + 6] = 0xffffffffffffffff;
        *(byte *)((long)param_1 + 0x24) = bVar11 + 1;
        pbVar8 = (byte *)FUN_00170190(param_1,param_2,pbVar14 + 1);
      }
      if (pbVar8 == (byte *)0x0) {
        *(char *)((long)param_1 + 0x24) = *(char *)((long)param_1 + 0x24) + -1;
      }
      goto LAB_00170cc8;
    case 0x29:
      lVar17 = (ulong)*(byte *)((long)param_1 + 0x24) * 0x10 + 0x20;
      uVar9 = (ulong)*(byte *)((long)param_1 + 0x24);
      goto LAB_00170950;
    }
    pbVar8 = (byte *)0x0;
    if ((1L << (uVar9 & 0x3f) & 0x8000240000000000U) == 0) goto LAB_00170cc8;
    pbVar8 = (byte *)param_1[2];
    pbVar14 = param_3 + 1;
    if (param_3 + 1 == pbVar8) goto LAB_001708dc;
    goto LAB_00170218;
  }
LAB_001708dc:
  pbVar8 = param_2;
  goto LAB_00170cc8;
  while( true ) {
    plVar1 = (long *)((long)param_1 + lVar17);
    lVar17 = lVar17 + -0x10;
    uVar9 = uVar7;
    if (*plVar1 == -1) break;
LAB_00170950:
    uVar7 = uVar9 - 1;
    if ((long)uVar9 < 1) {
      uVar7 = FUN_00154110(param_1[3],"invalid pattern capture");
      break;
    }
  }
  param_1[(long)(int)uVar7 * 2 + 6] = (long)param_2 - param_1[(long)(int)uVar7 * 2 + 5];
  pbVar8 = (byte *)FUN_00170190(param_1,param_2,pbVar14 + 1);
  if (pbVar8 == (byte *)0x0) {
    param_1[(long)(int)uVar7 * 2 + 6] = -1;
  }
  goto LAB_00170cc8;
switchD_00170240_caseD_25:
  bVar11 = pbVar14[1];
  if (bVar11 == 0x66) {
    if (pbVar14[2] == 0x5b) {
LAB_00170548:
      param_3 = pbVar14 + 4;
      if (pbVar14[3] != 0x5e) {
        param_3 = pbVar14 + 3;
      }
      if (param_3 != (byte *)param_1[2]) goto LAB_00170584;
      do {
        FUN_00154110(param_1[3],"malformed pattern (missing \']\')");
        bVar11 = *param_3;
        pbVar8 = param_3;
        while( true ) {
          pbVar15 = pbVar8 + 1;
          param_3 = pbVar15;
          if ((bVar11 == 0x25) && (param_3 = pbVar8 + 2, (byte *)param_1[2] <= pbVar15)) {
            param_3 = pbVar15;
          }
          if (*param_3 == 0x5d) {
            param_3 = param_3 + 1;
            pbVar8 = (byte *)*param_1;
            goto joined_r0x001705d4;
          }
          if (param_3 == (byte *)param_1[2]) break;
LAB_00170584:
          bVar11 = *param_3;
          pbVar8 = param_3;
        }
      } while( true );
    }
    FUN_00154110(param_1[3],"missing \'[\' after \'%%f\' in pattern");
    param_3 = pbVar14 + 3;
    if (pbVar14[2] == 0x5b) goto LAB_00170548;
    if (pbVar14[2] == 0x25) {
      if (param_3 == (byte *)param_1[2]) {
        FUN_00154110(param_1[3],"malformed pattern (ends with \'%%\')");
      }
      param_3 = pbVar14 + 4;
      pbVar8 = (byte *)*param_1;
joined_r0x001705d4:
      if (param_2 != pbVar8) goto LAB_001705d8;
LAB_0017062c:
      bVar11 = 0;
    }
    else {
      if (param_2 == (byte *)*param_1) goto LAB_0017062c;
LAB_001705d8:
      bVar11 = param_2[-1];
    }
    bVar4 = pbVar14[3] != 0x5e;
    pbVar8 = pbVar14 + 3;
    if (bVar4) {
      pbVar8 = pbVar14 + 2;
    }
    pbVar15 = param_3 + -1;
    pbVar14 = pbVar8 + 1;
    if (pbVar14 < pbVar15) {
      pbVar16 = pbVar14;
      pbVar13 = pbVar8;
      do {
        while( true ) {
          pbVar12 = pbVar13 + 2;
          bVar2 = pbVar13[1];
          if (bVar2 != 0x25) break;
          iVar6 = FUN_00170d00(bVar11);
          if (iVar6 != 0) {
LAB_001706e0:
            if (!bVar4) goto LAB_001706e8;
            goto LAB_00170cc4;
          }
LAB_0017066c:
          pbVar16 = pbVar12 + 1;
          pbVar13 = pbVar12;
          if (pbVar15 <= pbVar16) goto LAB_00170784;
        }
        if ((*pbVar12 != 0x2d) || (pbVar12 = pbVar13 + 3, pbVar15 <= pbVar12)) {
          pbVar12 = pbVar16;
          if (bVar2 == bVar11) goto LAB_001706e0;
          goto LAB_0017066c;
        }
        if (bVar2 <= bVar11) {
          if (bVar11 <= *pbVar12) goto LAB_001706e0;
          goto LAB_0017066c;
        }
        pbVar16 = pbVar13 + 4;
        pbVar13 = pbVar12;
      } while (pbVar16 < pbVar15);
    }
LAB_00170784:
    if (bVar4) {
LAB_001706e8:
      if (pbVar14 < pbVar15) {
        bVar11 = *param_2;
        do {
          while( true ) {
            pbVar16 = pbVar8 + 2;
            bVar2 = pbVar8[1];
            if (bVar2 != 0x25) break;
            iVar6 = FUN_00170d00(bVar11);
            if (iVar6 != 0) {
LAB_00170200:
              if (bVar4) goto LAB_0017020c;
              goto LAB_00170cc4;
            }
LAB_0017070c:
            pbVar14 = pbVar16 + 1;
            pbVar8 = pbVar16;
            if (pbVar15 <= pbVar14) goto LAB_00170790;
          }
          if ((*pbVar16 != 0x2d) || (pbVar16 = pbVar8 + 3, pbVar15 <= pbVar16)) {
            pbVar16 = pbVar14;
            if (bVar2 == bVar11) goto LAB_00170200;
            goto LAB_0017070c;
          }
          if (bVar2 <= bVar11) {
            if (bVar11 <= *pbVar16) goto LAB_00170200;
            goto LAB_0017070c;
          }
          pbVar14 = pbVar8 + 4;
          pbVar8 = pbVar16;
        } while (pbVar14 < pbVar15);
      }
LAB_00170790:
      if (!bVar4) goto LAB_0017020c;
    }
    goto LAB_00170cc4;
  }
  if (9 < bVar11 - 0x30) {
    if (bVar11 != 0x62) {
      if (pbVar14 + 1 == pbVar8) {
        FUN_00154110(param_1[3],"malformed pattern (ends with \'%%\')");
        param_3 = pbVar14 + 2;
        pbVar8 = (byte *)param_1[1];
        goto joined_r0x00170390;
      }
      param_3 = pbVar14 + 2;
      pbVar8 = (byte *)param_1[1];
      goto joined_r0x0017036c;
    }
    if (pbVar8 + -1 <= pbVar14 + 2) {
      FUN_00154110(param_1[3],"malformed pattern (missing arguments to \'%%b\')");
    }
    if (*param_2 == pbVar14[2]) {
      pbVar15 = param_2 + 1;
      if (pbVar15 < (byte *)param_1[1]) {
        iVar6 = 1;
        bVar11 = *pbVar15;
        if (bVar11 == pbVar14[3]) goto LAB_001708c8;
        do {
          if (bVar11 == *param_2) {
            iVar6 = iVar6 + 1;
          }
          while( true ) {
            pbVar15 = pbVar15 + 1;
            pbVar8 = (byte *)0x0;
            if ((byte *)param_1[1] == pbVar15) goto LAB_00170cc8;
            bVar11 = *pbVar15;
            if (bVar11 != pbVar14[3]) break;
LAB_001708c8:
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) {
              param_2 = pbVar15 + 1;
              param_3 = pbVar14 + 4;
              goto LAB_001701e4;
            }
          }
        } while( true );
      }
    }
    goto LAB_00170cc4;
  }
  lVar17 = (ulong)bVar11 - 0x31;
  if ((((int)lVar17 < 0) || ((int)(uint)*(byte *)((long)param_1 + 0x24) <= (int)lVar17)) ||
     (uVar9 = param_1[lVar17 * 2 + 6], uVar9 == 0xffffffffffffffff)) {
    iVar6 = FUN_00154110(param_1[3],"invalid capture index %%%d");
    uVar9 = param_1[(long)iVar6 * 2 + 6];
    lVar17 = (long)iVar6;
  }
  if ((ulong)(param_1[1] - (long)param_2) < uVar9) goto LAB_00170cc4;
  iVar6 = memcmp((void *)param_1[lVar17 * 2 + 5],param_2,uVar9);
  param_2 = param_2 + uVar9;
  pbVar8 = (byte *)0x0;
  if ((param_2 == (byte *)0x0) || (iVar6 != 0)) goto LAB_00170cc8;
  param_3 = pbVar14 + 2;
  goto LAB_001701e4;
code_r0x0017047c:
  pbVar13 = pbVar10 + 4;
  goto joined_r0x00170424;
LAB_00170bb4:
  do {
    pbVar8 = (byte *)FUN_00170190(param_1,local_68,param_3 + 1);
    if (pbVar8 != (byte *)0x0) break;
    if ((byte *)param_1[1] <= local_68) goto LAB_00170cc4;
    bVar11 = *pbVar14;
    bVar2 = *local_68;
    if (bVar11 == 0x5b) {
      pbVar8 = pbVar15;
      if (pbVar14[1] != 0x5e) {
        pbVar8 = pbVar14;
      }
      uVar5 = (uint)(pbVar14[1] != 0x5e);
      pbVar13 = pbVar8 + 1;
joined_r0x00170c24:
      pbVar12 = pbVar8;
      if (pbVar13 < pbVar16) {
        do {
          pbVar8 = pbVar12 + 2;
          bVar11 = pbVar12[1];
          if (bVar11 == 0x25) {
            iVar6 = FUN_00170d00(bVar2);
            if (iVar6 != 0) goto LAB_00170ba0;
          }
          else if ((*pbVar8 == 0x2d) && (pbVar8 = pbVar12 + 3, pbVar8 < pbVar16)) {
            if (bVar2 < bVar11) goto code_r0x00170c7c;
            if (bVar2 <= *pbVar8) goto LAB_00170ba0;
          }
          else {
            pbVar8 = pbVar13;
            if (bVar11 == bVar2) goto LAB_00170ba0;
          }
          pbVar13 = pbVar8 + 1;
          pbVar12 = pbVar8;
          if (pbVar16 <= pbVar13) break;
        } while( true );
      }
      uVar5 = uVar5 ^ 1;
      goto LAB_00170ba0;
    }
    if (bVar11 == 0x2e) {
      uVar5 = 1;
    }
    else if (bVar11 == 0x25) {
      uVar5 = FUN_00170d00(bVar2,*pbVar15);
    }
    else {
      uVar5 = (uint)(bVar11 == bVar2);
    }
LAB_00170ba0:
    local_68 = local_68 + 1;
    pbVar8 = (byte *)0x0;
  } while (uVar5 != 0);
  goto LAB_00170cc8;
code_r0x00170c7c:
  pbVar13 = pbVar12 + 4;
  goto joined_r0x00170c24;
joined_r0x00170a4c:
  if (bVar2 == 0x5b) {
    bVar4 = pbVar14[1] != 0x5e;
    pbVar13 = pbVar15;
    if (bVar4) {
      pbVar13 = pbVar14;
    }
    pbVar12 = pbVar13 + 1;
joined_r0x00170ac0:
    pbVar10 = pbVar13;
    if (pbVar12 < pbVar16) {
      do {
        pbVar13 = pbVar10 + 2;
        bVar3 = pbVar10[1];
        if (bVar3 == 0x25) {
          iVar6 = FUN_00170d00(bVar11);
          if (iVar6 != 0) goto LAB_00170b4c;
        }
        else if ((*pbVar13 == 0x2d) && (pbVar13 = pbVar10 + 3, pbVar13 < pbVar16)) {
          if (bVar11 < bVar3) goto code_r0x00170b18;
          if (bVar11 <= *pbVar13) goto LAB_00170b4c;
        }
        else {
          pbVar13 = pbVar12;
          if (bVar3 == bVar11) {
LAB_00170b4c:
            if (!bVar4) goto LAB_00170b64;
            goto LAB_00170a64;
          }
        }
        pbVar12 = pbVar13 + 1;
        pbVar10 = pbVar13;
        if (pbVar16 <= pbVar12) break;
      } while( true );
    }
    if (bVar4) goto LAB_00170b64;
    goto LAB_00170a64;
  }
  if (bVar2 != 0x2e) {
    if (bVar2 == 0x25) {
      iVar6 = FUN_00170d00(bVar11,*pbVar15);
      if (iVar6 == 0) goto LAB_00170b64;
    }
    else if (bVar2 != bVar11) goto LAB_00170b64;
  }
LAB_00170a64:
  lVar17 = lVar17 + 1;
  if (pbVar8 <= param_2 + lVar17) goto LAB_00170b64;
  bVar11 = param_2[lVar17];
  goto joined_r0x00170a4c;
code_r0x00170b18:
  pbVar12 = pbVar10 + 4;
  goto joined_r0x00170ac0;
LAB_00170cc4:
  pbVar8 = (byte *)0x0;
  goto LAB_00170cc8;
LAB_0017020c:
  pbVar8 = (byte *)param_1[2];
  pbVar14 = param_3;
  if (param_3 == pbVar8) goto LAB_001708dc;
  goto LAB_00170218;
LAB_00170b64:
  do {
    if (lVar17 < 0) goto LAB_00170cc4;
    pbVar8 = (byte *)FUN_00170190(param_1,param_2 + lVar17,param_3 + 1);
    lVar17 = lVar17 + -1;
  } while (pbVar8 == (byte *)0x0);
LAB_00170cc8:
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return pbVar8;
}


