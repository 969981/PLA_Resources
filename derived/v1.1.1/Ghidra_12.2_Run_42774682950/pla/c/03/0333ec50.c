/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ec50; name: FUN_0333ec50
 */


void FUN_0333ec50(undefined8 *param_1)

{
  uint uVar1;
  time_t tVar2;
  clock_t cVar3;
  
  *param_1 = &PTR_LAB_04351108;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_0333efd0(param_1 + 3);
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),true,0);
  tVar2 = time((time_t *)0x0);
  cVar3 = clock();
  uVar1 = nn::os::GetSystemTick();
  FUN_0333f070(param_1 + 3,(uint)cVar3 ^ (uint)tVar2 ^ uVar1);
  return;
}


