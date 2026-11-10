/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005196bc; name: FUN_005196bc
 */


void FUN_005196bc(long param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  void *__ptr;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x6c2,2,"assertion failed: %s","call_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_04374a30[0x10] == '\0') {
    lVar7 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(lVar7 + 0x20);
    lVar6 = *(long *)(lVar5 + 0x40);
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 0x110);
    local_60 = *(undefined8 *)(param_1 + 0x108);
    uStack_48 = *(undefined8 *)(param_1 + 0x120);
    uStack_50 = *(undefined8 *)(param_1 + 0x118);
    __ptr = (void *)FUN_002f2680(&local_60);
    uVar1 = *(undefined4 *)(param_1 + 0x100);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    uVar4 = FUN_002f1480(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x6c5,1,
                 "[xds_client %p] LRS call status received. Status = %d, details = \'%s\', (chand: %p, calld: %p, call: %p), error \'%s\'"
                 ,uVar8,uVar1,__ptr,lVar7,param_1,uVar9,uVar4);
    free(__ptr);
    lVar7 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(lVar7 + 0x20);
    lVar6 = *(long *)(lVar5 + 0x40);
  }
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) == param_1)) {
    if (*(char *)(*(long *)(lVar5 + 0x18) + 0x170) != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x6ce,2,"assertion failed: %s","!xds_client()->shutting_down_");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = *(undefined8 **)(lVar7 + 0x18);
    cVar2 = *(char *)(puVar3 + 4);
    *(undefined8 *)(lVar7 + 0x18) = 0;
    if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 00519730 to 00519733 has its CatchHandler @ 00519888 */
      (**(code **)*puVar3)();
    }
    if (cVar2 == '\0') {
      FUN_005239c4(lVar7);
    }
    else {
      FUN_0053ed04(lVar7 + 0x28);
      FUN_005204f8(lVar7);
    }
  }
  local_70 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  local_68 = 0x6d2;
  FUN_00518fac(param_1,&local_70,"LRS+OnStatusReceivedLocked");
  if (4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x6d3);
  }
  return;
}


