/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07b04; name: FUN_02f07b04
 */


long FUN_02f07b04(ulong param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  
  iVar4 = 0;
  uVar5 = DAT_0440ab18;
  while( true ) {
    if (uVar5 == 0) {
      *param_3 = 0;
      return DAT_0440ab10 + (long)iVar4 * 0x18;
    }
    iVar1 = iVar4 + (uVar5 >> 1);
    puVar6 = (ulong *)(DAT_0440ab10 + (long)iVar1 * 0x18);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if (uVar2 == param_1 && uVar3 == param_2) break;
    if ((uVar2 < param_1) || ((uVar2 == param_1 && (uVar3 < param_2)))) {
      iVar4 = iVar1 + 1;
      uVar5 = uVar5 - 1;
    }
    uVar5 = uVar5 >> 1;
  }
  *param_3 = 1;
  return DAT_0440ab10 + (long)iVar1 * 0x18;
}


