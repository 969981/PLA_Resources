/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ba50; name: FUN_0041ba50
 */


ulong FUN_0041ba50(long *param_1,void *param_2,int *param_3,void *param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((int)param_1[2] == 0) {
    uVar1 = *(uint *)(*param_1 + 4);
    uVar5 = (ulong)uVar1;
    iVar3 = FUN_0041cda0(param_1,0x2000);
    iVar4 = param_5;
    if (iVar3 != 0) {
      iVar4 = param_5 + 0xe;
      if (-1 < param_5 + 7) {
        iVar4 = param_5 + 7;
      }
      iVar4 = iVar4 >> 3;
    }
    if ((*(byte *)(*param_1 + 0x12) >> 4 & 1) == 0) {
      if (param_5 < 1) {
        *param_3 = 0;
        return (ulong)(param_5 == 0);
      }
      if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
        uVar5 = FUN_0041c0e0(param_1,param_2,param_3,param_4,param_5);
        return uVar5;
      }
      if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("assertion failed: b <= sizeof(ctx->final)",
                     "external/openssl/crypto/evp/evp_enc.c",0x1e3);
      }
      if ((int)param_1[0x10] != 0) {
        if (param_2 != param_4) {
          if (((param_2 == param_4) || ((int)uVar1 < 1)) ||
             ((ulong)(long)(int)uVar1 <= (ulong)((long)param_2 - (long)param_4) &&
              (ulong)((long)param_2 - (long)param_4) <= (ulong)-(long)(int)uVar1)) {
            memcpy(param_2,param_1 + 0x11,uVar5);
            param_2 = (void *)((long)param_2 + uVar5);
            bVar2 = true;
            goto LAB_0041bc2c;
          }
        }
        uVar7 = 0xa2;
        uVar8 = 0x1e9;
        goto LAB_0041ba7c;
      }
      bVar2 = false;
LAB_0041bc2c:
      uVar6 = FUN_0041c0e0(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      if ((uVar1 < 2) || (*(int *)((long)param_1 + 0x14) != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        *param_3 = *param_3 - uVar1;
        *(undefined4 *)(param_1 + 0x10) = 1;
        memcpy(param_1 + 0x11,(void *)((long)param_2 + (long)*param_3),uVar5);
      }
      if (bVar2) {
        *param_3 = *param_3 + uVar1;
      }
    }
    else {
      if (uVar1 == 1) {
        if (((param_2 != param_4) && (0 < iVar4)) &&
           ((ulong)((long)param_2 - (long)param_4) < (ulong)(long)iVar4 ||
            (ulong)-(long)iVar4 < (ulong)((long)param_2 - (long)param_4))) {
          uVar7 = 0xa2;
          uVar8 = 0x1ce;
          goto LAB_0041ba7c;
        }
      }
      iVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(long)param_5);
      if (iVar4 < 0) {
        *param_3 = 0;
        return 0;
      }
      *param_3 = iVar4;
    }
    uVar5 = 1;
  }
  else {
    uVar7 = 0x94;
    uVar8 = 0x1c3;
LAB_0041ba7c:
    FUN_004014b0(6,0xa6,uVar7,"external/openssl/crypto/evp/evp_enc.c",uVar8);
    uVar5 = 0;
  }
  return uVar5;
}


