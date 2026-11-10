/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02580198; name: FUN_02580198
 */


void FUN_02580198(long param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *local_a8;
  undefined1 **ppuStack_a0;
  size_t local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  *(undefined1 *)(param_1 + 0x94) = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined1 *)0x0;
  ppuStack_a0 = (undefined1 **)0x0;
  pcVar5 = (char *)(param_1 + 0x20);
  if (*pcVar5 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","in");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",pcVar5,"in");
  }
  uVar8 = (ulong)local_a8 & 0xff;
  if ((byte)local_a8 != '\0') {
    pcVar3 = (char *)((ulong)&local_a8 | 1);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  puVar7 = &DAT_cbf29ce484222645;
  local_98 = strlen((char *)&local_a8);
  local_a8 = &DAT_cbf29ce484222645;
  if ((int)uVar8 != 0) {
    local_a8 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_a8 | 1);
    do {
      bVar2 = *pbVar4;
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ uVar8) * 0x100000001b3);
      pbVar4 = pbVar4 + 1;
      uVar8 = (ulong)bVar2;
    } while (bVar2 != 0);
  }
  uStack_90 = 0;
  if (*(long *)(lVar6 + 0x148) != 0) {
    ppuStack_a0 = &local_a8;
    FUN_0283b430(*(long *)(lVar6 + 0x148),&local_a8);
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined1 *)0x0;
  ppuStack_a0 = (undefined1 **)0x0;
  if (*pcVar5 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","keep");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",pcVar5,"keep");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    local_98 = strlen((char *)&local_a8);
    local_a8 = &DAT_cbf29ce484222645;
  }
  else {
    pcVar3 = (char *)((ulong)&local_a8 | 1);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_98 = strlen((char *)&local_a8);
    local_a8 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar8 = (ulong)bVar2;
      bVar2 = *pbVar4;
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ uVar8) * 0x100000001b3);
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  ppuStack_a0 = &local_a8;
  uStack_90 = 0;
  if (*(long *)(lVar6 + 0x148) != 0) {
    FUN_0283b430(*(long *)(lVar6 + 0x148),&local_a8);
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined1 *)0x0;
  ppuStack_a0 = (undefined1 **)0x0;
  if (*pcVar5 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","out");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",pcVar5,"out");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    local_98 = strlen((char *)&local_a8);
    local_a8 = &DAT_cbf29ce484222645;
  }
  else {
    pcVar3 = (char *)((ulong)&local_a8 | 1);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_98 = strlen((char *)&local_a8);
    local_a8 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar8 = (ulong)bVar2;
      bVar2 = *pbVar4;
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ uVar8) * 0x100000001b3);
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  ppuStack_a0 = &local_a8;
  uStack_90 = 0;
  if (*(long *)(lVar6 + 0x148) != 0) {
    FUN_0283b430(*(long *)(lVar6 + 0x148),&local_a8);
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined1 *)0x0;
  ppuStack_a0 = (undefined1 **)0x0;
  if (*pcVar5 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","reset");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",pcVar5,"reset");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    local_98 = strlen((char *)&local_a8);
  }
  else {
    pcVar5 = (char *)((ulong)&local_a8 | 1);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_98 = strlen((char *)&local_a8);
    pbVar4 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar8 = (ulong)bVar2;
      bVar2 = *pbVar4;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ uVar8) * 0x100000001b3);
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  ppuStack_a0 = &local_a8;
  uStack_90 = 0;
  if (*(long *)(lVar6 + 0x148) != 0) {
    local_a8 = puVar7;
    FUN_0283b1e8(*(long *)(lVar6 + 0x148),&local_a8);
  }
  return;
}


