/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c315e8; name: FUN_02c315e8
 */


undefined4 FUN_02c315e8(long *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  long *plVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  short *psVar12;
  short sVar13;
  ushort uVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  short *psVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  
  *param_2 = 0;
  uVar8 = 4;
  switch((int)param_1[0x15]) {
  case 0:
    if (*(int *)((long)param_1 + 0xbc) != 0) {
      return 0;
    }
    switch((int)param_1[0x12]) {
    case 0:
      return (int)param_1[0x12];
    case 1:
      if (*(int *)((long)param_1 + 0x114) != 2) {
        return 0;
      }
      uVar18 = (**(code **)(*param_1 + 0x70))(param_1);
      if ((uVar18 & 1) == 0) {
        return 0;
      }
      break;
    case 3:
      if ((*(int *)((long)param_1 + 0x114) == 2) &&
         (uVar18 = (**(code **)(*param_1 + 0x70))(param_1), (uVar18 & 1) != 0)) break;
    case 2:
      if ((*(byte *)((long)param_1 + 0xa3) <= *(byte *)((long)param_1 + 0xa2)) &&
         (bVar1 = *(byte *)((long)param_1 + 0xa3) + 1, *(byte *)((long)param_1 + 0xa3) = bVar1,
         bVar1 <= *(byte *)((long)param_1 + 0xa2))) {
        return 0;
      }
    }
switchD_02c31828_default:
    *(undefined4 *)(param_1 + 0x15) = 1;
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    return 4;
  case 1:
    goto switchD_02c31630_caseD_1;
  case 2:
    if (*(int *)((long)param_1 + 0xbc) != 1) {
      if (*(int *)((long)param_1 + 0xbc) == 2) {
        return 2;
      }
      if (*(int *)((long)param_1 + 0x114) != 2) {
        return 2;
      }
      uVar18 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((uVar18 & 1) == 0) {
        return 2;
      }
    }
    if (*(byte *)((long)param_1 + 0x9b) < *(byte *)((long)param_1 + 0x99)) {
      if ((short)param_1[0x1d] == -0x41ff) {
        if ((char)param_1[0x13] == '\0') goto LAB_02c31cec;
      }
      else if (*(byte *)(param_1 + 0x13) <= *(byte *)((long)param_1 + 0x9c)) {
        cVar5 = '\0';
        if ((byte)(*(char *)((long)param_1 + 0x9f) + 1U) < *(byte *)(param_1 + 0x13)) {
          cVar5 = *(char *)((long)param_1 + 0x9f) + '\x01';
        }
        *(char *)((long)param_1 + 0x9f) = cVar5;
        FUN_02c31fac(param_1);
        (**(code **)(*param_1 + 0x80))(param_1);
        *(undefined4 *)(param_1 + 0x15) = 3;
        *(undefined1 *)((long)param_1 + 0xa1) = 0;
        *(undefined4 *)((long)param_1 + 0x114) = 1;
        return 2;
      }
      lVar10 = 0;
      uVar18 = 0;
      do {
        lVar11 = param_1[0xb] + lVar10;
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar11 + 0x18);
        *(char *)(param_1[0xb] + lVar10 + 0x92) = (char)uVar18;
        (**(code **)(**(long **)(param_1[0xb] + lVar10) + 0x120))
                  (*(long **)(param_1[0xb] + lVar10),&DAT_03a84812,0);
        plVar6 = (long *)(param_1[0xb] + lVar10);
        lVar10 = lVar10 + 0xa0;
        lVar11 = *plVar6;
        lVar20 = plVar6[3];
        *(long *)(lVar11 + 0x30) = plVar6[2];
        *(int *)(lVar11 + 0x38) = (int)lVar20;
        *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(byte *)(param_1 + 0x13));
LAB_02c31cec:
      *(undefined1 *)((long)param_1 + 0x9c) = 0;
      *(undefined1 *)((long)param_1 + 0x9f) = 0;
      FUN_02c31fac(param_1);
      (**(code **)(*param_1 + 0x80))(param_1);
      *(undefined4 *)(param_1 + 0x15) = 5;
      *(undefined4 *)((long)param_1 + 0x114) = 1;
      return 2;
    }
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    *(undefined1 *)((long)param_1 + 0x9f) = 0;
    FUN_02c31fac(param_1);
    (**(code **)(*param_1 + 0x80))(param_1);
    break;
  case 3:
    if (3 < *(byte *)((long)param_1 + 0xa1)) goto LAB_02c31b9c;
    uVar18 = (ulong)*(byte *)((long)param_1 + 0x9f);
    lVar10 = param_1[0xb];
    switch(*(byte *)((long)param_1 + 0xa1)) {
    case 0:
      lVar11 = lVar10 + uVar18 * 0xa0;
      uVar16 = *(ushort *)((long)param_1 + 0x94) + 1;
      *(undefined8 *)(lVar11 + 0x30) = 0x437f0000;
      *(float *)(lVar11 + 0x44) = -255.0 / (float)uVar16;
      *(uint *)(lVar11 + 0x38) = uVar16;
      *(undefined4 *)(lVar11 + 0x3c) = 0;
      *(undefined1 *)(lVar11 + 0x40) = 0;
      *(char *)((long)param_1 + 0xa1) = *(char *)((long)param_1 + 0xa1) + '\x01';
    case 1:
      lVar11 = lVar10 + uVar18 * 0xa0;
      puVar17 = (uint *)(lVar11 + 0x3c);
      uVar16 = *puVar17;
      uVar3 = *(uint *)(lVar11 + 0x38);
      if ((uVar16 < uVar3) && (uVar16 = uVar16 + 1, *puVar17 = uVar16, uVar16 < uVar3)) {
        lVar11 = lVar10 + uVar18 * 0xa0;
        fVar23 = *(float *)(lVar11 + 0x44) + *(float *)(lVar11 + 0x30);
        *(float *)(lVar11 + 0x30) = fVar23;
      }
      else {
        lVar11 = lVar10 + uVar18 * 0xa0;
        fVar23 = *(float *)(lVar11 + 0x34);
        *(undefined1 *)(lVar11 + 0x40) = 1;
      }
      *(char *)(*(long *)(lVar10 + uVar18 * 0xa0) + 0x59) = (char)(int)fVar23;
      if (*(char *)(lVar10 + uVar18 * 0xa0 + 0x40) != '\0') {
        *(char *)((long)param_1 + 0xa1) = *(char *)((long)param_1 + 0xa1) + '\x01';
      }
      break;
    case 2:
      uVar18 = (ulong)*(byte *)(param_1 + 0x13);
      if (*(byte *)(param_1 + 0x13) == 0) {
        *(undefined1 *)((long)param_1 + 0xa1) = 3;
        uVar18 = 0;
      }
      else {
        lVar11 = 0;
        uVar15 = 1;
        while( true ) {
          lVar10 = lVar10 + lVar11;
          if (*(char *)(lVar10 + 0x92) == '\0') {
            *(char *)(param_1 + 0x14) = (char)uVar15 + -1;
            *(char *)(lVar10 + 0x92) = (char)uVar18 + -1;
            lVar10 = param_1[0xb] + lVar11;
            lVar20 = param_1[0xb] + (ulong)*(byte *)(lVar10 + 0x92) * 0xa0;
            uVar22 = *(undefined8 *)(lVar20 + 0x18);
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar20 + 0x10);
            *(undefined8 *)(lVar10 + 0x28) = uVar22;
            plVar6 = (long *)(param_1[0xb] + lVar11);
            lVar10 = *plVar6;
            lVar20 = plVar6[5];
            *(long *)(lVar10 + 0x30) = plVar6[4];
            *(int *)(lVar10 + 0x38) = (int)lVar20;
            *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
            (**(code **)(**(long **)(param_1[0xb] + lVar11) + 0x120))
                      (*(long **)(param_1[0xb] + lVar11),&DAT_03a84812,0);
          }
          else {
            *(char *)(lVar10 + 0x92) = *(char *)(lVar10 + 0x92) + -1;
            lVar20 = param_1[0xb];
            lVar10 = lVar20 + lVar11;
            uVar16 = *(ushort *)((long)param_1 + 0x96) + 1;
            *(uint *)(lVar10 + 0x70) = uVar16;
            lVar20 = lVar20 + (ulong)*(byte *)(lVar10 + 0x92) * 0xa0;
            *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(lVar10 + 0x20);
            *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar10 + 0x28);
            uVar22 = *(undefined8 *)(lVar20 + 0x18);
            *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar20 + 0x10);
            *(undefined8 *)(lVar10 + 0x68) = uVar22;
            uVar24 = *(undefined8 *)(lVar20 + 0x18);
            uVar22 = *(undefined8 *)(lVar20 + 0x10);
            *(undefined4 *)(lVar10 + 0x74) = 0;
            *(undefined1 *)(lVar10 + 0x78) = 0;
            fVar23 = 1.0 / (float)uVar16;
            *(ulong *)(lVar10 + 0x88) =
                 CONCAT44(((float)((ulong)uVar24 >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20)) * fVar23,
                          ((float)uVar24 - (float)*(undefined8 *)(lVar10 + 0x28)) * fVar23);
            *(ulong *)(lVar10 + 0x80) =
                 CONCAT44(((float)((ulong)uVar22 >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20)) * fVar23,
                          ((float)uVar22 - (float)*(undefined8 *)(lVar10 + 0x20)) * fVar23);
          }
          uVar18 = (ulong)*(byte *)(param_1 + 0x13);
          if (uVar18 <= uVar15) break;
          lVar10 = param_1[0xb];
          lVar11 = lVar11 + 0xa0;
          uVar15 = uVar15 + 1;
        }
        *(char *)((long)param_1 + 0xa1) = *(char *)((long)param_1 + 0xa1) + '\x01';
        if (*(byte *)(param_1 + 0x13) != 0) goto LAB_02c31a7c;
      }
