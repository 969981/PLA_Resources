/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e944b0; name: FUN_02e944b0
 */


int FUN_02e944b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_60 [2];
  EventType aEStack_58 [19];
  char local_45;
  
  nn::os::InitializeEvent(aEStack_58,0,1);
  uVar2 = FUN_02e97f7c(param_1 + 0xf8,local_60);
  iVar1 = FUN_02e96cbc(uVar2,param_2,&LAB_02e77430,local_60);
  if (iVar1 == 1) {
    nn::os::WaitEvent(aEStack_58);
    if (local_45 == '\x01') {
      nn::os::FinalizeEvent(aEStack_58);
    }
    iVar1 = local_60[0];
  }
  else if (local_45 == '\x01') {
    nn::os::FinalizeEvent(aEStack_58);
  }
  return iVar1;
}


