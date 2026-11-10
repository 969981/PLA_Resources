/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7d40; name: FUN_007f7d40
 */


undefined8 FUN_007f7d40(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar2 = *(int *)(param_2 + 0x44);
  iVar4 = (**(code **)(*param_1 + 0xe8))();
  if (((iVar2 != iVar4) ||
      (uVar3 = *(uint *)(param_2 + 0x48), uVar5 = (**(code **)(*param_1 + 0xf0))(param_1),
      uVar5 < uVar3)) ||
     (uVar6 = (**(code **)(*param_1 + 0x350))(param_1,param_2), (uVar6 & 1) == 0)) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x3f));
  plVar1 = param_1 + 0x17;
  uVar6 = FUN_007f0ee4(plVar1);
  if ((uVar6 & 1) == 0) {
LAB_007f7ddc:
    uVar6 = FUN_007f0ee4(plVar1);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_007f0ee4(param_1 + 0x13);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_007f0f48(param_1 + 0x13,plVar1), (uVar6 & 1) == 0))
      goto LAB_007f7e28;
    }
  }
  else {
    uVar6 = FUN_007f0ee4(param_1 + 0x13);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_007f0f48(param_1 + 0x13,plVar1), (uVar6 & 1) == 0))
    goto LAB_007f7ddc;
LAB_007f7e28:
    lVar7 = param_1[0x43];
    if ((*(long *)(lVar7 + 8) != *(long *)(param_2 + 0x28)) ||
       (((*(long *)(lVar7 + 0x10) != *(long *)(param_2 + 0x38) ||
         (*(short *)(lVar7 + 0x1a) != *(short *)(param_2 + 0x32))) ||
        (*(char *)(lVar7 + 0x1f) != *(char *)(param_2 + 0x41))))) {
      uVar8 = 0;
      goto LAB_007f7e70;
    }
  }
  uVar8 = 1;
LAB_007f7e70:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f));
  return uVar8;
}


