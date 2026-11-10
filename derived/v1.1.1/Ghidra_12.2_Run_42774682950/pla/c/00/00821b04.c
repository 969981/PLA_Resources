/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00821b04; name: FUN_00821b04
 */


long FUN_00821b04(undefined1 *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = *param_3;
  puVar4 = param_1;
  if (bVar2 != 0) {
    while( true ) {
      uVar5 = (ulong)(byte)(&DAT_03a73bc0)[bVar2 >> 1];
      uVar1 = uVar5 + 1;
      bVar3 = param_2 < uVar1;
      param_2 = param_2 - uVar1;
      if (((bVar3 || param_2 == 0) || param_4 <= uVar5) || bVar2 == 0) break;
      uVar6 = 0;
      while (puVar4[uVar6] = bVar2, uVar5 != uVar6) {
        bVar2 = param_3[uVar6 + 1];
        uVar6 = uVar6 + 1;
        if (bVar2 == 0) goto LAB_00821b74;
      }
      param_3 = param_3 + uVar1;
      bVar2 = *param_3;
      puVar4 = puVar4 + uVar1;
      param_4 = param_4 - uVar1;
      if (bVar2 == 0) break;
    }
  }
LAB_00821b74:
  *puVar4 = 0;
  return (long)puVar4 - (long)param_1;
}


