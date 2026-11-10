/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3a78; name: FUN_007e3a78
 */


/* WARNING: Removing unreachable block (ram,0x007e3e88) */
/* WARNING: Removing unreachable block (ram,0x007e3d98) */
/* WARNING: Removing unreachable block (ram,0x007e3e70) */
/* WARNING: Removing unreachable block (ram,0x007e3b88) */
/* WARNING: Removing unreachable block (ram,0x007e3d80) */

void FUN_007e3a78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  char *pcVar16;
  int iVar17;
  size_t sVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int local_d0 [3];
  char acStack_c2 [50];
  char local_90 [8];
  ushort local_88 [4];
  ushort local_80;
  ushort local_7e;
  ushort local_7c;
  ushort local_7a;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58 [2];
  
  piVar7 = local_d0;
  local_90[6] = 0;
  local_78 = 0;
  pcVar3 = (char *)FUN_007ec6e4(param_3);
  local_90[7] = '\0';
  pcVar4 = strchr(pcVar3,0x2e);
  if (pcVar4 == (char *)0x0) {
    local_90[6] = '\x01';
    if (*pcVar3 == '[') {
      local_90[7] = '\x01';
      pcVar4 = strstr(pcVar3,"]:");
      if (pcVar4 == (char *)0x0) goto LAB_007e3ff0;
      pcVar3 = pcVar3 + 1;
    }
    else {
      pcVar4 = (char *)0x0;
    }
    uVar6 = FUN_007e4600(acStack_c2 + 2,pcVar3,pcVar4,2);
joined_r0x007e3cb0:
    if ((uVar6 & 1) != 0) {
LAB_007e3bdc:
      if (local_90[6] == '\0') {
        pcVar3 = (char *)FUN_0081f07c(acStack_c2 + 2,0x2e,local_d0,1);
        if (pcVar3 != (char *)0x0) {
          lVar19 = 0;
          do {
            if (((lVar19 == 8) || (uVar6 = strtol(pcVar3,(char **)&local_70,10), 0xff < uVar6)) ||
               (*local_70 != '\0')) goto LAB_007e3ff0;
            *(short *)((long)local_88 + lVar19) = (short)uVar6;
            pcVar3 = (char *)FUN_0081f07c(0,0x2e,local_d0,1);
            lVar19 = lVar19 + 2;
          } while (pcVar3 != (char *)0x0);
          if ((int)lVar19 == 8) {
LAB_007e3fac:
            if (local_90[7] != '\0') {
              uVar6 = strtol(local_90,(char **)&local_70,10);
              if ((uVar6 >> 0x10 != 0) || (*local_70 != '\0')) {
                local_70 = (char *)CONCAT44(local_70._4_4_,0x10407);
                goto LAB_007e4000;
              }
              local_78 = (undefined2)uVar6;
            }
            local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
            goto LAB_007e4000;
          }
        }
      }
      else {
        pcVar3 = strstr(acStack_c2 + 2,"::");
        if (pcVar3 == (char *)0x0) goto LAB_007e3f04;
        pcVar4 = strstr(pcVar3 + 1,"::");
        if (pcVar4 == (char *)0x0) {
          sVar5 = strlen(acStack_c2 + 2);
          iVar17 = 6;
          if ((pcVar3 != acStack_c2 + 2) && (acStack_c2[2] != '\0')) {
            iVar17 = 0;
            pcVar4 = (char *)((ulong)(acStack_c2 + 2) | 1);
            cVar13 = acStack_c2[2];
            do {
              if (cVar13 == ':') {
                iVar17 = iVar17 + 1;
              }
              cVar13 = *pcVar4;
            } while ((pcVar3 != pcVar4) && (pcVar4 = pcVar4 + 1, cVar13 != '\0'));
            iVar17 = 6 - iVar17;
          }
          cVar13 = pcVar3[2];
          if (cVar13 != '\0') {
            iVar14 = 0;
            pcVar4 = pcVar3 + 3;
            do {
              if (cVar13 == ':') {
                iVar14 = iVar14 + 1;
              }
              cVar13 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar13 != '\0');
            iVar17 = iVar17 - iVar14;
          }
          if (0 < iVar17) {
            puVar11 = &local_70;
            if (pcVar3 == acStack_c2 + 2) {
              puVar11 = (undefined8 *)((ulong)puVar11 | 1);
              local_70 = (char *)CONCAT71(local_70._1_7_,0x30);
            }
            puVar1 = (undefined1 *)((long)puVar11 + 1);
            do {
              puVar20 = puVar1;
              memcpy(puVar20 + -1,&DAT_039991c4,2);
              iVar17 = iVar17 + -1;
              puVar1 = puVar20 + 2;
            } while (iVar17 != 0);
            puVar20[1] = 0x3a;
            puVar21 = puVar1;
            if (pcVar3 == acStack_c2 + sVar5) {
              puVar21 = puVar20 + 3;
              *puVar1 = 0x30;
            }
            *puVar21 = 0;
            if ((sVar5 + (long)((int)puVar21 - (int)&local_70)) - 2 < 0x2f) {
              if ((char)local_70 == '\0') {
                lVar19 = 0;
                pcVar4 = pcVar3;
LAB_007e3e94:
                FUN_0081ef98(pcVar4,local_90 + (-lVar19 - (long)pcVar3),pcVar3 + 2);
                if (lVar19 == -1) {
                  if ((char)local_70 != '\0') {
                    pcVar3 = (char *)((ulong)&local_70 | 1);
                    do {
                      cVar13 = *pcVar3;
                      pcVar3 = pcVar3 + 1;
                    } while (cVar13 != '\0');
                  }
                }
                else if (0 < lVar19) goto LAB_007e3ec0;
              }
              else {
                lVar19 = 0;
                do {
                  pcVar4 = (char *)(((ulong)&local_70 | 1) + lVar19);
                  lVar19 = lVar19 + 1;
                } while (*pcVar4 != '\0');
                pcVar4 = pcVar3 + lVar19;
                if (lVar19 != 2) goto LAB_007e3e94;
LAB_007e3ec0:
                pcVar12 = (char *)&local_70;
                do {
                  pcVar16 = pcVar3 + 1;
                  lVar19 = lVar19 + -1;
                  *pcVar3 = *pcVar12;
                  if (lVar19 == 0) break;
                  pcVar12 = pcVar12 + 1;
                  pcVar3 = pcVar16;
                } while (pcVar16 < pcVar4);
              }
LAB_007e3f04:
              bVar2 = local_90[6] == '\0';
              uVar8 = 8;
              if (bVar2) {
                uVar8 = 4;
              }
              uVar9 = 0x3a;
              if (bVar2) {
                uVar9 = 0x2e;
              }
              iVar17 = 0x10;
              if (bVar2) {
                iVar17 = 10;
              }
              uVar6 = 0xffff;
              if (bVar2) {
                uVar6 = 0xff;
              }
              pcVar3 = (char *)FUN_0081f07c(acStack_c2 + 2,uVar9,local_d0,1);
              if (pcVar3 != (char *)0x0) {
                uVar10 = 0;
                do {
                  if (((uVar8 == uVar10) ||
                      (uVar15 = strtol(pcVar3,(char **)&local_70,iVar17), uVar6 < uVar15)) ||
                     (*local_70 != '\0')) goto LAB_007e3ff0;
                  local_88[uVar10] = (ushort)uVar15;
                  uVar10 = uVar10 + 1;
                  pcVar3 = (char *)FUN_0081f07c(0,uVar9,local_d0,1);
                } while (pcVar3 != (char *)0x0);
                if (uVar8 == (uint)uVar10) goto LAB_007e3fac;
              }
            }
          }
        }
      }
    }
  }
  else {
    local_90[6] = '\0';
    pcVar4 = strchr(pcVar3,0x3a);
    if (pcVar4 == (char *)0x0) {
      uVar6 = FUN_007e4600(acStack_c2 + 2,pcVar3,0,1);
      goto joined_r0x007e3cb0;
    }
    local_90[7] = '\x01';
    uVar10 = (long)pcVar4 - (long)pcVar3;
    uVar6 = uVar10;
    if (0x2e < uVar10) {
      uVar6 = 0x2f;
    }
    if (uVar6 != 0) {
      uVar15 = 0;
      do {
        if (pcVar3[uVar15] == '\0') break;
        acStack_c2[uVar15 + 2] = pcVar3[uVar15];
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar6);
      acStack_c2[uVar15 + 2] = '\0';
      if (uVar15 != uVar10) goto LAB_007e3ff0;
LAB_007e3b28:
      pcVar3 = pcVar4 + 1;
      local_90[0] = *pcVar3;
      if (local_90[0] == '\0') {
        local_90[0] = '\0';
        strlen(pcVar3);
        goto LAB_007e3ff0;
      }
      local_90[1] = pcVar4[2];
      if (local_90[1] == '\0') {
        sVar18 = 1;
        local_90[1] = '\0';
        sVar5 = strlen(pcVar3);
      }
      else {
        local_90[2] = pcVar4[3];
        if (local_90[2] == '\0') {
          sVar18 = 2;
          local_90[2] = '\0';
          sVar5 = strlen(pcVar3);
        }
        else {
          local_90[3] = pcVar4[4];
          if (local_90[3] == '\0') {
            sVar18 = 3;
            local_90[3] = '\0';
            sVar5 = strlen(pcVar3);
          }
          else {
            local_90[4] = pcVar4[5];
            if (local_90[4] == '\0') {
              sVar18 = 4;
              local_90[4] = '\0';
              sVar5 = strlen(pcVar3);
            }
            else {
              sVar18 = 5;
              local_90[5] = 0;
              sVar5 = strlen(pcVar3);
            }
          }
        }
      }
      if (sVar18 != sVar5) goto LAB_007e3ff0;
      goto LAB_007e3bdc;
    }
    acStack_c2[2] = '\0';
    if (uVar10 == 0) goto LAB_007e3b28;
  }
