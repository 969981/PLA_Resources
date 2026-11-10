/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008704bc; name: FUN_008704bc
 */


void FUN_008704bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a750(0x14,uVar1);
  if (lVar2 != 0) {
    FUN_007eb6cc(lVar2);
  }
  *(long *)(param_2 + 0x6e8) = lVar2;
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a750(0x4c0,uVar1);
  if (lVar2 != 0) {
    FUN_008766cc(lVar2);
  }
  *(long *)(param_2 + 0x6f0) = lVar2;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


