/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bea98; name: FUN_014bea98
 */


void FUN_014bea98(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  piVar3 = *(int **)(param_1 + 0x5b0);
  iVar1 = *piVar3;
  if (iVar1 == 1) {
    FUN_014c11c0(&local_48,local_28,piVar3 + 4,piVar3 + 7);
    lVar2 = local_48;
    local_48 = 0;
    lVar4 = *(long *)(param_1 + 0x5c8);
    *(long *)(param_1 + 0x5c8) = lVar2;
    lVar2 = 0;
    if (lVar4 != 0) {
      FUN_014c7b3c(param_1 + 0x5d0,lVar4);
      lVar2 = local_48;
    }
    *(undefined8 *)(param_1 + 0x5d0) = local_40;
    *(undefined8 *)(param_1 + 0x5d8) = uStack_38;
    *(undefined8 *)(param_1 + 0x5e0) = local_30;
    local_48 = 0;
    if (lVar2 != 0) {
      FUN_014c89d8(&local_40);
    }
  }
  else if (iVar1 == 2) {
    FUN_014c1330(&local_48,local_28,&local_28,piVar3 + 7);
    lVar2 = local_48;
    local_48 = 0;
    lVar4 = *(long *)(param_1 + 0x5c8);
    *(long *)(param_1 + 0x5c8) = lVar2;
    lVar2 = 0;
    if (lVar4 != 0) {
      FUN_014c7b3c(param_1 + 0x5d0,lVar4);
      lVar2 = local_48;
    }
    *(undefined8 *)(param_1 + 0x5d0) = local_40;
    *(undefined8 *)(param_1 + 0x5d8) = uStack_38;
    *(undefined8 *)(param_1 + 0x5e0) = local_30;
    local_48 = 0;
    if (lVar2 != 0) {
      FUN_014c8c40(&local_40);
    }
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_014c10b0(&local_48,local_28,piVar3 + 2);
    lVar2 = local_48;
    local_48 = 0;
    lVar4 = *(long *)(param_1 + 0x5c8);
    *(long *)(param_1 + 0x5c8) = lVar2;
    lVar2 = 0;
    if (lVar4 != 0) {
      FUN_014c7b3c(param_1 + 0x5d0,lVar4);
      lVar2 = local_48;
    }
    *(undefined8 *)(param_1 + 0x5d0) = local_40;
    *(undefined8 *)(param_1 + 0x5d8) = uStack_38;
    *(undefined8 *)(param_1 + 0x5e0) = local_30;
    local_48 = 0;
    if (lVar2 != 0) {
      FUN_014c8770(&local_40);
    }
  }
  return;
}


