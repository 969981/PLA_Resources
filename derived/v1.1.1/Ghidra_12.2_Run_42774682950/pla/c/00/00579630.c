/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00579630; name: FUN_00579630
 */


void FUN_00579630(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [32];
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x13e8) == 0) {
      FUN_002f2c60(auStack_50,"Failed HTTP/1 client request");
      uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/http/httpcli.cc",0x74,
                           auStack_50,0,0);
      *(undefined8 *)(param_1 + 0x13e8) = uVar1;
    }
    FUN_00308b60(&local_68,
                 *(long *)(*(long *)(param_1 + 0x1050) + 8) + *(long *)(param_1 + 0x1058) * 0x84 +
                 -0x84);
    uVar4 = *(undefined8 *)(param_1 + 0x13e8);
    uStack_78 = puStack_60;
    local_80 = local_68;
    local_70 = local_58;
    local_68 = 0;
    puStack_60 = (undefined1 *)0x0;
    local_58 = 0;
                    /* try { // try from 005796bc to 005796e3 has its CatchHandler @ 00579828 */
    FUN_002f3230(auStack_50,&local_80);
    uVar1 = FUN_002f1340(param_2,4,auStack_50);
    uVar1 = FUN_002f13f0(uVar4,uVar1);
    *(undefined8 *)(param_1 + 0x13e8) = uVar1;
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if ((local_68 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
  }
  lVar2 = *(long *)(param_1 + 0x1058);
  if (lVar2 == **(long **)(param_1 + 0x1050)) {
    FUN_002f2c60(auStack_50,"Failed HTTP requests to all targets");
    uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/http/httpcli.cc",0xcd,
                         auStack_50,param_1 + 0x13e8,1);
    FUN_005794c0(param_1,uVar1);
  }
  else {
    lVar3 = (*(long **)(param_1 + 0x1050))[1];
    *(long *)(param_1 + 0x1058) = lVar2 + 1;
    *(undefined1 **)(param_1 + 0x13a8) = &LAB_00579880;
    *(long *)(param_1 + 0x13b0) = param_1;
    *(undefined8 *)(param_1 + 0x13b8) = 0;
    *(undefined2 *)(param_1 + 0x13c0) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x13f0);
    *(undefined8 *)(param_1 + 0x13d8) = 0;
    *(undefined4 *)(param_1 + 0x13e0) = 0;
    *(char **)(param_1 + 0x13c8) = "external/com_google_grpc_base/src/core/lib/http/httpcli.cc";
    *(undefined4 *)(param_1 + 0x13d0) = 0xd2;
    uVar1 = FUN_00306ce0();
    FUN_002e5160(auStack_50,"grpc.resource_quota",uVar4,uVar1);
    local_68 = 1;
    puStack_60 = auStack_50;
    FUN_002fdfd0(param_1 + 0x13a0,param_1 + 0x1060,**(undefined8 **)(param_1 + 0x1098),&local_68,
                 lVar3 + lVar2 * 0x84,*(undefined8 *)(param_1 + 0x1078));
  }
  return;
}


