/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004098a0; name: FUN_004098a0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_004098a0(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  void *__src;
  void *__dest;
  undefined1 auStack_78 [16];
  undefined4 local_68;
  int iStack_64;
  char *local_60;
  undefined4 local_58;
  
  if ((((param_2 == (long *)0x0) || (0x7ffffffe < param_3 - 1U)) ||
      (pcVar7 = (char *)*param_2, pcVar7 == (char *)0x0)) || (pcVar7[param_3 - 1U] < '\0')) {
    uVar5 = 0xfe;
  }
  else {
    iVar8 = (int)param_3;
    local_68 = 0;
    local_58 = 0;
    iStack_64 = iVar8;
    local_60 = pcVar7;
    iVar3 = FUN_00407f40(auStack_78);
    if (iVar3 != 0) {
      puVar4 = (undefined8 *)FUN_00407cb0();
      if (param_1 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*param_1;
        if (puVar9 != (undefined8 *)0x0) {
          uVar1 = *(uint *)(puVar9 + 4);
          if ((uVar1 >> 2 & 1) != 0) {
            FUN_00400420(*puVar9,"external/openssl/crypto/asn1/a_object.c",0x164);
            FUN_00400420(puVar9[1],"external/openssl/crypto/asn1/a_object.c",0x165);
            uVar1 = *(uint *)(puVar9 + 4);
            *puVar9 = 0;
            puVar9[1] = 0;
          }
          if ((uVar1 >> 3 & 1) != 0) {
            FUN_00400420(puVar9[3],"external/openssl/crypto/asn1/a_object.c",0x16a);
            uVar1 = *(uint *)(puVar9 + 4);
            puVar9[3] = 0;
            *(undefined4 *)((long)puVar9 + 0x14) = 0;
          }
          if ((uVar1 & 1) != 0) {
            FUN_00400420(puVar9,"external/openssl/crypto/asn1/a_object.c",0x16f);
          }
        }
        *param_1 = puVar4;
      }
      param_3 = *param_2 + param_3;
LAB_00409944:
      *param_2 = param_3;
      return puVar4;
    }
    lVar6 = 0;
    cVar2 = *pcVar7;
    while (cVar2 != -0x80) {
      lVar6 = lVar6 + 1;
      if (iVar8 == (int)lVar6) {
        if (((param_1 == (undefined8 *)0x0) ||
            (puVar4 = (undefined8 *)*param_1, puVar4 == (undefined8 *)0x0)) ||
           ((*(byte *)(puVar4 + 4) & 1) == 0)) {
          puVar4 = (undefined8 *)FUN_004002a0(0x28,"external/openssl/crypto/asn1/a_object.c",0x153);
          if (puVar4 == (undefined8 *)0x0) {
            FUN_004014b0(0xd,0x7b,0x41,"external/openssl/crypto/asn1/a_object.c",0x155);
            return (undefined8 *)0x0;
          }
          *(undefined4 *)(puVar4 + 4) = 1;
        }
        __src = (void *)*param_2;
        __dest = (void *)puVar4[3];
        puVar4[3] = 0;
        if ((__dest == (void *)0x0) || (*(int *)((long)puVar4 + 0x14) < iVar8)) {
          *(undefined4 *)((long)puVar4 + 0x14) = 0;
          FUN_00400420(__dest,"external/openssl/crypto/asn1/a_object.c",0x133);
          __dest = (void *)FUN_00400260((long)iVar8,"external/openssl/crypto/asn1/a_object.c",0x134)
          ;
          if (__dest == (void *)0x0) {
            FUN_004014b0(0xd,0xc4,0x41,"external/openssl/crypto/asn1/a_object.c",0x149);
            if ((param_1 != (undefined8 *)0x0) && ((undefined8 *)*param_1 == puVar4)) {
              return (undefined8 *)0x0;
            }
            uVar1 = *(uint *)(puVar4 + 4);
            if ((uVar1 >> 2 & 1) != 0) {
              FUN_00400420(*puVar4,"external/openssl/crypto/asn1/a_object.c",0x164);
              FUN_00400420(puVar4[1],"external/openssl/crypto/asn1/a_object.c",0x165);
              uVar1 = *(uint *)(puVar4 + 4);
              *puVar4 = 0;
              puVar4[1] = 0;
            }
            if ((uVar1 >> 3 & 1) != 0) {
              FUN_00400420(puVar4[3],"external/openssl/crypto/asn1/a_object.c",0x16a);
              uVar1 = *(uint *)(puVar4 + 4);
              puVar4[3] = 0;
              *(undefined4 *)((long)puVar4 + 0x14) = 0;
            }
            if ((uVar1 & 1) == 0) {
              return (undefined8 *)0x0;
            }
            FUN_00400420(puVar4,"external/openssl/crypto/asn1/a_object.c",0x16f);
            return (undefined8 *)0x0;
          }
          *(uint *)(puVar4 + 4) = *(uint *)(puVar4 + 4) | 8;
        }
        memcpy(__dest,__src,(long)iVar8);
        param_3 = (long)__src + (long)iVar8;
        puVar4[3] = __dest;
        *(int *)((long)puVar4 + 0x14) = iVar8;
        *puVar4 = 0;
        puVar4[1] = 0;
        if (param_1 != (undefined8 *)0x0) {
          *param_1 = puVar4;
        }
        goto LAB_00409944;
      }
      cVar2 = pcVar7[lVar6];
    }
    uVar5 = 0x11c;
  }
  FUN_004014b0(0xd,0xc4,0xd8,"external/openssl/crypto/asn1/a_object.c",uVar5);
  return (undefined8 *)0x0;
}


