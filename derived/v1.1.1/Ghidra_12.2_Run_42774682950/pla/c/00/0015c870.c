/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015c870; name: FUN_0015c870
 */


void FUN_0015c870(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  if (puVar1 != (ulong *)0x0) {
    uVar2 = *puVar1;
    while (param_2 <= uVar2) {
      puVar3 = puVar1 + 2;
      *(ulong *)(param_1 + 0x40) = *puVar3;
      if (puVar1[1] == 0) {
        FUN_00161510(param_1,puVar1,0x20,0);
LAB_0015c8ac:
        puVar1 = *(ulong **)(param_1 + 0x40);
      }
      else {
        uVar2 = ((ulong *)*puVar1)[1];
        *puVar3 = *(ulong *)*puVar1;
        puVar1[3] = uVar2;
        *puVar1 = (ulong)puVar3;
        if (((byte)puVar1[3] >> 6 & 1) == 0) goto LAB_0015c8ac;
        FUN_0015cc00(param_1);
        puVar1 = *(ulong **)(param_1 + 0x40);
      }
      if (puVar1 == (ulong *)0x0) {
        return;
      }
      uVar2 = *puVar1;
    }
  }
  return;
}


