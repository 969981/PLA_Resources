/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002008c8; name: FUN_002008c8
 */


undefined8
FUN_002008c8(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long local_1a0 [8];
  long *local_160;
  undefined2 local_158;
  undefined1 local_156;
  undefined1 local_155;
  undefined4 local_154;
  char local_150;
  char acStack_14f [255];
  
  uVar9 = *param_5;
  iVar3 = *(int *)(param_5 + 0x27);
  uVar4 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 600);
  iVar5 = FUN_001ddbec(uVar9,0,1);
  if (iVar5 < 0) {
    FUN_001f3ae0(uVar9,"Connection time-out");
    return 0x1c;
  }
  if ((*(byte *)((long)param_5 + 0x3fc) >> 5 & 1) != 0) {
    puVar2 = &DAT_03949143;
    if (iVar3 != 6) {
      puVar2 = &DAT_03996322;
    }
    FUN_001f3934(*param_5,"SOCKS4%s: connecting to HTTP proxy %s port %d\n",puVar2,param_2,param_3);
  }
  FUN_001f1bf4(uVar4,0);
  FUN_001f3934(uVar9,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_158 = 0x104;
  local_156 = (undefined1)((uint)param_3 >> 8);
  local_155 = (undefined1)param_3;
  if (iVar3 != 6) {
    iVar5 = FUN_001e1608(param_5,param_2,param_3,&local_160);
    if (iVar5 == -1) {
      return 5;
    }
    if (iVar5 == 1) {
      FUN_001df9c4(param_5,&local_160);
    }
    if ((local_160 == (long *)0x0) || (lVar10 = *local_160, lVar10 == 0)) {
LAB_00200bc8:
      FUN_001f3ae0(uVar9,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
      return 6;
    }
    FUN_001e1190(lVar10,local_1a0,0x40);
    if (*(int *)(lVar10 + 4) != 2) {
      FUN_001f3ae0(uVar9,"SOCKS4 connection to %s not supported\n",local_1a0);
      FUN_001e181c(uVar9,local_160);
      goto LAB_00200bc8;
    }
    local_154 = *(undefined4 *)(*(long *)(lVar10 + 0x20) + 4);
    FUN_001f3934(uVar9,"SOCKS4 connect to IPv4 %s (locally resolved)\n",local_1a0);
    FUN_001e181c(uVar9,local_160);
  }
  local_150 = '\0';
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    if (0xfd < sVar6) {
      pcVar8 = "Too long SOCKS proxy name, can\'t use!\n";
      goto LAB_00200b98;
    }
    memcpy(&local_150,param_1,sVar6 + 1);
  }
  sVar6 = strlen(&local_150);
  if (iVar3 == 6) {
    local_154 = 0x1000000;
    sVar7 = strlen(param_2);
    lVar10 = sVar7 + 1;
    if (0x106 < (long)(lVar10 + sVar6 + 9)) goto LAB_00200ad0;
    strcpy(acStack_14f + sVar6,param_2);
  }
  else {
LAB_00200ad0:
    lVar10 = 0;
  }
  plVar1 = (long *)(lVar10 + sVar6 + 9);
  iVar5 = FUN_001f3d04(param_5,uVar4,&local_158,plVar1,&local_160);
  if ((iVar5 == 0) && (local_160 == plVar1)) {
    if ((iVar3 == 6) && (lVar10 == 0)) {
      sVar6 = strlen(param_2);
      iVar5 = FUN_001f3d04(param_5,uVar4,param_2,(long *)(sVar6 + 1),&local_160);
      if ((iVar5 != 0) || (local_160 != (long *)(sVar6 + 1))) goto LAB_00200b7c;
    }
    iVar5 = FUN_002007d8(param_5,uVar4,&local_158,8,local_1a0);
    if ((iVar5 == 0) && (local_1a0[0] == 8)) {
      if ((char)local_158 == '\0') {
        switch(local_158._1_1_) {
        case 0x5a:
          puVar2 = &DAT_03949143;
          if (iVar3 != 6) {
            puVar2 = &DAT_03996322;
          }
          FUN_001f3934(uVar9,"SOCKS4%s request granted.\n",puVar2);
          FUN_001f1bf4(uVar4,1);
          return 0;
        case 0x5b:
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.";
          break;
        case 0x5c:
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
          ;
          break;
        case 0x5d:
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
          ;
          break;
        default:
          pcVar8 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
        }
        FUN_001f3ae0(uVar9,pcVar8,(undefined1)local_154,local_154._1_1_,local_154._2_1_,
                     local_154._3_1_,CONCAT11(local_156,local_155));
        return 7;
      }
      pcVar8 = "SOCKS4 reply has wrong version, version should be 4.";
    }
    else {
      pcVar8 = "Failed to receive SOCKS4 connect request ack.";
    }
  }
  else {
LAB_00200b7c:
    pcVar8 = "Failed to send SOCKS4 connect request.";
  }
LAB_00200b98:
  FUN_001f3ae0(uVar9,pcVar8);
  return 7;
}


