/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a5e30; name: FUN_004a5e30
 */


undefined8
FUN_004a5e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5,void *param_6,ulong param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  
  iVar2 = FUN_0041ccc0();
  if (iVar2 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: chunk > 0","external/openssl/crypto/kdf/tls1_prf.c",0xbc);
  }
  lVar4 = FUN_00444930();
  lVar5 = FUN_00444930();
  lVar6 = FUN_00444930();
  uVar9 = 0;
  lVar7 = 0;
  if (((lVar4 == 0) || (lVar5 == 0)) || (lVar6 == 0)) goto LAB_004a607c;
  FUN_0041cd40(lVar6,8);
  lVar7 = FUN_00423200(0x357,0,param_2,param_3);
  if (((((lVar7 != 0) && (iVar3 = FUN_00464b70(lVar6,0,param_1,0,lVar7), iVar3 != 0)) &&
       ((iVar3 = FUN_00444d20(lVar4,lVar6), iVar3 != 0 &&
        ((param_4 == 0 || (iVar3 = FUN_00444ad0(lVar4,param_4,param_5), iVar3 != 0)))))) &&
      (iVar3 = FUN_00464d60(lVar4,auStack_a0,&local_a8), iVar3 != 0)) &&
     (iVar3 = FUN_00444d20(lVar4,lVar6), iVar3 != 0)) {
    uVar8 = (ulong)iVar2;
    if (param_4 == 0) {
      while (iVar2 = FUN_00444ad0(lVar4,auStack_a0,local_a8), iVar2 != 0) {
        if (param_7 <= uVar8) goto LAB_004a604c;
        iVar2 = FUN_00444d20(lVar5,lVar4);
        if (iVar2 == 0) break;
        iVar2 = FUN_00464d60(lVar4,param_6,&local_b0);
        lVar1 = local_b0;
        if ((iVar2 == 0) || (iVar2 = FUN_00464d60(lVar5,auStack_a0,&local_a8), iVar2 == 0)) break;
        param_7 = param_7 - lVar1;
        param_6 = (void *)((long)param_6 + lVar1);
        iVar2 = FUN_00444d20(lVar4,lVar6);
        if (iVar2 == 0) break;
      }
    }
    else {
      while ((iVar2 = FUN_00444ad0(lVar4,auStack_a0,local_a8), iVar2 != 0 &&
             (((param_7 <= uVar8 || (iVar2 = FUN_00444d20(lVar5,lVar4), iVar2 != 0)) &&
              (iVar2 = FUN_00444ad0(lVar4,param_4,param_5), iVar2 != 0))))) {
        if (param_7 <= uVar8) goto LAB_004a604c;
        iVar2 = FUN_00464d60(lVar4,param_6,&local_b0);
        lVar1 = local_b0;
        if ((iVar2 == 0) || (iVar2 = FUN_00464d60(lVar5,auStack_a0,&local_a8), iVar2 == 0)) break;
        param_7 = param_7 - lVar1;
        param_6 = (void *)((long)param_6 + lVar1);
        iVar2 = FUN_00444d20(lVar4,lVar6);
        if (iVar2 == 0) break;
      }
    }
  }
LAB_004a6078:
  uVar9 = 0;
LAB_004a607c:
  FUN_00423420(lVar7);
  FUN_00444950(lVar4);
  FUN_00444950(lVar5);
  FUN_00444950(lVar6);
  FUN_004006a0(auStack_a0,0x40);
  return uVar9;
LAB_004a604c:
  iVar2 = FUN_00464d60(lVar4,auStack_a0,&local_a8);
  if (iVar2 != 0) {
    memcpy(param_6,auStack_a0,param_7);
    uVar9 = 1;
    goto LAB_004a607c;
  }
  goto LAB_004a6078;
}


