/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395be0; name: FUN_00395be0
 */


undefined8 FUN_00395be0(long *param_1)

{
  undefined8 uVar1;
  
  std::mutex::lock();
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  std::mutex::unlock();
  return uVar1;
}


