/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00565d2c; name: FUN_00565d2c
 */


undefined8 FUN_00565d2c(uint *param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte bVar11;
  ulong uVar12;
  undefined4 *puVar13;
  byte *local_190;
  ulong local_188 [33];
  char *local_80;
  ulong uStack_78;
  int local_64;
  
  uStack_78 = param_2[1];
  local_80 = (char *)*param_2;
  uVar8 = *param_1;
  if (((((uVar8 >> 9 & 1) == 0) || (uVar9 = uStack_78 - 2, uStack_78 < 2)) || (*local_80 != '(')) ||
     (local_80[1] != '?')) {
    FUN_0054f038(&local_190,"external/com_github_google_re2/re2/parse.cc",0x7fb);
                    /* try { // try from 00566220 to 0056622b has its CatchHandler @ 00566234 */
    FUN_00551750(local_188,"Bad call to ParseState::ParsePerlFlags");
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(&local_190);
  }
  pcVar7 = local_80 + 2;
  uStack_78 = uVar9;
  if (((uVar9 < 3) || (*pcVar7 != 'P')) || (local_80[3] != '<')) {
    local_80 = pcVar7;
    if (uVar9 != 0) {
      bVar3 = false;
      bVar11 = 0;
LAB_00565e28:
      do {
        uVar6 = (undefined4)uStack_78;
        if (3 < uStack_78) {
          uVar6 = 4;
        }
        puVar13 = *(undefined4 **)(param_1 + 6);
        iVar4 = FUN_00550ad0(local_80,uVar6);
        if (iVar4 == 0) {
LAB_00565ff4:
          *puVar13 = 0xc;
          *(undefined8 *)(puVar13 + 2) = 0;
          *(undefined8 *)(puVar13 + 4) = 0;
          return 0;
        }
        iVar4 = FUN_00550920(&local_190,local_80);
        if ((0x10ffff < (int)local_190) || ((iVar4 == 1 && ((int)local_190 == 0xfffd))))
        goto LAB_00565ff4;
        local_80 = local_80 + iVar4;
        uStack_78 = uStack_78 - (long)iVar4;
        if (iVar4 < 0) {
          return 0;
        }
        if (0x54 < (int)local_190) {
          switch((int)local_190) {
          case 0x55:
            if (bVar3) {
              uVar8 = uVar8 & 0x3fbf;
            }
            else {
              uVar8 = uVar8 | 0x40;
            }
            break;
          default:
            goto switchD_00565ea0_caseD_56;
          case 0x69:
            if (bVar3) {
              uVar8 = uVar8 & 0x3ffe;
            }
            else {
              uVar8 = uVar8 | 1;
            }
            break;
          case 0x6d:
            if (!bVar3) {
              uVar8 = uVar8 & 0x3fef;
            }
            else {
              uVar8 = uVar8 | 0x10;
            }
            bVar3 = bVar3;
            break;
          case 0x73:
            if (bVar3) {
              uVar8 = uVar8 & 0x3ff7;
            }
            else {
              uVar8 = uVar8 | 8;
            }
          }
          bVar11 = 1;
          if (uStack_78 == 0) break;
          goto LAB_00565e28;
        }
        if ((int)local_190 != 0x2d) {
          if ((int)local_190 != 0x29) {
            if ((int)local_190 != 0x3a) break;
            lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x28);
            if (lVar5 != 0) {
              FUN_0055da3c(lVar5,0x16,*param_1);
            }
            *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
            FUN_00562088(param_1,lVar5);
          }
          if ((bool)(bVar11 | bVar3 ^ 1U)) {
            *param_1 = uVar8;
            param_2[1] = uStack_78;
            *param_2 = (long)local_80;
            return 1;
          }
          break;
        }
        if (bVar3) break;
        bVar11 = 0;
        bVar3 = true;
      } while (uStack_78 != 0);
    }
switchD_00565ea0_caseD_56:
    puVar13 = *(undefined4 **)(param_1 + 6);
    *puVar13 = 0xb;
    lVar5 = *param_2;
    *(long *)(puVar13 + 2) = lVar5;
    *(long *)(puVar13 + 4) = (long)local_80 - lVar5;
    return 0;
  }
  local_80 = pcVar7;
  lVar5 = FUN_0056a668(&local_80,0x3e,2);
  if (lVar5 == -1) {
    puVar13 = *(undefined4 **)(param_1 + 6);
    lVar5 = *param_2;
    uVar9 = param_2[1];
    do {
      if (uVar9 == 0) {
        puVar13 = *(undefined4 **)(param_1 + 6);
        *puVar13 = 0xd;
        lVar5 = *param_2;
        *(long *)(puVar13 + 4) = param_2[1];
        *(long *)(puVar13 + 2) = lVar5;
        return 0;
      }
      uVar6 = (undefined4)uVar9;
      if (3 < uVar9) {
        uVar6 = 4;
      }
      iVar4 = FUN_00550ad0(lVar5,uVar6);
      if (iVar4 == 0) {
LAB_005661c0:
        *puVar13 = 0xc;
        *(undefined8 *)(puVar13 + 2) = 0;
        *(undefined8 *)(puVar13 + 4) = 0;
        return 0;
      }
      iVar4 = FUN_00550920(&local_190,lVar5);
      if ((0x10ffff < (int)local_190) || ((iVar4 == 1 && ((int)local_190 == 0xfffd))))
      goto LAB_005661c0;
      lVar5 = lVar5 + iVar4;
      uVar9 = uVar9 - (long)iVar4;
    } while (-1 < iVar4);
  }
  else {
    pcVar7 = local_80 + -2;
    pbVar10 = (byte *)(local_80 + 2);
    uVar9 = lVar5 - 2;
    puVar13 = *(undefined4 **)(param_1 + 6);
    pbVar1 = pbVar10;
    local_190 = pbVar10;
    uVar12 = uVar9;
    local_188[0] = uVar9;
    do {
      if (uVar12 == 0) {
        if (uVar9 != 0) {
          while (((bVar11 = *pbVar10, bVar11 - 0x30 < 10 || (bVar11 - 0x61 & 0xff) < 0x1a ||
                  (bVar11 == 0x5f)) || ((byte)(bVar11 + 0xbf) < 0x1a))) {
            uVar9 = uVar9 - 1;
            pbVar10 = pbVar10 + 1;
            if (uVar9 == 0) {
              FUN_00562c10(param_1,&local_190);
              lVar2 = *param_2;
              *param_2 = (long)(pcVar7 + lVar5 + 3);
              param_2[1] = (lVar2 - (long)(pcVar7 + lVar5 + 3)) + param_2[1];
              return 1;
            }
          }
        }
        puVar13 = *(undefined4 **)(param_1 + 6);
        *puVar13 = 0xd;
        *(char **)(puVar13 + 2) = pcVar7;
        *(long *)(puVar13 + 4) = lVar5 + 3;
        return 0;
      }
      uVar6 = (undefined4)uVar12;
      if (3 < uVar12) {
        uVar6 = 4;
      }
      iVar4 = FUN_00550ad0(pbVar1,uVar6);
      if (((iVar4 == 0) || (iVar4 = FUN_00550920(&local_64,pbVar1), 0x10ffff < local_64)) ||
         ((iVar4 == 1 && (local_64 == 0xfffd)))) {
        *puVar13 = 0xc;
        *(undefined8 *)(puVar13 + 2) = 0;
        *(undefined8 *)(puVar13 + 4) = 0;
        return 0;
      }
      pbVar1 = pbVar1 + iVar4;
      uVar12 = uVar12 - (long)iVar4;
    } while (-1 < iVar4);
  }
  return 0;
}


