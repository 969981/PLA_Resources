/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00443360; name: FUN_00443360
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00443360(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
            uint param_6)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  size_t sVar17;
  long lVar18;
  long lVar19;
  char *local_88;
  long local_78;
  long *local_70;
  int local_68;
  int local_64;
  
  lVar8 = FUN_00445ab0();
  if (lVar8 == 0) {
    FUN_004014b0(9,0x91,0x41,"external/openssl/crypto/pem/pem_lib.c",0x380);
    return 0;
  }
  *param_5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if ((~param_6 & 6) == 0) {
    FUN_004014b0(9,0x91,7,"external/openssl/crypto/pem/pem_lib.c",0x389);
    lVar18 = 0;
    lVar19 = 0;
    local_88 = (char *)0x0;
    FUN_00445ad0(lVar8);
joined_r0x004433f4:
    uVar9 = 0;
joined_r0x00443b00:
    if ((param_6 & 1) != 0) {
LAB_004439b0:
      FUN_00406700(local_88,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
      goto LAB_00443b60;
    }
  }
  else {
    uVar1 = param_6 & 1;
    if ((param_6 & 1) == 0) {
      uVar9 = FUN_00443d70();
    }
    else {
      uVar9 = FUN_00443d80();
    }
    lVar18 = FUN_00403d80();
    lVar19 = FUN_00403d80(uVar9);
    if ((lVar18 == 0) || (lVar19 == 0)) {
      uVar9 = 0x91;
      uVar15 = 0x391;
LAB_004435d0:
      FUN_004014b0(9,uVar9,0x41,"external/openssl/crypto/pem/pem_lib.c",uVar15);
      local_88 = (char *)0x0;
      FUN_00445ad0(lVar8);
joined_r0x004439ac:
      uVar9 = 0;
      goto joined_r0x00443b00;
    }
    if (uVar1 == 0) {
      pcVar10 = (char *)FUN_00400260(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe5);
    }
    else {
      pcVar10 = (char *)thunk_FUN_00400260(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe4);
    }
    if (pcVar10 == (char *)0x0) {
      uVar9 = 0x90;
      uVar15 = 0x2e1;
      goto LAB_004435d0;
    }
    iVar5 = FUN_004046b0(param_1,pcVar10,0xff);
    if (0 < iVar5) {
      do {
        iVar5 = FUN_00443c70(pcVar10,iVar5,param_6 & 0xfffffffb);
        iVar6 = strncmp(pcVar10,"-----BEGIN ",0xb);
        if ((5 < iVar5) && (iVar6 == 0)) {
          iVar6 = strncmp(pcVar10 + (long)iVar5 + -6,"-----\n",6);
          if (iVar6 == 0) {
            pcVar10[(long)iVar5 + -6] = '\0';
            sVar17 = (size_t)(iVar5 + -0x10);
            if (uVar1 == 0) {
              local_88 = (char *)FUN_00400260(sVar17,"external/openssl/crypto/pem/pem_lib.c",0xe5);
            }
            else {
              local_88 = (char *)thunk_FUN_00400260(sVar17,"external/openssl/crypto/pem/pem_lib.c",
                                                    0xe4);
            }
            if (local_88 == (char *)0x0) {
              FUN_004014b0(9,0x90,0x41,"external/openssl/crypto/pem/pem_lib.c",0x2f8);
              bVar4 = false;
            }
            else {
              memcpy(local_88,pcVar10 + 0xb,sVar17);
              bVar4 = true;
            }
            goto joined_r0x00443580;
          }
        }
        iVar5 = FUN_004046b0(param_1,pcVar10,0xff);
      } while (0 < iVar5);
    }
    FUN_004014b0(9,0x90,0x6c,"external/openssl/crypto/pem/pem_lib.c",0x2e9);
    local_88 = (char *)0x0;
    bVar4 = false;
joined_r0x00443580:
    if (uVar1 == 0) {
      FUN_00400420(pcVar10,"external/openssl/crypto/pem/pem_lib.c",0xdf);
    }
    else {
      FUN_00406700(pcVar10,0x100,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    }
    if (!bVar4) {
LAB_0044399c:
      FUN_00445ad0(lVar8);
      goto joined_r0x004439ac;
    }
    if (uVar1 == 0) {
      pcVar10 = (char *)FUN_00400260(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe5);
      if (pcVar10 != (char *)0x0) goto LAB_00443658;
LAB_00443794:
      uVar9 = 0x8f;
      uVar15 = 0x41;
      uVar16 = 0x324;
LAB_00443998:
      FUN_004014b0(9,uVar9,uVar15,"external/openssl/crypto/pem/pem_lib.c",uVar16);
      goto LAB_0044399c;
    }
    pcVar10 = (char *)thunk_FUN_00400260(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe4);
    if (pcVar10 == (char *)0x0) goto LAB_00443794;
LAB_00443658:
    iVar5 = FUN_004046b0(param_1,pcVar10,0xff);
    if (0 < iVar5) {
      bVar4 = false;
      local_78 = lVar18;
      do {
        pvVar11 = memchr(pcVar10,0x3a,(long)iVar5);
        cVar3 = pvVar11 != (void *)0x0;
        do {
          iVar6 = strncmp(pcVar10,"-----END ",9);
          uVar7 = 0xfffffffb;
          if (iVar6 != 0 && cVar3 != '\x01') {
            uVar7 = 0xffffffff;
          }
          iVar5 = FUN_00443c70(pcVar10,iVar5,uVar7 & param_6);
          if (*pcVar10 == '\n') {
            if (cVar3 == '\x02') {
              FUN_004014b0(9,0x8f,0x66,"external/openssl/crypto/pem/pem_lib.c",0x33c);
              goto joined_r0x00443a30;
            }
            cVar3 = '\x02';
            local_78 = lVar19;
          }
          else {
            iVar6 = strncmp(pcVar10,"-----END ",9);
            if (iVar6 == 0) {
              sVar17 = strlen(local_88);
              iVar5 = strncmp(pcVar10 + 9,local_88,sVar17);
              if ((iVar5 != 0) || (iVar5 = strncmp(pcVar10 + 9 + sVar17,"-----\n",6), iVar5 != 0)) {
                FUN_004014b0(9,0x8f,0x66,"external/openssl/crypto/pem/pem_lib.c",0x34a);
                goto joined_r0x00443a30;
              }
              lVar12 = lVar19;
              if (cVar3 != '\0') {
                local_78 = lVar19;
                lVar12 = lVar18;
              }
              uVar2 = true;
              lVar19 = local_78;
              lVar18 = lVar12;
              goto joined_r0x00443bec;
            }
            if (bVar4) {
              FUN_004014b0(9,0x8f,0x66,"external/openssl/crypto/pem/pem_lib.c",0x354);
              uVar2 = false;
              goto joined_r0x00443bec;
            }
            iVar6 = FUN_004044c0(local_78,pcVar10);
            if (iVar6 < 0) goto joined_r0x00443a30;
            if (cVar3 == '\x02') {
              bVar4 = iVar5 != 0x41;
              if (0x41 < iVar5) goto joined_r0x00443a30;
              cVar3 = '\x02';
            }
            else {
              bVar4 = false;
            }
          }
          iVar5 = FUN_004046b0(param_1,pcVar10,0xff);
          if (iVar5 < 1) goto LAB_004437b0;
        } while (cVar3 != '\0');
      } while( true );
    }
LAB_004437b0:
    FUN_004014b0(9,0x8f,0x70,"external/openssl/crypto/pem/pem_lib.c",0x32c);
joined_r0x00443a30:
    uVar2 = false;
joined_r0x00443bec:
    if (uVar1 == 0) {
      FUN_00400420(pcVar10,"external/openssl/crypto/pem/pem_lib.c",0xdf);
    }
    else {
      FUN_00406700(pcVar10,0x100,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    }
    if (!(bool)uVar2) goto LAB_0044399c;
    FUN_00445fd0(lVar8);
    FUN_00404920(lVar19,0x73,0,&local_70);
    local_64 = (int)*local_70;
    iVar5 = FUN_00445fe0(lVar8,local_70[1],&local_64,local_70[1]);
    if ((iVar5 < 0) ||
       (iVar5 = FUN_004463a0(lVar8,local_70[1] + (long)local_64,&local_68), iVar5 < 0)) {
      uVar9 = 0x91;
      uVar15 = 100;
      uVar16 = 0x3a1;
      goto LAB_00443998;
    }
    lVar12 = (long)local_64;
    local_64 = (int)(lVar12 + local_68);
    *local_70 = lVar12 + local_68;
    if (local_64 == 0) {
      FUN_00445ad0(lVar8);
      goto joined_r0x004433f4;
    }
    uVar7 = FUN_00404920(lVar18,3,0,0);
    lVar12 = (long)(((ulong)uVar7 << 0x20) + 0x100000000) >> 0x20;
    if (uVar1 == 0) {
      lVar12 = FUN_00400260(lVar12,"external/openssl/crypto/pem/pem_lib.c",0xe5);
      *param_3 = lVar12;
      lVar13 = FUN_00400260((long)local_64,"external/openssl/crypto/pem/pem_lib.c",0xe5);
      *param_4 = lVar13;
      lVar12 = *param_3;
    }
    else {
      lVar12 = thunk_FUN_00400260(lVar12,"external/openssl/crypto/pem/pem_lib.c",0xe4);
      *param_3 = lVar12;
      lVar13 = thunk_FUN_00400260((long)local_64,"external/openssl/crypto/pem/pem_lib.c",0xe4);
      *param_4 = lVar13;
      lVar12 = *param_3;
    }
    lVar14 = lVar12;
    if ((lVar13 != 0) && (lVar14 = 0, lVar12 != 0)) {
      FUN_00404070(lVar18,lVar12,uVar7);
      *(undefined1 *)(*param_3 + ((long)((ulong)uVar7 << 0x20) >> 0x20)) = 0;
      FUN_00404070(lVar19,*param_4,local_64);
      uVar9 = 1;
      *param_5 = (long)local_64;
      *param_2 = local_88;
      FUN_00445ad0(lVar8);
      local_88 = (char *)0x0;
      goto joined_r0x00443b00;
    }
    if (uVar1 != 0) {
      FUN_00406700(lVar14,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
      FUN_00406700(*param_4,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
      FUN_00445ad0(lVar8);
      uVar9 = 0;
      goto LAB_004439b0;
    }
    FUN_00400420(lVar14,"external/openssl/crypto/pem/pem_lib.c",0xdf);
    FUN_00400420(*param_4,"external/openssl/crypto/pem/pem_lib.c",0xdf);
    FUN_00445ad0(lVar8);
    uVar9 = 0;
  }
  FUN_00400420(local_88,"external/openssl/crypto/pem/pem_lib.c",0xdf);
LAB_00443b60:
  FUN_00403ee0(lVar18);
  FUN_00403ee0(lVar19);
  return uVar9;
}


