/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00378bf0; name: FUN_00378bf0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00378bf0(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  void *pvVar14;
  ulong *puVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar16;
  char cVar23;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  byte *local_70;
  
  if (*(int *)(param_1 + 0x28) == 5) {
    do {
      FUN_003a0640(param_1 + 0x28);
    } while (*(int *)(param_1 + 0x28) == 5);
    return 1;
  }
  uStack_78 = 0;
  local_70 = (byte *)0x0;
  local_80 = 0x5b02;
  puVar15 = (ulong *)(param_1 + 0x30);
  bVar2 = *(byte *)puVar15;
  uVar4 = (ulong)(bVar2 >> 1);
  uVar8 = uVar4;
  if ((bVar2 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x38);
  }
  lVar13 = param_1 + 0x28;
  if (uVar8 == 1) {
    if ((bVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar6 = (char *)((ulong)&local_80 | 2);
        do {
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_00378cc0;
          cVar17 = *pcVar6;
          cVar18 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar18 == cVar17);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '[') {
LAB_00378cc0:
                    /* try { // try from 00378cc0 to 00378cc7 has its CatchHandler @ 00379410 */
      FUN_003a0640(lVar13);
      puVar3 = PTR_LAB_04373088;
      pcVar7 = (char *)(param_1 + 0x32);
      do {
        uStack_78 = 0;
        local_70 = (byte *)0x0;
        local_80 = 0x7b02;
        bVar2 = *(byte *)(param_1 + 0x30);
        uVar4 = (ulong)(bVar2 >> 1);
        uVar8 = uVar4;
        if ((bVar2 & 1) != 0) {
          uVar8 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar8 == 1) {
          if ((bVar2 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '{') {
              pcVar6 = (char *)((ulong)&local_80 | 2);
              pcVar10 = pcVar7;
              uVar8 = uVar4;
              do {
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_00378df4;
                cVar17 = *pcVar6;
                cVar18 = *pcVar10;
                pcVar6 = pcVar6 + 1;
                pcVar10 = pcVar10 + 1;
              } while (cVar18 == cVar17);
            }
LAB_00378d90:
            uStack_90 = 0;
            local_88 = 0;
            local_98 = 0x3c02;
            if ((bVar2 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == '<') {
                pcVar6 = (char *)((ulong)&local_98 | 2);
                pcVar10 = pcVar7;
                do {
                  uVar4 = uVar4 - 1;
                  if (uVar4 == 0) goto LAB_00378df4;
                  cVar17 = *pcVar6;
                  cVar18 = *pcVar10;
                  pcVar6 = pcVar6 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (cVar18 == cVar17);
              }
            }
            else if (**(char **)(param_1 + 0x40) == '<') goto LAB_00378df4;
            goto LAB_00378e04;
          }
          if (**(char **)(param_1 + 0x40) != '{') goto LAB_00378d90;
LAB_00378df4:
          uVar8 = FUN_00379470(param_1);
        }
        else {
LAB_00378e04:
          local_88 = 0;
          uStack_90 = 0;
          local_98 = 0x3c02;
          uVar8 = FUN_00378bf0(param_1);
        }
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        uStack_78 = 0;
        local_70 = (byte *)0x0;
        local_80 = 0x5d02;
        bVar2 = *(byte *)(param_1 + 0x30);
        uVar4 = (ulong)(bVar2 >> 1);
        uVar8 = uVar4;
        if ((bVar2 & 1) != 0) {
          uVar8 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar8 == 1) {
          if ((bVar2 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ']') {
              pcVar6 = (char *)((ulong)&local_80 | 2);
              pcVar10 = pcVar7;
              do {
                uVar4 = uVar4 - 1;
                if (uVar4 == 0) goto LAB_00379110;
                cVar17 = *pcVar6;
                cVar18 = *pcVar10;
                pcVar6 = pcVar6 + 1;
                pcVar10 = pcVar10 + 1;
              } while (cVar18 == cVar17);
            }
          }
          else if (**(char **)(param_1 + 0x40) == ']') {
LAB_00379110:
                    /* try { // try from 00379110 to 00379117 has its CatchHandler @ 003793e4 */
            FUN_003a0640(lVar13);
            return 1;
          }
        }
        uStack_78 = 0;
        local_70 = (byte *)0x0;
        local_80 = 0x2c02;
                    /* try { // try from 00378e98 to 00378ea3 has its CatchHandler @ 0037945c */
        uVar8 = FUN_003780a4(param_1,&local_80);
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_70);
        }
        if ((uVar8 & 1) == 0) {
          return 0;
        }
      } while( true );
    }
  }
  uStack_78 = 0;
  local_70 = (byte *)0x0;
  local_80 = 0x2d02;
  bVar2 = *(byte *)(param_1 + 0x30);
  uVar4 = (ulong)(bVar2 >> 1);
  uVar8 = uVar4;
  if ((bVar2 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar8 == 1) {
    if ((bVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '-') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar6 = (char *)((ulong)&local_80 | 2);
        do {
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_00378ff4;
          cVar17 = *pcVar6;
          cVar18 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar18 == cVar17);
        goto LAB_00378f30;
      }
    }
    else if (**(char **)(param_1 + 0x40) == '-') {
LAB_00378ff4:
                    /* try { // try from 00378ff4 to 00378ffb has its CatchHandler @ 00379404 */
      FUN_003a0640(lVar13);
      bVar2 = 1;
      iVar1 = *(int *)(param_1 + 0x28);
      goto joined_r0x0037900c;
    }
    bVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
LAB_00378f30:
    bVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
  }
joined_r0x0037900c:
  if (2 < iVar1 - 2U) {
    uStack_78 = 0;
    local_70 = (byte *)0x0;
    local_80 = 0;
    if ((*(byte *)puVar15 & 1) == 0) {
      uStack_78 = *(ulong *)(param_1 + 0x38);
      local_80 = *puVar15;
      local_70 = *(byte **)(param_1 + 0x40);
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x38);
      if (0xffffffffffffffef < uVar8) {
LAB_003793dc:
        local_70 = (byte *)0x0;
        uStack_78 = 0;
        local_80 = 0;
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pvVar14 = *(void **)(param_1 + 0x40);
      if (uVar8 < 0x17) {
        local_80 = (ulong)(byte)((int)uVar8 << 1);
        pbVar12 = (byte *)((ulong)&local_80 | 1);
        if (uVar8 != 0) goto LAB_003790d4;
      }
      else {
        uVar4 = uVar8 + 0x10 & 0xfffffffffffffff0;
        pbVar12 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
        local_80 = uVar4 | 1;
        uStack_78 = uVar8;
        local_70 = pbVar12;
LAB_003790d4:
        memcpy(pbVar12,pvVar14,uVar8);
      }
      pbVar12[uVar8] = 0;
    }
                    /* try { // try from 003790e8 to 003790fb has its CatchHandler @ 00379458 */
    FUN_0034b2f0(&local_98,"Cannot skip field value, unexpected token: ",&local_80);
                    /* try { // try from 00379100 to 0037910b has its CatchHandler @ 0037941c */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_98);
    goto LAB_00379388;
  }
  if ((bool)(bVar2 ^ 1 | iVar1 != 2)) goto LAB_00379324;
  uStack_78 = 0;
  local_70 = (byte *)0x0;
  local_80 = 0;
  if ((*(byte *)puVar15 & 1) == 0) {
    uStack_78 = *(ulong *)(param_1 + 0x38);
    local_80 = *puVar15;
    local_70 = *(byte **)(param_1 + 0x40);
    uVar8 = local_80 & 0xff;
    if ((local_80 & 1) == 0) goto LAB_00378f7c;
LAB_00379284:
    pbVar5 = local_70 + uStack_78;
    pbVar12 = local_70;
    if (local_70 != pbVar5) goto LAB_00378f90;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x38);
    if (0xffffffffffffffef < uVar8) goto LAB_003793dc;
    pvVar14 = *(void **)(param_1 + 0x40);
    if (uVar8 < 0x17) {
      local_80 = (ulong)(byte)((int)uVar8 << 1);
      pbVar12 = (byte *)((ulong)&local_80 | 1);
      if (uVar8 != 0) goto LAB_00379268;
    }
    else {
      uVar4 = uVar8 + 0x10 & 0xfffffffffffffff0;
      pbVar12 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
      local_80 = uVar4 | 1;
      uStack_78 = uVar8;
      local_70 = pbVar12;
LAB_00379268:
      memcpy(pbVar12,pvVar14,uVar8);
    }
    pbVar12[uVar8] = 0;
    uVar8 = local_80 & 0xff;
    if ((local_80 & 1) != 0) goto LAB_00379284;
