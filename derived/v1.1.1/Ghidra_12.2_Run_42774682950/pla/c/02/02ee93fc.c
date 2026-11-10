/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee93fc; name: FUN_02ee93fc
 */


undefined8 FUN_02ee93fc(long param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if (puVar1 == (ulong *)0x0) {
    puVar1 = (ulong *)(*DAT_0442d138)(2,0x28);
    if (puVar1 == (ulong *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 2;
    }
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0xffffffffffffffff;
    *(ulong **)(param_1 + 8) = puVar1;
  }
  uVar3 = 1L << (param_2 & 0x3f);
  if ((*puVar1 & uVar3) == 0) {
    *puVar1 = *puVar1 | uVar3;
    FUN_02ee89dc();
    lVar2 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
    if (*(uint *)(lVar2 + 0x18) != 0) {
      lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 4;
      uVar3 = 0xffffffffffffffff;
      puVar1 = *(ulong **)(lVar2 + 0x10);
      do {
        uVar3 = *puVar1 & uVar3;
        lVar4 = lVar4 + -0x10;
        *(ulong *)(lVar2 + 8) = uVar3;
        puVar1 = puVar1 + 2;
      } while (lVar4 != 0);
    }
  }
  return 1;
}


