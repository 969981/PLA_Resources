/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045a140; name: FUN_0045a140
 */


uint * FUN_0045a140(undefined8 param_1,long param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  char **ppcVar16;
  undefined4 *puVar17;
  undefined1 auStack_288 [4];
  undefined1 auStack_284 [4];
  ulong local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined8 local_268;
  uint local_260;
  int local_25c;
  char *local_258 [3];
  undefined4 local_240 [116];
  int local_70;
  void *local_68;
  undefined8 local_60;
  char *local_58;
  void *local_48;
  
  local_48 = (void *)0x0;
  local_280 = 0;
  local_268 = 0xffffffffffffffff;
  local_25c = 1;
  local_70 = 0;
  iVar3 = FUN_00415400(param_1,0x2c,1,&LAB_0045ab20,&local_268);
  iVar5 = local_25c;
  if (iVar3 != 0) {
    uVar13 = 0xc2;
    goto LAB_0045a1a0;
  }
  if ((local_260 & 0xfffffffe) == 0x10) {
    if (param_2 == 0) {
      uVar13 = 0xc0;
LAB_0045a1a0:
      *param_4 = uVar13;
      return (uint *)0x0;
    }
    if (0x31 < param_3) {
      uVar13 = 0xb5;
      goto LAB_0045a1a0;
    }
    local_68 = (void *)0x0;
    lVar6 = FUN_004071e0();
    if (lVar6 == 0) {
      puVar15 = (uint *)0x0;
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (local_258[0] == (char *)0x0) {
LAB_0045a37c:
        if (local_260 == 0x11) {
          iVar5 = FUN_0041d000();
        }
        else {
          iVar5 = FUN_0041cff0(lVar6,&local_68);
        }
        if (-1 < iVar5) {
          puVar15 = (uint *)FUN_0041cfc0();
          if (puVar15 != (uint *)0x0) {
            lVar8 = FUN_0040a550(local_260);
            *(long *)(puVar15 + 2) = lVar8;
            if (lVar8 != 0) {
              *puVar15 = local_260;
              *(void **)(lVar8 + 8) = local_68;
              **(int **)(puVar15 + 2) = iVar5;
              local_68 = (void *)0x0;
            }
          }
          goto LAB_0045a3cc;
        }
      }
      else {
        lVar7 = FUN_0045b1b0(param_2,local_258[0]);
        if (lVar7 != 0) {
          iVar5 = FUN_00407950(lVar7);
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              lVar8 = FUN_00407970(lVar7,iVar5);
              lVar8 = FUN_0045a140(*(undefined8 *)(lVar8 + 0x10),param_2,param_3 + 1,param_4);
              if ((lVar8 == 0) || (iVar3 = FUN_00407800(lVar6,lVar8), iVar3 == 0))
              goto LAB_0045a398;
              iVar5 = iVar5 + 1;
              iVar3 = FUN_00407950(lVar7);
            } while (iVar5 < iVar3);
          }
          goto LAB_0045a37c;
        }
      }
LAB_0045a398:
      puVar15 = (uint *)0x0;
    }
