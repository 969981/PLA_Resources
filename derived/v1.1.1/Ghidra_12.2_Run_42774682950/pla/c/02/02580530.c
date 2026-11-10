/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02580530; name: FUN_02580530
 */


void FUN_02580530(long param_1,char *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *local_c8;
  undefined1 **ppuStack_c0;
  size_t local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x84) != *param_2) {
    puVar8 = &DAT_cbf29ce484222645;
    if (*param_2 == '\0') {
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (undefined1 *)0x0;
      ppuStack_c0 = (undefined1 **)0x0;
      pcVar6 = (char *)(param_1 + 0x20);
      if (*pcVar6 == '\0') {
        snprintf((char *)&local_c8,100,"anime_%s","in");
      }
      else {
        snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"in");
      }
      uVar9 = (ulong)local_c8 & 0xff;
      if ((byte)local_c8 != '\0') {
        pcVar4 = (char *)((ulong)&local_c8 | 1);
        do {
          cVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
      }
      local_b8 = strlen((char *)&local_c8);
      local_c8 = &DAT_cbf29ce484222645;
      if ((int)uVar9 != 0) {
        local_c8 = &DAT_cbf29ce484222645;
        pbVar5 = (byte *)((ulong)&local_c8 | 1);
        do {
          bVar2 = *pbVar5;
          local_c8 = (undefined1 *)(((ulong)local_c8 ^ uVar9) * 0x100000001b3);
          pbVar5 = pbVar5 + 1;
          uVar9 = (ulong)bVar2;
        } while (bVar2 != 0);
      }
      uStack_b0 = 0;
      if (*(long *)(lVar7 + 0x148) != 0) {
        ppuStack_c0 = &local_c8;
        FUN_0283b430(*(long *)(lVar7 + 0x148),&local_c8);
      }
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (undefined1 *)0x0;
      ppuStack_c0 = (undefined1 **)0x0;
      if (*pcVar6 == '\0') {
        snprintf((char *)&local_c8,100,"anime_%s","out");
        bVar2 = (byte)local_c8;
        if ((byte)local_c8 != 0) goto LAB_02580708;
LAB_02580e3c:
        local_b8 = strlen((char *)&local_c8);
        local_c8 = &DAT_cbf29ce484222645;
      }
      else {
        snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"out");
        bVar2 = (byte)local_c8;
        if ((byte)local_c8 == 0) goto LAB_02580e3c;
LAB_02580708:
        pcVar6 = (char *)((ulong)&local_c8 | 1);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        local_b8 = strlen((char *)&local_c8);
        local_c8 = &DAT_cbf29ce484222645;
        pbVar5 = (byte *)((ulong)&local_c8 | 1);
        do {
          uVar9 = (ulong)bVar2;
          bVar2 = *pbVar5;
          local_c8 = (undefined1 *)(((ulong)local_c8 ^ uVar9) * 0x100000001b3);
          pbVar5 = pbVar5 + 1;
        } while (bVar2 != 0);
      }
      ppuStack_c0 = &local_c8;
      uStack_b0 = 0;
      if (*(long *)(lVar7 + 0x148) != 0) {
        FUN_0283b1e8(*(long *)(lVar7 + 0x148),&local_c8);
      }
    }
    else {
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (undefined1 *)0x0;
      ppuStack_c0 = (undefined1 **)0x0;
      pcVar6 = (char *)(param_1 + 0x20);
      if (*pcVar6 == '\0') {
        snprintf((char *)&local_c8,100,"anime_%s","in");
      }
      else {
        snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"in");
      }
      uVar9 = (ulong)local_c8 & 0xff;
      if ((byte)local_c8 != '\0') {
        pcVar4 = (char *)((ulong)&local_c8 | 1);
        do {
          cVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
      }
      local_b8 = strlen((char *)&local_c8);
      local_c8 = &DAT_cbf29ce484222645;
      if ((int)uVar9 != 0) {
        local_c8 = &DAT_cbf29ce484222645;
        pbVar5 = (byte *)((ulong)&local_c8 | 1);
        do {
          bVar2 = *pbVar5;
          local_c8 = (undefined1 *)(((ulong)local_c8 ^ uVar9) * 0x100000001b3);
          pbVar5 = pbVar5 + 1;
          uVar9 = (ulong)bVar2;
        } while (bVar2 != 0);
      }
      uStack_b0 = 0;
      if (*(long *)(lVar7 + 0x148) != 0) {
        ppuStack_c0 = &local_c8;
        FUN_0283b1e8(*(long *)(lVar7 + 0x148),&local_c8);
      }
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (undefined1 *)0x0;
      ppuStack_c0 = (undefined1 **)0x0;
      if (*pcVar6 == '\0') {
        snprintf((char *)&local_c8,100,"anime_%s","out");
        bVar2 = (byte)local_c8;
        if ((byte)local_c8 != 0) goto LAB_0258091c;
LAB_02580e98:
        local_b8 = strlen((char *)&local_c8);
        local_c8 = &DAT_cbf29ce484222645;
      }
      else {
        snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"out");
        bVar2 = (byte)local_c8;
        if ((byte)local_c8 == 0) goto LAB_02580e98;
LAB_0258091c:
        pcVar6 = (char *)((ulong)&local_c8 | 1);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        local_b8 = strlen((char *)&local_c8);
        local_c8 = &DAT_cbf29ce484222645;
        pbVar5 = (byte *)((ulong)&local_c8 | 1);
        do {
          uVar9 = (ulong)bVar2;
          bVar2 = *pbVar5;
          local_c8 = (undefined1 *)(((ulong)local_c8 ^ uVar9) * 0x100000001b3);
          pbVar5 = pbVar5 + 1;
        } while (bVar2 != 0);
      }
      ppuStack_c0 = &local_c8;
      uStack_b0 = 0;
      if (*(long *)(lVar7 + 0x148) != 0) {
        FUN_0283b430(*(long *)(lVar7 + 0x148),&local_c8);
      }
    }
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (undefined1 *)0x0;
    ppuStack_c0 = (undefined1 **)0x0;
    pcVar6 = (char *)(param_1 + 0x20);
    if (*pcVar6 == '\0') {
      snprintf((char *)&local_c8,100,"anime_%s","switch_item");
    }
    else {
      snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"switch_item");
    }
    uVar9 = (ulong)local_c8 & 0xff;
    if ((byte)local_c8 != '\0') {
      pcVar4 = (char *)((ulong)&local_c8 | 1);
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
    }
    local_b8 = strlen((char *)&local_c8);
    local_c8 = &DAT_cbf29ce484222645;
    if ((int)uVar9 != 0) {
      local_c8 = &DAT_cbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_c8 | 1);
      do {
        bVar2 = *pbVar5;
        local_c8 = (undefined1 *)(((ulong)local_c8 ^ uVar9) * 0x100000001b3);
        pbVar5 = pbVar5 + 1;
        uVar9 = (ulong)bVar2;
      } while (bVar2 != 0);
    }
    uStack_b0 = 0;
    if (*(long *)(lVar7 + 0x148) != 0) {
      ppuStack_c0 = &local_c8;
      FUN_0283b430(*(long *)(lVar7 + 0x148),&local_c8);
    }
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (undefined1 *)0x0;
    ppuStack_c0 = (undefined1 **)0x0;
    if (*pcVar6 == '\0') {
      snprintf((char *)&local_c8,100,"anime_%s","switch_poke");
      bVar2 = (byte)local_c8;
      if ((byte)local_c8 != 0) goto LAB_02580a64;
LAB_02580dc0:
      local_b8 = strlen((char *)&local_c8);
    }
    else {
      snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"switch_poke");
      bVar2 = (byte)local_c8;
      if ((byte)local_c8 == 0) goto LAB_02580dc0;
