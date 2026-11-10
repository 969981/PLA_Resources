/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00578f80; name: FUN_00578f80
 */


void FUN_00578f80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 *param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)FUN_002ebd50(0x13f8);
  memset(puVar2 + 4,0,0x13d8);
  uVar3 = *param_9;
  uVar7 = param_9[3];
  uVar6 = param_9[2];
  puVar2[1] = param_9[1];
  *puVar2 = uVar3;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  FUN_00579a20(puVar2 + 4,0,param_7);
  puVar2[0x212] = param_6;
  puVar2[0x20f] = param_5;
  puVar1 = PTR_PTR_04374df8;
  puVar5 = (undefined *)param_4[9];
  puVar2[0x213] = param_1;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = puVar5;
  }
  puVar2[0x211] = puVar1;
  puVar2[0x214] = param_2;
  puVar2[0x27d] = 0;
  uVar3 = FUN_00306c90(param_3);
  puVar2[0x263] = &LAB_005792e0;
  *(undefined4 *)(puVar2 + 0x268) = 0xfa;
  puVar2[0x26c] = &LAB_00579410;
  *(undefined4 *)(puVar2 + 0x271) = 0xfc;
  puVar2[0x27e] = uVar3;
  puVar2[0x264] = puVar2;
  puVar2[0x265] = 0;
  *(undefined2 *)(puVar2 + 0x266) = 0;
  puVar2[0x269] = 0;
  *(undefined4 *)(puVar2 + 0x26a) = 0;
  puVar2[0x267] = "external/com_google_grpc_base/src/core/lib/http/httpcli.cc";
  puVar2[0x26d] = puVar2;
  puVar2[0x26e] = 0;
  *(undefined2 *)(puVar2 + 0x26f) = 0;
  puVar2[0x272] = 0;
  *(undefined4 *)(puVar2 + 0x273) = 0;
  puVar2[0x270] = "external/com_google_grpc_base/src/core/lib/http/httpcli.cc";
  FUN_00305000(puVar2 + 0x218);
  FUN_00305000(puVar2 + 0x23d);
  FUN_002f5b60(puVar2 + 0x215,param_8);
  uVar3 = FUN_002ec2d0(*param_4);
  puVar2[0x20d] = uVar3;
  uVar3 = FUN_002ec2d0(param_4[1]);
  puVar2[0x20e] = uVar3;
  if (param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/http/httpcli.cc",0x103,2,
                 "assertion failed: %s","pollent");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_003d6ba0(puVar2[0x214],*(undefined8 *)puVar2[0x213]);
  uVar6 = *(undefined8 *)puVar2[0x211];
  uVar3 = *param_4;
  uVar7 = *(undefined8 *)puVar2[0x213];
  puVar4 = (undefined8 *)FUN_002ebd50(0x58);
  puVar4[5] = 0;
  puVar1 = PTR_LAB_043738c8;
  *(undefined2 *)(puVar4 + 6) = 0;
  *puVar4 = &LAB_00579470;
  puVar4[1] = puVar2;
  puVar4[3] = puVar1;
  puVar4[4] = puVar4;
  puVar4[9] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[7] = "external/com_google_grpc_base/src/core/lib/http/httpcli.cc";
  *(undefined4 *)(puVar4 + 8) = 0x108;
  FUN_002fdea0(uVar3,uVar6,uVar7,puVar4 + 2,puVar2 + 0x20a);
  return;
}


