/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1a4c0; name: FUN_02f1a4c0
 */


void FUN_02f1a4c0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8) >> 0xc;
  lVar1 = 3;
  if (uVar4 != 0x63f) {
    lVar1 = 4;
  }
  lVar2 = 2;
  if (uVar4 != 0x60f) {
    lVar2 = lVar1;
  }
  lVar1 = 0;
  if (uVar4 != 4) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (uVar4 != 3) {
    lVar2 = lVar1;
  }
  uVar4 = *(uint *)(param_2 + 8) >> 0xc;
  lVar1 = 3;
  if (uVar4 != 0x63f) {
    lVar1 = 4;
  }
  lVar3 = 2;
  if (uVar4 != 0x60f) {
    lVar3 = lVar1;
  }
  lVar1 = 0;
  if (uVar4 != 4) {
    lVar1 = lVar3;
  }
  lVar3 = 1;
  if (uVar4 != 3) {
    lVar3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x02f1a54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0440ae60)[lVar2 * 10 + lVar3 * 2 + (param_3 & 1)])();
  return;
}