LAB_02c31b54:
      iVar7 = (int)uVar18;
      uVar16 = 0;
      goto LAB_02c31b58;
    case 3:
      uVar18 = (ulong)*(byte *)(param_1 + 0x13);
      if (*(byte *)(param_1 + 0x13) == 0) goto LAB_02c31b54;
LAB_02c31a7c:
      uVar15 = 0;
      uVar16 = 0;
      lVar10 = 0x80;
      do {
        if (uVar15 != *(byte *)(param_1 + 0x14)) {
          lVar11 = param_1[0xb];
          puVar4 = (undefined8 *)(lVar11 + lVar10);
          if ((*(uint *)((long)puVar4 + -0xc) < *(uint *)(puVar4 + -2)) &&
             (uVar3 = *(uint *)((long)puVar4 + -0xc) + 1, *(uint *)((long)puVar4 + -0xc) = uVar3,
             uVar3 < *(uint *)(puVar4 + -2))) {
            puVar19 = (undefined8 *)(lVar11 + uVar15 * 0xa0 + 0x50);
            puVar4[-5] = CONCAT44((float)((ulong)puVar4[-5] >> 0x20) +
                                  (float)((ulong)puVar4[1] >> 0x20),
                                  (float)puVar4[-5] + (float)puVar4[1]);
            puVar4[-6] = CONCAT44((float)((ulong)puVar4[-6] >> 0x20) +
                                  (float)((ulong)*puVar4 >> 0x20),(float)puVar4[-6] + (float)*puVar4
                                 );
          }
          else {
            puVar19 = puVar4 + -4;
            *(undefined1 *)(puVar4 + -1) = 1;
          }
          lVar11 = param_1[0xb];
          uVar22 = puVar19[1];
          *(undefined8 *)(lVar11 + lVar10 + -0x60) = *puVar19;
          *(undefined8 *)(lVar11 + lVar10 + -0x58) = uVar22;
          lVar11 = param_1[0xb] + lVar10;
          lVar20 = *(long *)(lVar11 + -0x80);
          uVar22 = *(undefined8 *)(lVar11 + -0x58);
          *(undefined8 *)(lVar20 + 0x30) = *(undefined8 *)(lVar11 + -0x60);
          *(int *)(lVar20 + 0x38) = (int)uVar22;
          *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 0x10;
          uVar16 = uVar16 + *(byte *)(param_1[0xb] + lVar10 + -8);
          uVar18 = (ulong)*(byte *)(param_1 + 0x13);
        }
        iVar7 = (int)uVar18;
        uVar15 = uVar15 + 1;
        lVar10 = lVar10 + 0xa0;
      } while (uVar15 < uVar18);
