/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed81a8; name: FUN_01ed81a8
 */


void FUN_01ed81a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  long *local_58;
  
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  puVar4 = &DAT_cbf29ce484222645;
  local_60 = strlen((char *)(param_2 + 0x210));
  bVar1 = *(byte *)(param_2 + 0x210);
  local_70 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    local_70 = &DAT_cbf29ce484222645;
    pbVar2 = (byte *)(param_2 + 0x211);
    do {
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  local_58 = (long *)0x0;
  pcStack_68 = (char *)(param_2 + 0x210);
  local_80 = strlen((char *)(param_2 + 0x230));
  bVar1 = *(byte *)(param_2 + 0x230);
  if (bVar1 != 0) {
    pbVar2 = (byte *)(param_2 + 0x231);
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  local_78 = (long *)0x0;
  local_90 = puVar4;
  pcStack_88 = (char *)(param_2 + 0x230);
  FUN_01ed9e08(param_1,uVar3,&local_70,&local_90,param_3);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


