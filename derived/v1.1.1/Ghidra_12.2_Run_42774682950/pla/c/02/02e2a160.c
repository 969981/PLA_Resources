/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e2a160; name: FUN_02e2a160
 */


void FUN_02e2a160(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),true,0);
  DAT_044096c0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x02e2a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x48))(param_3,3,0,0x81,&LAB_02e2a1cc,0x90,0);
  return;
}


