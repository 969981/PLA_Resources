/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e25c0; name: FUN_004e25c0
 */


undefined4 FUN_004e25c0(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  if ((param_2 == 0) || (iVar2 = FUN_00407950(param_2), iVar2 == 0)) {
    return 0;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x488) + 0x1e0);
  if (lVar7 == 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x598) + 0x20);
    lVar4 = FUN_00468a30();
  }
  else {
    lVar4 = FUN_00468a30();
  }
  if (lVar4 == 0) {
    FUN_004014b0(0x14,0xcf,0x41,"external/openssl/ssl/ssl_cert.c",0x180);
    return 0;
  }
  uVar5 = FUN_00407970(param_2,0);
  iVar2 = FUN_00468b10(lVar4,lVar7,uVar5,param_2);
  if (iVar2 == 0) {
    FUN_004014b0(0x14,0xcf,0xb,"external/openssl/ssl/ssl_cert.c",0x186);
  }
  else {
    uVar5 = FUN_004699b0(lVar4);
    uVar3 = FUN_004c5300(param_1);
    FUN_0046c0d0(uVar5,uVar3);
    FUN_00469960(lVar4,*(uint *)(*(long *)(param_1 + 0x488) + 0x1c) & 0x30000);
    iVar2 = FUN_004001b0(&DAT_0439eba0,FUN_004e1680);
    uVar3 = 0xffffffff;
    if ((iVar2 != 0) && (DAT_0439eba4 != 0)) {
      uVar3 = DAT_04182e70;
    }
    iVar2 = FUN_004689f0(lVar4,uVar3,param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 0xe0));
      if (0 < iVar2) {
        FUN_004699c0(lVar4,param_1 + 0xd8);
      }
      pcVar1 = "ssl_server";
      if (*(int *)(param_1 + 0x38) != 0) {
        pcVar1 = "ssl_client";
      }
      FUN_00469980(lVar4,pcVar1);
      FUN_0046c080(uVar5,*(undefined8 *)(param_1 + 0xd0));
      if (*(long *)(param_1 + 0x560) != 0) {
        FUN_00469970(lVar4);
      }
      pcVar6 = *(code **)(*(long *)(param_1 + 0x598) + 0xa0);
      if (pcVar6 == (code *)0x0) {
        uVar3 = FUN_00467130(lVar4);
      }
      else {
        uVar3 = (*pcVar6)(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x598) + 0xa8));
      }
      iVar2 = FUN_00468a00(lVar4);
      *(long *)(param_1 + 0x5a8) = (long)iVar2;
      FUN_004078c0(*(undefined8 *)(param_1 + 0x5a0),PTR_FUN_04374180);
      *(undefined8 *)(param_1 + 0x5a0) = 0;
      lVar7 = FUN_00468a10(lVar4);
      if (lVar7 != 0) {
        lVar7 = FUN_00468a20(lVar4);
        *(long *)(param_1 + 0x5a0) = lVar7;
        if (lVar7 == 0) {
          FUN_004014b0(0x14,0xcf,0x41,"external/openssl/ssl/ssl_cert.c",0x1b6);
          uVar3 = 0;
        }
      }
      FUN_0046c0e0(*(undefined8 *)(param_1 + 0xd0),uVar5);
      goto LAB_004e27e4;
    }
  }
  uVar3 = 0;
LAB_004e27e4:
  FUN_00468a80(lVar4);
  return uVar3;
}


