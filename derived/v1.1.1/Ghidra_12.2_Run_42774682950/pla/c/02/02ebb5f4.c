/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebb5f4; name: FUN_02ebb5f4
 */


void FUN_02ebb5f4(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_042a9ca0;
  uVar2 = (ulong)*(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 6) != 0) {
    uVar3 = 0;
    do {
      uVar4 = 1L << (uVar3 & 0x3f);
      if ((uVar4 & uVar2) != 0) {
        FUN_02ee0bfc(DAT_0440a160,param_1,uVar3);
        uVar1 = *(uint *)(param_1 + 6) & ((uint)uVar4 ^ 0xffffffff);
        uVar2 = (ulong)uVar1;
        *(uint *)(param_1 + 6) = uVar1;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while ((int)uVar2 != 0);
  }
  FUN_02eb9658(param_1 + 7,&LAB_02eb9340,0);
  FUN_02ec6234(DAT_0440a180);
  FUN_02eb969c(param_1 + 7);
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (*DAT_0442d150)(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  param_1[7] = &PTR_LAB_042a9e40;
  if (param_1[5] != 0) {
    (*DAT_0442d150)(0);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (*DAT_0442d150)(0);
  }
  param_1[4] = 0;
  FUN_02eb2770(param_1);
  return;
}


