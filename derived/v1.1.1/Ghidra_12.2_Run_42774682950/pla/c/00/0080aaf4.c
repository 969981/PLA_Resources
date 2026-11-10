/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080aaf4; name: FUN_0080aaf4
 */


void FUN_0080aaf4(int *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  int local_68 [4];
  int local_58 [6];
  undefined2 local_40;
  undefined4 local_38 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1240));
  if (*(long *)(param_2 + 0x1238) != 0) {
    FUN_007eb6ec(param_1,*(long *)(param_2 + 0x1238),2,2,0x11);
    if (*param_1 != 0) goto LAB_0080ac84;
    FUN_007e3400(local_58);
    local_40 = 0x3039;
    FUN_007eb968(local_68,*(undefined8 *)(param_2 + 0x1238),local_58,0xffffffff,0);
    FUN_007ee660(param_1,local_68);
    if (*param_1 != 0) {
      FUN_007e34a4(local_58);
      goto LAB_0080ac84;
    }
    FUN_007ebccc(local_68,*(undefined8 *)(param_2 + 0x1238),1);
    FUN_007ee660(param_1,local_68);
    iVar1 = *param_1;
    FUN_007e34a4(local_58);
    if (iVar1 != 0) goto LAB_0080ac84;
  }
  local_58[0] = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  puVar2 = PTR_DAT_043773c0;
  lVar3 = FUN_00854f34(*(undefined8 *)PTR_DAT_043773c0);
  FUN_007f029c(local_68,lVar3 + 8,*(undefined8 *)(param_2 + 0x1238));
  FUN_007ee660(local_58,local_68);
  if (local_58[0] == 0) {
    FUN_007f0250(local_68,lVar3 + 8);
    FUN_007ee660(local_58,local_68);
    if (local_58[0] != 0) goto LAB_0080ac78;
    lVar3 = FUN_00854f4c(*(undefined8 *)puVar2);
    FUN_007f029c(local_68,lVar3 + 8,*(undefined8 *)(param_2 + 0x1238));
    FUN_007ee660(local_58,local_68);
    if (local_58[0] != 0) goto LAB_0080ac78;
    FUN_007f0250(local_68,lVar3 + 8);
    FUN_007ee660(local_58,local_68);
    if (local_58[0] != 0) goto LAB_0080ac78;
    local_68[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_38);
    piVar4 = local_68;
  }
  else {
LAB_0080ac78:
    piVar4 = local_58;
  }
  FUN_007ee578(param_1,piVar4);
LAB_0080ac84:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1240));
  return;
}


