/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446580; name: FUN_00446580
 */


undefined8
FUN_00446580(long param_1,char *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined4 local_a0;
  int iStack_9c;
  
  uVar8 = param_3 & 0xffffffff;
  iVar2 = FUN_00407f40();
  if (iVar2 == 0) goto LAB_0044666c;
  local_a0 = 0;
  iStack_9c = iVar2;
  if (DAT_0439e910 == 0) {
LAB_004465e0:
    lVar4 = FUN_00408a60(&local_a0,&DAT_04166350,0x1d,0x18,&LAB_00446830);
    if (lVar4 == 0) {
LAB_0044666c:
      FUN_004014b0(6,0x74,0x79,"external/openssl/crypto/evp/evp_pbe.c",0x5f);
      if (param_1 == 0) {
        FUN_004050b0(&local_a0,&DAT_038da8c3,0x50);
      }
      else {
        FUN_00409690(&local_a0,0x50,param_1);
      }
      FUN_00402170(2,"TYPE=",&local_a0);
      return 0;
    }
  }
  else {
    uVar3 = FUN_00407710(DAT_0439e910,&local_a0);
    lVar4 = FUN_00407970(DAT_0439e910,uVar3);
    if (lVar4 == 0) goto LAB_004465e0;
  }
  iVar2 = *(int *)(lVar4 + 8);
  iVar1 = *(int *)(lVar4 + 0xc);
  pcVar9 = *(code **)(lVar4 + 0x10);
  if (param_2 == (char *)0x0) {
    uVar8 = 0;
joined_r0x004466d4:
    if (iVar2 != -1) goto LAB_00446620;
LAB_004466d8:
    lVar4 = 0;
  }
  else {
    if ((int)param_3 == -1) {
      uVar8 = strlen(param_2);
      goto joined_r0x004466d4;
    }
    if (iVar2 == -1) goto LAB_004466d8;
LAB_00446620:
    FUN_00407d80(iVar2);
    lVar4 = FUN_00446500();
    if (lVar4 == 0) {
      uVar6 = 0xa0;
      uVar7 = 0x72;
      goto LAB_0044675c;
    }
  }
  if (iVar1 == -1) {
    lVar5 = 0;
  }
  else {
    FUN_00407d80(iVar1);
    lVar5 = FUN_00446540();
    if (lVar5 == 0) {
      uVar6 = 0xa1;
      uVar7 = 0x7c;
      goto LAB_0044675c;
    }
  }
  iVar2 = (*pcVar9)(param_5,param_2,uVar8 & 0xffffffff,param_4,lVar4,lVar5,param_6);
  if (iVar2 != 0) {
    return 1;
  }
  uVar7 = 0x82;
  uVar6 = 0x78;
LAB_0044675c:
  FUN_004014b0(6,0x74,uVar6,"external/openssl/crypto/evp/evp_pbe.c",uVar7);
  return 0;
}


