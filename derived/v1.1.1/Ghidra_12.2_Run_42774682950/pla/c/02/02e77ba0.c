/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77ba0; name: FUN_02e77ba0
 */


void FUN_02e77ba0(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [48];
  
  iVar1 = (**(code **)(*DAT_0440a148 + 0x28))(DAT_0440a148,auStack_60);
  if (iVar1 == 1) {
    uVar2 = FUN_02e77c30(param_1,DAT_0440a2f8,auStack_60,param_2,1,1);
    (**(code **)(*DAT_0440a148 + 0x30))(DAT_0440a148,auStack_60,uVar2);
  }
  return;
}


