/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029180dc; name: FUN_029180dc
 */


undefined8
FUN_029180dc(long param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x70));
  plVar3 = (long *)FUN_02917fa0(param_1,param_2);
  if (plVar3 != (long *)0x0) {
    iVar1 = 0;
    if (0 < *(int *)((long)plVar3 + 0xc)) {
      iVar1 = *(int *)((long)plVar3 + 0xc) + -1;
    }
    *(int *)((long)plVar3 + 0xc) = iVar1;
    local_48 = param_5;
    if (*param_4 != 0) {
      FUN_02917208(plVar3 + 10,param_4,&local_48);
    }
    if (iVar1 == 0) {
      if ((param_3 & 1) == 0) {
        FUN_029177d0(plVar3,1);
        puVar2 = PTR_DAT_04379c88;
        if (*plVar3 != 0) {
          puVar2 = (undefined *)(*plVar3 + 0x58);
        }
        FUN_02918d0c(param_1 + 8,puVar2);
        uVar4 = 1;
      }
      else {
        uVar4 = 1;
        *(undefined1 *)((long)plVar3 + 0x11) = 1;
      }
      goto LAB_0291815c;
    }
  }
  uVar4 = 0;
LAB_0291815c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x70));
  return uVar4;
}


