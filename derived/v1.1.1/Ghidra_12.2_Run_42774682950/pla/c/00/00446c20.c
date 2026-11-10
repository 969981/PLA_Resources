/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446c20; name: FUN_00446c20
 */


/* WARNING: Removing unreachable block (ram,0x00446e50) */

undefined8
FUN_00446c20(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6,int param_7,
            void *param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong __n;
  undefined1 *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  void *__src;
  void *__s;
  long lVar17;
  void *local_a8;
  int local_9c;
  undefined1 *local_70;
  long local_68;
  
  lVar8 = FUN_00444930();
  if (lVar8 == 0) {
    __src = (void *)0x0;
    __s = (void *)0x0;
    local_68 = 0;
    local_70 = (undefined1 *)0x0;
    goto LAB_004470d4;
  }
  uVar4 = FUN_0041cca0(param_9);
  iVar5 = FUN_0041ccc0(param_9);
  __src = (void *)0x0;
  if ((int)uVar4 < 1) {
    local_70 = (undefined1 *)0x0;
    __s = (void *)0x0;
    local_68 = 0;
    goto LAB_004470d4;
  }
  local_70 = (undefined1 *)0x0;
  __s = (void *)0x0;
  local_68 = 0;
  if (iVar5 < 0) goto LAB_004470d4;
  lVar17 = (long)(int)uVar4;
  __s = (void *)FUN_00400260(lVar17,"external/openssl/crypto/pkcs12/p12_key.c",0x6a);
  lVar9 = (long)iVar5;
  __src = (void *)FUN_00400260(lVar9,"external/openssl/crypto/pkcs12/p12_key.c",0x6b);
  local_68 = FUN_00400260((long)(int)(uVar4 + 1),"external/openssl/crypto/pkcs12/p12_key.c",0x6c);
  iVar6 = 0;
  if (uVar4 != 0) {
    iVar6 = (int)((uVar4 - 1) + param_2) / (int)uVar4;
  }
  iVar7 = (uVar4 - 1) + param_4;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = iVar6 * uVar4;
  }
  iVar6 = 0;
  if (uVar4 != 0) {
    iVar6 = iVar7 / (int)uVar4;
  }
  uVar3 = iVar6 * uVar4;
  lVar10 = (long)(int)(uVar2 + uVar3);
  local_70 = (undefined1 *)FUN_00400260(lVar10,"external/openssl/crypto/pkcs12/p12_key.c",0x73);
  if ((((__s == (void *)0x0) || (__src == (void *)0x0)) || (local_68 == 0)) ||
     (local_70 == (undefined1 *)0x0)) goto LAB_004470d4;
  __n = (ulong)uVar4;
  memset(__s,param_5,__n);
  puVar11 = local_70;
  if (0 < (int)uVar3) {
    if (uVar4 + param_4 + -2 == iVar7 - uVar3) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        iVar6 = 0;
        iVar7 = (int)lVar14;
        if (param_4 != 0) {
          iVar6 = iVar7 / param_4;
        }
        puVar11 = local_70 + lVar14;
        *puVar11 = *(undefined1 *)(param_3 + (ulong)(uint)(iVar7 - iVar6 * param_4));
        lVar14 = lVar14 + 2;
        iVar6 = 0;
        if (param_4 != 0) {
          iVar6 = (iVar7 + 1) / param_4;
        }
        puVar11[1] = *(undefined1 *)(param_3 + (ulong)(uint)((iVar7 + 1) - iVar6 * param_4));
      } while (uVar3 - (uVar3 & 1) != (int)lVar14);
      puVar11 = local_70 + lVar14;
    }
    if ((uVar3 & 1) != 0) {
      iVar6 = 0;
      if (param_4 != 0) {
        iVar6 = (int)lVar14 / param_4;
      }
      *puVar11 = *(undefined1 *)(param_3 + (ulong)(uint)((int)lVar14 - iVar6 * param_4));
      puVar11 = puVar11 + 1;
    }
  }
  if (0 < (int)uVar2) {
    if (uVar2 == 1) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        iVar6 = 0;
        iVar7 = (int)lVar14;
        if (param_2 != 0) {
          iVar6 = iVar7 / param_2;
        }
        puVar1 = puVar11 + lVar14;
        *puVar1 = *(undefined1 *)(param_1 + (ulong)(uint)(iVar7 - iVar6 * param_2));
        lVar14 = lVar14 + 2;
        iVar6 = 0;
        if (param_2 != 0) {
          iVar6 = (iVar7 + 1) / param_2;
        }
        puVar1[1] = *(undefined1 *)(param_1 + (ulong)(uint)((iVar7 + 1) - iVar6 * param_2));
      } while (uVar2 - (uVar2 & 1) != (int)lVar14);
      puVar11 = puVar11 + lVar14;
      if ((uVar2 & 1) == 0) goto LAB_00446ea8;
    }
    iVar6 = 0;
    if (param_2 != 0) {
      iVar6 = (int)lVar14 / param_2;
    }
    *puVar11 = *(undefined1 *)(param_1 + (ulong)(uint)((int)lVar14 - iVar6 * param_2));
  }
