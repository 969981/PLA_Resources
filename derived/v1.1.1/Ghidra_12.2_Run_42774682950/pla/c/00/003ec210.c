/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ec210; name: FUN_003ec210
 */


undefined8 FUN_003ec210(long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *param_2;
  bVar1 = *(byte *)(param_1 + lVar3);
  while (uVar5 = (ulong)bVar1, 0x7e < bVar1) {
    while (uVar4 = (uint)uVar5, 9 < uVar4 - 0x30 && 0x19 < ((uVar4 & 0xffffffdf) - 0x41 & 0xff)) {
      if ((uVar4 | 0x10) != 0x3f) {
        return 1;
      }
      lVar3 = lVar3 + 1;
      *param_2 = lVar3;
      uVar5 = (ulong)*(byte *)(param_1 + lVar3);
      if (*(byte *)(param_1 + lVar3) < 0x7f) goto LAB_003ec248;
    }
    lVar3 = lVar3 + 1;
    *param_2 = lVar3;
    bVar1 = *(byte *)(param_1 + lVar3);
  }
LAB_003ec248:
                    /* WARNING: Could not recover jumptable at 0x003ec258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)((ulong)(byte)"7################################"[uVar5] * 4 + 0x3ec234))(1);
  return uVar2;
}


