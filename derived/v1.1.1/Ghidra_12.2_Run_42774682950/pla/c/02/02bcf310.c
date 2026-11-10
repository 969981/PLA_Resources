/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf310; name: FUN_02bcf310
 */


void FUN_02bcf310(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  size_t __n;
  undefined1 *puVar7;
  byte local_150 [8];
  undefined8 auStack_148 [31];
  
  pbVar6 = local_150;
  lVar5 = *(long *)(param_2 + 0x28);
  __n = lVar5 * 4;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  puVar7 = &DAT_cbf29ce484222645;
  memcpy(local_150,*(void **)(param_2 + 0x10),__n);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined8 *)(local_150 + __n) = uVar2;
  *(undefined8 *)((long)auStack_148 + __n) = uVar3;
  if (__n != 0xfffffffffffffff0) {
    lVar5 = lVar5 * -4 + -0x10;
    do {
      bVar4 = *pbVar6;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 2;
      puVar7 = (undefined1 *)
               ((((ulong)puVar7 ^ (ulong)bVar4) * 0x100000001b3 ^ (ulong)*pbVar1) * 0x100000001b3);
      lVar5 = lVar5 + 2;
    } while (lVar5 != 0);
  }
  param_1[2] = puVar7;
  return;
}


