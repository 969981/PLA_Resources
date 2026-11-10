/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395ab4; name: FUN_00395ab4
 */


void FUN_00395ab4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((int)param_1[7] == 2) {
    std::mutex::lock();
    if ((int)param_1[7] == 2) {
      if (param_1[2] == 0) {
        lVar2 = param_1[1];
        if (lVar2 == 0) {
          plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
          if (plVar1 != (long *)0x0) {
            *plVar1 = 0;
            plVar1[1] = 0;
            plVar1[2] = 0;
          }
        }
        else {
          if (*(long *)(lVar2 + 0x70) != 0) {
            FUN_0032cf88(lVar2,0,0x18);
          }
          plVar1 = (long *)FUN_0032c850(lVar2,0x18,PTR_LAB_04373ce8);
          plVar1[1] = 0;
          plVar1[2] = 0;
          *plVar1 = lVar2;
        }
        param_1[2] = (long)plVar1;
      }
      *(undefined4 *)(param_1 + 7) = 2;
    }
  }
  else {
    if ((int)param_1[7] != 0) {
      return;
    }
    std::mutex::lock();
    if ((int)param_1[7] == 0) {
      (**(code **)(*param_1 + 0x68))(param_1);
      *(undefined4 *)(param_1 + 7) = 2;
      std::mutex::unlock();
      return;
    }
  }
  std::mutex::unlock();
  return;
}


