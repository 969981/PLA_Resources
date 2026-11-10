/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064c1e4; name: FUN_0064c1e4
 */


void FUN_0064c1e4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  if (*(long *)(lVar2 + 0x30) == 0) {
    param_1[1] = 0;
    return;
  }
  lVar1 = std::__shared_weak_count::lock();
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    *param_1 = *(undefined8 *)(lVar2 + 0x28);
  }
  return;
}


