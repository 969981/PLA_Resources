/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00447260; name: FUN_00447260
 */


char * FUN_00447260(char *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  size_t sVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong local_58;
  
  local_58 = 0;
  sVar13 = (size_t)param_2;
  if (param_2 == 0xffffffff) {
    sVar13 = strlen(param_1);
    param_2 = (uint)sVar13;
  }
  iVar12 = 2;
  if (0 < (int)param_2) {
    param_2 = (uint)sVar13;
    iVar12 = 0;
    iVar15 = 0;
LAB_004472c8:
    iVar2 = FUN_00449bc0(param_1 + iVar15,param_2 - iVar15,&local_58);
    if (-1 < iVar2) goto code_r0x004472dc;
    if (param_2 == 0xffffffff) {
      sVar13 = strlen(param_1);
    }
    uVar1 = (sVar13 & 0xffffffff) << 1;
    uVar16 = -(sVar13 >> 0x1f & 1) & 0xfffffffe00000000 | uVar1;
    iVar15 = (int)uVar1;
    iVar12 = iVar15 + 2;
    pcVar3 = (char *)FUN_00400260((long)iVar12,"external/openssl/crypto/pkcs12/p12_utl.c",0x19);
    if (pcVar3 == (char *)0x0) {
      uVar4 = 0x79;
      uVar5 = 0x1a;
      goto LAB_004474d4;
    }
    if ((int)sVar13 < 1) goto LAB_00447490;
    uVar1 = uVar16;
    if ((long)uVar16 < 3) {
      uVar1 = 2;
    }
    uVar1 = (uVar1 - 1 >> 1) + 1;
    if (uVar1 < 0x40) {
LAB_0044746c:
      uVar7 = 0;
      goto LAB_00447470;
    }
    uVar7 = uVar16;
    if ((long)uVar16 < 3) {
      uVar7 = 2;
    }
    if ((pcVar3 < param_1 + (uVar7 - 1 >> 1) + 1) && (param_1 < pcVar3 + uVar7)) goto LAB_0044746c;
    uVar9 = uVar1 & 0x7fffffffffffffc0;
    uVar10 = 0;
    uVar7 = uVar9 << 1;
    pcVar6 = pcVar3 + 0x40;
    do {
      uVar11 = uVar10 & 0x7fffffffffffffc0;
      uVar10 = uVar10 + 0x40;
      pcVar17 = param_1 + uVar11;
      uVar19 = *(undefined8 *)(pcVar17 + 8);
      uVar18 = *(undefined8 *)pcVar17;
      uVar21 = *(undefined8 *)(pcVar17 + 0x18);
      uVar20 = *(undefined8 *)(pcVar17 + 0x10);
      uVar23 = *(undefined8 *)(pcVar17 + 0x28);
      uVar22 = *(undefined8 *)(pcVar17 + 0x20);
      uVar5 = *(undefined8 *)(pcVar17 + 0x38);
      uVar4 = *(undefined8 *)(pcVar17 + 0x30);
      pcVar6[-0x40] = '\0';
      pcVar6[-0x3f] = (char)uVar18;
      pcVar6[-0x3e] = '\0';
      pcVar6[-0x3d] = (char)((ulong)uVar18 >> 8);
      pcVar6[-0x3c] = '\0';
      pcVar6[-0x3b] = (char)((ulong)uVar18 >> 0x10);
      pcVar6[-0x3a] = '\0';
      pcVar6[-0x39] = (char)((ulong)uVar18 >> 0x18);
      pcVar6[-0x38] = '\0';
      pcVar6[-0x37] = (char)((ulong)uVar18 >> 0x20);
      pcVar6[-0x36] = '\0';
      pcVar6[-0x35] = (char)((ulong)uVar18 >> 0x28);
      pcVar6[-0x34] = '\0';
      pcVar6[-0x33] = (char)((ulong)uVar18 >> 0x30);
      pcVar6[-0x32] = '\0';
      pcVar6[-0x31] = (char)((ulong)uVar18 >> 0x38);
      pcVar6[-0x30] = '\0';
      pcVar6[-0x2f] = (char)uVar19;
      pcVar6[-0x2e] = '\0';
      pcVar6[-0x2d] = (char)((ulong)uVar19 >> 8);
      pcVar6[-0x2c] = '\0';
      pcVar6[-0x2b] = (char)((ulong)uVar19 >> 0x10);
      pcVar6[-0x2a] = '\0';
      pcVar6[-0x29] = (char)((ulong)uVar19 >> 0x18);
      pcVar6[-0x28] = '\0';
      pcVar6[-0x27] = (char)((ulong)uVar19 >> 0x20);
      pcVar6[-0x26] = '\0';
      pcVar6[-0x25] = (char)((ulong)uVar19 >> 0x28);
      pcVar6[-0x24] = '\0';
      pcVar6[-0x23] = (char)((ulong)uVar19 >> 0x30);
      pcVar6[-0x22] = '\0';
      pcVar6[-0x21] = (char)((ulong)uVar19 >> 0x38);
      pcVar6[-0x20] = '\0';
      pcVar6[-0x1f] = (char)uVar20;
      pcVar6[-0x1e] = '\0';
      pcVar6[-0x1d] = (char)((ulong)uVar20 >> 8);
      pcVar6[-0x1c] = '\0';
      pcVar6[-0x1b] = (char)((ulong)uVar20 >> 0x10);
      pcVar6[-0x1a] = '\0';
      pcVar6[-0x19] = (char)((ulong)uVar20 >> 0x18);
      pcVar6[-0x18] = '\0';
      pcVar6[-0x17] = (char)((ulong)uVar20 >> 0x20);
      pcVar6[-0x16] = '\0';
      pcVar6[-0x15] = (char)((ulong)uVar20 >> 0x28);
      pcVar6[-0x14] = '\0';
      pcVar6[-0x13] = (char)((ulong)uVar20 >> 0x30);
      pcVar6[-0x12] = '\0';
      pcVar6[-0x11] = (char)((ulong)uVar20 >> 0x38);
      pcVar6[-0x10] = '\0';
      pcVar6[-0xf] = (char)uVar21;
      pcVar6[-0xe] = '\0';
      pcVar6[-0xd] = (char)((ulong)uVar21 >> 8);
      pcVar6[-0xc] = '\0';
      pcVar6[-0xb] = (char)((ulong)uVar21 >> 0x10);
      pcVar6[-10] = '\0';
      pcVar6[-9] = (char)((ulong)uVar21 >> 0x18);
      pcVar6[-8] = '\0';
      pcVar6[-7] = (char)((ulong)uVar21 >> 0x20);
      pcVar6[-6] = '\0';
      pcVar6[-5] = (char)((ulong)uVar21 >> 0x28);
      pcVar6[-4] = '\0';
      pcVar6[-3] = (char)((ulong)uVar21 >> 0x30);
      pcVar6[-2] = '\0';
      pcVar6[-1] = (char)((ulong)uVar21 >> 0x38);
      *pcVar6 = '\0';
      pcVar6[1] = (char)uVar22;
      pcVar6[2] = '\0';
      pcVar6[3] = (char)((ulong)uVar22 >> 8);
      pcVar6[4] = '\0';
      pcVar6[5] = (char)((ulong)uVar22 >> 0x10);
      pcVar6[6] = '\0';
      pcVar6[7] = (char)((ulong)uVar22 >> 0x18);
      pcVar6[8] = '\0';
      pcVar6[9] = (char)((ulong)uVar22 >> 0x20);
      pcVar6[10] = '\0';
      pcVar6[0xb] = (char)((ulong)uVar22 >> 0x28);
      pcVar6[0xc] = '\0';
      pcVar6[0xd] = (char)((ulong)uVar22 >> 0x30);
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = (char)((ulong)uVar22 >> 0x38);
      pcVar6[0x10] = '\0';
      pcVar6[0x11] = (char)uVar23;
      pcVar6[0x12] = '\0';
      pcVar6[0x13] = (char)((ulong)uVar23 >> 8);
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = (char)((ulong)uVar23 >> 0x10);
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = (char)((ulong)uVar23 >> 0x18);
      pcVar6[0x18] = '\0';
      pcVar6[0x19] = (char)((ulong)uVar23 >> 0x20);
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = (char)((ulong)uVar23 >> 0x28);
      pcVar6[0x1c] = '\0';
      pcVar6[0x1d] = (char)((ulong)uVar23 >> 0x30);
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = (char)((ulong)uVar23 >> 0x38);
      pcVar6[0x20] = '\0';
      pcVar6[0x21] = (char)uVar4;
      pcVar6[0x22] = '\0';
      pcVar6[0x23] = (char)((ulong)uVar4 >> 8);
      pcVar6[0x24] = '\0';
      pcVar6[0x25] = (char)((ulong)uVar4 >> 0x10);
      pcVar6[0x26] = '\0';
      pcVar6[0x27] = (char)((ulong)uVar4 >> 0x18);
      pcVar6[0x28] = '\0';
      pcVar6[0x29] = (char)((ulong)uVar4 >> 0x20);
      pcVar6[0x2a] = '\0';
      pcVar6[0x2b] = (char)((ulong)uVar4 >> 0x28);
      pcVar6[0x2c] = '\0';
      pcVar6[0x2d] = (char)((ulong)uVar4 >> 0x30);
      pcVar6[0x2e] = '\0';
      pcVar6[0x2f] = (char)((ulong)uVar4 >> 0x38);
      pcVar6[0x30] = '\0';
      pcVar6[0x31] = (char)uVar5;
      pcVar6[0x32] = '\0';
      pcVar6[0x33] = (char)((ulong)uVar5 >> 8);
      pcVar6[0x34] = '\0';
      pcVar6[0x35] = (char)((ulong)uVar5 >> 0x10);
      pcVar6[0x36] = '\0';
      pcVar6[0x37] = (char)((ulong)uVar5 >> 0x18);
      pcVar6[0x38] = '\0';
      pcVar6[0x39] = (char)((ulong)uVar5 >> 0x20);
      pcVar6[0x3a] = '\0';
      pcVar6[0x3b] = (char)((ulong)uVar5 >> 0x28);
      pcVar6[0x3c] = '\0';
      pcVar6[0x3d] = (char)((ulong)uVar5 >> 0x30);
      pcVar6[0x3e] = '\0';
      pcVar6[0x3f] = (char)((ulong)uVar5 >> 0x38);
      pcVar6 = pcVar6 + 0x80;
    } while (uVar9 != uVar10);
    if (uVar1 != uVar9) {
LAB_00447470:
      pcVar6 = param_1 + (uVar7 >> 1);
      do {
        pcVar17 = pcVar3 + uVar7;
        uVar7 = uVar7 + 2;
        *pcVar17 = '\0';
        pcVar17[1] = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while ((long)uVar7 < (long)uVar16);
    }
LAB_00447490:
    pcVar3[uVar16] = '\0';
    pcVar3[(long)iVar15 | 1] = '\0';
    if (param_4 != (int *)0x0) {
      *param_4 = iVar12;
    }
    goto joined_r0x004474a8;
  }
LAB_00447308:
  pcVar3 = (char *)FUN_00400260(iVar12,"external/openssl/crypto/pkcs12/p12_utl.c",0x75);
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0x81;
    uVar5 = 0x76;
LAB_004474d4:
    FUN_004014b0(0x23,uVar4,0x41,"external/openssl/crypto/pkcs12/p12_utl.c",uVar5);
  }
  else {
    pcVar6 = pcVar3;
    if (0 < (int)param_2) {
      iVar15 = 0;
      pcVar17 = pcVar3;
      do {
        iVar2 = FUN_00449bc0(param_1 + iVar15,param_2 - iVar15,&local_58);
        uVar1 = local_58 - 0x10000;
        if (local_58 < 0x10000) {
          pcVar6 = pcVar17 + 2;
          *pcVar17 = (char)(local_58 >> 8);
          uVar8 = (uint)(byte)local_58;
        }
        else {
          uVar8 = (int)(uVar1 >> 10) + 0xd800;
          *pcVar17 = (char)(uVar8 >> 8);
          pcVar17[2] = (byte)(uVar1 >> 8) & 3 | 0xdc;
          pcVar6 = pcVar17 + 4;
          pcVar17[3] = (char)uVar1;
          local_58 = uVar1;
        }
        iVar15 = iVar2 + iVar15;
        pcVar17[1] = (char)uVar8;
        pcVar17 = pcVar6;
      } while (iVar15 < (int)param_2);
    }
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    if (param_4 != (int *)0x0) {
      *param_4 = iVar12;
    }
joined_r0x004474a8:
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = pcVar3;
    }
  }
  return pcVar3;
code_r0x004472dc:
  if (0x10 < local_58 >> 0x10) {
    return (char *)0x0;
  }
  iVar14 = 4;
  if (local_58 >> 0x10 == 0) {
    iVar14 = 2;
  }
  iVar15 = iVar2 + iVar15;
  iVar12 = iVar14 + iVar12;
  if ((int)param_2 <= iVar15) goto code_r0x00447304;
  goto LAB_004472c8;
code_r0x00447304:
  iVar12 = iVar12 + 2;
  goto LAB_00447308;
}


