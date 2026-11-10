/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0df50; name: FUN_02f0df50
 */


undefined8 FUN_02f0df50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = FUN_02f59e30(0,800);
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  else {
    uVar3 = 0;
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined4 *)(param_1 + 0x20) = 10;
    puVar4 = (undefined8 *)(lVar1 + -0x50);
    do {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 10;
      *puVar5 = puVar4 + 0x14;
      puVar4[0xb] = 0xffffffff;
      puVar4[0xc] = 0;
      *(undefined1 *)(puVar4 + 0xd) = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4 = puVar5;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
    uVar2 = 1;
    *puVar5 = 0;
  }
  return uVar2;
}


