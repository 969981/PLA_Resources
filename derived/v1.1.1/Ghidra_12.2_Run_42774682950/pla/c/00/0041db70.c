/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041db70; name: FUN_0041db70
 */


/* WARNING: Removing unreachable block (ram,0x0041ddc4) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0041db70(uint *param_1,undefined8 *param_2,undefined8 param_3,char *param_4,uint param_5,
                  undefined4 param_6,char param_7,undefined1 *param_8)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  uint *puVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  undefined4 *puVar16;
  char *local_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *local_a0;
  char local_94 [4];
  char local_90 [4];
  char local_8c [4];
  char *local_88;
  uint local_7c;
  char *local_78;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  char *local_68;
  
  local_94[0] = '\0';
  pcStack_b8 = (char *)0x0;
  local_c0 = (char *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (param_1 == (uint *)0x0) {
    uVar8 = 0x7d;
    uVar9 = 0x28d;
    goto LAB_0041dc14;
  }
  if (*param_4 == '\x05') {
    uVar6 = 0xffffffff;
    local_7c = param_5;
  }
  else {
    local_7c = *(uint *)(param_4 + 8);
    uVar6 = param_5;
  }
  if (local_7c == 0xfffffffc) {
    if (-1 < (int)uVar6) {
      uVar9 = 0x29b;
      uVar8 = 0x7f;
      goto LAB_0041dc14;
    }
    if (param_7 != '\0') {
      uVar9 = 0x2a0;
      uVar8 = 0x7e;
      goto LAB_0041dc14;
    }
    local_a0 = (char *)*param_2;
    iVar7 = FUN_0041e390(0,&local_7c,&local_68,0,0,&local_a0,param_3,0xffffffff,0,0,param_8);
    if (iVar7 == 0) {
      uVar8 = 0x3a;
      uVar9 = 0x2a7;
      goto LAB_0041dc14;
    }
    if ((char)local_68 != '\0') {
      local_7c = 0xfffffffd;
    }
  }
  uVar2 = local_7c;
  if (uVar6 != 0xffffffff) {
    uVar2 = uVar6;
  }
  local_a0 = (char *)*param_2;
  uVar3 = 0;
  if (uVar6 != 0xffffffff) {
    uVar3 = param_6;
  }
  uVar6 = FUN_0041e390(&local_88,0,0,local_90,local_8c,&local_a0,param_3,uVar2,uVar3,param_7,param_8
                      );
  if (uVar6 == 0xffffffff) {
    return 0xffffffff;
  }
  if (uVar6 == 0) {
    FUN_004014b0(0xd,0x6c,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0x2b6);
    return 0;
  }
  if (local_7c - 0x10 < 2) {
    if (local_8c[0] == '\0') {
      uVar8 = 0x9c;
      uVar9 = 0x2c8;
LAB_0041dc14:
      FUN_004014b0(0xd,0x6c,uVar8,"external/openssl/crypto/asn1/tasn_dec.c",uVar9);
      return 0;
    }
LAB_0041dd28:
    pcVar13 = (char *)*param_2;
    if (local_90[0] == '\0') {
      pcVar14 = local_a0 + ((long)local_88 - (long)pcVar13);
LAB_0041df44:
      local_a0 = local_a0 + (long)local_88;
      lVar11 = *(long *)(param_4 + 0x20);
      uVar6 = local_7c;
joined_r0x0041dfdc:
      local_7c = uVar6;
      local_68 = pcVar13;
      if ((lVar11 == 0) || (*(code **)(lVar11 + 0x28) == (code *)0x0)) {
        if (*(long *)(param_4 + 8) == -4) {
          puVar12 = *(uint **)param_1;
          if (puVar12 == (uint *)0x0) {
            puVar12 = (uint *)FUN_0041cfc0();
            if (puVar12 == (uint *)0x0) {
              FUN_0041cfd0();
              goto joined_r0x0041e168;
            }
            *(uint **)param_1 = puVar12;
          }
          if (*puVar12 != uVar6) {
            FUN_0041ec80(puVar12,uVar6,0);
          }
          puVar1 = puVar12 + 2;
          puVar4 = param_1;
        }
        else {
          puVar12 = (uint *)0x0;
          puVar4 = (uint *)0x0;
          puVar1 = param_1;
        }
        if (uVar6 - 1 < 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x0041e060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*(code *)(&UNK_0041e064 + (ulong)(byte)(&UNK_03a0458c)[uVar6 - 1] * 4))();
          return uVar15;
        }
        puVar16 = *(undefined4 **)puVar1;
        if (puVar16 != (undefined4 *)0x0) {
          puVar16[1] = uVar6;
joined_r0x0041e154:
          if (local_94[0] == '\0') {
            iVar7 = FUN_0040a280(puVar16,pcVar13,(ulong)pcVar14 & 0xffffffff);
            if (iVar7 == 0) {
              FUN_004014b0(0xd,0xcc,0x41,"external/openssl/crypto/asn1/tasn_dec.c",0x378);
              FUN_0040a4b0(puVar16);
              puVar1[0] = 0;
              puVar1[1] = 0;
              FUN_0041cfd0(puVar12);
              goto joined_r0x0041e1f4;
            }
          }
          else {
            FUN_00400420(*(undefined8 *)(puVar16 + 2),"external/openssl/crypto/asn1/tasn_dec.c",
                         0x372);
            *(char **)(puVar16 + 2) = pcVar13;
            *puVar16 = (int)pcVar14;
            local_94[0] = '\0';
          }
LAB_0041e298:
          *param_2 = local_a0;
          uVar15 = 1;
          goto joined_r0x0041e278;
        }
        puVar16 = (undefined4 *)FUN_0040a550(uVar6);
        if (puVar16 != (undefined4 *)0x0) {
          *(undefined4 **)puVar1 = puVar16;
          goto joined_r0x0041e154;
        }
        FUN_004014b0(0xd,0xcc,0x41,"external/openssl/crypto/asn1/tasn_dec.c",0x368);
        FUN_0041cfd0(puVar12);
joined_r0x0041e1f4:
        if (puVar4 != (uint *)0x0) {
          puVar4[0] = 0;
          puVar4[1] = 0;
        }
      }
      else {
        iVar7 = (**(code **)(lVar11 + 0x28))
                          (param_1,pcVar13,(ulong)pcVar14 & 0xffffffff,uVar6,local_94,param_4);
        if (iVar7 != 0) goto LAB_0041e298;
      }
joined_r0x0041e168:
      uVar15 = 0;
      goto joined_r0x0041e278;
    }
    if (0 < (long)local_88) {
      iVar7 = 1;
      pcVar14 = local_88;
      pcVar5 = local_a0;
      do {
        while (((pcVar14 != (char *)0x1 && (*pcVar5 == '\0')) && (pcVar5[1] == '\0'))) {
          pcVar10 = pcVar5 + 2;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_0041df1c;
          pcVar14 = pcVar14 + -2;
          pcVar5 = pcVar10;
          if ((long)pcVar14 < 1) goto LAB_0041e2b4;
        }
        local_78 = pcVar5;
        uVar6 = FUN_00409ce0(&local_78,&local_68,auStack_6c,auStack_70,pcVar14);
        if ((uVar6 >> 7 & 1) != 0) {
          FUN_004014b0(0xd,0x68,0x66,"external/openssl/crypto/asn1/tasn_dec.c",0x45e);
          FUN_004014b0(0xd,0xbe,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0x3b2);
joined_r0x0041e278:
          uVar15 = 0;
          goto joined_r0x0041e278;
        }
        if ((uVar6 & 1) != 0) {
          local_68 = pcVar5 + ((long)pcVar14 - (long)local_78);
        }
        if ((uVar6 & 1) == 0) {
          pcVar10 = local_78 + (long)local_68;
        }
        else {
          if (iVar7 == -1) {
            FUN_004014b0(0xd,0xbe,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0x3b7);
            goto joined_r0x0041e278;
          }
          iVar7 = iVar7 + 1;
          pcVar10 = local_78;
        }
        pcVar14 = pcVar5 + ((long)pcVar14 - (long)pcVar10);
        pcVar5 = pcVar10;
      } while (0 < (long)pcVar14);
      if (iVar7 == 0) {
LAB_0041df1c:
        pcVar14 = pcVar10 + -(long)pcVar13;
        lVar11 = *(long *)(param_4 + 0x20);
        local_a0 = pcVar10;
        uVar6 = local_7c;
        goto joined_r0x0041dfdc;
      }
    }
LAB_0041e2b4:
    FUN_004014b0(0xd,0xbe,0x89,"external/openssl/crypto/asn1/tasn_dec.c",0x3c1);
  }
  else {
    if (local_7c == 0xfffffffd) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      goto LAB_0041dd28;
    }
    if (local_8c[0] == '\0') {
      pcVar13 = local_a0;
      pcVar14 = local_88;
      goto LAB_0041df44;
    }
    if ((local_7c < 0xb) && ((1 << (ulong)(local_7c & 0x1f) & 0x466U) != 0)) {
      uVar8 = 0xc3;
      uVar9 = 0x2da;
      goto LAB_0041dc14;
    }
    local_94[0] = '\x01';
    iVar7 = FUN_0041e8f0(&local_c0,&local_a0,local_88,local_90[0],0);
    pcVar14 = local_c0;
    if (iVar7 == 0) goto joined_r0x0041e168;
    lVar11 = FUN_00417620(&local_c0,local_c0 + 1);
    if (lVar11 != 0) {
      pcStack_b8[(long)pcVar14] = '\0';
      lVar11 = *(long *)(param_4 + 0x20);
      pcVar13 = pcStack_b8;
      uVar6 = local_7c;
      goto joined_r0x0041dfdc;
    }
    FUN_004014b0(0xd,0x6c,0x41,"external/openssl/crypto/asn1/tasn_dec.c",0x2ec);
  }
  uVar15 = 0;
joined_r0x0041e278:
  if (local_94[0] == '\0') {
    return uVar15;
  }
  FUN_00400420(pcStack_b8,"external/openssl/crypto/asn1/tasn_dec.c",0x300);
  return uVar15;
}


