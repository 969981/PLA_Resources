/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041d100; name: FUN_0041d100
 */


undefined8
FUN_0041d100(long *param_1,long *param_2,char *param_3,byte *param_4,long param_5,undefined8 param_6
            ,uint param_7,undefined8 param_8,int param_9)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  uint local_80;
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  char *local_70;
  char *local_68;
  
  local_70 = (char *)0x0;
  lVar13 = *(long *)(param_4 + 0x20);
  if (param_1 == (long *)0x0) {
    return 0;
  }
  local_68 = param_3;
  if ((lVar13 != 0) && (pcVar16 = *(code **)(lVar13 + 0x18), pcVar16 != (code *)0x0)) {
    if (param_9 < 0x1e) goto LAB_0041d1b8;
LAB_0041d158:
    uVar8 = 0xc9;
    uVar10 = 0xa0;
    goto LAB_0041d16c;
  }
  pcVar16 = (code *)0x0;
  if (0x1d < param_9) goto LAB_0041d158;
LAB_0041d1b8:
  if (6 < *param_4) {
    return 0;
  }
  param_9 = param_9 + 1;
  iVar5 = (int)param_5;
  switch(*param_4) {
  case 0:
    if (*(long *)(param_4 + 0x10) == 0) {
LAB_0041d79c:
      uVar8 = FUN_0041db70(param_1,param_2,local_68,param_4,param_5,param_6,param_7,param_8);
      return uVar8;
    }
    if ((iVar5 == -1) && ((param_7 & 0xff) == 0)) {
      uVar8 = FUN_0041d9a0(param_1,param_2,param_3,*(long *)(param_4 + 0x10),0,param_8,param_9);
      return uVar8;
    }
    uVar8 = 0xaa;
    uVar10 = 0xaf;
    break;
  default:
    local_70 = (char *)*param_2;
    iVar2 = 0x10;
    if (iVar5 != -1) {
      iVar2 = iVar5;
    }
    uVar11 = 0;
    if (iVar5 != -1) {
      uVar11 = (undefined4)param_6;
    }
    uVar8 = FUN_0041e390(&local_68,0,0,local_78,local_7c,&local_70,param_3,iVar2,uVar11,
                         (char)param_7,param_8);
    if ((int)uVar8 == -1) {
      return uVar8;
    }
    if ((int)uVar8 == 0) {
      uVar8 = 0x3a;
      uVar10 = 0x122;
    }
    else {
      if ((lVar13 == 0) || ((*(byte *)(lVar13 + 8) >> 2 & 1) == 0)) {
        cVar12 = local_78[0];
      }
      else {
        local_68 = param_3 + (*param_2 - (long)local_70);
        cVar12 = '\x01';
      }
      if (local_7c[0] == '\0') {
        uVar8 = 0x95;
        uVar10 = 0x12e;
      }
      else if ((*param_1 == 0) && (iVar5 = FUN_00421ca0(param_1,param_4), iVar5 == 0)) {
        uVar8 = 0x3a;
        uVar10 = 0x133;
      }
      else {
        if ((pcVar16 != (code *)0x0) && (iVar5 = (*pcVar16)(4,param_1,param_4,0), iVar5 == 0))
        goto LAB_0041d94c;
        lVar13 = *(long *)(param_4 + 0x10);
        if (*(long *)(param_4 + 0x18) < 1) {
          uVar15 = 0;
        }
        else {
          lVar14 = 0;
          bVar9 = *(byte *)(lVar13 + 1);
          while( true ) {
            if (((bVar9 & 3) != 0) && (lVar6 = FUN_0041ff70(param_1,lVar13,0), lVar6 != 0)) {
              uVar8 = FUN_0041ff60(param_1,lVar6);
              FUN_00421a90(uVar8,lVar6);
            }
            lVar14 = lVar14 + 1;
            if (*(long *)(param_4 + 0x18) <= lVar14) break;
            bVar9 = *(byte *)(lVar13 + 0x29);
            lVar13 = lVar13 + 0x28;
          }
          lVar13 = *(long *)(param_4 + 0x10);
          if (*(long *)(param_4 + 0x18) < 1) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            do {
              pbVar7 = (byte *)FUN_0041ff70(param_1,lVar13,1);
              if (pbVar7 == (byte *)0x0) goto LAB_0041d174;
              uVar8 = FUN_0041ff60(param_1,pbVar7);
              pcVar1 = local_70;
              if (local_68 == (char *)0x0) break;
              if (((1 < (long)local_68) && (*local_70 == '\0')) && (local_70[1] == '\0')) {
                pcVar1 = local_70 + 2;
                if (local_78[0] == '\0') {
                  uVar8 = 0x9f;
                  uVar10 = 0x155;
                  local_70 = pcVar1;
                  goto LAB_0041d16c;
                }
                local_68 = local_70 + ((long)local_68 - (long)pcVar1);
                local_78[0] = '\0';
                local_70 = pcVar1;
                goto joined_r0x0041d890;
              }
              if (uVar15 == *(long *)(param_4 + 0x18) - 1U) {
                bVar9 = 0;
              }
              else {
                bVar9 = *pbVar7 & 1;
              }
              iVar5 = FUN_0041d9a0(uVar8,&local_70,local_68,pbVar7,bVar9,param_8,param_9);
              if (iVar5 == -1) {
                FUN_00421a90(uVar8,pbVar7);
              }
              else {
                if (iVar5 == 0) goto LAB_0041d730;
                local_68 = pcVar1 + ((long)local_68 - (long)local_70);
              }
              uVar15 = uVar15 + 1;
              lVar13 = lVar13 + 0x28;
            } while ((long)uVar15 < *(long *)(param_4 + 0x18));
          }
        }
        if (local_78[0] != '\0') {
          if ((((long)local_68 < 2) || (*local_70 != '\0')) || (local_70[1] != '\0')) {
            uVar8 = 0x89;
            uVar10 = 0x17d;
            break;
          }
          local_70 = local_70 + 2;
        }
joined_r0x0041d890:
        if ((cVar12 != '\0') || (local_68 == (char *)0x0)) {
          uVar15 = uVar15 & 0xffffffff;
          if ((long)uVar15 < *(long *)(param_4 + 0x18)) {
            do {
              pbVar7 = (byte *)FUN_0041ff70(param_1,lVar13,1);
              if (pbVar7 == (byte *)0x0) goto LAB_0041d174;
              if ((*pbVar7 & 1) == 0) {
                FUN_004014b0(0xd,0x78,0x79,"external/openssl/crypto/asn1/tasn_dec.c",0x196);
                goto LAB_0041d730;
              }
              uVar8 = FUN_0041ff60(param_1,pbVar7);
              FUN_00421a90(uVar8,pbVar7);
              lVar13 = lVar13 + 0x28;
              uVar15 = uVar15 + 1;
            } while ((long)uVar15 < *(long *)(param_4 + 0x18));
          }
          pcVar1 = local_70;
          iVar5 = FUN_0041fdf0(param_1,*param_2,(int)local_70 - (int)*param_2,param_4);
          if ((iVar5 != 0) &&
             ((pcVar16 == (code *)0x0 || (iVar5 = (*pcVar16)(5,param_1,param_4,0), iVar5 != 0)))) {
            *param_2 = (long)pcVar1;
            return 1;
          }
          goto LAB_0041d94c;
        }
        uVar8 = 0x94;
        uVar10 = 0x182;
      }
    }
    break;
  case 2:
    if ((pcVar16 != (code *)0x0) && (iVar5 = (*pcVar16)(4,param_1,param_4,0), iVar5 == 0)) {
LAB_0041d94c:
      uVar8 = 100;
      uVar10 = 0x1a6;
      break;
    }
    if (*param_1 == 0) {
      iVar5 = FUN_00421ca0(param_1,param_4);
      if (iVar5 == 0) {
        uVar8 = 0x3a;
        uVar10 = 0xe6;
        break;
      }
    }
    else {
      iVar5 = FUN_0041fc00(param_1,param_4);
      if ((-1 < iVar5) && ((long)iVar5 < *(long *)(param_4 + 0x18))) {
        lVar13 = *(long *)(param_4 + 0x10) + (long)iVar5 * 0x28;
        uVar8 = FUN_0041ff60(param_1,lVar13);
        FUN_00421a90(uVar8,lVar13);
        FUN_0041fc10(param_1,0xffffffff,param_4);
      }
    }
    local_70 = (char *)*param_2;
    if (*(long *)(param_4 + 0x18) < 1) {
      uVar15 = 0;
      if (*(long *)(param_4 + 0x18) == 0) {
LAB_0041d540:
        if ((param_7 & 0xff) != 0) {
          FUN_00421a80(param_1,param_4);
          return 0xffffffff;
        }
        uVar8 = 0x8f;
        uVar10 = 0x109;
        break;
      }
LAB_0041d4f4:
      FUN_0041fc10(param_1,uVar15 & 0xffffffff,param_4);
      if ((pcVar16 == (code *)0x0) || (iVar5 = (*pcVar16)(5,param_1,param_4,0), iVar5 != 0)) {
        *param_2 = (long)local_70;
        return 1;
      }
      goto LAB_0041d94c;
    }
    pbVar7 = *(byte **)(param_4 + 0x10);
    uVar8 = FUN_0041ff60(param_1,pbVar7);
    iVar5 = FUN_0041d9a0(uVar8,&local_70,param_3,pbVar7,1,param_8,param_9);
    if (iVar5 == -1) {
      uVar4 = 1;
      do {
        uVar15 = uVar4;
        pcVar1 = local_68;
        if ((long)*(ulong *)(param_4 + 0x18) <= (long)uVar15) {
          if (*(ulong *)(param_4 + 0x18) != (uVar15 & 0xffffffff)) goto LAB_0041d4f4;
          goto LAB_0041d540;
        }
        pbVar7 = pbVar7 + 0x28;
        uVar8 = FUN_0041ff60(param_1,pbVar7);
        iVar5 = FUN_0041d9a0(uVar8,&local_70,pcVar1,pbVar7,1,param_8,param_9);
        uVar4 = uVar15 + 1;
        uVar3 = uVar15;
      } while (iVar5 == -1);
    }
    else {
      uVar3 = 0;
    }
    if (0 < iVar5) {
      uVar15 = uVar3 & 0xffffffff;
      if (*(ulong *)(param_4 + 0x18) == uVar3) goto LAB_0041d540;
      goto LAB_0041d4f4;
    }
    FUN_00421a90(uVar8,pbVar7);
    FUN_004014b0(0xd,0x78,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0xfd);
    if (pbVar7 != (byte *)0x0) {
LAB_0041d730:
      FUN_00402170(4,"Field=",*(undefined8 *)(pbVar7 + 0x18),", Type=",
                   *(undefined8 *)(param_4 + 0x30));
      return 0;
    }
    goto LAB_0041d174;
  case 3:
    goto switchD_0041d1e0_caseD_3;
  case 4:
    uVar8 = (**(code **)(lVar13 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar8;
  case 5:
    local_70 = (char *)*param_2;
    iVar5 = FUN_0041e390(0,&local_80,local_74,0,0,&local_70,param_3,0xffffffff,0,1,param_8);
    if (iVar5 == 0) {
      uVar8 = 0x3a;
      uVar10 = 0xbe;
    }
    else if (local_74[0] == '\0') {
      param_5 = (long)(int)local_80;
      if ((local_80 < 0x1f) &&
         ((*(ulong *)(param_4 + 8) & *(ulong *)(&DAT_03a045b0 + param_5 * 8)) != 0)) {
        param_6 = 0;
        param_7 = 0;
        goto LAB_0041d79c;
      }
      if ((param_7 & 0xff) != 0) {
        return 0xffffffff;
      }
      uVar8 = 0x8c;
      uVar10 = 0xcf;
    }
    else {
      if ((param_7 & 0xff) != 0) {
        return 0xffffffff;
      }
      uVar8 = 0x8b;
      uVar10 = 199;
    }
  }
LAB_0041d16c:
  FUN_004014b0(0xd,0x78,uVar8,"external/openssl/crypto/asn1/tasn_dec.c",uVar10);
LAB_0041d174:
  FUN_00402170(2,"Type=",*(undefined8 *)(param_4 + 0x30));
switchD_0041d1e0_caseD_3:
  return 0;
}


