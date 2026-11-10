/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020002c; name: FUN_0020002c
 */


undefined8 FUN_0020002c(long param_1,long param_2,byte *param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  size_t sVar7;
  byte bVar8;
  byte *__s;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_68;
  char *local_60;
  long local_58;
  
  local_60 = (char *)0x0;
  local_58 = 0;
  pcVar3 = strstr((char *)param_3,"://");
  if (pcVar3 == (char *)0x0) {
    pbVar10 = param_3;
  }
  else {
    pbVar10 = (byte *)(pcVar3 + 3);
    iVar2 = thunk_FUN_001f8bec(&DAT_038a00d4,param_3,5);
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_001f8bec("socks5h",param_3,7);
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_001f8bec("socks5",param_3,6);
        if (iVar2 == 0) {
          iVar2 = thunk_FUN_001f8bec("socks4a",param_3,7);
          if (iVar2 == 0) {
            iVar2 = thunk_FUN_001f8bec("socks4",param_3,6);
            if ((iVar2 == 0) && (iVar2 = thunk_FUN_001f8bec("socks",param_3,5), iVar2 == 0)) {
              iVar2 = thunk_FUN_001f8bec("http:",param_3,5);
              if (iVar2 == 0) {
                FUN_001f3ae0(param_1,"Unsupported proxy scheme for \'%s\'",param_3);
                return 7;
              }
            }
            else {
              param_4 = 4;
            }
          }
          else {
            param_4 = 6;
          }
        }
        else {
          param_4 = 5;
        }
      }
      else {
        param_4 = 7;
      }
    }
    else {
      param_4 = 2;
    }
  }
  if ((param_4 == 2) && ((*(uint *)(*(long *)PTR_PTR_04372758 + 0x10) >> 4 & 1) == 0)) {
    FUN_001f3ae0(param_1,
                 "Unsupported proxy \'%s\', libcurl is built without the HTTPS-proxy support.",
                 param_3);
    return 4;
  }
  pcVar3 = strchr((char *)pbVar10,0x40);
  if (pcVar3 != (char *)0x0) {
    uVar4 = FUN_001fd52c(pbVar10,(long)pcVar3 - (long)pbVar10,&local_58,&local_60,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    pbVar10 = (byte *)(pcVar3 + 1);
  }
  __s = pbVar10;
  if (*pbVar10 == 0x5b) {
    __s = pbVar10 + 1;
    bVar8 = *__s;
    pbVar9 = __s;
    if (bVar8 != 0) {
      pbVar10 = pbVar10 + 2;
      do {
        pbVar9 = pbVar10;
        iVar2 = FUN_001e3460(bVar8);
        if (((iVar2 == 0) && (bVar8 = pbVar9[-1], bVar8 != 0x2e)) && (bVar8 != 0x3a)) {
          if (bVar8 != 0x25) {
            pbVar9 = pbVar9 + -1;
            goto LAB_002004b8;
          }
          iVar2 = strncmp("%25",(char *)(pbVar9 + -1),3);
          if (iVar2 != 0) {
            FUN_001f3934(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
          }
          bVar8 = *pbVar9;
          goto joined_r0x0020046c;
        }
        bVar8 = *pbVar9;
        pbVar10 = pbVar9 + 1;
      } while (bVar8 != 0);
    }
    goto LAB_002001e8;
  }
LAB_002001fc:
  pcVar3 = strchr((char *)pbVar10,0x3a);
  if (pcVar3 == (char *)0x0) {
    if (*__s == 0x2f) {
      FUN_002044d4(local_58);
      local_58 = 0;
      FUN_002044d4(local_60);
      return 5;
    }
    pcVar3 = strchr((char *)__s,0x2f);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    uVar5 = 0x1bb;
    if (param_4 != 2) {
      uVar5 = 0x438;
    }
    if (*(ulong *)(param_1 + 0x680) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x680);
    }
  }
  else {
    local_68 = (byte *)0x0;
    *pcVar3 = '\0';
    uVar5 = strtol(pcVar3 + 1,(char **)&local_68,10);
    if (((local_68 == (byte *)0x0) ||
        ((*local_68 < 0x30 && ((1L << ((ulong)*local_68 & 0x3f) & 0x800100000001U) != 0)))) &&
       (uVar5 < 0x10000)) {
      *(ulong *)(param_2 + 400) = uVar5;
    }
    else {
      FUN_001f3934(param_1,"No valid port number in proxy string (%s)\n",pcVar3 + 1);
    }
  }
  if (*__s == 0) {
LAB_002003ec:
    FUN_002044d4(local_58);
    local_58 = 0;
    FUN_002044d4(local_60);
    uVar4 = 0;
  }
  else {
    plVar1 = (long *)(param_2 + 0x110);
    if ((param_4 & 0xfffffffc) != 4) {
      plVar1 = (long *)(param_2 + 0x150);
    }
    *(uint *)(plVar1 + 5) = param_4;
    if (local_58 == 0) {
LAB_002003a8:
      if ((-1 < (long)uVar5) &&
         (((plVar1[4] = uVar5, (param_4 & 0xfffffffc) == 4 || (*(long *)(param_2 + 400) < 0)) ||
          (*(long *)(param_2 + 0x110) == 0)))) {
        *(ulong *)(param_2 + 400) = uVar5;
      }
      FUN_002044d4(*plVar1);
      *plVar1 = 0;
      lVar6 = FUN_002044f4(__s);
      *plVar1 = lVar6;
      plVar1[2] = lVar6;
      if (lVar6 != 0) goto LAB_002003ec;
    }
    else {
      FUN_002044d4(plVar1[6]);
      plVar1[6] = 0;
      lVar6 = FUN_001fc664(param_1,local_58,0,0);
      plVar1[6] = lVar6;
      FUN_002044d4(local_58);
      local_58 = 0;
      if (plVar1[6] == 0) {
        FUN_002044d4(local_60);
      }
      else {
        FUN_002044d4(plVar1[7]);
        pcVar3 = local_60;
        plVar1[7] = 0;
        if ((local_60 == (char *)0x0) || (sVar7 = strlen(local_60), 0xff < sVar7)) {
          lVar6 = FUN_002044f4(&DAT_03996322);
        }
        else {
          lVar6 = FUN_001fc664(param_1,pcVar3,0,0);
        }
        plVar1[7] = lVar6;
        FUN_002044d4(local_60);
        local_60 = (char *)0x0;
        if (plVar1[7] != 0) {
          *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) | 0x100;
          goto LAB_002003a8;
        }
      }
    }
    uVar4 = 0x1b;
  }
  return uVar4;
joined_r0x0020046c:
  if (bVar8 == 0) goto LAB_002001e8;
  iVar2 = FUN_001e34b4(bVar8);
  if ((iVar2 == 0) && (iVar2 = FUN_001e3460(*pbVar9), iVar2 == 0)) {
    bVar8 = *pbVar9;
    if ((1 < bVar8 - 0x2d) && ((bVar8 != 0x7e && (bVar8 != 0x5f)))) goto LAB_002004b8;
  }
  pbVar9 = pbVar9 + 1;
  bVar8 = *pbVar9;
  goto joined_r0x0020046c;
LAB_002004b8:
  if (bVar8 == 0x5d) {
    pbVar10 = pbVar9 + 1;
    *pbVar9 = 0;
  }
  else {
LAB_002001e8:
    FUN_001f3934(param_1,"Invalid IPv6 address format\n");
    pbVar10 = pbVar9;
  }
  goto LAB_002001fc;
}


