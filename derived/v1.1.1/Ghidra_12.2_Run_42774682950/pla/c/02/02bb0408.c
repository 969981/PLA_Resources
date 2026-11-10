/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb0408; name: FUN_02bb0408
 */


void FUN_02bb0408(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  FUN_02bb04cc(param_1,param_3);
  puVar4 = *(uint **)(param_1 + 0x58);
  uVar7 = 1;
  puVar5 = *(uint **)(param_1 + 0x50);
  while (puVar5 != puVar4) {
    uVar2 = puVar5[3];
    uVar3 = puVar5[4];
    lVar1 = param_3 + (ulong)(*puVar5 << 2) * 4;
    *(undefined8 *)(lVar1 + 0xac) = *(undefined8 *)(puVar5 + 1);
    *(uint *)(lVar1 + 0xb4) = uVar2;
    *(uint *)(lVar1 + 0xb8) = uVar3;
    puVar6 = puVar5 + 5;
    uVar2 = *puVar5;
    puVar5 = puVar6;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2 + 1;
    }
  }
  (*DAT_043f0d30)(*(undefined8 *)(param_3 + 0x10),0,uVar7,param_3 + 0xac);
  (*DAT_043f0d48)(*(undefined8 *)(param_3 + 0x10),0,uVar7,param_3 + 300);
  (*DAT_043f0d50)(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                  *(undefined8 *)(param_3 + 0x10));
  FUN_02bb06f0(param_1,param_3);
  return;
}


