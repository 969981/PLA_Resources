/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f15d0; name: FUN_004f15d0
 */


undefined4 FUN_004f15d0(long param_1,long param_2)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  char *local_78;
  size_t local_70;
  void *local_68;
  
  local_70 = 0;
  local_68 = (void *)0x0;
  local_80 = 0;
  local_78 = (char *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_004014b0(0x14,0x151,0x43,"external/openssl/ssl/ssl_rsa.c",0x39c);
    lVar5 = 0;
    uVar2 = 0;
    lVar3 = 0;
    goto LAB_004f1908;
  }
  FUN_00414680();
  lVar3 = FUN_00403d80();
  if (lVar3 == 0) {
    uVar7 = 0x3a2;
    uVar6 = 7;
LAB_004f1810:
    FUN_004014b0(0x14,0x151,uVar6,"external/openssl/ssl/ssl_rsa.c",uVar7);
    lVar5 = 0;
  }
  else {
    iVar1 = FUN_00404920(lVar3,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0x3a6;
      uVar6 = 2;
      goto LAB_004f1810;
    }
    iVar1 = FUN_00443350(lVar3,&local_78,&local_80,&local_68,&local_70);
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar10 = 0;
      lVar11 = 0;
      lVar9 = 0;
      lVar8 = 0;
      do {
        __s1 = local_78;
        sVar4 = strlen(local_78);
        if (sVar4 < 0xf) {
          uVar6 = 0x188;
          uVar7 = 0x3bb;
          goto LAB_004f1900;
        }
        iVar1 = strncmp(__s1,"SERVERINFO FOR ",0xf);
        if (iVar1 == 0) {
          if (((long)local_70 < 4) ||
             ((ulong)CONCAT11(*(undefined1 *)((long)local_68 + 2),
                              *(undefined1 *)((long)local_68 + 3)) != local_70 - 4)) {
            uVar6 = 0x186;
            uVar7 = 0x3d5;
            goto LAB_004f1900;
          }
          lVar11 = 4;
        }
        else {
          if (sVar4 < 0x11) {
            uVar6 = 0x188;
            uVar7 = 0x3c3;
            goto LAB_004f1900;
          }
          iVar1 = strncmp(__s1,"SERVERINFOV2 FOR ",0x11);
          if (iVar1 != 0) {
            uVar6 = 0x187;
            uVar7 = 0x3c8;
            goto LAB_004f1900;
          }
          if (((long)local_70 < 8) ||
             ((ulong)CONCAT11(*(undefined1 *)((long)local_68 + 6),
                              *(undefined1 *)((long)local_68 + 7)) != local_70 - 8)) {
            uVar6 = 0x186;
            uVar7 = 0x3e2;
            goto LAB_004f1900;
          }
        }
        lVar5 = FUN_00400350(lVar8,lVar11 + lVar9 + local_70,"external/openssl/ssl/ssl_rsa.c",1000);
        if (lVar5 == 0) {
          uVar6 = 0x41;
          uVar7 = 0x3ea;
          goto LAB_004f1900;
        }
        if (lVar11 != 0) {
          *(undefined4 *)(lVar5 + lVar9) = 0xd0010000;
        }
        memcpy((void *)(lVar5 + lVar9 + lVar11),local_68,local_70);
        lVar9 = lVar11 + lVar9 + local_70;
        FUN_00400420(local_78,"external/openssl/ssl/ssl_rsa.c",0x3fb);
        local_78 = (char *)0x0;
        FUN_00400420(local_80,"external/openssl/ssl/ssl_rsa.c",0x3fd);
        local_80 = 0;
        FUN_00400420(local_68,"external/openssl/ssl/ssl_rsa.c",0x3ff);
        local_68 = (void *)0x0;
        iVar1 = FUN_00443350(lVar3,&local_78,&local_80,&local_68,&local_70);
        lVar10 = lVar10 + -1;
        lVar8 = lVar5;
      } while (iVar1 != 0);
      if (lVar10 != 0) {
        uVar2 = FUN_004f1280(param_1,2,lVar5,lVar9);
        goto LAB_004f1908;
      }
    }
    uVar6 = 0x185;
    uVar7 = 0x3b4;
    lVar8 = lVar5;
LAB_004f1900:
    FUN_004014b0(0x14,0x151,uVar6,"external/openssl/ssl/ssl_rsa.c",uVar7);
    lVar5 = lVar8;
  }
  uVar2 = 0;
LAB_004f1908:
  FUN_00400420(local_78,"external/openssl/ssl/ssl_rsa.c",0x407);
  FUN_00400420(local_80,"external/openssl/ssl/ssl_rsa.c",0x408);
  FUN_00400420(local_68,"external/openssl/ssl/ssl_rsa.c",0x409);
  FUN_00400420(lVar5,"external/openssl/ssl/ssl_rsa.c",0x40a);
  FUN_00403ee0(lVar3);
  return uVar2;
}


