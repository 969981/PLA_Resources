/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5828; name: FUN_02eb5828
 */


void FUN_02eb5828(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_042a9ac0;
  uVar1 = param_1[5];
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      uVar5 = 1L << (uVar2 & 0x3f);
      if ((uVar5 & uVar1) != 0) {
        FUN_02ee0bfc(DAT_0440a160,param_1,uVar2);
        uVar1 = param_1[5] & (uVar5 ^ 0xffffffffffffffff);
        param_1[5] = uVar1;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar1 != 0);
  }
  if (*(int *)(param_1 + 7) != 0) {
    FUN_02ee0bf4(DAT_0440a160,param_1);
  }
  lVar3 = param_1[3];
  lVar4 = lVar3;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      FUN_02eb5920(lVar4 + 8,param_1);
      lVar3 = param_1[3];
      lVar4 = lVar4 + 0x38;
    } while (lVar4 != lVar3 + (ulong)*(uint *)(param_1 + 4) * 0x38);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (*DAT_0442d150)(0,lVar3);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  FUN_02eb2770(param_1);
  return;
}