LAB_00378f7c:
    pbVar12 = (byte *)((ulong)&local_80 | 1);
    pbVar5 = pbVar12 + (uVar8 >> 1);
    if (pbVar12 != pbVar5) {
LAB_00378f90:
      uVar8 = (long)pbVar5 - (long)pbVar12;
      if (uVar8 < 8) {
        bVar2 = *pbVar12;
        goto joined_r0x00378fac;
      }
      uVar11 = uVar8 & 0xfffffffffffffff8;
      pbVar9 = pbVar12 + uVar11;
      pbVar12 = pbVar12 + 3;
      uVar4 = uVar11;
      do {
        uVar16 = *(undefined8 *)(pbVar12 + -3);
        cVar17 = (char)((ulong)uVar16 >> 8);
        cVar18 = (char)((ulong)uVar16 >> 0x10);
        cVar19 = (char)((ulong)uVar16 >> 0x18);
        cVar20 = (char)((ulong)uVar16 >> 0x20);
        cVar21 = (char)((ulong)uVar16 >> 0x28);
        cVar22 = (char)((ulong)uVar16 >> 0x30);
        cVar23 = (char)((ulong)uVar16 >> 0x38);
        if ((byte)((char)uVar16 + 0xbfU) < 0x1a) {
          pbVar12[-3] = (char)uVar16 + 0x20;
        }
        if ((byte)(cVar17 + 0xbfU) < 0x1a) {
          pbVar12[-2] = cVar17 + 0x20;
        }
        if ((byte)(cVar18 + 0xbfU) < 0x1a) {
          pbVar12[-1] = cVar18 + 0x20;
        }
        if ((byte)(cVar19 + 0xbfU) < 0x1a) {
          *pbVar12 = cVar19 + 0x20;
        }
        if ((byte)(cVar20 + 0xbfU) < 0x1a) {
          pbVar12[1] = cVar20 + 0x20;
        }
        if ((byte)(cVar21 + 0xbfU) < 0x1a) {
          pbVar12[2] = cVar21 + 0x20;
        }
        if ((byte)(cVar22 + 0xbfU) < 0x1a) {
          pbVar12[3] = cVar22 + 0x20;
        }
        if ((byte)(cVar23 + 0xbfU) < 0x1a) {
          pbVar12[4] = cVar23 + 0x20;
        }
        uVar4 = uVar4 - 8;
        pbVar12 = pbVar12 + 8;
      } while (uVar4 != 0);
      if (uVar11 != uVar8) {
        do {
          while( true ) {
            bVar2 = *pbVar9;
            pbVar12 = pbVar9;
joined_r0x00378fac:
            if (bVar2 - 0x41 < 0x1a) break;
            pbVar9 = pbVar12 + 1;
            if (pbVar5 == pbVar9) goto LAB_00379238;
          }
          pbVar9 = pbVar12 + 1;
          *pbVar12 = bVar2 + 0x20;
        } while (pbVar5 != pbVar9);
      }
LAB_00379238:
      uVar8 = local_80 & 0xff;
    }
  }
  uVar4 = uVar8 >> 1;
  if ((uVar8 & 1) != 0) {
    uVar4 = uStack_78;
  }
  if (uVar4 == 8) {
    pbVar12 = (byte *)((ulong)&local_80 | 1);
    if ((uVar8 & 1) != 0) {
      pbVar12 = local_70;
    }
    if (*(long *)pbVar12 == 0x7974696e69666e69) {
LAB_00379314:
      if ((uVar8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
LAB_00379324:
      FUN_003a0640(lVar13);
      return 1;
    }
  }
  else if (uVar4 == 3) {
    pbVar12 = (byte *)((ulong)&local_80 | 1);
    if ((uVar8 & 1) != 0) {
      pbVar12 = local_70;
    }
    if ((*(short *)pbVar12 == 0x6e69 && pbVar12[2] == 0x66) ||
       (*(short *)pbVar12 == 0x616e && pbVar12[2] == 0x6e)) goto LAB_00379314;
  }
                    /* try { // try from 00379364 to 00379377 has its CatchHandler @ 00379400 */
  FUN_0034b2f0(&local_98,"Invalid float number: ",&local_80);
                    /* try { // try from 0037937c to 00379387 has its CatchHandler @ 003793f0 */
  FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_98);
LAB_00379388:
  if (((byte)local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return 0;
}


