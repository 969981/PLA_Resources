/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004611f0; name: FUN_004611f0
 */


int FUN_004611f0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  size_t sVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined4 local_90 [2];
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  
  uVar9 = FUN_0044e530();
  local_7c = 0x16;
  local_88 = &local_80;
  local_70 = 0;
  local_90[0] = 2;
  iVar6 = FUN_0044a140(uVar9,0xd,0xffffffff);
  if (iVar6 != -1) {
    do {
      FUN_0044a0e0(uVar9,iVar6);
      uVar10 = FUN_0044a0d0();
      uVar7 = FUN_00448dc0(&local_68,uVar10);
      pcVar3 = local_68;
      if ((int)uVar7 < 0) {
        return 0x11;
      }
      lVar4 = (long)(int)uVar7;
      lVar5 = -((long)(int)uVar7 << 0x20);
      do {
        lVar14 = lVar5;
        lVar12 = lVar4;
        uVar15 = (ulong)uVar7;
        if (lVar12 < 1) break;
        uVar7 = uVar7 - 1;
        lVar4 = lVar12 + -1;
        lVar5 = lVar14 + 0x100000000;
      } while (local_68[lVar12 + -1] == '\0');
      sVar11 = strlen(local_68);
      if (sVar11 != -lVar14 >> 0x20) {
        FUN_00400420(pcVar3,"external/openssl/crypto/x509v3/v3_ncons.c",0x155);
        return 0x35;
      }
      if ((int)lVar12 < 1) {
LAB_00461264:
        FUN_00400420(pcVar3,"external/openssl/crypto/x509v3/v3_ncons.c",0x185);
      }
      else {
        uVar13 = 0;
        bVar2 = false;
        do {
          bVar1 = pcVar3[uVar13];
          if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f)) &&
             (9 < (byte)(bVar1 - 0x30))) {
            if ((uVar13 == 0) || (-0x100000000 - lVar14 >> 0x20 <= (long)uVar13)) goto LAB_00461264;
            if (bVar1 != 0x2d) {
              if (((bVar1 != 0x2e) || (pcVar3[uVar13 + 1] == '.')) ||
                 ((pcVar3[uVar13 + 1] == '-' || (pcVar3[uVar13 - 1] == '-')))) goto LAB_00461264;
              bVar2 = true;
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar15 != uVar13);
        if (!bVar2) goto LAB_00461264;
        if (lVar14 != 0) {
          local_80 = (undefined4)((ulong)-lVar14 >> 0x20);
          local_78 = pcVar3;
          iVar8 = FUN_00461090(local_90,param_2);
          FUN_00400420(pcVar3,"external/openssl/crypto/x509v3/v3_ncons.c",0x1af);
          if (iVar8 != 0) {
            return iVar8;
          }
        }
      }
      iVar6 = FUN_0044a140(uVar9,0xd,iVar6);
    } while (iVar6 != -1);
  }
  return 0;
}


