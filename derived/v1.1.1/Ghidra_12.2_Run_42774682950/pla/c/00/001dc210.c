/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dc210; name: FUN_001dc210
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_001dc210(undefined8 param_1,long param_2,ulong param_3,uint param_4,char *param_5,char *param_6,
            char *param_7,uint param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  char *__s;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  size_t sVar10;
  char *pcVar11;
  size_t sVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  void *__dest;
  char *pcVar17;
  byte bVar18;
  size_t sVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined8 *__dest_00;
  undefined4 local_2074;
  char local_2070 [4096];
  undefined8 local_1070;
  undefined1 auStack_70 [16];
  
  lVar8 = FUN_002053bc(0);
  puVar9 = (undefined8 *)FUN_00204504(1,0x68);
  if (puVar9 == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_3 & 1) == 0) {
    local_1070 = 0;
    iVar6 = strncmp(param_5,"#HttpOnly_",10);
    if (iVar6 == 0) {
      param_5 = param_5 + 10;
      *(undefined1 *)((long)puVar9 + 0x5a) = 1;
    }
    if (*param_5 == '#') goto LAB_001dc300;
    pcVar11 = strchr(param_5,0xd);
    if (pcVar11 != (char *)0x0) {
      *pcVar11 = '\0';
    }
    pcVar11 = strchr(param_5,10);
    if (pcVar11 != (char *)0x0) {
      *pcVar11 = '\0';
    }
    pcVar11 = (char *)FUN_001f8e54(param_5,&DAT_039b9614,&local_1070);
    if (pcVar11 == (char *)0x0) goto LAB_001dcd74;
    iVar6 = 0;
    bVar5 = false;
    do {
      switch(iVar6) {
      case 0:
        pcVar17 = pcVar11 + 1;
        if (*pcVar11 != '.') {
          pcVar17 = pcVar11;
        }
        lVar8 = FUN_002044f4(pcVar17);
        iVar6 = 0;
        puVar9[5] = lVar8;
LAB_001dc838:
        bVar5 = (bool)(bVar5 | lVar8 == 0);
        break;
      case 1:
        iVar6 = FUN_001f8b48(pcVar11,&DAT_038f9081);
        *(bool *)(puVar9 + 8) = iVar6 != 0;
        iVar6 = 1;
        break;
      case 2:
        iVar6 = strcmp("TRUE",pcVar11);
        if ((iVar6 == 0) || (iVar6 = strcmp("FALSE",pcVar11), iVar6 == 0)) {
          lVar8 = FUN_002044f4(&DAT_0389ffa9);
          puVar9[3] = lVar8;
          lVar13 = FUN_002044f4(&DAT_0389ffa9);
          bVar5 = (bool)(bVar5 | lVar8 == 0 | lVar13 == 0);
          puVar9[4] = lVar13;
          goto switchD_001dc810_caseD_3;
        }
        lVar8 = FUN_002044f4(pcVar11);
        puVar9[3] = lVar8;
        if (lVar8 != 0) {
          lVar8 = FUN_001dceb8();
          puVar9[4] = lVar8;
          iVar6 = 2;
          goto LAB_001dc838;
        }
        iVar6 = 2;
LAB_001dc9d0:
        bVar5 = true;
        break;
      case 3:
switchD_001dc810_caseD_3:
        *(undefined1 *)(puVar9 + 0xb) = 0;
        iVar6 = FUN_001f8b48(pcVar11,&DAT_038f9081);
        if (iVar6 != 0) {
          if (((param_8 & 1) == 0) && (*(char *)(param_2 + 0x808) == '\0')) {
            iVar6 = 3;
            goto LAB_001dc9d0;
          }
          *(undefined1 *)(puVar9 + 0xb) = 1;
        }
        iVar6 = 3;
        break;
      case 4:
        iVar6 = FUN_001f8ee4(pcVar11,0,10,puVar9 + 6);
        bVar5 = (bool)(bVar5 | iVar6 != 0);
        iVar6 = 4;
        break;
      case 5:
        lVar8 = FUN_002044f4(pcVar11);
        puVar9[1] = lVar8;
        bVar5 = (bool)(bVar5 | lVar8 == 0);
        iVar6 = FUN_001f8bec("__Secure-",lVar8,9);
        if (iVar6 == 0) {
          iVar6 = FUN_001f8bec("__Host-",puVar9[1],7);
          if (iVar6 != 0) {
            bVar18 = *(byte *)(puVar9 + 0xc) | 2;
            goto LAB_001dc9b8;
          }
        }
        else {
          bVar18 = *(byte *)(puVar9 + 0xc) | 1;
LAB_001dc9b8:
          *(byte *)(puVar9 + 0xc) = bVar18;
        }
        iVar6 = 5;
        break;
      case 6:
        lVar8 = FUN_002044f4(pcVar11);
        bVar5 = (bool)(bVar5 | lVar8 == 0);
        iVar6 = 6;
        puVar9[2] = lVar8;
      }
      pcVar11 = (char *)FUN_001f8e54(0,&DAT_039b9614,&local_1070);
      iVar6 = iVar6 + 1;
    } while ((pcVar11 != (char *)0x0) && (!bVar5));
    if (iVar6 == 6) {
      lVar8 = FUN_002044f4(&DAT_03996322);
      bVar5 = (bool)(bVar5 | lVar8 == 0);
      iVar6 = 6;
      if (lVar8 != 0) {
        iVar6 = 7;
      }
      puVar9[2] = lVar8;
    }
    if ((bVar5) || (iVar6 != 7)) goto LAB_001dcd74;
  }
  else {
    sVar10 = strlen(param_5);
    if (5000 < sVar10) {
LAB_001dc300:
      FUN_002044d4(puVar9);
      return (undefined8 *)0x0;
    }
    pcVar11 = strchr(param_5,0x3b);
    for (; (*param_5 == '\t' || (*param_5 == ' ')); param_5 = param_5 + 1) {
    }
    local_2074 = param_8;
    bVar5 = false;
LAB_001dc324:
    local_2070[0] = '\0';
    local_1070 = local_1070 & 0xffffffffffffff00;
    iVar6 = sscanf(param_5,"%4095[^;\r\n=] =%4095[^;\r\n]",&local_1070,local_2070);
    if (iVar6 < 1) {
joined_r0x001dc654:
      bVar21 = bVar5;
      if ((pcVar11 == (char *)0x0) || (param_5 = pcVar11, *pcVar11 == '\0')) goto LAB_001dca38;
      do {
        param_5 = param_5 + 1;
        cVar3 = *param_5;
      } while (cVar3 == ' ' || cVar3 == '\t');
      pcVar11 = strchr(param_5,0x3b);
      if (pcVar11 == (char *)0x0) {
        if (cVar3 == '\0') goto LAB_001dca38;
        sVar10 = strlen(param_5);
        pcVar11 = param_5 + sVar10;
      }
      bVar5 = bVar21;
      if (pcVar11 == (char *)0x0) goto LAB_001dca38;
      goto LAB_001dc324;
    }
    sVar10 = strlen(local_2070);
    sVar12 = strlen((char *)&local_1070);
    if (((0xffe < sVar10) || (0xffe < sVar12)) || (0x1000 < sVar12 + sVar10)) {
      FUN_001dce58(puVar9);
      FUN_001f3934(param_1,"oversized cookie dropped, name/val %zu + %zu bytes\n",sVar12,sVar10);
      return (undefined8 *)0x0;
    }
    cVar3 = param_5[sVar12];
    if ((sVar12 != 0) && ((cVar4 = (param_5 + sVar12)[-1], cVar4 == ' ' || (cVar4 == '\t')))) {
      for (; ((cVar4 == ' ' || (cVar4 == '\t')) && (sVar12 != 0)); sVar12 = sVar12 - 1) {
        cVar4 = param_5[sVar12 - 2];
      }
      local_2070[sVar12 + 0x1000] = '\0';
    }
    bVar21 = false;
    if (sVar10 != 0) {
      do {
        if (local_2070[sVar10 - 1] != ' ' && local_2070[sVar10 - 1] != '\t') {
          bVar21 = true;
          goto LAB_001dc408;
        }
        sVar19 = sVar10 - 1;
        local_2070[sVar10 - 1] = '\0';
        sVar10 = sVar19;
      } while (sVar19 != 0);
      bVar21 = false;
    }
LAB_001dc408:
    for (pcVar17 = local_2070; *pcVar17 == ' ' || *pcVar17 == '\t'; pcVar17 = pcVar17 + 1) {
    }
    if (((3 < sVar12) && ((char)local_1070 == '_')) && (local_1070._1_1_ == '_')) {
      iVar6 = FUN_001f8bec("__Secure-",&local_1070,9);
      if (iVar6 == 0) {
        iVar6 = FUN_001f8bec("__Host-",&local_1070,7);
        if (iVar6 == 0) goto LAB_001dc494;
        bVar18 = *(byte *)(puVar9 + 0xc) | 2;
      }
      else {
        bVar18 = *(byte *)(puVar9 + 0xc) | 1;
      }
      *(byte *)(puVar9 + 0xc) = bVar18;
    }
LAB_001dc494:
    if (puVar9[1] == 0) {
      if (cVar3 != '=') goto LAB_001dc774;
      uVar14 = FUN_002044f4(&local_1070);
      puVar9[1] = uVar14;
      lVar13 = FUN_002044f4(pcVar17);
      bVar21 = true;
      puVar9[2] = lVar13;
      if ((lVar13 == 0) || (puVar9[1] == 0)) goto LAB_001dca38;
      goto joined_r0x001dc654;
    }
    if (!bVar21) {
      iVar6 = FUN_001f8b48("secure",&local_1070);
      if (iVar6 == 0) {
        iVar6 = FUN_001f8b48("httponly",&local_1070);
        if (iVar6 == 0) {
          if (cVar3 == '=') goto LAB_001dc4a0;
        }
        else {
          *(undefined1 *)((long)puVar9 + 0x5a) = 1;
        }
      }
      else {
        if (((local_2074 & 1) == 0) && (*(char *)(param_2 + 0x808) != '\0')) goto LAB_001dc774;
        *(undefined1 *)(puVar9 + 0xb) = 1;
      }
      goto joined_r0x001dc654;
    }
LAB_001dc4a0:
    iVar6 = FUN_001f8b48(&DAT_039a01d4,&local_1070);
    if (iVar6 == 0) {
      iVar6 = FUN_001f8b48("domain",&local_1070);
      if (iVar6 == 0) {
        iVar6 = FUN_001f8b48("version",&local_1070);
        if (iVar6 == 0) {
          iVar6 = FUN_001f8b48("max-age",&local_1070);
          if (iVar6 == 0) {
            iVar6 = FUN_001f8b48("expires",&local_1070);
            if (iVar6 != 0) {
              FUN_002044d4(puVar9[7]);
              lVar13 = FUN_002044f4(pcVar17);
              puVar9[7] = lVar13;
              goto joined_r0x001dc6b0;
            }
          }
          else {
            FUN_002044d4(puVar9[10]);
            lVar13 = FUN_002044f4(pcVar17);
            puVar9[10] = lVar13;
            if (lVar13 == 0) {
              bVar21 = true;
              goto LAB_001dcd38;
            }
          }
        }
        else {
          FUN_002044d4(puVar9[9]);
          lVar13 = FUN_002044f4(pcVar17);
          puVar9[9] = lVar13;
joined_r0x001dc6b0:
          if (lVar13 == 0) goto LAB_001dc774;
        }
      }
      else {
        __s = pcVar17 + 1;
        if (*pcVar17 != '.') {
          __s = pcVar17;
        }
        pcVar15 = strchr(__s,0x2e);
        pcVar17 = param_6;
        if (pcVar15 == (char *)0x0) {
          iVar6 = FUN_001f8b48(__s,"localhost");
          pcVar17 = ":";
          if (iVar6 != 0) {
            pcVar17 = param_6;
          }
        }
        pcVar15 = pcVar17;
        if (pcVar17 == (char *)0x0) {
          pcVar15 = __s;
        }
        iVar6 = FUN_001e35d0(2,pcVar15,auStack_70);
        param_6 = pcVar17;
        if (pcVar17 == (char *)0x0) {
LAB_001dc6cc:
          FUN_002044d4(puVar9[5]);
          lVar13 = FUN_002044f4(__s);
          puVar9[5] = lVar13;
          if ((iVar6 == 0) && (lVar13 != 0)) {
            *(undefined1 *)(puVar9 + 8) = 1;
          }
          else {
            if (lVar13 == 0) goto LAB_001dc774;
            bVar5 = (bool)(bVar5 | lVar13 == 0);
          }
        }
        else {
          if (iVar6 == 0) {
            uVar16 = FUN_001dcf68();
            if ((uVar16 & 1) != 0) goto LAB_001dc6cc;
          }
          else {
            iVar7 = strcmp(__s,pcVar17);
            if (iVar7 == 0) goto LAB_001dc6cc;
          }
          FUN_001f3934(param_1,"skipped cookie with bad tailmatch domain: %s\n",__s);
          bVar5 = true;
        }
      }
      goto joined_r0x001dc654;
    }
    FUN_002044d4(puVar9[3]);
    lVar13 = FUN_002044f4(pcVar17);
    puVar9[3] = lVar13;
    if (lVar13 != 0) {
      FUN_002044d4(puVar9[4]);
      lVar13 = FUN_001dceb8(puVar9[3]);
      puVar9[4] = lVar13;
      if (lVar13 != 0) goto joined_r0x001dc654;
    }
LAB_001dc774:
    bVar21 = true;
LAB_001dca38:
    pcVar11 = (char *)puVar9[10];
    if (pcVar11 == (char *)0x0) {
LAB_001dcd38:
      param_8 = local_2074;
      if (puVar9[7] == 0) goto joined_r0x001dcaa0;
      lVar8 = FUN_001f1c0c(puVar9[7],0);
      puVar9[6] = lVar8;
      if (lVar8 == 0) {
        puVar9[6] = 1;
        goto joined_r0x001dcaa0;
      }
      if (-1 < lVar8) goto joined_r0x001dcaa0;
      puVar9[6] = 0;
      if (bVar21) goto LAB_001dcd74;
    }
    else {
      plVar1 = puVar9 + 6;
      pcVar17 = pcVar11 + 1;
      if (*pcVar11 != '\"') {
        pcVar17 = pcVar11;
      }
      iVar6 = FUN_001f8ee4(pcVar17,0,10,plVar1);
      param_8 = local_2074;
      if (iVar6 == 0) {
        lVar13 = *plVar1;
        if (lVar13 == 0) {
          lVar13 = 1;
        }
        else {
          if (0x7fffffffffffffff - lVar8 < lVar13) {
            *plVar1 = 0x7fffffffffffffff;
            goto joined_r0x001dcaa0;
          }
          lVar13 = lVar13 + lVar8;
        }
      }
      else {
        if (iVar6 != 1) goto joined_r0x001dcaa0;
        lVar13 = 0x7fffffffffffffff;
      }
      *plVar1 = lVar13;
joined_r0x001dcaa0:
      if (bVar21) goto LAB_001dcd74;
    }
    if ((param_6 != (char *)0x0) && (puVar9[5] == 0)) {
      lVar8 = FUN_002044f4(param_6);
      puVar9[5] = lVar8;
      if (lVar8 == 0) goto LAB_001dcd74;
    }
    if ((param_7 != (char *)0x0) && (puVar9[3] == 0)) {
      pcVar11 = strchr(param_7,0x3f);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = strrchr(param_7,0x2f);
      }
      else {
        pcVar11 = (char *)FUN_001ddbb8(param_7,0x2f,(long)pcVar11 - (long)param_7);
      }
      if (pcVar11 != (char *)0x0) {
        __dest = (void *)FUN_002044c4(pcVar11 + (2 - (long)param_7));
        puVar9[3] = __dest;
        if (__dest == (void *)0x0) goto LAB_001dcd74;
        memcpy(__dest,param_7,(size_t)(pcVar11 + (1 - (long)param_7)));
        (pcVar11 + (1 - (long)param_7))[puVar9[3]] = '\0';
        lVar8 = FUN_001dceb8(puVar9[3]);
        puVar9[4] = lVar8;
        if (lVar8 == 0) goto LAB_001dcd74;
      }
    }
    if (puVar9[1] == 0) goto LAB_001dcd74;
  }
  if (((((*(byte *)(puVar9 + 0xc) & 1) == 0) || (*(char *)(puVar9 + 0xb) != '\0')) &&
      (((*(byte *)(puVar9 + 0xc) >> 1 & 1) == 0 ||
       ((((*(char *)(puVar9 + 0xb) != '\0' && ((char *)puVar9[3] != (char *)0x0)) &&
         (iVar6 = strcmp((char *)puVar9[3],"/"), iVar6 == 0)) && (*(char *)(puVar9 + 8) == '\0')))))
      ) && (((*(char *)(param_2 + 0x808) != '\0' || (*(char *)(param_2 + 0x818) == '\0')) ||
            (puVar9[6] != 0)))) {
    *(char *)((long)puVar9 + 0x59) = *(char *)(param_2 + 0x808);
    iVar6 = *(int *)(param_2 + 0x81c) + 1;
    *(int *)(param_2 + 0x81c) = iVar6;
    *(int *)((long)puVar9 + 0x5c) = iVar6;
    if ((param_4 & 1) == 0) {
      FUN_001dcfe8(param_2);
    }
    lVar8 = FUN_001dd080(puVar9[5]);
    puVar2 = (undefined8 *)(param_2 + lVar8 * 8);
    puVar20 = (undefined8 *)*puVar2;
    if (puVar20 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      do {
        __dest_00 = puVar20;
        iVar6 = FUN_001f8b48(__dest_00[1],puVar9[1]);
        if (iVar6 != 0) {
          if (__dest_00[5] == 0) {
            if (puVar9[5] == 0) goto LAB_001dcc24;
          }
          else if (((puVar9[5] != 0) && (iVar6 = FUN_001f8b48(), iVar6 != 0)) &&
                  (*(char *)(__dest_00 + 8) == *(char *)(puVar9 + 8))) {
LAB_001dcc24:
            pcVar11 = (char *)__dest_00[4];
            lVar8 = puVar9[4];
            if (pcVar11 == (char *)0x0) {
              if (lVar8 == 0) goto LAB_001dcdc4;
            }
            else if (lVar8 != 0) {
              if (((*(char *)(__dest_00 + 0xb) == '\0') || (*(char *)(puVar9 + 0xb) != '\0')) ||
                 ((param_8 & 1) != 0)) {
                iVar6 = FUN_001f8b48(pcVar11,lVar8);
                if (iVar6 == 0) goto LAB_001dcc60;
              }
              else {
                pcVar17 = strchr(pcVar11 + 1,0x2f);
                if (pcVar17 == (char *)0x0) {
                  sVar10 = strlen(pcVar11);
                }
                else {
                  sVar10 = (long)pcVar17 - (long)pcVar11;
                }
                iVar6 = FUN_001f8bec(pcVar11,lVar8,sVar10);
                if (iVar6 != 0) goto LAB_001dcd74;
              }
LAB_001dcdc4:
              if ((*(char *)((long)puVar9 + 0x59) != '\0') ||
                 (*(char *)((long)__dest_00 + 0x59) == '\0')) {
                *puVar9 = *__dest_00;
                *(undefined4 *)((long)puVar9 + 0x5c) = *(undefined4 *)((long)__dest_00 + 0x5c);
                FUN_002044d4(__dest_00[1]);
                FUN_002044d4(__dest_00[2]);
                FUN_002044d4(__dest_00[5]);
                FUN_002044d4(__dest_00[3]);
                FUN_002044d4(__dest_00[4]);
                FUN_002044d4(__dest_00[7]);
                FUN_002044d4(__dest_00[9]);
                FUN_002044d4(__dest_00[10]);
                memcpy(__dest_00,puVar9,0x68);
                FUN_002044d4(puVar9);
                puVar9 = __dest_00;
                do {
                  puVar20 = puVar9;
                  puVar9 = (undefined8 *)*puVar20;
                } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
                bVar5 = true;
                goto LAB_001dccc0;
              }
              goto LAB_001dcd74;
            }
          }
        }
LAB_001dcc60:
        puVar20 = (undefined8 *)*__dest_00;
      } while ((undefined8 *)*__dest_00 != (undefined8 *)0x0);
      puVar20 = __dest_00;
    }
    bVar5 = false;
    __dest_00 = puVar9;
LAB_001dccc0:
    if (*(char *)(param_2 + 0x808) != '\0') {
      pcVar11 = "Replaced";
      if (!bVar5) {
        pcVar11 = "Added";
      }
      FUN_001f3934(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n",pcVar11,
                   __dest_00[1],__dest_00[2],__dest_00[5],__dest_00[3],__dest_00[6]);
    }
    if (!bVar5) {
      if (puVar20 != (undefined8 *)0x0) {
        puVar2 = puVar20;
      }
      *puVar2 = __dest_00;
      *(long *)(param_2 + 0x810) = *(long *)(param_2 + 0x810) + 1;
    }
    return __dest_00;
  }
LAB_001dcd74:
  FUN_001dce58(puVar9);
  return (undefined8 *)0x0;
}


