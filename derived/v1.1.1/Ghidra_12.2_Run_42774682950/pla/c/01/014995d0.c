/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014995d0; name: FUN_014995d0
 */


void FUN_014995d0(long param_1)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulong local_b8 [4];
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  uint local_5e;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 *local_38;
  
  puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar8 = (long *)(**(code **)*puVar13)(puVar13);
  puVar6 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0))
  {
    uVar9 = FUN_009311a8();
    *(undefined8 *)puVar6 = uVar9;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar8 != (long *)puVar6) {
    for (plVar8 = (long *)*plVar8; plVar8 != (long *)puVar6; plVar8 = (long *)*plVar8) {
    }
  }
  FUN_00d37c90(&local_98,puVar13[0x15],0);
  plVar8 = (long *)local_98[0xd];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_98 != (long *)0x0) {
    lVar10 = local_98[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  local_98 = (long *)0x4c37853d3f93eac7;
  puVar14 = &DAT_cbf29ce484222645;
  FUN_02c2e7d0(plVar8,&local_98,*(undefined8 *)(param_1 + 200));
  local_46 = 0;
  local_48 = 0x101;
  local_58 = *(undefined8 *)(param_1 + 200);
  uStack_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 1;
  local_80 = 0;
  local_78 = 0;
  local_b8[0] = 0;
  local_5e = 0xffff;
  local_90 = 0;
  local_88 = 0;
  local_b8[3] = 0;
  local_98 = (long *)0x0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  snprintf((char *)local_b8,0x20,"ret_sel_%02d",0);
  uVar11 = local_b8[0] & 0xff;
  local_38 = &DAT_cbf29ce484222645;
  if ((byte)local_b8[0] != '\0') {
    local_38 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_b8 | 1);
    do {
      local_38 = (undefined1 *)(((ulong)local_38 ^ uVar11) * 0x100000001b3);
      bVar3 = *pbVar12;
      uVar11 = (ulong)bVar3;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  FUN_02c2e7d0(plVar8,&local_38,*(undefined8 *)(param_1 + 0xa0));
  local_98 = *(long **)(param_1 + 0xa0);
  snprintf((char *)local_b8,0x20,"ret_sel_%02d",1);
  uVar11 = local_b8[0] & 0xff;
  local_38 = &DAT_cbf29ce484222645;
  if ((byte)local_b8[0] != '\0') {
    local_38 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_b8 | 1);
    do {
      local_38 = (undefined1 *)(((ulong)local_38 ^ uVar11) * 0x100000001b3);
      bVar3 = *pbVar12;
      uVar11 = (ulong)bVar3;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  FUN_02c2e7d0(plVar8,&local_38,*(undefined8 *)(param_1 + 0xa8));
  local_90 = *(undefined8 *)(param_1 + 0xa8);
  snprintf((char *)local_b8,0x20,"ret_sel_%02d",2);
  uVar11 = local_b8[0] & 0xff;
  local_38 = &DAT_cbf29ce484222645;
  if ((byte)local_b8[0] != '\0') {
    local_38 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_b8 | 1);
    do {
      local_38 = (undefined1 *)(((ulong)local_38 ^ uVar11) * 0x100000001b3);
      bVar3 = *pbVar12;
      uVar11 = (ulong)bVar3;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  FUN_02c2e7d0(plVar8,&local_38,*(undefined8 *)(param_1 + 0xb0));
  local_88 = *(undefined8 *)(param_1 + 0xb0);
  snprintf((char *)local_b8,0x20,"ret_sel_%02d",3);
  uVar11 = local_b8[0] & 0xff;
  local_38 = &DAT_cbf29ce484222645;
  if ((byte)local_b8[0] != '\0') {
    local_38 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)((ulong)local_b8 | 1);
    do {
      local_38 = (undefined1 *)(((ulong)local_38 ^ uVar11) * 0x100000001b3);
      bVar3 = *pbVar12;
      uVar11 = (ulong)bVar3;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  FUN_02c2e7d0(plVar8,&local_38,*(undefined8 *)(param_1 + 0xb8));
  local_80 = *(undefined8 *)(param_1 + 0xb8);
  snprintf((char *)local_b8,0x20,"ret_sel_%02d",4);
  if ((byte)local_b8[0] != 0) {
    pbVar12 = (byte *)((ulong)local_b8 | 1);
    bVar3 = (byte)local_b8[0];
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  local_38 = puVar14;
  FUN_02c2e7d0(plVar8,&local_38,*(undefined8 *)(param_1 + 0xc0));
  local_78 = *(undefined8 *)(param_1 + 0xc0);
  local_5e = local_5e & 0xffff;
  FUN_00d42690(*(undefined8 *)(param_1 + 0xd0),1,1);
  FUN_00d428b0(*(undefined8 *)(param_1 + 0xd0),0);
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x90))(*(long **)(param_1 + 0xd0),&local_58,&local_98);
  *(undefined8 *)(param_1 + 0x90) = 1;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