LAB_0045a3cc:
    FUN_00400420(local_68,"external/openssl/crypto/asn1/asn1_gen.c",0x1ca);
    FUN_004078c0(lVar6,PTR_FUN_04374350);
    FUN_0045b200(param_2,lVar7);
  }
  else {
    puVar15 = (uint *)FUN_0041cfc0();
    if (puVar15 == (uint *)0x0) {
      FUN_004014b0(0xd,0xb3,0x41,"external/openssl/crypto/asn1/asn1_gen.c",0x24b);
      return (uint *)0x0;
    }
    pcVar1 = "";
    if (local_258[0] != (char *)0x0) {
      pcVar1 = local_258[0];
    }
    switch(local_260) {
    case 1:
      if (iVar5 != 1) {
        uVar11 = 0xbe;
        uVar12 = 0x25d;
LAB_0045a938:
        FUN_004014b0(0xd,0xb3,uVar11,"external/openssl/crypto/asn1/asn1_gen.c",uVar12);
        FUN_0041cfd0(puVar15);
        return (uint *)0x0;
      }
      local_60 = 0;
      local_68 = (void *)0x0;
      local_58 = pcVar1;
      iVar5 = FUN_0044c450(&local_68,puVar15 + 2);
      if (iVar5 == 0) {
        uVar11 = 0xb0;
        uVar12 = 0x264;
        goto LAB_0045a968;
      }
      break;
    case 2:
    case 10:
      if (iVar5 != 1) {
        uVar11 = 0xb9;
        uVar12 = 0x26c;
        goto LAB_0045a938;
      }
      lVar6 = FUN_0044c210(0,pcVar1);
      *(long *)(puVar15 + 2) = lVar6;
      if (lVar6 == 0) {
        uVar11 = 0xb4;
        uVar12 = 0x271;
        goto LAB_0045a968;
      }
      break;
    case 3:
    case 4:
      lVar6 = FUN_0040a450();
      *(long *)(puVar15 + 2) = lVar6;
      if (lVar6 == 0) {
        uVar11 = 0x41;
        uVar12 = 0x2b4;
        goto LAB_0045a938;
      }
      if (iVar5 == 1) {
        FUN_0040a280(lVar6,pcVar1,0xffffffff);
      }
      else {
        if (iVar5 != 3) {
          if ((local_260 != 3) || (iVar5 != 4)) {
            uVar11 = 0xaf;
            uVar12 = 0x2cc;
            goto LAB_0045a938;
          }
          iVar5 = FUN_00415400(pcVar1,0x2c,1,&LAB_0045b100);
          if (iVar5 == 0) {
            uVar11 = 0xbc;
            uVar12 = 0x2c6;
            goto LAB_0045a968;
          }
          break;
        }
        lVar6 = FUN_00405200(pcVar1,&local_68);
        if (lVar6 == 0) {
          uVar11 = 0xb2;
          uVar12 = 0x2ba;
          goto LAB_0045a968;
        }
        *(long *)(*(long *)(puVar15 + 2) + 8) = lVar6;
        **(undefined4 **)(puVar15 + 2) = (int)local_68;
        *(uint *)(*(long *)(puVar15 + 2) + 4) = local_260;
      }
      if (local_260 == 3) {
        *(ulong *)(*(long *)(puVar15 + 2) + 0x10) =
             *(ulong *)(*(long *)(puVar15 + 2) + 0x10) & 0xfffffffffffffff0;
        *(ulong *)(*(long *)(puVar15 + 2) + 0x10) = *(ulong *)(*(long *)(puVar15 + 2) + 0x10) | 8;
        *puVar15 = 3;
        goto joined_r0x0045a898;
      }
      break;
    case 5:
      if (*pcVar1 != '\0') {
        uVar11 = 0xb6;
        uVar12 = 0x256;
        goto LAB_0045a938;
      }
      break;
    case 6:
      if (iVar5 != 1) {
        uVar11 = 0xbf;
        uVar12 = 0x278;
        goto LAB_0045a938;
      }
      lVar6 = FUN_004080c0(pcVar1,0);
      *(long *)(puVar15 + 2) = lVar6;
      if (lVar6 == 0) {
        uVar11 = 0xb7;
        uVar12 = 0x27c;
        goto LAB_0045a968;
      }
      break;
    default:
      uVar11 = 0xc4;
      uVar12 = 0x2d9;
LAB_0045a968:
      FUN_004014b0(0xd,0xb3,uVar11,"external/openssl/crypto/asn1/asn1_gen.c",uVar12);
      FUN_00402170(2,"string=",pcVar1);
      FUN_0041cfd0(puVar15);
      return (uint *)0x0;
    case 0xc:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1e:
      if (iVar5 == 1) {
        uVar11 = 0x1001;
      }
      else {
        if (iVar5 != 2) {
          uVar11 = 0xb1;
          uVar12 = 0x2a5;
          goto LAB_0045a938;
        }
        uVar11 = 0x1000;
      }
      uVar12 = FUN_0041d010(local_260);
      iVar5 = FUN_00449310(puVar15 + 2,pcVar1,0xffffffff,uVar11,uVar12);
      if (iVar5 < 1) {
        uVar11 = 0x41;
        uVar12 = 0x2ab;
        goto LAB_0045a968;
      }
      break;
    case 0x17:
    case 0x18:
      if (iVar5 != 1) {
        uVar11 = 0xc1;
        uVar12 = 0x284;
        goto LAB_0045a938;
      }
      lVar6 = FUN_0040a450();
      *(long *)(puVar15 + 2) = lVar6;
      if (lVar6 == 0) {
        uVar11 = 0x41;
        uVar12 = 0x288;
        goto LAB_0045a968;
      }
      iVar5 = FUN_0040a280(lVar6,pcVar1,0xffffffff);
      if (iVar5 == 0) {
        uVar11 = 0x41;
        uVar12 = 0x28c;
        goto LAB_0045a968;
      }
      *(uint *)(*(long *)(puVar15 + 2) + 4) = local_260;
      iVar5 = FUN_00447ea0(*(undefined8 *)(puVar15 + 2));
      if (iVar5 == 0) {
        uVar11 = 0xb8;
        uVar12 = 0x291;
        goto LAB_0045a968;
      }
    }
    *puVar15 = local_260;
  }
