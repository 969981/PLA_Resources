/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0258120c; name: FUN_0258120c
 */


void FUN_0258120c(long param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  char *param3;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *local_b8;
  undefined1 **ppuStack_b0;
  size_t local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar9 = *(long *)(param_1 + 0x10);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  bVar3 = *(char *)(param_2 + 3) == '\0';
  pcVar6 = "on_rapport";
  if (bVar3) {
    pcVar6 = "off_rapport";
  }
  pcVar5 = "off_rapport";
  if (bVar3) {
    pcVar5 = "on_rapport";
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (undefined1 *)0x0;
  ppuStack_b0 = (undefined1 **)0x0;
  param3 = (char *)(param_1 + 0x20);
  if (*param3 == '\0') {
    snprintf((char *)&local_b8,100,"anime_%s",pcVar5);
  }
  else {
    snprintf((char *)&local_b8,100,"anime_%s_%s",param3,pcVar5);
  }
  uVar8 = (ulong)local_b8 & 0xff;
  if ((byte)local_b8 != '\0') {
    pcVar5 = (char *)((ulong)&local_b8 | 1);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  puVar10 = &DAT_cbf29ce484222645;
  local_a8 = strlen((char *)&local_b8);
  local_b8 = &DAT_cbf29ce484222645;
  if ((int)uVar8 != 0) {
    local_b8 = &DAT_cbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_b8 | 1);
    do {
      bVar2 = *pbVar7;
      local_b8 = (undefined1 *)(((ulong)local_b8 ^ uVar8) * 0x100000001b3);
      pbVar7 = pbVar7 + 1;
      uVar8 = (ulong)bVar2;
    } while (bVar2 != 0);
  }
  uStack_a0 = 0;
  lVar4 = *(long *)(lVar9 + 0x148);
  if (lVar4 != 0) {
    ppuStack_b0 = &local_b8;
    FUN_0283b430(lVar4,&local_b8);
  }
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (undefined1 *)0x0;
  ppuStack_b0 = (undefined1 **)0x0;
  if (*param3 == '\0') {
    snprintf((char *)&local_b8,100,"anime_%s",pcVar6);
    bVar2 = (byte)local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"anime_%s_%s",param3,pcVar6);
    bVar2 = (byte)local_b8;
  }
  if (bVar2 == 0) {
    local_a8 = strlen((char *)&local_b8);
  }
  else {
    pcVar6 = (char *)((ulong)&local_b8 | 1);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_a8 = strlen((char *)&local_b8);
    pbVar7 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar8 = (ulong)bVar2;
      bVar2 = *pbVar7;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ uVar8) * 0x100000001b3);
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  ppuStack_b0 = &local_b8;
  uStack_a0 = 0;
  lVar9 = *(long *)(lVar9 + 0x148);
  if (lVar9 != 0) {
    local_b8 = puVar10;
    FUN_0283b1e8(lVar9,&local_b8);
  }
  return;
}


