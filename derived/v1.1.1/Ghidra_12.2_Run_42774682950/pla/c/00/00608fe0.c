/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00608fe0; name: _INIT_89
 */


void _INIT_89(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  nn::os::SdkRecursiveMutexType::Initialize();
  FUN_00100250(PTR_LAB_043752c8,&DAT_0439f2d8,&PTR_LOOP_0411a000);
  puVar2 = PTR_LAB_043752d0;
  puVar1 = PTR_DAT_043752c0;
  *(undefined8 *)(PTR_DAT_043752c0 + 0x10) = 0;
  *(undefined **)(puVar1 + 8) = puVar1;
  *(undefined **)puVar1 = puVar1;
  FUN_00100250(puVar2,puVar1,&PTR_LOOP_0411a000);
  return;
}


