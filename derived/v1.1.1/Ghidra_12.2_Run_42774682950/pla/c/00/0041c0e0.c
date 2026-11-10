/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041c0e0; name: FUN_0041c0e0
 */


ulong FUN_0041c0e0(long *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  iVar4 = FUN_0041cda0(param_1,0x2000);
  iVar3 = param_5 + 0xe;
  if (-1 < (int)(param_5 + 7)) {
    iVar3 = param_5 + 7;
  }
  uVar5 = param_5;
  if (iVar4 != 0) {
    uVar5 = iVar3 >> 3;
  }
  lVar7 = *param_1;
  uVar2 = *(uint *)(lVar7 + 4);
  if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) {
    if ((int)param_5 < 1) {
      *param_3 = 0;
      return (ulong)(param_5 == 0);
    }
    iVar3 = *(int *)((long)param_1 + 0x14);
    pvVar1 = (void *)((long)param_2 + (long)iVar3);
    uVar8 = (long)pvVar1 - (long)param_4;
    if (((0 < (int)uVar5) && (pvVar1 != param_4)) &&
       (uVar8 < (ulong)(long)(int)uVar5 || (ulong)-(long)(int)uVar5 < uVar8)) {
      uVar6 = 0x148;
LAB_0041c1e0:
      FUN_004014b0(6,0xdb,0xa2,"external/openssl/crypto/evp/evp_enc.c",uVar6);
      return 0;
    }
    if ((iVar3 == 0) && ((*(uint *)((long)param_1 + 0x84) & param_5) == 0)) {
      uVar8 = (**(code **)(lVar7 + 0x20))(param_1,param_2,param_4,(long)(int)param_5);
      if ((int)uVar8 == 0) {
        *param_3 = 0;
        return uVar8;
      }
      *param_3 = param_5;
    }
    else {
      if (0x20 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("assertion failed: bl <= (int)sizeof(ctx->buf)",
                     "external/openssl/crypto/evp/evp_enc.c",0x156);
      }
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = uVar2 - iVar3;
        pvVar1 = (void *)((long)param_1 + (long)iVar3 + 0x38);
        if ((int)param_5 < iVar4) {
          memcpy(pvVar1,param_4,(long)(int)param_5);
          *(uint *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + param_5;
          *param_3 = 0;
          return 1;
        }
        memcpy(pvVar1,param_4,(long)iVar4);
        uVar8 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,(long)(int)uVar2);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        param_4 = (void *)((long)param_4 + (long)iVar4);
        param_5 = param_5 - iVar4;
        param_2 = (void *)((long)param_2 + (long)(int)uVar2);
        uVar5 = uVar2;
      }
      *param_3 = uVar5;
      uVar5 = param_5 & uVar2 - 1;
      iVar3 = param_5 - uVar5;
      if (0 < iVar3) {
        uVar8 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(long)iVar3);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        *param_3 = *param_3 + iVar3;
      }
      if (uVar5 != 0) {
        memcpy(param_1 + 7,(void *)((long)param_4 + (long)iVar3),(long)(int)uVar5);
      }
      *(uint *)((long)param_1 + 0x14) = uVar5;
    }
  }
  else {
    if (uVar2 == 1) {
      if (((param_2 != param_4) && (0 < (int)uVar5)) &&
         ((ulong)((long)param_2 - (long)param_4) < (ulong)(long)(int)uVar5 ||
          (ulong)-(long)(int)uVar5 < (ulong)((long)param_2 - (long)param_4))) {
        uVar6 = 0x137;
        goto LAB_0041c1e0;
      }
    }
    uVar5 = (**(code **)(lVar7 + 0x20))(param_1,param_2,param_4,(long)(int)param_5);
    if ((int)uVar5 < 0) {
      return 0;
    }
    *param_3 = uVar5;
  }
  return 1;
}


