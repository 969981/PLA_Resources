/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026bbb4; name: FUN_0026bbb4
 */


uint FUN_0026bbb4(ulong param_1,char *param_2,long param_3,int param_4,uint param_5,long param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  int *piVar16;
  code *pcVar17;
  float *pfVar18;
  long lVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  code *local_c0;
  undefined8 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  
  uVar10 = *(uint *)(param_3 + 0xac);
  *(uint *)(param_3 + 0xac) = uVar10 * 0x41c64e6d + 0x3039;
  if (*(long *)(param_3 + 0x3f0) == 0) {
    pcVar17 = (code *)0x0;
    lVar14 = *(long *)(param_3 + 0x3e0);
    if (lVar14 != 0) goto LAB_0026bc1c;
    pcVar15 = (code *)0x0;
  }
  else {
    pcVar17 = *(code **)(*(long *)(param_3 + 0x3f0) + 0x38);
    lVar14 = *(long *)(param_3 + 0x3e0);
    pcVar15 = (code *)0x0;
    if (lVar14 != 0) {
LAB_0026bc1c:
      pcVar15 = *(code **)(lVar14 + 0x38);
    }
  }
  if (*(long *)(param_3 + 1000) == 0) {
    local_c0 = (code *)0x0;
  }
  else {
    local_c0 = *(code **)(*(long *)(param_3 + 1000) + 0x38);
  }
  fVar23 = (float)uVar10 * 2.3283064e-10;
  lVar14 = *(long *)(*(long *)(param_3 + 0x238) + 0x10);
  if (*(int *)(lVar14 + 0x874) == 0) {
    cVar4 = *(char *)(lVar14 + 0x838);
    lVar14 = *(long *)(param_3 + 0xa0);
    if (cVar4 == '\r') {
      uVar21 = *(undefined4 *)(lVar14 + 0x88c);
      uVar10 = *(uint *)(lVar14 + 0x888);
    }
    else {
      if (cVar4 != '\x02') goto LAB_0026bcc0;
      uVar21 = *(undefined4 *)(lVar14 + 0x884);
      uVar10 = *(uint *)(lVar14 + 0x880);
    }
    fVar22 = (float)NEON_ucvtf(uVar21);
    param_4 = (uVar10 - (int)(fVar23 * fVar22 * 0.01 * (float)uVar10)) * param_4;
  }
LAB_0026bcc0:
  if (*(char *)(param_3 + 0x6bd) != '\0') {
    if ((*param_2 == '\0') ||
       ((*(float *)(param_3 + 0x44) - *(float *)(*(long *)(param_3 + 0xb0) + 8)) -
        *(float *)(*(long *)(param_3 + 0xb0) + 0xc) <= 0.0)) {
      bVar6 = true;
      goto joined_r0x0026bfbc;
    }
    *(undefined1 *)(param_3 + 0x6bd) = 0;
  }
  bVar6 = false;
joined_r0x0026bfbc:
  if (param_4 < 1) {
    return 0xffffffff;
  }
  iVar20 = 0;
  uVar10 = 0xffffffff;
  uVar8 = param_1;
  if (!bVar6) goto LAB_0026bd2c;
  do {
    uVar12 = *(uint *)(param_3 + 0x234);
    bVar6 = true;
    while( true ) {
      lVar19 = (long)(int)uVar12;
      lVar14 = *(long *)(param_3 + 0xb0) + lVar19 * 0x20;
      if ((*(long *)(lVar14 + 0x18) != 0) || (*(long *)(lVar14 + 0x10) != 0)) {
        FUN_00271760(param_3,4);
        return uVar10;
      }
      *param_2 = '\x01';
      lVar14 = param_3 + 0x1d0;
      if (*(char *)(*(long *)(param_3 + 0xa0) + 0x752) != '\0') {
        lVar14 = *(long *)(param_3 + 0xc0);
      }
      if (*(int *)(*(long *)(param_3 + 0x238) + 0x88) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(param_3 + 0xb8) + lVar19 * 0x158;
      }
      uVar8 = FUN_0026bffc(fVar23,uVar8,param_3,uVar12,*(long *)(param_3 + 0xb0) + lVar19 * 0x20,
                           lVar9,lVar14,uVar12,iVar20,param_4,param_6);
      if ((uVar8 & 1) != 0) {
        *(uint *)(param_3 + 0x6b8) = uVar12;
        puVar1 = (undefined4 *)(*(long *)(lVar14 + 8) + lVar19 * 0x10);
        puVar2 = (undefined4 *)(*(long *)(lVar14 + 0x10) + lVar19 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        if (*(long *)(param_3 + 0x548) != 0) {
          uVar8 = FUN_0026b7f8(param_1,param_3,uVar12);
        }
        if (param_6 == 0) {
          local_98 = 0;
        }
        else {
          local_98 = *(undefined8 *)(param_6 + 0x50);
        }
        uStack_7c = *(undefined4 *)(*(long *)(param_3 + 0xb0) + lVar19 * 0x20 + 0xc);
        local_90 = 0;
        local_80 = 0;
        lStack_88 = param_3;
        local_78 = uVar12;
        if (pcVar17 != (code *)0x0) {
          uVar8 = (*pcVar17)(&local_98);
        }
        if (pcVar15 == (code *)0x0) {
          if (local_c0 != (code *)0x0) {
            uVar8 = (*local_c0)(&local_98);
          }
        }
        else {
          uVar8 = (*pcVar15)(&local_98);
        }
        *(undefined8 *)(*(long *)(param_3 + 0xb0) + lVar19 * 0x20 + 0x18) = local_90;
        *(undefined8 *)(*(long *)(param_3 + 0xb0) + lVar19 * 0x20 + 0x10) = local_98;
        if (bVar6) {
          iVar3 = 0;
          if (uVar12 + 1 != *(int *)(param_3 + 0x230)) {
            iVar3 = uVar12 + 1;
          }
          *(int *)(param_3 + 0x234) = iVar3;
          if (*(int *)(param_3 + 0x28) < *(int *)(param_3 + 0x230)) {
            *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
          }
        }
        uVar10 = uVar12;
      }
      iVar20 = iVar20 + 1;
      if (iVar20 == param_4) {
        return uVar10;
      }
      if (*(char *)(param_3 + 0x6bd) != '\0') break;
LAB_0026bd2c:
      uVar12 = *(uint *)(param_3 + 0x234);
      if (*(char *)(param_3 + 0x6bc) == '\0' && ((param_5 ^ 1) & 1) == 0) {
        uVar5 = *(uint *)(param_3 + 0x28);
        if (uVar5 == 0) {
          uVar12 = 0;
LAB_0026bdc8:
          bVar6 = true;
LAB_0026bdcc:
          *(undefined1 *)(param_3 + 0x6bc) = 1;
          uVar13 = (ulong)uVar12;
        }
        else {
          if (*(char *)(*(long *)(param_3 + 0xa0) + 0x752) == '\0') {
            if (0 < (int)uVar5) {
              piVar16 = *(int **)(param_3 + 0xb0);
              uVar13 = 0;
              do {
                if (*piVar16 == 0) {
                  bVar6 = false;
                  goto LAB_0026bdd8;
                }
                uVar13 = uVar13 + 1;
                piVar16 = piVar16 + 8;
              } while (uVar5 != uVar13);
            }
            goto LAB_0026bdc8;
          }
          if ((int)uVar5 < 1) goto LAB_0026bdc8;
          lVar14 = 0;
          uVar13 = 0xffffffff;
          pfVar18 = (float *)(*(long *)(param_3 + 0xb0) + 0xc);
          bVar7 = true;
          do {
            fVar22 = (*(float *)(param_3 + 0x44) - pfVar18[-1]) - *pfVar18;
            uVar11 = (uint)lVar14;
            if (fVar22 <= 0.0) {
              uVar11 = (uint)uVar13;
            }
            uVar13 = (ulong)uVar11;
            lVar14 = lVar14 + 1;
            bVar6 = false;
            if (fVar22 <= 0.0) {
              bVar6 = bVar7;
            }
          } while ((lVar14 < (int)uVar5) && (pfVar18 = pfVar18 + 8, bVar7 = bVar6, fVar22 <= 0.0));
          if (uVar11 == 0xffffffff) goto LAB_0026bdcc;
        }
LAB_0026bdd8:
        uVar12 = (uint)uVar13;
      }
      else {
        bVar6 = true;
      }
    }
  } while( true );
}


