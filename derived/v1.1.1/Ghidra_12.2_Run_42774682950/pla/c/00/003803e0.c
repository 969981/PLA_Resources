/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003803e0; name: FUN_003803e0
 */


undefined8 FUN_003803e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  std::mutex::lock();
                    /* try { // try from 003803fc to 00380407 has its CatchHandler @ 00380424 */
  uVar1 = FUN_0037edac(param_1,param_2);
  std::mutex::unlock();
  return uVar1;
}


