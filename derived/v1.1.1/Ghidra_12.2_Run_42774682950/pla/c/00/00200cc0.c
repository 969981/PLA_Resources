/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00200cc0; name: FUN_00200cc0
 */


undefined8
FUN_00200cc0(ulong param_1,char *param_2,char *param_3,uint param_4,int param_5,long *param_6)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined8 uVar7;
  char *pcVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  ulong uVar14;
  undefined1 auStack_318 [64];
  long *local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  char local_2be [6];
  byte local_2b8;
  char local_2b7;
  undefined1 local_2b6 [598];
  
  lVar12 = param_6[0x27];
  lVar11 = *param_6;
  bVar3 = (int)lVar12 == 5;
  uVar1 = *(undefined4 *)((long)param_6 + (long)param_5 * 4 + 600);
  __n = strlen(param_3);
  uVar14 = *(ulong *)(lVar11 + 0x6c8);
  if ((*(byte *)((long)param_6 + 0x3fc) >> 5 & 1) != 0) {
    FUN_001f3934(lVar11,"SOCKS5: connecting to HTTP proxy %s port %d\n",param_3,param_4);
  }
  if ((0xff < __n) && ((int)lVar12 != 5)) {
    FUN_001f3934(*param_6,
                 "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                 ,__n);
    bVar3 = true;
  }
  iVar4 = FUN_001ddbec(lVar11,0,1);
  if (iVar4 < 0) {
    pcVar8 = "Connection time-out";
LAB_00200dd8:
    FUN_001f3ae0(lVar11,pcVar8);
    return 0x1c;
  }
  FUN_001f1bf4(uVar1,1);
  uVar5 = FUN_001f3550(0xffffffff,0xffffffff,uVar1,(long)iVar4);
  if (uVar5 == 0) {
    lVar11 = *param_6;
    pcVar8 = "SOCKS5: connection timeout";
    goto LAB_00200dd8;
  }
  if (uVar5 == 0xffffffff) {
    lVar11 = *param_6;
    pcVar8 = "SOCKS5: no connection here";
    goto LAB_00200ee0;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    lVar11 = *param_6;
    pcVar8 = "SOCKS5: error occurred during connection";
    goto LAB_00200ee0;
  }
  if ((uVar14 & 0xfffffffffffffffa) != 0) {
    FUN_001f3934(*param_6,"warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu\n",uVar14);
  }
  pcVar8 = (char *)(-(uVar14 & 1) & param_1);
  local_2be[0] = '\0';
  if (pcVar8 == (char *)0x0) {
    cVar13 = '\x01';
  }
  else {
    cVar13 = '\x02';
    local_2be[1] = '\x02';
  }
  local_2c0 = CONCAT11(cVar13,5);
  FUN_001f1bf4(uVar1,0);
  FUN_001f3934(lVar11,"SOCKS5 communication to %s:%d\n",param_3,param_4);
  iVar6 = FUN_001f3d04(param_6,uVar1,&local_2c0,cVar13 + '\x02',&local_2d0);
  if ((iVar6 != 0) || (local_2d0 != (ulong)local_2c0._1_1_ + 2)) {
    pcVar8 = "Unable to send initial SOCKS5 request.";
    goto LAB_00200ee0;
  }
  FUN_001f1bf4(uVar1,1);
  uVar5 = FUN_001f3550(uVar1,0xffffffff,0xffffffff,(long)iVar4);
  if (uVar5 == 0) {
    lVar11 = *param_6;
    pcVar8 = "SOCKS5 read timeout";
    goto LAB_00200dd8;
  }
  if (uVar5 == 0xffffffff) {
    lVar11 = *param_6;
    pcVar8 = "SOCKS5 nothing to read";
    goto LAB_00200ee0;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    FUN_001f3ae0(*param_6,"SOCKS5 read error occurred");
    return 0x38;
  }
  FUN_001f1bf4(uVar1,0);
  iVar4 = FUN_002007d8(param_6,uVar1,&local_2c0,2,&local_2c8);
  if ((iVar4 != 0) || (local_2c8 != 2)) {
    pcVar8 = "Unable to receive initial SOCKS5 response.";
    goto LAB_00200ee0;
  }
  if ((char)local_2c0 != '\x05') {
    pcVar8 = "Received invalid version in initial SOCKS5 response.";
    goto LAB_00200ee0;
  }
  if (local_2c0._1_1_ < 2) {
    if (local_2c0._1_1_ != 0) {
      if (local_2c0._1_1_ == 1) {
        pcVar8 = "SOCKS5 GSSAPI per-message authentication is not supported.";
        goto LAB_00200ee0;
      }
LAB_00201024:
      pcVar8 = "Undocumented SOCKS5 mode attempted to be used by server.";
      goto LAB_00200ee0;
    }
  }
  else {
    if (local_2c0._1_1_ == 0xff) {
      if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
        pcVar8 = 
        "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
        ;
      }
      else {
        pcVar8 = "No authentication method was acceptable.";
      }
      goto LAB_00200ee0;
    }
    if (local_2c0._1_1_ != 2) goto LAB_00201024;
    if ((param_2 == (char *)0x0) || (pcVar8 == (char *)0x0)) {
      __n_01 = 0;
      local_2c0 = 1;
      __n_00 = 0;
    }
    else {
      __n_00 = strlen(pcVar8);
      __n_01 = strlen(param_2);
      local_2c0 = CONCAT11((char)__n_00,1);
      if (__n_00 != 0) {
        memcpy((void *)((ulong)&local_2c0 | 2),pcVar8,__n_00);
      }
    }
    local_2be[__n_00] = (char)__n_01;
    if ((param_2 != (char *)0x0) && (__n_01 != 0)) {
      memcpy(local_2be + __n_00 + 1,param_2,__n_01);
    }
    lVar12 = __n_00 + 3 + __n_01;
    iVar4 = FUN_001f3d04(param_6,uVar1,&local_2c0,lVar12,&local_2d0);
    if ((iVar4 != 0) || (lVar12 != local_2d0)) {
      pcVar8 = "Failed to send SOCKS5 sub-negotiation request.";
      goto LAB_00200ee0;
    }
    iVar4 = FUN_002007d8(param_6,uVar1,&local_2c0,2,&local_2c8);
    if ((iVar4 != 0) || (local_2c8 != 2)) {
      pcVar8 = "Unable to receive SOCKS5 sub-negotiation response.";
      goto LAB_00200ee0;
    }
    if (local_2c0._1_1_ != '\0') {
      FUN_001f3ae0(lVar11,"User was rejected by the SOCKS5 server (%d %d).",(char)local_2c0);
      return 7;
    }
  }
  local_2c0 = 0x105;
  local_2be[0] = '\0';
  if (bVar3) {
    iVar4 = FUN_001e1608(param_6,param_3,param_4,&local_2d8);
    if (iVar4 == -1) {
      return 6;
    }
    if ((iVar4 == 1) && (uVar7 = FUN_001df9c4(param_6,&local_2d8), (int)uVar7 != 0)) {
      return uVar7;
    }
    if ((local_2d8 == (long *)0x0) || (lVar12 = *local_2d8, lVar12 == 0)) {
LAB_002012c8:
      FUN_001f3ae0(lVar11,"Failed to resolve \"%s\" for SOCKS5 connect.",param_3);
      return 6;
    }
    FUN_001e1190(lVar12,auStack_318,0x40);
    if (*(int *)(lVar12 + 4) == 2) {
      local_2be[1] = '\x01';
      lVar10 = *(long *)(lVar12 + 0x20);
      lVar12 = 0;
      do {
        local_2be[lVar12 + 2] = *(char *)(lVar10 + 4 + lVar12);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 4);
      FUN_001f3934(lVar11,"SOCKS5 connect to IPv4 %s (locally resolved)\n",auStack_318);
      bVar3 = false;
      lVar12 = 8;
    }
    else {
      FUN_001f3ae0(lVar11,"SOCKS5 connection to %s not supported\n",auStack_318);
      bVar3 = true;
      lVar12 = 3;
    }
    FUN_001e181c(lVar11,local_2d8);
    if (bVar3) goto LAB_002012c8;
  }
  else {
    local_2be[1] = '\x03';
    local_2be[2] = (char)__n;
    memcpy(local_2be + 3,param_3,__n);
    lVar12 = __n + 5;
  }
  *(ushort *)(local_2be + lVar12 + -2) =
       (ushort)(param_4 >> 8) & 0xff | (ushort)((param_4 & 0xff00ff) << 8);
  iVar4 = FUN_001f3d04(param_6,uVar1,&local_2c0,lVar12 + 2,&local_2d0);
  if ((iVar4 == 0) && (lVar12 + 2 == local_2d0)) {
    iVar4 = FUN_002007d8(param_6,uVar1,&local_2c0,10,&local_2c8);
    if ((iVar4 == 0) && (local_2c8 == 10)) {
      if ((char)local_2c0 != '\x05') {
        pcVar8 = "SOCKS5 reply has wrong version, version should be 5.";
        goto LAB_00200ee0;
      }
      if (local_2be[1] == '\x04') {
        uVar14 = 0x16;
      }
      else {
        if (local_2be[1] != '\x03') {
          uVar14 = 10;
          goto LAB_00201328;
        }
        uVar14 = (ulong)(byte)local_2be[2] + 7;
        if (uVar14 < 0xb) goto LAB_00201328;
      }
      iVar4 = FUN_002007d8(param_6,uVar1,local_2b6,uVar14 - 10,&local_2c8);
      if ((iVar4 == 0) && (uVar14 - 10 == local_2c8)) {
LAB_00201328:
        if (local_2c0._1_1_ == '\0') {
          FUN_001f3934(lVar11,"SOCKS5 request granted.\n");
          FUN_001f1bf4(uVar1,1);
          return 0;
        }
        if (local_2be[1] == '\x04') {
          pcVar8 = 
          "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
          ;
          uVar9 = (ushort)local_2b8;
        }
        else {
          if (local_2be[1] == '\x03') {
            cVar13 = local_2be[uVar14 - 4];
            cVar2 = local_2be[uVar14 - 3];
            local_2be[uVar14 - 4] = '\0';
            FUN_001f3ae0(lVar11,"Can\'t complete SOCKS5 connection to %s:%d. (%d)",local_2be + 3,
                         CONCAT11(cVar13,cVar2),local_2c0._1_1_);
            local_2be[uVar14 - 4] = cVar13;
            return 7;
          }
          if (local_2be[1] != '\x01') {
            return 7;
          }
          pcVar8 = "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)";
          uVar9 = CONCAT11(local_2b8,local_2b7);
          local_2b7 = local_2c0._1_1_;
        }
        FUN_001f3ae0(lVar11,pcVar8,local_2be[2],local_2be[3],local_2be[4],local_2be[5],uVar9,
                     local_2b7);
        return 7;
      }
    }
    pcVar8 = "Failed to receive SOCKS5 connect request ack.";
  }
  else {
    pcVar8 = "Failed to send SOCKS5 connect request.";
  }
LAB_00200ee0:
  FUN_001f3ae0(lVar11,pcVar8);
  return 7;
}


