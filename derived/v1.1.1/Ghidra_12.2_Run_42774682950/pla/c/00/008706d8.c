/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008706d8; name: FUN_008706d8
 */


void FUN_008706d8(undefined4 *param_1)

{
  byte bVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  void *pvVar7;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_007e4464(param_1 + 6);
  FUN_007e4464(param_1 + 0xe);
  sVar2 = strlen("");
  puVar6 = (ulong *)(param_1 + 0x16);
  bVar1 = (byte)*puVar6;
  if ((bVar1 & 1) == 0) {
    uVar3 = 0x16;
    lVar4 = sVar2 - 0x16;
    if (sVar2 < 0x16 || lVar4 == 0) goto LAB_0087072c;
LAB_00870750:
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18);
    }
    FUN_00876378(puVar6,uVar3,lVar4,uVar5,0,uVar5,sVar2,&DAT_03996322);
  }
  else {
    uVar3 = (*puVar6 & 0xfffffffffffffffe) - 1;
    lVar4 = sVar2 - uVar3;
    if (uVar3 <= sVar2 && lVar4 != 0) goto LAB_00870750;
LAB_0087072c:
    if ((bVar1 & 1) == 0) {
      pvVar7 = (void *)((long)param_1 + 0x59);
    }
    else {
      pvVar7 = *(void **)(param_1 + 0x1a);
    }
    if (sVar2 != 0) {
      memmove(pvVar7,&DAT_03996322,sVar2);
    }
    *(undefined1 *)((long)pvVar7 + sVar2) = 0;
    if ((*puVar6 & 1) == 0) {
      *(byte *)puVar6 = (byte)((int)sVar2 << 1);
    }
    else {
      *(size_t *)(param_1 + 0x18) = sVar2;
    }
  }
  sVar2 = strlen("");
  puVar6 = (ulong *)(param_1 + 0x1c);
  bVar1 = (byte)*puVar6;
  if ((bVar1 & 1) == 0) {
    uVar3 = 0x16;
    lVar4 = sVar2 - 0x16;
    if (0x15 < sVar2 && lVar4 != 0) {
LAB_00870804:
      if ((bVar1 & 1) == 0) {
        uVar5 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x1e);
      }
      FUN_00876378(puVar6,uVar3,lVar4,uVar5,0,uVar5,sVar2,&DAT_03996322);
      goto LAB_0087086c;
    }
  }
  else {
    uVar3 = (*puVar6 & 0xfffffffffffffffe) - 1;
    lVar4 = sVar2 - uVar3;
    if (uVar3 <= sVar2 && lVar4 != 0) goto LAB_00870804;
  }
  if ((bVar1 & 1) == 0) {
    pvVar7 = (void *)((long)param_1 + 0x71);
  }
  else {
    pvVar7 = *(void **)(param_1 + 0x20);
  }
  if (sVar2 != 0) {
    memmove(pvVar7,&DAT_03996322,sVar2);
  }
  *(undefined1 *)((long)pvVar7 + sVar2) = 0;
  if ((*puVar6 & 1) == 0) {
    *(byte *)puVar6 = (byte)((int)sVar2 << 1);
  }
  else {
    *(size_t *)(param_1 + 0x1e) = sVar2;
  }
LAB_0087086c:
  *(undefined8 *)(param_1 + 0x22) = 0;
  FUN_007ecf14(param_1 + 0x24);
  FUN_007ecf14(param_1 + 0x26);
  return;
}


