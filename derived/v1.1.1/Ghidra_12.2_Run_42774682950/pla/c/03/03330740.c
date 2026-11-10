/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03330740; name: FUN_03330740
 */


void FUN_03330740(long param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  long local_60;
  undefined4 local_58;
  uint local_54;
  long local_48;
  undefined4 local_40;
  uint local_3c;
  
  if (param_3 != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    FUN_03330818(&local_60,*(undefined8 *)(param_1 + 0x28));
    FUN_03330988(&local_60,param_2,param_3,param_4);
    puVar1 = PTR_PTR_0434a080;
    local_40 = 0;
    if ((-1 < (int)local_3c) && (local_48 != 0)) {
      FUN_032cf244(PTR_PTR_0434a080,local_48,0x14,local_3c & 0x3fffffff);
    }
    local_3c = 0x80000000;
    local_48 = 0;
    local_58 = 0;
    if ((-1 < (int)local_54) && (local_60 != 0)) {
      FUN_032cf244(puVar1,local_60,0x18,local_54 & 0x3fffffff);
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  }
  return;
}


