/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03320020; name: FUN_03320020
 */


void FUN_03320020(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [512];
  
  FUN_0331fefc(auStack_230,auStack_220,0x200);
  FUN_0332448c(auStack_230,param_1);
  iVar1 = FUN_03320b30(0x2636fe25,auStack_220,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/System/Error/hkError.cpp"
                       ,0x3b);
  if (iVar1 != 0) {
    CallSupervisor(0x26);
  }
  return;
}


