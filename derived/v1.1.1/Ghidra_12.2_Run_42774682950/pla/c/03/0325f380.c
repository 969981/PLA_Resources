/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325f380; name: FUN_0325f380
 */


void FUN_0325f380(long param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_032645a4();
  FUN_03264598(param_1,param_3);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if ((int)(*(uint *)(param_1 + 0x154) & 0x3fffffff) < param_3) {
    uVar1 = FUN_031f0e3c(PTR_PTR_0434a080,param_3,*(undefined8 *)(param_1 + 0x148),0,param_1 + 0x154
                        );
    *(undefined8 *)(param_1 + 0x148) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x140) = param_2;
  return;
}