LAB_00446ea8:
  iVar6 = FUN_004449b0(lVar8,param_9,0);
  if (iVar6 != 0) {
    local_a8 = param_8;
    local_9c = param_7;
    do {
      iVar6 = FUN_00444ad0(lVar8,__s,lVar17);
      if (((iVar6 == 0) || (iVar6 = FUN_00444ad0(lVar8,local_70,lVar10), iVar6 == 0)) ||
         (iVar6 = FUN_00444b90(lVar8,__src,0), iVar6 == 0)) break;
      iVar6 = param_6 + -1;
      if (1 < param_6) {
        do {
          iVar7 = FUN_004449b0(lVar8,param_9,0);
          if (((iVar7 == 0) || (iVar7 = FUN_00444ad0(lVar8,__src,lVar9), iVar7 == 0)) ||
             (iVar7 = FUN_00444b90(lVar8,__src,0), iVar7 == 0)) goto LAB_004470d4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = local_9c;
      if (iVar5 <= local_9c) {
        iVar6 = iVar5;
      }
      memcpy(local_a8,__src,(long)iVar6);
      if (local_9c - iVar5 == 0 || local_9c < iVar5) {
        uVar16 = 1;
        goto LAB_004470f8;
      }
      if (__n - 1 < 3) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        do {
          iVar6 = 0;
          iVar7 = (int)lVar14;
          if (iVar5 != 0) {
            iVar6 = iVar7 / iVar5;
          }
          puVar11 = (undefined1 *)(local_68 + 1 + lVar14);
          puVar11[-1] = *(undefined1 *)((long)__src + (ulong)(uint)(iVar7 - iVar6 * iVar5));
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = (iVar7 + 1) / iVar5;
          }
          *puVar11 = *(undefined1 *)((long)__src + (ulong)(uint)((iVar7 + 1) - iVar6 * iVar5));
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = (iVar7 + 2) / iVar5;
          }
          puVar11[1] = *(undefined1 *)((long)__src + (ulong)(uint)((iVar7 + 2) - iVar6 * iVar5));
          lVar14 = lVar14 + 4;
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = (iVar7 + 3) / iVar5;
          }
          puVar11[2] = *(undefined1 *)((long)__src + (ulong)(uint)((iVar7 + 3) - iVar6 * iVar5));
        } while (__n - (__n & 3) != lVar14);
      }
      if ((uVar4 & 3) != 0) {
        uVar12 = __n & 3;
        do {
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = (int)lVar14 / iVar5;
          }
          uVar12 = uVar12 - 1;
          *(undefined1 *)(local_68 + lVar14) =
               *(undefined1 *)((long)__src + (ulong)(uint)((int)lVar14 - iVar6 * iVar5));
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0);
      }
      local_a8 = (void *)((long)local_a8 + lVar9);
      if (0 < (int)(uVar2 + uVar3)) {
        lVar14 = 0;
        puVar11 = local_70 + -1;
        do {
          uVar13 = 1;
          lVar15 = lVar17;
          do {
            uVar13 = uVar13 + (byte)puVar11[lVar15] + (uint)*(byte *)(local_68 + -1 + lVar15);
            puVar11[lVar15] = (char)uVar13;
            lVar15 = lVar15 + -1;
            uVar13 = uVar13 >> 8;
          } while (0 < lVar15);
          lVar14 = lVar14 + lVar17;
          puVar11 = puVar11 + lVar17;
        } while (lVar14 < lVar10);
      }
      iVar6 = FUN_004449b0(lVar8,param_9,0);
      local_9c = local_9c - iVar5;
    } while (iVar6 != 0);
  }
LAB_004470d4:
  FUN_004014b0(0x23,0x6f,0x41,"external/openssl/crypto/pkcs12/p12_key.c",0xa5);
  uVar16 = 0;
LAB_004470f8:
  FUN_00400420(__src,"external/openssl/crypto/pkcs12/p12_key.c",0xa8);
  FUN_00400420(local_68,"external/openssl/crypto/pkcs12/p12_key.c",0xa9);
  FUN_00400420(__s,"external/openssl/crypto/pkcs12/p12_key.c",0xaa);
  FUN_00400420(local_70,"external/openssl/crypto/pkcs12/p12_key.c",0xab);
  FUN_00444950(lVar8);
  return uVar16;
}


