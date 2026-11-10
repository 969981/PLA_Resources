/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00540f60; name: FUN_00540f60
 */


byte * FUN_00540f60(undefined8 param_1,byte *param_2,byte *param_3,ulong *param_4)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  while ((param_3 != param_2 && (uVar5 < 0x46))) {
    pbVar4 = param_2 + 1;
    bVar1 = *param_2;
    uVar2 = uVar5 & 0x3f;
    uVar5 = uVar5 + 7;
    uVar6 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar6;
    param_2 = pbVar4;
    if (-1 < (char)bVar1) {
      *param_4 = uVar6;
      return pbVar4;
    }
  }
  FUN_00540f50();
                    /* WARNING: Does not return */
  pcVar3 = (code *)UndefinedInstructionException(0,0x540fa8);
  (*pcVar3)();
}


