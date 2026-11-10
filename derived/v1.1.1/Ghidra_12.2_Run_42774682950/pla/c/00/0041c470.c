/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041c470; name: FUN_0041c470
 */


undefined8 FUN_0041c470(long *param_1,long *param_2)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    uVar2 = 0x6f;
    uVar3 = 0x286;
    goto LAB_0041c598;
  }
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      pcVar4 = *(code **)(*param_1 + 0x28);
      if ((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(param_1), iVar1 == 0)) goto LAB_0041c4f4;
      if (param_1[0xf] != 0) {
        if (*(int *)(*param_1 + 0x30) != 0) {
          FUN_004006a0();
        }
      }
    }
    FUN_00400420(param_1[0xf],"external/openssl/crypto/evp/evp_enc.c",0x20);
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
LAB_0041c4f4:
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar7 = param_2[2];
  lVar9 = param_2[5];
  lVar8 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = lVar7;
  param_1[5] = lVar9;
  param_1[4] = lVar8;
  param_1[1] = lVar6;
  *param_1 = lVar5;
  lVar6 = param_2[7];
  lVar5 = param_2[6];
  lVar8 = param_2[9];
  lVar7 = param_2[8];
  lVar9 = param_2[10];
  lVar11 = param_2[0xd];
  lVar10 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar9;
  param_1[0xd] = lVar11;
  param_1[0xc] = lVar10;
  param_1[7] = lVar6;
  param_1[6] = lVar5;
  param_1[9] = lVar8;
  param_1[8] = lVar7;
  lVar10 = param_2[0x13];
  lVar9 = param_2[0x12];
  lVar6 = param_2[0xf];
  lVar5 = param_2[0xe];
  lVar8 = param_2[0x11];
  lVar7 = param_2[0x10];
  param_1[0x14] = param_2[0x14];
  param_1[0x11] = lVar8;
  param_1[0x10] = lVar7;
  param_1[0x13] = lVar10;
  param_1[0x12] = lVar9;
  param_1[0xf] = lVar6;
  param_1[0xe] = lVar5;
  if (param_2[0xf] != 0) {
    if (*(int *)(*param_2 + 0x30) != 0) {
      __dest = (void *)FUN_00400260((long)*(int *)(*param_2 + 0x30),
                                    "external/openssl/crypto/evp/evp_enc.c",0x295);
      param_1[0xf] = (long)__dest;
      if (__dest == (void *)0x0) {
        *param_1 = 0;
        uVar2 = 0x41;
        uVar3 = 0x298;
        goto LAB_0041c598;
      }
      memcpy(__dest,(void *)param_2[0xf],(long)*(int *)(*param_2 + 0x30));
    }
  }
  if ((*(byte *)(*param_2 + 0x11) >> 2 & 1) == 0) {
    return 1;
  }
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2,8,0,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  *param_1 = 0;
  uVar2 = 0x86;
  uVar3 = 0x2a1;
LAB_0041c598:
  FUN_004014b0(6,0xa3,uVar2,"external/openssl/crypto/evp/evp_enc.c",uVar3);
  return 0;
}


