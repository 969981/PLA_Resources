/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00469e40; name: FUN_00469e40
 */


ulong FUN_00469e40(int param_1,long *param_2,long param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  size_t __n;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  undefined1 *__s1;
  uint local_b8;
  uint local_b4;
  uint local_ac;
  undefined1 auStack_a8 [64];
  undefined1 *local_68;
  
  uVar10 = 10;
  if (param_4 != 0) {
    uVar10 = 5;
  }
  local_ac = 0;
  if (param_1 <= param_4) {
    uVar10 = uVar10 & 3;
  }
  uVar1 = uVar10 & 0xc;
  if (*(int *)((long)param_2 + 0x2c) < 0) {
    uVar1 = uVar10;
  }
  if (((uVar1 & *(uint *)(param_2 + 5)) == 0) || (iVar3 = FUN_00407950(param_2[1]), iVar3 < 1)) {
    puVar11 = (undefined1 *)0x0;
  }
  else {
    iVar14 = 0;
    __s1 = (undefined1 *)0x0;
    puVar11 = (undefined1 *)0x0;
    local_b4 = 0x100;
    uVar10 = 0;
    uVar12 = 0x100;
    uVar5 = 0x100;
    local_b8 = 0x100;
    do {
      pbVar6 = (byte *)FUN_00407970(param_2[1],iVar14);
      bVar2 = *pbVar6;
      if ((1 << (ulong)(bVar2 & 0x1f) & uVar1) != 0) {
        if (local_b4 != bVar2) {
          uVar12 = 0x100;
          local_b8 = (uint)*(byte *)(*(long *)(*param_2 + 8) + (ulong)pbVar6[2]);
          local_b4 = (uint)bVar2;
        }
        bVar2 = pbVar6[1];
        if (uVar5 == bVar2) {
          uVar13 = (ulong)pbVar6[2];
          if ((uVar13 == 0) || (local_b8 <= *(byte *)(*(long *)(*param_2 + 8) + uVar13))) {
            if (uVar12 != pbVar6[2]) {
              lVar8 = *(long *)(*(long *)*param_2 + uVar13 * 8);
              local_ac = uVar10;
              if (lVar8 != 0) goto LAB_0046a034;
LAB_00469f88:
              uVar12 = (uint)uVar13;
              __s1 = puVar11;
              uVar10 = local_ac;
            }
            __n = (size_t)local_ac;
            if (*(ulong *)(pbVar6 + 0x10) == __n) goto LAB_00469fa4;
          }
        }
        else {
          FUN_00400420(puVar11,"external/openssl/crypto/x509/x509_vfy.c",0xa53);
          local_68 = (undefined1 *)0x0;
          if (bVar2 == 1) {
            uVar7 = FUN_00466ca0(param_3);
            uVar5 = FUN_00451f20(uVar7,&local_68);
            uVar10 = local_ac;
            puVar11 = local_68;
            local_ac = uVar5;
          }
          else {
            if (bVar2 != 0) {
              uVar7 = 0x85;
              uVar9 = 0x9f6;
              goto LAB_0046a0e4;
            }
            uVar5 = FUN_00460a70(param_3,&local_68);
            uVar10 = local_ac;
            puVar11 = local_68;
            local_ac = uVar5;
          }
          local_68 = puVar11;
          if (((int)local_ac < 0) || (puVar11 == (undefined1 *)0x0)) {
            uVar7 = 0x41;
            uVar9 = 0x9fb;
            local_ac = uVar10;
LAB_0046a0e4:
            FUN_004014b0(0xb,0x6b,uVar7,"external/openssl/crypto/x509/x509_vfy.c",uVar9);
            return 0xffffffff;
          }
          uVar13 = (ulong)pbVar6[2];
          local_b8 = (uint)*(byte *)(((long *)*param_2)[1] + uVar13);
          lVar8 = *(long *)(*(long *)*param_2 + uVar13 * 8);
          uVar5 = (uint)bVar2;
          if (lVar8 == 0) goto LAB_00469f88;
LAB_0046a034:
          uVar10 = local_ac;
          __s1 = auStack_a8;
          iVar4 = FUN_00444ea0(puVar11,local_ac,auStack_a8,&local_ac,lVar8,0);
          if (iVar4 == 0) {
            uVar13 = 0xffffffff;
            goto LAB_0046a078;
          }
          uVar12 = (uint)uVar13;
          __n = (size_t)local_ac;
          if (*(ulong *)(pbVar6 + 0x10) != __n) goto LAB_00469ee4;
LAB_00469fa4:
          iVar4 = memcmp(__s1,*(void **)(pbVar6 + 8),__n);
          if (iVar4 == 0) {
            uVar10 = 1 << (ulong)(local_b4 & 0x1f);
            uVar13 = (ulong)((uVar10 & 0xc) != 0);
            if (((uVar10 & 0xc) != 0) || (*(int *)((long)param_2 + 0x2c) < 0)) {
              *(int *)((long)param_2 + 0x2c) = param_4;
              param_2[3] = (long)pbVar6;
              FUN_00400420(param_2[4],"external/openssl/crypto/x509/x509_vfy.c",0xa87);
              param_2[4] = param_3;
              FUN_00466c20();
              goto LAB_0046a078;
            }
            break;
          }
        }
      }
LAB_00469ee4:
      iVar14 = iVar14 + 1;
    } while (iVar3 != iVar14);
  }
  uVar13 = 0;
LAB_0046a078:
  FUN_00400420(puVar11,"external/openssl/crypto/x509/x509_vfy.c",0xa90);
  return uVar13;
}


