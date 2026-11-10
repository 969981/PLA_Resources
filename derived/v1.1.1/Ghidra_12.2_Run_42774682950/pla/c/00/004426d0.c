/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004426d0; name: FUN_004426d0
 */


bool FUN_004426d0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,char *param_6,ulong param_7,code *param_8,char *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *__s;
  size_t sVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  char *pcVar15;
  size_t sVar16;
  undefined1 *puVar17;
  undefined1 local_4c0 [16];
  undefined1 auStack_4b0 [64];
  char local_470 [1024];
  long local_70;
  undefined8 local_68;
  
  sVar16 = param_7 & 0xffffffff;
  local_68 = 0;
  if (param_5 == 0) {
    __s = (char *)0x0;
LAB_0044278c:
    iVar1 = (*param_1)(param_4,0);
    if (-1 < iVar1) {
      lVar12 = FUN_00400260(iVar1 + 0x14,"external/openssl/crypto/pem/pem_lib.c",0x156);
      if (lVar12 == 0) {
        uVar10 = 0x41;
        uVar11 = 0x158;
LAB_004428b0:
        FUN_004014b0(9,0x69,uVar10,"external/openssl/crypto/pem/pem_lib.c",uVar11);
      }
      else {
        local_70 = lVar12;
        iVar2 = (*param_1)(param_4,&local_70);
        local_68 = CONCAT44(iVar2,(int)local_68);
        if (param_5 == 0) {
          lVar14 = 0;
          local_470[0] = '\0';
LAB_004428c0:
          iVar2 = FUN_00442b60(param_3,param_2,local_470,lVar12,(long)iVar2);
          bVar13 = 0 < iVar2;
          local_68 = CONCAT44(iVar2,(int)local_68);
          goto LAB_00442830;
        }
        if (param_6 == (char *)0x0) {
          if (param_8 == (code *)0x0) {
            if (param_9 != (char *)0x0) {
              sVar16 = strlen(param_9);
              uVar3 = (uint)sVar16;
              if (0x3ff < (int)uVar3) {
                uVar3 = 0x400;
              }
              sVar16 = (size_t)uVar3;
              memcpy(local_470,param_9,(long)(int)uVar3);
              goto joined_r0x00442b38;
            }
            pcVar9 = (char *)FUN_004444c0();
            pcVar15 = "Enter PEM pass phrase:";
            if (pcVar9 != (char *)0x0) {
              pcVar15 = pcVar9;
            }
            iVar2 = FUN_004444e0(local_470,4,0x400,pcVar15,1);
            if (iVar2 == 0) {
              sVar16 = strlen(local_470);
              uVar3 = (uint)sVar16;
              goto joined_r0x00442b38;
            }
            FUN_004014b0(9,100,0x6d,"external/openssl/crypto/pem/pem_lib.c",0x3b);
            memset(local_470,0,0x400);
          }
          else {
            uVar8 = (*param_8)(local_470,0x400,1,param_9);
            sVar16 = uVar8 & 0xffffffff;
            uVar3 = (uint)uVar8;
joined_r0x00442b38:
            if (0 < (int)uVar3) {
              param_6 = local_470;
              goto LAB_0044291c;
            }
          }
          uVar10 = 0x6f;
          uVar11 = 0x165;
          goto LAB_004428b0;
        }
LAB_0044291c:
        uVar4 = FUN_0041cc30(param_5);
        iVar2 = FUN_00427c60(local_4c0,uVar4);
        if (0 < iVar2) {
          uVar10 = FUN_0044ebb0();
          iVar2 = FUN_004445d0(param_5,uVar10,local_4c0,param_6,sVar16 & 0xffffffff,1,auStack_4b0,0)
          ;
          if (iVar2 != 0) {
            if (param_6 == local_470) {
              FUN_004006a0(local_470,0x400);
            }
            local_470[0] = '\0';
            sVar16 = strlen(local_470);
            FUN_00403120(local_470 + sVar16,0x400 - sVar16,"Proc-Type: 4,%s\n","ENCRYPTED");
            iVar5 = FUN_0041cc30(param_5);
            sVar16 = strlen(local_470);
            pcVar15 = local_470 + sVar16;
            iVar2 = 0x400 - (int)sVar16;
            iVar6 = FUN_00403120(pcVar15,(long)iVar2,"DEK-Info: %s,",__s);
            if (0 < iVar6) {
              pcVar15 = pcVar15 + iVar6;
              iVar2 = iVar2 - iVar6;
              if (0 < iVar5) {
                lVar14 = (long)iVar5;
                puVar17 = local_4c0;
                do {
                  iVar5 = FUN_00403120(pcVar15,(long)iVar2,&DAT_039379ee,*puVar17);
                  if (iVar5 < 1) goto LAB_00442a48;
                  pcVar15 = pcVar15 + iVar5;
                  iVar2 = iVar2 - iVar5;
                  puVar17 = puVar17 + 1;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              if (1 < iVar2) {
                pcVar15[0] = '\n';
                pcVar15[1] = '\0';
              }
            }
LAB_00442a48:
            lVar14 = FUN_0041b530();
            if ((lVar14 != 0) &&
               (iVar2 = FUN_0041c080(lVar14,param_5,0,auStack_4b0,local_4c0), iVar2 != 0)) {
              iVar2 = FUN_0041ba10(lVar14,lVar12,&local_68,lVar12,local_68._4_4_);
              if (iVar2 != 0) {
                iVar2 = FUN_0041bcd0(lVar14,lVar12 + (int)local_68,(long)&local_68 + 4);
                if (iVar2 != 0) {
                  iVar2 = local_68._4_4_ + (int)local_68;
                  local_68 = CONCAT44(iVar2,(int)local_68);
                  goto LAB_004428c0;
                }
              }
            }
            bVar13 = false;
            goto LAB_00442830;
          }
        }
      }
      lVar14 = 0;
      bVar13 = false;
      goto LAB_00442830;
    }
    uVar10 = 0xd;
    uVar11 = 0x150;
  }
  else {
    FUN_0041cbd0(param_5);
    __s = (char *)FUN_00407d80();
    if (((__s != (char *)0x0) && (iVar1 = FUN_0041cc30(param_5), iVar1 != 0)) &&
       (iVar1 = FUN_0041cc30(param_5), iVar1 < 0x11)) {
      sVar7 = strlen(__s);
      iVar1 = FUN_0041cc30(param_5);
      if (sVar7 + (long)(iVar1 << 1) + 0x24 < 0x401) goto LAB_0044278c;
    }
    uVar10 = 0x71;
    uVar11 = 0x14a;
  }
  FUN_004014b0(9,0x69,uVar10,"external/openssl/crypto/pem/pem_lib.c",uVar11);
  lVar14 = 0;
  iVar1 = 0;
  bVar13 = false;
  lVar12 = 0;
LAB_00442830:
  FUN_004006a0(auStack_4b0,0x40);
  FUN_004006a0(local_4c0,0x10);
  FUN_0041b550(lVar14);
  FUN_004006a0(local_470,0x400);
  FUN_00400620(lVar12,iVar1,"external/openssl/crypto/pem/pem_lib.c",0x194);
  return bVar13;
}


