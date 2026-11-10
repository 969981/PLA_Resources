/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e717c0; name: FUN_02e717c0
 */


void FUN_02e717c0(_func_void_void_ptr *param_1,void *param_2,int *param_3,ThreadType *param_4,
                 char *param_5)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar2 = (void *)aligned_alloc(0x1000,*(undefined8 *)(param_3 + 2));
  *(void **)(param_4 + 0x1c0) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    uVar3 = *(ulong *)(param_3 + 2);
    *(int *)(param_4 + 0x1d0) = (int)uVar3;
    iVar1 = nn::os::CreateThread(param_4,param_1,param_2,pvVar2,uVar3 & 0xffffffff,*param_3);
    if (iVar1 == 0) {
      if (param_5 != (char *)0x0) {
        nn::os::SetThreadName(param_4,param_5);
      }
      nn::os::SetThreadCoreMask(param_4,param_3[4],*(ulong *)(param_3 + 6));
      nn::os::StartThread(param_4);
      return;
    }
    if (*(long *)(param_4 + 0x1c8) != 0) {
      free(*(void **)(param_4 + 0x1c0));
    }
    *(undefined8 *)(param_4 + 0x1c0) = 0;
  }
  return;
}


