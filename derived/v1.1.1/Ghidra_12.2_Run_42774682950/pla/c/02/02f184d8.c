/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f184d8; name: FUN_02f184d8
 */


long FUN_02f184d8(uint param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  
  iVar3 = 0;
  uVar4 = DAT_0440ae50;
  while( true ) {
    if (uVar4 == 0) {
      *param_3 = 0;
      return DAT_0440ae48 + (long)iVar3 * 0x18;
    }
    iVar1 = iVar3 + (uVar4 >> 1);
    puVar5 = (uint *)(DAT_0440ae48 + (long)iVar1 * 0x18);
    uVar2 = *puVar5;
    uVar6 = *(ulong *)(puVar5 + 2);
    if (uVar2 == param_1 && uVar6 == param_2) break;
    if ((uVar2 < param_1) || ((uVar2 == param_1 && (uVar6 < param_2)))) {
      iVar3 = iVar1 + 1;
      uVar4 = uVar4 - 1;
    }
    uVar4 = uVar4 >> 1;
  }
  *param_3 = 1;
  return DAT_0440ae48 + (long)iVar1 * 0x18;
}


