/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fc850; name: FUN_002fc850
 */


void FUN_002fc850(long *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char *local_60;
  undefined4 local_58;
  char *local_50;
  undefined4 local_48;
  
  puVar4 = (undefined4 *)param_1[4];
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  FUN_002ef750(puVar4 + 4);
  if (*(long **)(puVar4 + 0x1e) == param_1) {
    bVar2 = param_2 == 0;
    bVar1 = true;
    *(undefined8 *)(puVar4 + 0x1e) = 0;
    if (*(long **)(puVar4 + 0x20) == param_1) goto LAB_002fc8e0;
LAB_002fc8a0:
    if ((bVar1) || (param_1[3] == 0)) goto LAB_002fc8ec;
    lVar5 = *param_1;
    *(long *)(lVar5 + 8) = param_1[1];
    *(long *)param_1[1] = lVar5;
    if (param_2 != 0) goto LAB_002fc8f0;
LAB_002fc908:
    if (param_3 == 0) goto joined_r0x002fca00;
LAB_002fc90c:
    lVar5 = *(long *)(puVar4 + 0x24);
    if (lVar5 == 1) goto joined_r0x002fca00;
    if (lVar5 == 0) {
      *(undefined8 *)(puVar4 + 0x24) = 1;
      goto joined_r0x002fca00;
    }
    local_60 = "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc";
    local_58 = 0x216;
    if (puVar4[0xc] == 0) {
      uVar3 = 0;
    }
    else {
      FUN_002f2c60(&local_50,"FD shutdown");
      uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x1ec
                           ,&local_50,puVar4 + 0x12,1);
      uVar3 = FUN_002f0d20(uVar3,3,0xe);
    }
    FUN_002f019c(&local_60,lVar5,uVar3);
    *(undefined8 *)(puVar4 + 0x24) = 0;
    puVar6 = *(undefined8 **)(puVar4 + 0x14);
    if (puVar6 == (undefined8 *)(puVar4 + 0x14)) goto LAB_002fca14;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    if (*(long **)(puVar4 + 0x20) != param_1) goto LAB_002fc8a0;
LAB_002fc8e0:
    if (param_3 == 0) {
      bVar2 = true;
    }
    *(undefined8 *)(puVar4 + 0x20) = 0;
LAB_002fc8ec:
    if (param_2 == 0) goto LAB_002fc908;
LAB_002fc8f0:
    lVar5 = *(long *)(puVar4 + 0x22);
    if (lVar5 == 1) goto LAB_002fc908;
    if (lVar5 == 0) {
      *(undefined8 *)(puVar4 + 0x22) = 1;
      goto LAB_002fc908;
    }
    local_60 = "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc";
    local_58 = 0x216;
    if (puVar4[0xc] == 0) {
      uVar3 = 0;
    }
    else {
      FUN_002f2c60(&local_50,"FD shutdown");
      uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x1ec
                           ,&local_50,puVar4 + 0x12,1);
      uVar3 = FUN_002f0d20(uVar3,3,0xe);
    }
    FUN_002f019c(&local_60,lVar5,uVar3);
    bVar2 = true;
    *(undefined8 *)(puVar4 + 0x22) = 0;
    if (param_3 != 0) goto LAB_002fc90c;
joined_r0x002fca00:
    if (!bVar2) goto LAB_002fca70;
    puVar6 = *(undefined8 **)(puVar4 + 0x14);
    if (puVar6 == (undefined8 *)(puVar4 + 0x14)) {
LAB_002fca14:
      puVar6 = *(undefined8 **)(puVar4 + 0x1e);
      if ((puVar6 == (undefined8 *)0x0) &&
         (puVar6 = *(undefined8 **)(puVar4 + 0x20), puVar6 == (undefined8 *)0x0)) goto LAB_002fca70;
    }
  }
  FUN_002ef750(puVar6[2]);
  if (puVar6[3] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",399,2,
                 "assertion failed: %s","watcher->worker");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002fc350(puVar6[2],puVar6[3],2);
  FUN_002ef790(puVar6[2]);
LAB_002fca70:
  if (((((*(ulong *)(puVar4 + 2) & 1) == 0) && (*(long *)(puVar4 + 0x1e) == 0)) &&
      (*(long *)(puVar4 + 0x20) == 0)) &&
     ((*(undefined8 **)(puVar4 + 0x14) == (undefined8 *)(puVar4 + 0x14) && (puVar4[0xd] == 0)))) {
    puVar4[0xd] = 1;
    if (puVar4[0xe] == 0) {
      nnsocketClose(*puVar4);
    }
    local_50 = "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc";
    local_48 = 0x1b8;
    FUN_002f019c(&local_50,*(undefined8 *)(puVar4 + 0x26),0);
  }
  FUN_002ef790(puVar4 + 4);
  FUN_002fc1d0(puVar4,&DAT_03953505,0x2bd);
  return;
}


