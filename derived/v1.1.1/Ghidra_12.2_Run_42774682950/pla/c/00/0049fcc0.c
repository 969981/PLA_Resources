/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049fcc0; name: FUN_0049fcc0
 */


undefined8
FUN_0049fcc0(int param_1,long *param_2,uint param_3,long *param_4,ulong *param_5,undefined8 param_6,
            ulong param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  long *__s2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *local_60;
  int local_54;
  
  local_54 = 0;
  local_60 = (void *)0x0;
  iVar1 = FUN_00456840(param_8);
  if ((long)iVar1 != param_7) {
    FUN_004014b0(4,0x91,0x77,"external/openssl/crypto/rsa/rsa_sign.c",0x84);
    return 0;
  }
  __s2 = (long *)FUN_00400260(param_7,"external/openssl/crypto/rsa/rsa_sign.c",0x89);
  if (__s2 == (long *)0x0) {
    uVar5 = 0x41;
    uVar4 = 0x8b;
    goto LAB_0049ff54;
  }
  iVar1 = FUN_004568a0(param_7 & 0xffffffff,param_6,__s2,param_8,1);
  if (iVar1 < 1) {
LAB_0049ff5c:
    iVar7 = 0;
  }
  else {
    if (param_1 == 0x72) {
      if (iVar1 == 0x24) {
        if (param_4 != (long *)0x0) {
          lVar8 = __s2[1];
          lVar3 = *__s2;
          lVar10 = __s2[3];
          lVar9 = __s2[2];
          *(int *)(param_4 + 4) = (int)__s2[4];
          param_4[1] = lVar8;
          *param_4 = lVar3;
          param_4[3] = lVar10;
          param_4[2] = lVar9;
          uVar6 = 0x24;
LAB_0049fd80:
          *param_5 = uVar6;
          uVar5 = 1;
          iVar1 = 0;
          goto LAB_0049ff64;
        }
        if (param_3 == 0x24) {
          if (((*__s2 == *param_2 && __s2[1] == param_2[1]) &&
              (__s2[2] == param_2[2] && __s2[3] == param_2[3])) && (int)__s2[4] == (int)param_2[4])
          {
LAB_004a0018:
            iVar1 = 0;
            uVar5 = 1;
            goto LAB_0049ff64;
          }
          uVar5 = 0x68;
          uVar4 = 0xa9;
        }
        else {
          uVar5 = 0x83;
          uVar4 = 0xa4;
        }
      }
      else {
        uVar5 = 0x68;
        uVar4 = 0x9b;
      }
LAB_0049ff54:
      FUN_004014b0(4,0x91,uVar5,"external/openssl/crypto/rsa/rsa_sign.c",uVar4);
      goto LAB_0049ff5c;
    }
    if ((((param_1 == 0x5f) && (iVar1 == 0x12)) && ((char)*__s2 == '\x04')) &&
       (*(char *)((long)__s2 + 1) == '\x10')) {
      if (param_4 != (long *)0x0) {
        lVar3 = *(long *)((long)__s2 + 2);
        uVar6 = 0x10;
        param_4[1] = *(long *)((long)__s2 + 10);
        *param_4 = lVar3;
        goto LAB_0049fd80;
      }
      if (param_3 == 0x10) {
        if (*param_2 == *(long *)((long)__s2 + 2) && param_2[1] == *(long *)((long)__s2 + 10))
        goto LAB_004a0018;
        uVar5 = 0x68;
        uVar4 = 0xbd;
      }
      else {
        uVar5 = 0x83;
        uVar4 = 0xb8;
      }
      goto LAB_0049ff54;
    }
    if (param_4 != (long *)0x0) {
      FUN_00407d80(param_1);
      lVar3 = FUN_00446540();
      if (lVar3 == 0) {
        uVar5 = 0x75;
        uVar4 = 0xca;
      }
      else {
        param_3 = FUN_0041ccc0();
        if ((ulong)param_3 <= (ulong)(long)iVar1) {
          param_2 = (long *)((long)__s2 + ((long)iVar1 - (ulong)param_3));
          goto LAB_0049fee4;
        }
        uVar5 = 0x8f;
        uVar4 = 0xd0;
      }
      goto LAB_0049ff54;
    }
LAB_0049fee4:
    uVar6 = (ulong)param_3;
    iVar2 = FUN_0049fbe0(&local_60,&local_54,param_1,param_2,uVar6);
    iVar7 = local_54;
    if (iVar2 != 0) {
      if ((local_54 == iVar1) && (iVar2 = memcmp(local_60,__s2,(long)iVar1), iVar2 == 0)) {
        if (param_4 != (long *)0x0) {
          memcpy(param_4,param_2,uVar6);
          *param_5 = uVar6;
        }
        uVar5 = 1;
        goto LAB_0049ff64;
      }
      FUN_004014b0(4,0x91,0x68,"external/openssl/crypto/rsa/rsa_sign.c",0xdc);
    }
  }
  uVar5 = 0;
  iVar1 = iVar7;
LAB_0049ff64:
  FUN_00400620(local_60,(long)iVar1,"external/openssl/crypto/rsa/rsa_sign.c",0xea);
  FUN_00400620(__s2,param_7,"external/openssl/crypto/rsa/rsa_sign.c",0xeb);
  return uVar5;
}