LAB_02580a64:
      pcVar6 = (char *)((ulong)&local_c8 | 1);
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      local_b8 = strlen((char *)&local_c8);
      pbVar5 = (byte *)((ulong)&local_c8 | 1);
      do {
        uVar9 = (ulong)bVar2;
        bVar2 = *pbVar5;
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ uVar9) * 0x100000001b3);
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    ppuStack_c0 = &local_c8;
    uStack_b0 = 0;
    local_c8 = puVar8;
    if (*(long *)(lVar7 + 0x148) != 0) {
      FUN_0283b430(*(long *)(lVar7 + 0x148),&local_c8);
    }
  }
  if (*(char *)(param_1 + 0x85) != param_2[1]) {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    pcVar6 = "off_target";
    if (param_2[1] != '\0') {
      pcVar6 = "on_target";
    }
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (undefined1 *)0x0;
    ppuStack_c0 = (undefined1 **)0x0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_c8,100,"anime_%s",pcVar6);
    }
    else {
      snprintf((char *)&local_c8,100,"anime_%s_%s",(char *)(param_1 + 0x20),pcVar6);
    }
    uVar9 = (ulong)local_c8 & 0xff;
    if ((byte)local_c8 != '\0') {
      pcVar6 = (char *)((ulong)&local_c8 | 1);
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
    }
    puVar8 = &DAT_cbf29ce484222645;
    local_b8 = strlen((char *)&local_c8);
    if ((int)uVar9 != 0) {
      pbVar5 = (byte *)((ulong)&local_c8 | 1);
      do {
        bVar2 = *pbVar5;
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ uVar9) * 0x100000001b3);
        pbVar5 = pbVar5 + 1;
        uVar9 = (ulong)bVar2;
      } while (bVar2 != 0);
    }
    uStack_b0 = 0;
    local_c8 = puVar8;
    ppuStack_c0 = &local_c8;
    if (*(long *)(lVar7 + 0x148) != 0) {
      FUN_0283b1e8(*(long *)(lVar7 + 0x148),&local_c8);
    }
  }
  if ((*(char *)(param_1 + 0x86) != param_2[2]) || (*(char *)(param_1 + 0x88) != param_2[4])) {
    FUN_02580f5c(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x87) != param_2[3]) {
    FUN_0258120c(param_1,param_2);
  }
  cVar3 = param_2[8];
  if ((*(char *)(param_1 + 0x8c) == '\0') || (cVar3 == '\0')) {
    if ((cVar3 == '\0') || (cVar3 == '\0' && *(char *)(param_1 + 0x8c) == '\0')) goto LAB_025805d0;
  }
  else if (*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0xc)) goto LAB_025805d0;
  lVar7 = *(long *)(param_1 + 0x10);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined1 **)0x0;
  pcVar6 = (char *)(param_1 + 0x20);
  if (*pcVar6 == '\0') {
    snprintf((char *)&local_c8,100,"anime_%s","switch_item");
  }
  else {
    snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"switch_item");
  }
  uVar9 = (ulong)local_c8 & 0xff;
  if ((byte)local_c8 != '\0') {
    pcVar4 = (char *)((ulong)&local_c8 | 1);
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
  }
  puVar8 = &DAT_cbf29ce484222645;
  local_b8 = strlen((char *)&local_c8);
  local_c8 = &DAT_cbf29ce484222645;
  if ((int)uVar9 != 0) {
    local_c8 = &DAT_cbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_c8 | 1);
    do {
      bVar2 = *pbVar5;
      local_c8 = (undefined1 *)(((ulong)local_c8 ^ uVar9) * 0x100000001b3);
      pbVar5 = pbVar5 + 1;
      uVar9 = (ulong)bVar2;
    } while (bVar2 != 0);
  }
  uStack_b0 = 0;
  if (*(long *)(lVar7 + 0x148) != 0) {
    ppuStack_c0 = &local_c8;
    FUN_0283b430(*(long *)(lVar7 + 0x148),&local_c8);
  }
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined1 **)0x0;
  if (*pcVar6 == '\0') {
    snprintf((char *)&local_c8,100,"anime_%s","switch_poke");
    bVar2 = (byte)local_c8;
    if ((byte)local_c8 != 0) goto LAB_02580be0;
LAB_02580ef4:
    local_b8 = strlen((char *)&local_c8);
    local_c8 = &DAT_cbf29ce484222645;
  }
  else {
    snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"switch_poke");
    bVar2 = (byte)local_c8;
    if ((byte)local_c8 == 0) goto LAB_02580ef4;