LAB_02c31b58:
      if (iVar7 - 1U <= uVar16) {
        *(undefined1 *)(*(long *)(param_1[0xb] + (ulong)*(byte *)(param_1 + 0x14) * 0xa0) + 0x59) =
             0xff;
        *(char *)((long)param_1 + 0xa1) = *(char *)((long)param_1 + 0xa1) + '\x01';
LAB_02c31b9c:
        *param_2 = 2;
        *(undefined4 *)(param_1 + 0x15) = 4;
        *(undefined4 *)((long)param_1 + 0x114) = 0;
        return 1;
      }
    }
LAB_02c31b68:
    *param_2 = 1;
    return 1;
  case 4:
    if (*(int *)((long)param_1 + 0x114) == 0) {
      *(undefined4 *)((long)param_1 + 0x114) = 1;
    }
    if (*(char *)((long)param_1 + 0xba) != '\0') goto switchD_02c31828_default;
    bVar1 = *(char *)((long)param_1 + 0x9e) + 1;
    *(byte *)((long)param_1 + 0x9e) = bVar1;
    if (bVar1 <= *(byte *)((long)param_1 + 0x9d)) goto switchD_02c31630_default;
    *(undefined1 *)((long)param_1 + 0x9e) = 0;
    psVar21 = *(short **)(param_1[0xf] + 0x58);
    iVar7 = (int)param_1[0x16];
    if (iVar7 == 0) {
LAB_02c31bc4:
      if (psVar21 != (short *)0x0) goto LAB_02c31bc8;
LAB_02c31bf8:
      uVar18 = 0;
      cVar5 = *(char *)((long)param_1 + 0xb9);
joined_r0x02c31f1c:
      if (cVar5 != '\0') goto LAB_02c31c04;
LAB_02c31f3c:
      (**(code **)(*param_1 + 0x58))
                (param_1,psVar21,
                 *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0));
      (**(code **)(*param_1 + 0x60))
                (param_1,psVar21,
                 *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0),
                 uVar18 & 0xffffffff);
      if ((char)param_1[0x17] == '\0') {
        return 1;
      }
    }
    else {
      iVar9 = iVar7;
      do {
        while( true ) {
          for (; sVar13 = *psVar21, sVar13 == 0x10;
              psVar21 = psVar21 + (ulong)(ushort)psVar21[1] + 2) {
          }
          if (sVar13 == 0) {
            if (iVar9 == 0) goto LAB_02c31bc4;
            psVar21 = (short *)0x0;
            goto LAB_02c31bf8;
          }
          if (sVar13 == 10) break;
          psVar21 = psVar21 + 1;
        }
        psVar21 = psVar21 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
LAB_02c31bc8:
      psVar12 = psVar21 + *(int *)((long)param_1 + 0xac);
      if (*psVar12 == 0x10) {
        *(undefined1 *)((long)param_1 + 0xb9) = 1;
        if (*psVar12 == 0x10) {
          sVar13 = psVar12[2];
        }
        else {
          sVar13 = 0;
        }
        *(short *)(param_1 + 0x18) = sVar13;
        if ((*psVar12 == 0x10) && (psVar12[1] != 0)) {
          uVar14 = psVar12[1] - 1;
        }
        else {
          uVar14 = 0;
        }
        uVar16 = (uint)uVar14;
        if (0xf < uVar16) {
          uVar16 = 0x10;
        }
        *(uint *)((long)param_1 + 0xc4) = uVar16;
        if (uVar16 != 0) {
          uVar18 = 0;
          do {
            if (*psVar12 == 0x10) {
              uVar14 = psVar12[1];
              if (uVar14 != 0) {
                if (uVar14 - 1 <= (uint)uVar18) goto LAB_02c31ea0;
                uVar14 = psVar12[(uint)uVar18 + 3];
              }
            }
            else {
LAB_02c31ea0:
              uVar14 = 0;
            }
            *(ushort *)((long)param_1 + uVar18 * 2 + 200) = uVar14;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar16);
        }
        if (*psVar12 == 0x10) {
          psVar12 = psVar12 + (ulong)(ushort)psVar12[1] + 2;
        }
LAB_02c31ef8:
        sVar13 = *psVar12;
      }
      else {
        *(undefined1 *)((long)param_1 + 0xb9) = 0;
        sVar13 = *psVar12;
        if ((sVar13 != 0) && (sVar13 != 10)) {
          psVar12 = psVar12 + 1;
          goto LAB_02c31ef8;
        }
      }
      uVar18 = (ulong)((long)psVar12 - (long)psVar21) >> 1;
      if (sVar13 == 10) {
        *(undefined4 *)((long)param_1 + 0xac) = 0;
        *(int *)(param_1 + 0x16) = iVar7 + 1;
      }
      else if (sVar13 != 0) {
        *(int *)((long)param_1 + 0xac) = (int)uVar18;
        *(undefined1 *)(param_1 + 0x17) = 0;
        cVar5 = *(char *)((long)param_1 + 0xb9);
        goto joined_r0x02c31f1c;
      }
      *(undefined1 *)(param_1 + 0x17) = 1;
      if (*(char *)((long)param_1 + 0xb9) == '\0') goto LAB_02c31f3c;
LAB_02c31c04:
      param_1[0x1d] = param_1[0x18];
      param_1[0x20] = param_1[0x1b];
      param_1[0x21] = param_1[0x1c];
      param_1[0x1e] = param_1[0x19];
      param_1[0x1f] = param_1[0x1a];
      if (*(ushort *)(param_1 + 0x1d) >> 1 == 0x5f00) {
        *(char *)((long)param_1 + 0x9b) = *(char *)((long)param_1 + 0x9b) + '\x01';
        *(char *)((long)param_1 + 0x9c) = *(char *)((long)param_1 + 0x9c) + '\x01';
        *param_2 = 1;
        uVar8 = 2;
        goto LAB_02c31fa0;
      }
      plVar6 = *(long **)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0);
      (**(code **)(*plVar6 + 0x130))(plVar6,psVar21,0,uVar18 & 0xffffffff);
      if ((char)param_1[0x17] == '\0') {
        uVar18 = (**(code **)(*param_1 + 0x88))(param_1,param_1 + 0x1d);
        if ((uVar18 & 1) != 0) goto LAB_02c31b68;
        *param_2 = 2;
        goto switchD_02c31630_default;
      }
    }
    uVar8 = 6;
    *param_2 = 1;