joined_r0x0045a898:
  if (puVar15 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (((uint)local_268 == -1) && (local_70 == 0)) {
    return puVar15;
  }
  iVar5 = FUN_0041cfb0(puVar15,&local_48);
  FUN_0041cfd0(puVar15);
  local_68 = local_48;
  if ((uint)local_268 == -1) {
    uVar4 = 0;
    iVar3 = iVar5;
  }
  else {
    uVar4 = FUN_00409ce0(&local_68,&local_280,auStack_284,auStack_288,(long)iVar5);
    if ((uVar4 >> 7 & 1) != 0) {
      puVar15 = (uint *)0x0;
      puVar9 = (undefined1 *)0x0;
      goto LAB_0045a6a8;
    }
    iVar5 = iVar5 + ((int)local_48 - (int)local_68);
    if ((uVar4 & 1) == 0) {
      uVar10 = local_280 & 0xffffffff;
      uVar4 = uVar4 & 0x20;
    }
    else {
      uVar10 = 0;
      local_280 = 0;
      uVar4 = 2;
    }
    iVar3 = FUN_0040a0e0(0,uVar10,local_268 & 0xffffffff);
  }
  if (0 < local_70) {
    iVar14 = 0;
    ppcVar16 = local_258 + (long)local_70 * 3;
    do {
      pcVar1 = (char *)((long)*(int *)((long)ppcVar16 + -4) + (long)iVar3);
      *ppcVar16 = pcVar1;
      iVar3 = FUN_0040a0e0(0,pcVar1,*(undefined4 *)(ppcVar16 + -2));
      iVar14 = iVar14 + 1;
      ppcVar16 = ppcVar16 + -3;
    } while (iVar14 < local_70);
  }
  puVar9 = (undefined1 *)FUN_00400260((long)iVar3,"external/openssl/crypto/asn1/asn1_gen.c",0xc3);
  if (puVar9 == (undefined1 *)0x0) {
    puVar15 = (uint *)0x0;
  }
  else {
    local_270 = puVar9;
    if (0 < local_70) {
      iVar14 = 0;
      puVar17 = local_240;
      do {
        FUN_00409f20(&local_270,puVar17[-2],*puVar17,puVar17[-4],puVar17[-3]);
        if (puVar17[-1] != 0) {
          *local_270 = 0;
          local_270 = local_270 + 1;
        }
        iVar14 = iVar14 + 1;
        puVar17 = puVar17 + 6;
      } while (iVar14 < local_70);
    }
    if ((uint)local_268 != 0xffffffff) {
      uVar2 = 0x20;
      if (local_268._4_4_ != 0 || ((uint)local_268 & 0xfffffffe) != 0x10) {
        uVar2 = uVar4;
      }
      FUN_00409f20(&local_270,uVar2,local_280 & 0xffffffff);
    }
    memcpy(local_270,local_68,(long)iVar5);
    local_278 = puVar9;
    puVar15 = (uint *)FUN_0041cfa0(0,&local_278,(long)iVar3);
  }
LAB_0045a6a8:
  FUN_00400420(local_48,"external/openssl/crypto/asn1/asn1_gen.c",0xe9);
  FUN_00400420(puVar9,"external/openssl/crypto/asn1/asn1_gen.c",0xea);
  return puVar15;
}


