/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59a70; name: FUN_02f59a70
 */


void FUN_02f59a70(int param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((*(byte *)(param_2 + 0x2c) >> 2 & 1) != 0) {
    uVar1 = *(uint *)(param_2 + 0x28);
    uVar2 = ((int)param_3 - (int)param_2) - 0x60;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    param_3 = param_3 + (int)(uVar3 * uVar1 - uVar2);
  }
  lVar5 = *(long *)(param_2 + 0x40);
  lVar4 = FUN_02f59d90(*(undefined4 *)(&DAT_0442d120 + (long)param_1 * 4));
  if (lVar5 == lVar4) {
    FUN_02f59bd0(param_1,param_2,param_3);
    return;
  }
  FUN_02f59c60(param_2,param_3);
  return;
}


