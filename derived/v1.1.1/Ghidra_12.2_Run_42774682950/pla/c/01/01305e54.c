/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01305e54; name: FUN_01305e54
 */


void FUN_01305e54(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined1 *local_4f0;
  code *local_4e8;
  code *local_4e0;
  long *local_4d8;
  long local_4d0;
  undefined4 local_4c8;
  byte local_468 [1032];
  
  *(undefined8 *)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x10) = param_3;
  memset(local_468,0,0x400);
  lVar6 = 0;
  do {
    snprintf((char *)local_468,0x400,"pane_P_icon_%02d",99 - (int)lVar6);
    if (local_468[0] != 0) {
      local_4f0 = &DAT_cbf29ce484222645;
      pbVar5 = (byte *)((ulong)local_468 | 1);
      bVar1 = local_468[0];
      do {
        local_4f0 = (undefined1 *)(((ulong)local_4f0 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
      local_4e8 = (code *)local_468;
      local_4e0 = (code *)0x3ff;
      local_4d8 = (long *)0x0;
      lVar2 = FUN_00d63240(*(undefined8 *)(param_3 + 0x148),&local_4f0);
      if (local_4d8 != (long *)0x0) {
        (**(code **)(*local_4d8 + 0x20))();
      }
      if (lVar2 != 0) {
        lVar3 = param_1 + lVar6 * 0xd0;
        *(long *)(lVar3 + 0x20) = lVar2;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        pcVar4 = *(code **)(lVar3 + 0x38);
        if (pcVar4 != (code *)0x0) {
          lVar2 = param_1 + lVar6 * 0xd0;
          *(undefined8 *)(lVar2 + 0x40) = 0;
          *(undefined8 *)(lVar2 + 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x30) = 0;
          *(undefined8 *)(lVar2 + 0x38) = 0;
          (*pcVar4)(lVar2 + 0x50);
        }
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 100);
  snprintf((char *)local_468,0x400,"pane_L_icon_qicon_vfx_%02d",0);
  lVar6 = FUN_01306260(param_3,local_468);
  *(long *)(param_1 + 0x5160) = lVar6;
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  pcVar4 = *(code **)(param_1 + 0x5188);
  local_4c8 = 0;
  local_4f0 = &LAB_01306bbc;
  local_4e8 = FUN_01306c7c;
  local_4e0 = FUN_01306c80;
  local_4d8 = (long *)&LAB_01306c8c;
  local_4d0 = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_0130600c:
    (*local_4e0)(&local_4d0,param_1 + 0x51a0);
    *(code **)(param_1 + 0x5188) = local_4e8;
    *(long **)(param_1 + 0x5198) = local_4d8;
    *(code **)(param_1 + 0x5190) = local_4e0;
    *(undefined8 *)(param_1 + 0x5180) = local_4f0;
  }
  else {
    *(undefined8 *)(param_1 + 0x5190) = 0;
    *(undefined8 *)(param_1 + 0x5198) = 0;
    *(undefined8 *)(param_1 + 0x5180) = 0;
    *(undefined8 *)(param_1 + 0x5188) = 0;
    (*pcVar4)(param_1 + 0x51a0);
    if (local_4e0 != (code *)0x0) goto LAB_0130600c;
  }
  pcVar4 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (long *)0x0;
    local_4f0 = (undefined1 *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar4)(&local_4d0);
  }
  snprintf((char *)local_468,0x400,"pane_L_icon_qicon_vfx_%02d",1);
  lVar6 = FUN_01306260(param_3,local_468);
  *(long *)(param_1 + 0x5168) = lVar6;
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  pcVar4 = *(code **)(param_1 + 21000);
  local_4c8 = 1;
  local_4f0 = &LAB_01306bbc;
  local_4e8 = FUN_01306c7c;
  local_4e0 = FUN_01306c80;
  local_4d8 = (long *)&LAB_01306c8c;
  local_4d0 = param_1;
  if (pcVar4 == (code *)0x0) {
LAB_013060cc:
    (*local_4e0)(&local_4d0,param_1 + 0x5220);
    *(code **)(param_1 + 21000) = local_4e8;
    *(long **)(param_1 + 0x5218) = local_4d8;
    *(code **)(param_1 + 0x5210) = local_4e0;
    *(undefined8 *)(param_1 + 0x5200) = local_4f0;
  }
  else {
    *(undefined8 *)(param_1 + 0x5210) = 0;
    *(undefined8 *)(param_1 + 0x5218) = 0;
    *(undefined8 *)(param_1 + 0x5200) = 0;
    *(undefined8 *)(param_1 + 21000) = 0;
    (*pcVar4)(param_1 + 0x5220);
    if (local_4e0 != (code *)0x0) goto LAB_013060cc;
  }
  pcVar4 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (long *)0x0;
    local_4f0 = (undefined1 *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar4)(&local_4d0);
  }
  snprintf((char *)local_468,0x400,"pane_L_icon_qicon_vfx_%02d",2);
  lVar6 = FUN_01306260(param_3,local_468);
  *(long *)(param_1 + 0x5170) = lVar6;
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  pcVar4 = *(code **)(param_1 + 0x5288);
  local_4c8 = 2;
  local_4f0 = &LAB_01306bbc;
  local_4e8 = FUN_01306c7c;
  local_4e0 = FUN_01306c80;
  local_4d8 = (long *)&LAB_01306c8c;
  local_4d0 = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5290) = 0;
    *(undefined8 *)(param_1 + 0x5298) = 0;
    *(undefined8 *)(param_1 + 0x5280) = 0;
    *(undefined8 *)(param_1 + 0x5288) = 0;
    (*pcVar4)(param_1 + 0x52a0);
    if (local_4e0 == (code *)0x0) goto LAB_013061b8;
  }
  (*local_4e0)(&local_4d0,param_1 + 0x52a0);
  *(code **)(param_1 + 0x5288) = local_4e8;
  *(long **)(param_1 + 0x5298) = local_4d8;
  *(code **)(param_1 + 0x5290) = local_4e0;
  *(undefined8 *)(param_1 + 0x5280) = local_4f0;
LAB_013061b8:
  pcVar4 = local_4e8;
  if (local_4e8 != (code *)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (long *)0x0;
    local_4f0 = (undefined1 *)0x0;
    local_4e8 = (code *)0x0;
    (*pcVar4)(&local_4d0);
  }
  lVar6 = FUN_01306260(param_3,"pane_L_icon_mine_vfx_00");
  *(long *)(param_1 + 0x5308) = lVar6;
  if (lVar6 != 0) {
    pcVar4 = *(code **)(param_1 + 0x5318);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x5320) = 0;
      *(undefined8 *)(param_1 + 0x5328) = 0;
      *(undefined8 *)(param_1 + 0x5310) = 0;
      *(undefined8 *)(param_1 + 0x5318) = 0;
      (*pcVar4)(param_1 + 0x5330);
    }
    *(undefined1 **)(param_1 + 0x5310) = &LAB_01306c98;
    *(long *)(param_1 + 0x5330) = param_1;
    *(undefined1 **)(param_1 + 0x5318) = &LAB_01306d58;
    *(undefined1 **)(param_1 + 0x5320) = &LAB_01306d5c;
    *(undefined1 **)(param_1 + 0x5328) = &LAB_01306d68;
  }
  return;
}


