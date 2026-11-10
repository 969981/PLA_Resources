/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0150654c; name: FUN_0150654c
 */


void FUN_0150654c(long param_1,undefined4 *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),*param_2);
  uVar3 = FUN_02c61820(*(undefined8 *)(param_1 + 0x5b8),param_2[1]);
  if ((uVar3 & 1) == 0) {
    uVar4 = param_2[2];
    bVar1 = param_2[3] != 0;
  }
  else {
    bVar1 = false;
    uVar4 = 0;
  }
  FUN_014f1944(*(undefined8 *)(param_1 + 0x600),*param_2,
               &DAT_043c79d8 + (param_3 & 0xffffffff) * 0x28,bVar1,uVar2 & 1,uVar4);
  return;
}


