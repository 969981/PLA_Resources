/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129e004; name: FUN_0129e004
 */


int FUN_0129e004(long param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte local_80 [64];
  
  puVar5 = &DAT_cbf29ce484222645;
  snprintf((char *)local_80,0x40,"button_%02d",0);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5ac);
  }
  snprintf((char *)local_80,0x40,"button_%02d",1);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5b0);
  }
  snprintf((char *)local_80,0x40,"button_%02d",2);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5b4);
  }
  snprintf((char *)local_80,0x40,"button_%02d",3);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5b8);
  }
  snprintf((char *)local_80,0x40,"button_%02d",4);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5bc);
  }
  snprintf((char *)local_80,0x40,"button_%02d",5);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5c0);
  }
  snprintf((char *)local_80,0x40,"button_%02d",6);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5c4);
  }
  snprintf((char *)local_80,0x40,"button_%02d",7);
  puVar4 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  if ((undefined1 *)*param_2 == puVar4) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5c8);
  }
  iVar2 = snprintf((char *)local_80,0x40,"button_%02d",8);
  if (local_80[0] != 0) {
    pbVar3 = (byte *)((ulong)local_80 | 1);
    do {
      puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)local_80[0]) * 0x100000001b3);
      local_80[0] = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (local_80[0] != 0);
  }
  if ((undefined1 *)*param_2 == puVar5) {
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5cc);
  }
  return iVar2;
}


