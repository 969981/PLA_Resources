/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02580f5c; name: FUN_02580f5c
 */


void FUN_02580f5c(long param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *local_98;
  undefined1 **ppuStack_90;
  size_t local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (*(char *)(param_2 + 2) == '\0') {
    if (*(char *)(param_2 + 8) == '\0') {
      return;
    }
    puVar6 = &DAT_cbf29ce484222645;
    if (*(int *)(param_2 + 0xc) == 1) {
      local_38 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar3 = "mypoke";
      if (*(char *)(param_2 + 4) != '\0') {
        pcVar3 = "battle";
      }
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = (undefined1 *)0x0;
      ppuStack_90 = (undefined1 **)0x0;
      if (*(char *)(param_1 + 0x20) == '\0') {
        snprintf((char *)&local_98,100,"anime_%s",pcVar3);
      }
      else {
        snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),pcVar3);
      }
      uVar7 = (ulong)local_98 & 0xff;
      if ((char)local_98 != '\0') {
        pcVar3 = (char *)((ulong)&local_98 | 1);
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      }
      local_88 = strlen((char *)&local_98);
      if ((int)uVar7 != 0) {
        pbVar4 = (byte *)((ulong)&local_98 | 1);
        do {
          bVar2 = *pbVar4;
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ uVar7) * 0x100000001b3);
          pbVar4 = pbVar4 + 1;
          uVar7 = (ulong)bVar2;
        } while (bVar2 != 0);
      }
    }
    else {
      local_38 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = (undefined1 *)0x0;
      ppuStack_90 = (undefined1 **)0x0;
      if (*(char *)(param_1 + 0x20) == '\0') {
        snprintf((char *)&local_98,100,"anime_%s","item");
      }
      else {
        snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),"item");
      }
      uVar7 = (ulong)local_98 & 0xff;
      if ((char)local_98 != '\0') {
        pcVar3 = (char *)((ulong)&local_98 | 1);
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      }
      local_88 = strlen((char *)&local_98);
      if ((int)uVar7 != 0) {
        pbVar4 = (byte *)((ulong)&local_98 | 1);
        do {
          bVar2 = *pbVar4;
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ uVar7) * 0x100000001b3);
          pbVar4 = pbVar4 + 1;
          uVar7 = (ulong)bVar2;
        } while (bVar2 != 0);
      }
    }
    local_98 = puVar6;
  }
  else {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (undefined1 *)0x0;
    ppuStack_90 = (undefined1 **)0x0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_98,100,"anime_%s","npc");
    }
    else {
      snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),"npc");
    }
    uVar7 = (ulong)local_98 & 0xff;
    if ((char)local_98 != '\0') {
      pcVar3 = (char *)((ulong)&local_98 | 1);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    puVar6 = &DAT_cbf29ce484222645;
    local_88 = strlen((char *)&local_98);
    if ((int)uVar7 != 0) {
      pbVar4 = (byte *)((ulong)&local_98 | 1);
      do {
        bVar2 = *pbVar4;
        puVar6 = (undefined1 *)(((ulong)puVar6 ^ uVar7) * 0x100000001b3);
        pbVar4 = pbVar4 + 1;
        uVar7 = (ulong)bVar2;
      } while (bVar2 != 0);
    }
    local_98 = puVar6;
  }
  ppuStack_90 = &local_98;
  uStack_80 = 0;
  lVar5 = *(long *)(lVar5 + 0x148);
  if (lVar5 != 0) {
    FUN_0283b1e8(lVar5,&local_98);
  }
  return;
}


