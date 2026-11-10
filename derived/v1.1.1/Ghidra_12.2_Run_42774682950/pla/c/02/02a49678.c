/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a49678; name: FUN_02a49678
 */


void FUN_02a49678(void *param_1,char *param_2,ulong param_3,int param_4)

{
  ThreadType *pTVar1;
  ulong uVar2;
  int iVar3;
  
  *(undefined1 *)((long)param_1 + 0x300) = 0;
  *(undefined1 *)((long)param_1 + 0x301) = 0;
  *(undefined1 *)((long)param_1 + 0x302) = 0;
  pTVar1 = (ThreadType *)((long)param_1 + 0x100);
  iVar3 = (int)param_3;
  if (iVar3 < 0) {
    nn::os::CreateThread
              (pTVar1,(_func_void_void_ptr *)&LAB_02a4971c,param_1,*(void **)((long)param_1 + 0x2c0)
               ,*(ulong *)((long)param_1 + 0x2f8),param_4);
    iVar3 = -1;
    uVar2 = 7;
  }
  else {
    nn::os::CreateThread
              (pTVar1,(_func_void_void_ptr *)&LAB_02a4971c,param_1,*(void **)((long)param_1 + 0x2c0)
               ,*(ulong *)((long)param_1 + 0x2f8),param_4,iVar3);
    uVar2 = 1L << (param_3 & 0x3f);
  }
  nn::os::SetThreadCoreMask(pTVar1,iVar3,uVar2);
  nn::os::SetThreadName(pTVar1,param_2);
  nn::os::StartThread(pTVar1);
  return;
}


