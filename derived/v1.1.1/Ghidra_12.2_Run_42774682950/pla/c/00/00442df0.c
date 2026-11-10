/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00442df0; name: FUN_00442df0
 */


int FUN_00442df0(long *param_1,long param_2,long *param_3,code *param_4,char *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  char acStack_484 [1024];
  undefined1 auStack_84 [64];
  int local_44;
  
  local_44 = (int)*param_3;
  if (0x7fffffff < *param_3) {
    uVar8 = 0x1a6;
    uVar7 = 0x80;
    goto LAB_00443018;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if (param_4 == (code *)0x0) {
    if (param_5 != (char *)0x0) {
      sVar5 = strlen(param_5);
      uVar2 = (uint)sVar5;
      if (0x3ff < (int)uVar2) {
        uVar2 = 0x400;
      }
      uVar10 = (ulong)uVar2;
      memcpy(acStack_484,param_5,(long)(int)uVar2);
      goto joined_r0x00442ffc;
    }
    pcVar6 = (char *)FUN_004444c0();
    pcVar1 = "Enter PEM pass phrase:";
    if (pcVar6 != (char *)0x0) {
      pcVar1 = pcVar6;
    }
    iVar3 = FUN_004444e0(acStack_484,0,0x400,pcVar1,0);
    if (iVar3 == 0) {
      uVar10 = strlen(acStack_484);
      uVar2 = (uint)uVar10;
      goto joined_r0x00442ffc;
    }
    FUN_004014b0(9,100,0x6d,"external/openssl/crypto/pem/pem_lib.c",0x3b);
    memset(acStack_484,0,0x400);
  }
  else {
    uVar4 = (*param_4)(acStack_484,0x400,0,param_5);
    uVar10 = uVar4 & 0xffffffff;
    uVar2 = (uint)uVar4;
joined_r0x00442ffc:
    if (-1 < (int)uVar2) {
      lVar9 = *param_1;
      uVar7 = FUN_0044ebb0();
      iVar3 = FUN_004445d0(lVar9,uVar7,param_1 + 1,acStack_484,uVar10 & 0xffffffff,1,auStack_84,0);
      if (iVar3 == 0) {
        return 0;
      }
      lVar9 = FUN_0041b530();
      if (lVar9 == 0) {
        return 0;
      }
      iVar3 = FUN_0041c090(lVar9,*param_1,0,auStack_84,param_1 + 1);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_0041ba50(lVar9,param_2,&local_44,param_2,local_44), iVar3 != 0)) {
        *param_3 = (long)local_44;
        iVar3 = FUN_0041be10(lVar9,param_2 + local_44,&local_44);
        if (iVar3 != 0) {
          *param_3 = *param_3 + (long)local_44;
          goto LAB_00442f70;
        }
      }
      FUN_004014b0(9,0x6a,0x65,"external/openssl/crypto/pem/pem_lib.c",0x1cd);
      iVar3 = 0;
LAB_00442f70:
      FUN_0041b550(lVar9);
      FUN_004006a0(acStack_484,0x400);
      FUN_004006a0(auStack_84,0x40);
      return iVar3;
    }
  }
  uVar7 = 0x68;
  uVar8 = 0x1b2;
LAB_00443018:
  FUN_004014b0(9,0x6a,uVar7,"external/openssl/crypto/pem/pem_lib.c",uVar8);
  return 0;
}


