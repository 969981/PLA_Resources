/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00443040; name: FUN_00443040
 */


undefined8 FUN_00443040(char *param_1,long *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  char *pcVar13;
  ulong uVar14;
  
  *param_2 = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (*param_1 == '\0') {
    return 1;
  }
  if (*param_1 == '\n') {
    return 1;
  }
  iVar4 = strncmp(param_1,"Proc-Type:",10);
  if (iVar4 != 0) {
    uVar8 = 0x6b;
    uVar9 = 0x6b;
    uVar10 = 0x1f0;
    goto LAB_004430b0;
  }
  sVar6 = strspn(param_1 + 10," \t");
  pcVar1 = param_1 + 10 + sVar6;
  if (*pcVar1 != '4') {
    return 0;
  }
  pcVar13 = pcVar1 + 2;
  if (pcVar1[1] != ',') {
    return 0;
  }
  sVar6 = strspn(pcVar13," \t");
  iVar4 = strncmp(pcVar13 + sVar6,"ENCRYPTED",9);
  if (iVar4 == 0) {
    pcVar1 = pcVar13 + sVar6 + 9;
    sVar6 = strspn(pcVar1," \t\r\n");
    if (sVar6 != 0) {
      sVar6 = strspn(pcVar1," \t\r");
      pcVar1 = pcVar1 + sVar6;
      if (*pcVar1 == '\n') {
        iVar4 = strncmp(pcVar1 + 1,"DEK-Info:",9);
        if (iVar4 == 0) {
          sVar6 = strspn(pcVar1 + 10," \t");
          pcVar1 = pcVar1 + 10 + sVar6;
          sVar6 = strcspn(pcVar1," \t,");
          pcVar13 = pcVar1 + sVar6;
          cVar2 = *pcVar13;
          *pcVar13 = '\0';
          lVar7 = FUN_00446500(pcVar1);
          *param_2 = lVar7;
          *pcVar13 = cVar2;
          sVar6 = strspn(pcVar13," \t");
          if (lVar7 == 0) {
            uVar8 = 0x6b;
            uVar9 = 0x72;
            uVar10 = 0x21f;
          }
          else {
            pcVar13 = pcVar13 + sVar6;
            iVar4 = FUN_0041cc30(lVar7);
            if (iVar4 < 1) {
              if ((iVar4 == 0) && (*pcVar13 == ',')) {
                uVar8 = 0x6b;
                uVar9 = 0x82;
                uVar10 = 0x227;
                goto LAB_004430b0;
              }
            }
            else {
              cVar2 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              if (cVar2 != ',') {
                uVar8 = 0x6b;
                uVar9 = 0x81;
                uVar10 = 0x224;
                goto LAB_004430b0;
              }
            }
            uVar5 = FUN_0041cc30(lVar7);
            if ((int)uVar5 < 1) {
              return 1;
            }
            memset(param_2 + 1,0,(ulong)uVar5);
            uVar12 = 0;
            uVar14 = 0;
            while (iVar4 = FUN_004051d0(pcVar13[uVar14]), -1 < iVar4) {
              uVar11 = uVar14 >> 1 & 0x7fffffff;
              uVar14 = uVar14 + 1;
              uVar3 = ~uVar12;
              uVar12 = uVar12 + 4;
              *(byte *)((long)param_2 + uVar11 + 8) =
                   *(byte *)((long)param_2 + uVar11 + 8) | (byte)(iVar4 << (ulong)(uVar3 & 4));
              if ((int)(uVar5 * 2) <= (int)uVar14) {
                return 1;
              }
            }
            uVar8 = 0x65;
            uVar9 = 0x67;
            uVar10 = 0x23d;
          }
        }
        else {
          uVar8 = 0x6b;
          uVar9 = 0x69;
          uVar10 = 0x20c;
        }
      }
      else {
        uVar8 = 0x6b;
        uVar10 = 0x203;
        uVar9 = 0x70;
      }
      goto LAB_004430b0;
    }
  }
  uVar8 = 0x6b;
  uVar9 = 0x6a;
  uVar10 = 0x1fd;
LAB_004430b0:
  FUN_004014b0(9,uVar8,uVar9,"external/openssl/crypto/pem/pem_lib.c",uVar10);
  return 0;
}


