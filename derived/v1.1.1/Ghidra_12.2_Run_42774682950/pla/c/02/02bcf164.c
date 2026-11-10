/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf164; name: FUN_02bcf164
 */


void FUN_02bcf164(undefined8 *param_1,void *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  size_t __n;
  undefined1 *puVar6;
  ulong local_148;
  byte local_140 [8];
  undefined8 auStack_138 [31];
  void *local_38;
  
  param_1[0xc] = "<no name>";
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar6 = &DAT_cbf29ce484222645;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_148 = 0;
  local_38 = param_2;
  std::align(8,param_3,&local_38,&local_148);
  param_1[6] = local_38;
  param_1[7] = param_3 - local_148 & 0xfffffffffffffff8;
  uVar3 = FUN_02bce0b8(param_1);
  lVar4 = param_1[5];
  __n = lVar4 * 4;
  param_1[8] = uVar3;
  memcpy(local_140,(void *)param_1[2],__n);
  pbVar5 = local_140 + __n;
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar5[4] = 0;
  pbVar5[5] = 0;
  pbVar5[6] = 0;
  pbVar5[7] = 0;
  *(undefined8 *)((long)auStack_138 + __n) = 0;
  if (__n != 0xfffffffffffffff0) {
    pbVar5 = local_140;
    lVar4 = lVar4 * -4 + -0x10;
    do {
      bVar2 = *pbVar5;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 2;
      puVar6 = (undefined1 *)
               ((((ulong)puVar6 ^ (ulong)bVar2) * 0x100000001b3 ^ (ulong)*pbVar1) * 0x100000001b3);
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0);
  }
  param_1[9] = puVar6;
  return;
}


