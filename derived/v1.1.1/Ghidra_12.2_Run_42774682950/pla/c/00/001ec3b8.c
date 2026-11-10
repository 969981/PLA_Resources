/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ec3b8; name: FUN_001ec3b8
 */


int FUN_001ec3b8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                )

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  long local_58;
  undefined8 local_48;
  
  lVar9 = *(long *)(param_2 + 8);
  uVar10 = *param_1;
  if (lVar9 == 1) {
    if ((param_5 & 1) == 0) {
      if (((*(uint *)((long)param_1 + 0x3fc) >> 7 & 1) != 0) &&
         (lVar9 = FUN_001f906c(param_1,"Authorization"), lVar9 == 0)) goto LAB_001ec568;
LAB_001ec45c:
      pcVar11 = (char *)0x0;
LAB_001ec460:
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
      goto LAB_001ec46c;
    }
    if (((*(uint *)((long)param_1 + 0x3fc) >> 8 & 1) == 0) ||
       (lVar9 = FUN_001ebd28(param_1,"Proxy-authorization"), lVar9 != 0)) goto LAB_001ec45c;
LAB_001ec568:
    bVar5 = (param_5 & 1) == 0;
    local_48 = 0;
    lVar9 = 0x458;
    if (bVar5) {
      lVar9 = 0x470;
    }
    local_58 = 0;
    uVar12 = *param_1;
    lVar3 = 0x188;
    if (bVar5) {
      lVar3 = 0x218;
    }
    lVar4 = 0x180;
    if (bVar5) {
      lVar4 = 0x210;
    }
    pcVar11 = (char *)FUN_001e6534("%s:%s",*(undefined8 *)((long)param_1 + lVar4),
                                   *(undefined8 *)((long)param_1 + lVar3));
    if (pcVar11 != (char *)0x0) {
      sVar7 = strlen(pcVar11);
      iVar6 = FUN_001e2fc0(uVar12,pcVar11,sVar7,&local_58,&local_48);
      if (iVar6 == 0) {
        if (local_58 == 0) {
          iVar6 = 9;
        }
        else {
          FUN_002044d4(*(undefined8 *)((long)param_1 + lVar9));
          pcVar1 = "Proxy-";
          if ((param_5 & 1) == 0) {
            pcVar1 = "";
          }
          uVar12 = FUN_001e6534("%sAuthorization: Basic %s\r\n",pcVar1,local_58);
          *(undefined8 *)((long)param_1 + lVar9) = uVar12;
          FUN_002044d4(local_58);
          iVar6 = 0x1b;
          if (*(long *)((long)param_1 + lVar9) != 0) {
            iVar6 = 0;
          }
        }
      }
      FUN_002044d4(pcVar11);
      if (iVar6 != 0) {
        return iVar6;
      }
      pcVar11 = "Basic";
      goto LAB_001ec460;
    }
LAB_001ec634:
    iVar6 = 0x1b;
  }
  else {
    if (lVar9 == 2) {
      iVar6 = FUN_001e3220(param_1,param_5 & 1);
      if (iVar6 != 0) {
        return iVar6;
      }
      pcVar11 = "Digest";
LAB_001ec46c:
      lVar9 = *(long *)(param_2 + 8);
    }
    else {
      pcVar11 = (char *)0x0;
    }
    if (lVar9 == 0x40) {
      if ((((param_5 & 1) == 0) && (param_1[0x45] != 0)) &&
         (lVar9 = FUN_001f906c(param_1,"Authorization:"), lVar9 == 0)) {
        FUN_002044d4(param_1[0x8e]);
        lVar9 = FUN_001e6534("Authorization: Bearer %s\r\n",param_1[0x45]);
        param_1[0x8e] = lVar9;
        if (lVar9 == 0) goto LAB_001ec634;
        pcVar11 = "Bearer";
      }
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
    }
    if (pcVar11 == (char *)0x0) {
      bVar8 = *(byte *)(param_2 + 0x18) & 0xfd;
    }
    else {
      bVar5 = (param_5 & 1) == 0;
      lVar9 = 0x180;
      if (bVar5) {
        lVar9 = 0x210;
      }
      pcVar1 = "Proxy";
      if (bVar5) {
        pcVar1 = "Server";
      }
      puVar2 = &DAT_03996322;
      if (*(undefined1 **)((long)param_1 + lVar9) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)((long)param_1 + lVar9);
      }
      FUN_001f3934(uVar10,"%s auth using %s with user \'%s\'\n",pcVar1,pcVar11,puVar2);
      bVar8 = ((*(byte *)(param_2 + 0x18) & 1) << 1 | *(byte *)(param_2 + 0x18) & 0xfd) ^ 2;
    }
    iVar6 = 0;
    *(byte *)(param_2 + 0x18) = bVar8;
  }
  return iVar6;
}


