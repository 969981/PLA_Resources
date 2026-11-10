/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d88ec; name: FUN_032d88ec
 */


void FUN_032d88ec(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [512];
  
  FUN_0331fefc(auStack_230,auStack_220,0x200);
  FUN_0332448c(auStack_230,
               "Only AttributeArrayWithOwnership::AllocImpl\'s deallocate function should be used.")
  ;
  iVar1 = FUN_03320b30(0x296f573f,auStack_220,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
                       ,0x68);
  if (iVar1 != 0) {
    CallSupervisor(0x26);
  }
  FUN_0331ff7c(auStack_230);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


