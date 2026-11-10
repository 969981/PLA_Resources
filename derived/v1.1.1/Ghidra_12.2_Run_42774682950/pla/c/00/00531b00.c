/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00531b00; name: FUN_00531b00
 */


void FUN_00531b00(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *local_70;
  undefined4 local_68;
  undefined **local_60;
  long lStack_58;
  undefined ***local_40;
  
  *param_1 = (long)&PTR_FUN_04185800;
  lStack_58 = param_1[0xe];
  param_1[0xe] = 0;
  local_60 = &PTR_LAB_041858a8;
  local_70 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
  local_68 = 0x420;
                    /* try { // try from 00531b58 to 00531b63 has its CatchHandler @ 00531c58 */
  local_40 = &local_60;
  FUN_003d4d40(*(undefined8 *)(*(long *)(lStack_58 + 0x18) + 0xb0),&local_60,&local_70);
  if (&local_60 == local_40) {
    pcVar4 = (code *)(*local_40)[4];
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00531b8c;
    pcVar4 = (code *)(*local_40)[5];
  }
  (*pcVar4)();
LAB_00531b8c:
  FUN_00530020(param_1[0xe]);
  puVar5 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_002e2ea0(PTR_LAB_04373088,puVar5);
  }
  *param_1 = (long)(PTR_DAT_04374b78 + 0x10);
                    /* try { // try from 00531bd4 to 00531bd7 has its CatchHandler @ 00531c54 */
  FUN_002ef710(param_1 + 9);
  FUN_00531ef0(param_1 + 3);
  puVar3 = PTR_LAB_04373088;
  puVar5 = (undefined8 *)param_1[4];
  puVar1 = (undefined8 *)param_1[5];
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      FUN_002e2ea0(puVar3,*puVar5);
      puVar5 = puVar6;
    } while (puVar1 != puVar6);
    lVar2 = param_1[5] - param_1[4];
    if (lVar2 != 0) {
      param_1[5] = param_1[5] + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (param_1[3] != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


