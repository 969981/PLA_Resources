/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00516bc8; name: FUN_00516bc8
 */


void FUN_00516bc8(long param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *local_80;
  undefined4 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (PTR_DAT_04374a30[0x10] == '\0') {
    lVar6 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(lVar6 + 0x20) + 0x38);
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 0x110);
    local_60 = *(undefined8 *)(param_1 + 0x108);
    uStack_48 = *(undefined8 *)(param_1 + 0x120);
    uStack_50 = *(undefined8 *)(param_1 + 0x118);
    __ptr = (void *)FUN_002f2680(&local_60);
    uVar1 = *(undefined4 *)(param_1 + 0x100);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    uVar4 = FUN_002f1480(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x512,1,
                 "[xds_client %p] ADS call status received. Status = %d, details = \'%s\', (chand: %p, ads_calld: %p, call: %p), error \'%s\'"
                 ,uVar7,uVar1,__ptr,lVar6,param_1,uVar8,uVar4);
    free(__ptr);
    lVar6 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(lVar6 + 0x20) + 0x38);
  }
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) == param_1)) {
    puVar3 = *(undefined8 **)(lVar6 + 0x18);
    cVar2 = *(char *)((long)puVar3 + 0x21);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 00516c28 to 00516c2b has its CatchHandler @ 00516d74 */
      (**(code **)*puVar3)();
    }
    if (cVar2 == '\0') {
      FUN_0052313c(lVar6);
    }
    else {
      FUN_0053ed04(lVar6 + 0x28);
      FUN_00520d44(lVar6);
    }
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    FUN_002f2c60(&local_80,"xds call failed");
    uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                         ,0x51f,&local_80,0,0);
    FUN_00516d78(uVar7,uVar4);
  }
  local_80 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  local_78 = 0x521;
  FUN_00515458(param_1,&local_80,"ADS+OnStatusReceivedLocked");
  if (4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x522);
  }
  return;
}


