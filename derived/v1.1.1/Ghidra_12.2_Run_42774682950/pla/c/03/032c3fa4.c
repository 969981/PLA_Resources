/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3fa4; name: FUN_032c3fa4
 */


undefined1  [16] FUN_032c3fa4(ulong *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  puVar2 = (undefined1 *)*param_1;
  puVar4 = (undefined1 *)param_1[1];
  puVar3 = puVar2;
  if (puVar2 != puVar4) {
    if (puVar2 < puVar4) {
      do {
        uVar1 = FUN_032c46e0(*puVar2);
        puVar3 = puVar2;
        if ((uVar1 & 1) == 0) goto LAB_032c3fe4;
        puVar2 = puVar2 + 1;
      } while (puVar4 != puVar2);
      puVar3 = puVar4;
    }
LAB_032c3fe4:
    do {
      puVar2 = puVar4;
      puVar4 = puVar2 + -1;
      if (puVar4 <= puVar3) break;
      uVar1 = FUN_032c46e0(*puVar4);
    } while ((uVar1 & 1) != 0);
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}


