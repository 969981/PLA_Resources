/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf5a8; name: FUN_02bcf5a8
 */


bool FUN_02bcf5a8(long param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  size_t __n;
  undefined1 *puVar8;
  undefined8 uVar9;
  byte local_150 [8];
  undefined8 auStack_148 [31];
  
  pbVar7 = local_150;
  if (*(long *)(param_1 + 0x30) == 0) {
    bVar5 = true;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    __n = lVar6 * 4;
    puVar2 = *(undefined1 **)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    puVar8 = &DAT_cbf29ce484222645;
    memcpy(local_150,*(void **)(param_1 + 0x10),__n);
    *(undefined8 *)(local_150 + __n) = uVar3;
    *(undefined8 *)((long)auStack_148 + __n) = uVar9;
    if (__n != 0xfffffffffffffff0) {
      lVar6 = lVar6 * -4 + -0x10;
      do {
        bVar4 = *pbVar7;
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 2;
        puVar8 = (undefined1 *)
                 ((((ulong)puVar8 ^ (ulong)bVar4) * 0x100000001b3 ^ (ulong)*pbVar1) * 0x100000001b3)
        ;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
    }
    bVar5 = puVar2 == puVar8;
  }
  return bVar5;
}