LAB_02580be0:
    pcVar4 = (char *)((ulong)&local_c8 | 1);
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    local_b8 = strlen((char *)&local_c8);
    local_c8 = &DAT_cbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_c8 | 1);
    do {
      uVar9 = (ulong)bVar2;
      bVar2 = *pbVar5;
      local_c8 = (undefined1 *)(((ulong)local_c8 ^ uVar9) * 0x100000001b3);
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
  }
  ppuStack_c0 = &local_c8;
  uStack_b0 = 0;
  if (*(long *)(lVar7 + 0x148) != 0) {
    FUN_0283b430(*(long *)(lVar7 + 0x148),&local_c8);
  }
  if (*(int *)(param_2 + 0xc) == 1) {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (undefined1 *)0x0;
    ppuStack_c0 = (undefined1 **)0x0;
    if (*pcVar6 == '\0') {
      snprintf((char *)&local_c8,100,"anime_%s","switch_poke");
      bVar2 = (byte)local_c8;
    }
    else {
      snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"switch_poke");
      bVar2 = (byte)local_c8;
    }
    if (bVar2 == 0) goto LAB_02580f50;
    pcVar6 = (char *)((ulong)&local_c8 | 1);
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    local_b8 = strlen((char *)&local_c8);
    pbVar5 = (byte *)((ulong)&local_c8 | 1);
    do {
      uVar9 = (ulong)bVar2;
      bVar2 = *pbVar5;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ uVar9) * 0x100000001b3);
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
  }
  else {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (undefined1 *)0x0;
    ppuStack_c0 = (undefined1 **)0x0;
    if (*pcVar6 == '\0') {
      snprintf((char *)&local_c8,100,"anime_%s","switch_item");
      bVar2 = (byte)local_c8;
    }
    else {
      snprintf((char *)&local_c8,100,"anime_%s_%s",pcVar6,"switch_item");
      bVar2 = (byte)local_c8;
    }
    if (bVar2 == 0) {
LAB_02580f50:
      local_b8 = strlen((char *)&local_c8);
    }
    else {
      pcVar6 = (char *)((ulong)&local_c8 | 1);
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      local_b8 = strlen((char *)&local_c8);
      pbVar5 = (byte *)((ulong)&local_c8 | 1);
      do {
        uVar9 = (ulong)bVar2;
        bVar2 = *pbVar5;
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ uVar9) * 0x100000001b3);
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
  }
  ppuStack_c0 = &local_c8;
  uStack_b0 = 0;
  if (*(long *)(lVar7 + 0x148) != 0) {
    local_c8 = puVar8;
    FUN_0283b1e8(*(long *)(lVar7 + 0x148),&local_c8);
  }
LAB_025805d0:
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  return;
}


