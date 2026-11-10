/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d16c; name: FUN_0333d16c
 */


undefined8 FUN_0333d16c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_032d49a4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1d8,0);
  nn::os::SetTlsValue(DAT_04350fb8,uVar3);
  lVar1 = tpidr_el0;
  *(undefined8 *)(lVar1 + 0x38d490) = uVar3;
  FUN_0333d224(uVar3,param_1,0);
  (*(code *)PTR_FUN_04350fe0)(uVar3,0);
  FUN_0333d77c(DAT_04350fd0);
  FUN_0333d2c0(DAT_04350fd8,uVar3);
  nn::os::UnlockMutex(DAT_04350fd0);
  return uVar3;
}