LAB_007e3ff0:
  local_70 = (char *)CONCAT44(local_70._4_4_,0x10407);
LAB_007e4000:
  local_d0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_70 | 4),(Result *)local_d0);
  FUN_007ee578(local_d0,&local_70);
  if (local_d0[0] == 0) {
    if (local_90[6] == '\0') {
      local_70 = (char *)CONCAT44(local_70._4_4_,
                                  (uint)local_88[1] * 0x10000 + (uint)local_88[0] * 0x1000000 +
                                  (uint)local_88[2] * 0x100 + (uint)local_88[3]);
      memset((void *)(param_2 + 8),0,0x10);
      memcpy((void *)(param_2 + 8),&local_70,4);
    }
    else {
      local_70 = (char *)CONCAT26(local_88[3] >> 8 | local_88[3] << 8,
                                  CONCAT24(local_88[2] >> 8 | local_88[2] << 8,
                                           CONCAT22(local_88[1] >> 8 | local_88[1] << 8,
                                                    local_88[0] >> 8 | local_88[0] << 8)));
      local_68 = CONCAT26(local_7a >> 8 | local_7a << 8,
                          CONCAT24(local_7c >> 8 | local_7c << 8,
                                   CONCAT22(local_7e >> 8 | local_7e << 8,
                                            local_80 >> 8 | local_80 << 8)));
      memset((void *)(param_2 + 8),0,0x10);
      memcpy((void *)(param_2 + 8),&local_70,0x10);
    }
    if (local_90[7] != '\0') {
      *(undefined2 *)(param_2 + 0x18) = local_78;
    }
    local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_70 | 4),(Result *)local_58);
    piVar7 = (int *)&local_70;
  }
  FUN_007ee578(param_1,piVar7);
  return;
}