LAB_02c31fa0:
    *(undefined4 *)(param_1 + 0x15) = uVar8;
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    return 1;
  case 5:
    if ((*(byte *)((long)param_1 + 0x9b) < *(byte *)((long)param_1 + 0x99)) ||
       ((char)param_1[0x17] == '\0')) goto LAB_02c31b9c;
    break;
  case 6:
    bVar1 = *(char *)((long)param_1 + 0x9b) + 1;
    *(byte *)((long)param_1 + 0x9b) = bVar1;
    bVar2 = *(char *)((long)param_1 + 0x9c) + 1;
    *(byte *)((long)param_1 + 0x9c) = bVar2;
    if (*(byte *)((long)param_1 + 0x99) <= bVar1) break;
    if (bVar2 < *(byte *)(param_1 + 0x13)) {
      *(char *)((long)param_1 + 0x9f) = *(char *)((long)param_1 + 0x9f) + '\x01';
      FUN_02c31fac(param_1);
      (**(code **)(*param_1 + 0x80))(param_1);
      *(undefined4 *)(param_1 + 0x15) = 4;
      *(undefined4 *)((long)param_1 + 0x114) = 0;
      goto switchD_02c31630_default;
    }
    *(undefined2 *)(param_1 + 0x1d) = 0xbe00;
    uVar8 = 2;
    *(undefined8 *)((long)param_1 + 0xec) = 0;
    *(undefined8 *)((long)param_1 + 0xf4) = 0;
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
    *(undefined8 *)((long)param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x15) = 2;
    goto LAB_02c31958;
  default:
switchD_02c31630_default:
    uVar8 = 1;
    goto switchD_02c31630_caseD_1;
  }
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
LAB_02c31958:
  *(undefined4 *)((long)param_1 + 0x114) = 1;
switchD_02c31630_caseD_1:
  return uVar8;
}


