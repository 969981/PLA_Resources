/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f63a0; name: FUN_004f63a0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_004f63a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  code *pcVar11;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  long local_80;
  long local_78;
  char *local_70;
  char *local_68;
  
  local_78 = 0;
  local_70 = (char *)0x0;
  local_68 = (char *)0x0;
  lVar4 = param_2;
  if ((param_2 == 0) && (lVar4 = FUN_004071e0(), lVar4 == 0)) {
    FUN_004014b0(9,0x74,0x41,"external/openssl/crypto/pem/pem_info.c",0x36);
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)FUN_004f6890();
    if (plVar5 != (long *)0x0) {
      iVar2 = FUN_00443350(param_1,&local_68,&local_70,&local_78,&local_88);
      if (iVar2 != 0) {
LAB_004f6420:
LAB_004f64a0:
        pcVar10 = local_68;
        iVar2 = strcmp(local_68,"CERTIFICATE");
        if ((iVar2 == 0) || (iVar2 = strcmp(pcVar10,"X509 CERTIFICATE"), iVar2 == 0)) {
          if (*plVar5 != 0) goto LAB_004f6708;
          pcVar11 = (code *)PTR_FUN_04374780;
LAB_004f6594:
          iVar2 = 0;
          iVar3 = FUN_00443040(local_70,auStack_a0);
          plVar1 = plVar5;
        }
        else {
          iVar2 = strcmp(pcVar10,"TRUSTED CERTIFICATE");
          if (iVar2 == 0) {
            if (*plVar5 == 0) {
              pcVar11 = (code *)PTR_LAB_043747c0;
              goto LAB_004f6594;
            }
            goto LAB_004f6708;
          }
          iVar2 = strcmp(pcVar10,"X509 CRL");
          pcVar11 = (code *)PTR_LAB_043747b8;
          if (iVar2 == 0) {
            if (plVar5[1] == 0) {
              iVar2 = 0;
              iVar3 = FUN_00443040(local_70,auStack_a0);
              plVar1 = plVar5 + 1;
              goto joined_r0x004f6628;
            }
            goto LAB_004f6708;
          }
          iVar2 = strcmp(pcVar10,"RSA PRIVATE KEY");
          if (iVar2 == 0) {
            if (plVar5[2] != 0) goto LAB_004f6708;
            plVar5[7] = 0;
            *(undefined4 *)(plVar5 + 6) = 0;
            lVar6 = FUN_004f6940();
            pcVar10 = local_70;
            plVar5[2] = lVar6;
            if (lVar6 == 0) goto LAB_004f67d8;
            sVar7 = strlen(local_70);
            pcVar11 = (code *)PTR_FUN_043747d8;
            if ((int)sVar7 < 0xb) {
              iVar2 = 6;
              iVar3 = FUN_00443040(local_70,auStack_a0);
              plVar1 = (long *)(lVar6 + 0x18);
              goto joined_r0x004f6628;
            }
LAB_004f66bc:
            iVar2 = FUN_00443040(pcVar10,plVar5 + 3);
            if (iVar2 == 0) goto LAB_004f67d8;
            plVar5[7] = local_78;
            *(int *)(plVar5 + 6) = (int)local_88;
            local_78 = 0;
LAB_004f6448:
            FUN_00400420(local_68,"external/openssl/crypto/pem/pem_info.c",0xd1);
            local_68 = (char *)0x0;
            FUN_00400420(local_70,"external/openssl/crypto/pem/pem_info.c",0xd3);
            local_70 = (char *)0x0;
            FUN_00400420(local_78,"external/openssl/crypto/pem/pem_info.c",0xd5);
            local_78 = 0;
            iVar2 = FUN_00443350(param_1,&local_68,&local_70,&local_78,&local_88);
            if (iVar2 == 0) goto LAB_004f6728;
            goto LAB_004f64a0;
          }
          iVar2 = strcmp(pcVar10,"DSA PRIVATE KEY");
          if (iVar2 == 0) {
            if (plVar5[2] == 0) {
              plVar5[7] = 0;
              *(undefined4 *)(plVar5 + 6) = 0;
              lVar6 = FUN_004f6940();
              pcVar10 = local_70;
              plVar5[2] = lVar6;
              if (lVar6 != 0) {
                sVar7 = strlen(local_70);
                pcVar11 = (code *)PTR_FUN_043747e0;
                if (10 < (int)sVar7) goto LAB_004f66bc;
                plVar1 = (long *)(lVar6 + 0x18);
                iVar2 = 0x74;
                iVar3 = FUN_00443040(local_70,auStack_a0);
                goto joined_r0x004f6628;
              }
              goto LAB_004f67d8;
            }
            goto LAB_004f6708;
          }
          iVar2 = strcmp(pcVar10,"EC PRIVATE KEY");
          if (iVar2 != 0) goto LAB_004f6448;
          if (plVar5[2] != 0) goto LAB_004f6708;
          plVar5[7] = 0;
          *(undefined4 *)(plVar5 + 6) = 0;
          lVar6 = FUN_004f6940();
          pcVar10 = local_70;
          plVar5[2] = lVar6;
          if (lVar6 == 0) goto LAB_004f67d8;
          sVar7 = strlen(local_70);
          pcVar11 = (code *)PTR_FUN_043747d0;
          if (10 < (int)sVar7) goto LAB_004f66bc;
          iVar2 = 0x198;
          iVar3 = FUN_00443040(local_70,auStack_a0);
          plVar1 = (long *)(lVar6 + 0x18);
        }
joined_r0x004f6628:
        if ((iVar3 != 0) &&
           (iVar3 = FUN_00442df0(auStack_a0,local_78,&local_88,param_3,param_4), iVar3 != 0)) {
          local_80 = local_78;
          if (iVar2 == 0) {
            lVar6 = (*pcVar11)(plVar1,&local_80,local_88);
            if (lVar6 != 0) goto LAB_004f6448;
            uVar9 = 0xc4;
          }
          else {
            lVar6 = FUN_00466e80(iVar2,plVar1,&local_80,local_88);
            if (lVar6 != 0) goto LAB_004f6448;
            uVar9 = 0xc0;
          }
          FUN_004014b0(9,0x74,0xd,"external/openssl/crypto/pem/pem_info.c",uVar9);
        }
        goto LAB_004f67d8;
      }
LAB_004f6728:
      uVar8 = FUN_00401a70();
      if ((uVar8 & 0xfff) == 0x6c) {
        FUN_004016d0();
        if ((((*plVar5 != 0) || (plVar5[1] != 0)) || (plVar5[2] != 0)) || (plVar5[7] != 0)) {
          iVar2 = FUN_00407800(lVar4,plVar5);
          if (iVar2 == 0) goto LAB_004f67d8;
          plVar5 = (long *)0x0;
        }
        FUN_004f68e0(plVar5);
        goto LAB_004f682c;
      }
    }
  }
LAB_004f67d8:
  FUN_004f68e0(plVar5);
  iVar2 = FUN_00407950(lVar4);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      FUN_00407970(lVar4,iVar2);
      FUN_004f68e0();
      iVar2 = iVar2 + 1;
      iVar3 = FUN_00407950(lVar4);
    } while (iVar2 < iVar3);
  }
  if (lVar4 != param_2) {
    FUN_00407010(lVar4);
  }
  lVar4 = 0;
LAB_004f682c:
  FUN_00400420(local_68,"external/openssl/crypto/pem/pem_info.c",0xf0);
  FUN_00400420(local_70,"external/openssl/crypto/pem/pem_info.c",0xf1);
  FUN_00400420(local_78,"external/openssl/crypto/pem/pem_info.c",0xf2);
  return lVar4;
LAB_004f6708:
  iVar2 = FUN_00407800(lVar4,plVar5);
  if ((iVar2 == 0) || (plVar5 = (long *)FUN_004f6890(), plVar5 == (long *)0x0)) goto LAB_004f67d8;
  goto LAB_004f6420;
}


