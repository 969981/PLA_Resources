/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133b01c; name: FUN_0133b01c
 */


void FUN_0133b01c(long param_1,byte param_2,undefined4 *param_3,uint param_4,undefined8 param_5,
                 int param_6)

{
  long *plVar1;
  uint param3;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined4 uVar8;
  byte local_498 [1024];
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  undefined8 uStack_80;
  
  param3 = (uint)param_2;
  if (param3 < 0x14) {
    lVar3 = param_1 + (ulong)param_2 * 8;
    lVar5 = *(long *)(lVar3 + 0x5f0);
    if (param_6 == 0) {
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
      lVar3 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x690);
      bVar4 = *(byte *)(lVar3 + 0x58) & 0xfe;
    }
    else {
      plVar1 = (long *)(lVar3 + 0x5f0);
      uVar8 = param_3[1];
      lVar7 = *(long *)(param_1 + 0x448);
      *(undefined4 *)(lVar5 + 0x30) = *param_3;
      *(undefined4 *)(lVar5 + 0x34) = uVar8;
      lVar3 = param_1 + (ulong)param_2 * 8;
      *(undefined4 *)(lVar5 + 0x38) = 0;
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
      lVar5 = *(long *)(lVar3 + 0x690);
      uVar8 = param_3[1];
      *(undefined4 *)(lVar5 + 0x30) = *param_3;
      *(undefined4 *)(lVar5 + 0x34) = uVar8;
      *(undefined4 *)(lVar5 + 0x38) = 0;
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
      memset(local_498,0,0x400);
      snprintf((char *)local_498,0x400,"anime_L_icon_area_npuinfo_%02d_scale_area",param3);
      FUN_00d2e2f0((float)(param_4 & 1),param_1 + 0x180,local_498);
      FUN_0284f014(lVar7 + (ulong)(param3 + 1) * 0xd0,param_5,0);
      if (param_6 - 2U < 3) {
        uVar8 = *(undefined4 *)(&DAT_03a7b1f0 + (long)(int)(param_6 - 2U) * 4);
      }
      else {
        uVar8 = 0;
      }
      snprintf((char *)local_498,0x400,"anime_L_icon_npuinfo_%02d_switch",param3);
      FUN_00d2e2f0(uVar8,param_1 + 0x180,local_498);
      lVar5 = *plVar1;
      bVar4 = *(byte *)(lVar5 + 0x58);
      if ((bVar4 & 1) == 0) {
        puVar6 = &DAT_cbf29ce484222645;
        snprintf((char *)local_498,0x400,"anime_L_icon_npuinfo_%02d_keep",param3);
        local_88 = strlen((char *)local_498);
        if (local_498[0] != 0) {
          pbVar2 = (byte *)((ulong)local_498 | 1);
          do {
            puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)local_498[0]) * 0x100000001b3);
            local_498[0] = *pbVar2;
            pbVar2 = pbVar2 + 1;
          } while (local_498[0] != 0);
        }
        uStack_80 = 0;
        if (*(long *)(param_1 + 0x2c8) != 0) {
          local_98 = puVar6;
          pbStack_90 = local_498;
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_98);
        }
        lVar5 = *plVar1;
        bVar4 = *(byte *)(lVar5 + 0x58);
      }
      *(byte *)(lVar5 + 0x58) = bVar4 | 1;
      lVar3 = *(long *)(lVar3 + 0x690);
      bVar4 = *(byte *)(lVar3 + 0x58) | 1;
    }
    *(byte *)(lVar3 + 0x58) = bVar4;
  }
  return;
}


