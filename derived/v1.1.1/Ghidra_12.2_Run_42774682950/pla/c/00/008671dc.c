/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008671dc; name: FUN_008671dc
 */


void FUN_008671dc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  void *pvVar9;
  void *__dest;
  ulong uVar10;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long *plStack_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) == 0) goto LAB_0086741c;
  uVar6 = FUN_00675dec(param_2);
  if ((uVar6 & 1) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FUN_00866fbc(param_1,param_2);
      lVar8 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
      *(undefined1 *)(lVar8 + 0x24b) = 1;
    }
    goto LAB_0086741c;
  }
  iVar3 = FUN_00675e10(param_2);
  if (iVar3 == 0) goto LAB_0086741c;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  iVar3 = FUN_00675e10(param_2);
  uVar4 = FUN_00675e08(param_2);
  uVar5 = FUN_00675e18(param_2);
  puVar7 = (ulong *)FUN_00675de4(param_2);
  plStack_58 = (long *)FUN_00612290();
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  if ((*puVar7 & 1) == 0) {
    local_70 = *puVar7;
    local_68 = puVar7[1];
    local_60 = (void *)puVar7[2];
    if (iVar3 != *(int *)(param_1 + 0x3c)) goto LAB_0086735c;
LAB_00867294:
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    FUN_00867448(param_1,uVar5);
  }
  else {
    uVar6 = puVar7[1];
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar9 = (void *)puVar7[2];
    if (uVar6 < 0x17) {
      local_70 = (ulong)(byte)((int)uVar6 << 1);
      __dest = (void *)((ulong)&local_70 | 1);
      if (uVar6 != 0) goto LAB_0086733c;
    }
    else {
      uVar10 = uVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plStack_58 + 0x10))(plStack_58,uVar10,1);
      local_70 = uVar10 | 1;
      local_68 = uVar6;
      local_60 = __dest;
LAB_0086733c:
      memcpy(__dest,pvVar9,uVar6);
    }
    *(undefined1 *)((long)__dest + uVar6) = 0;
    if (iVar3 == *(int *)(param_1 + 0x3c)) goto LAB_00867294;
LAB_0086735c:
    puVar2 = PTR_DAT_043780f8;
    if (*(char *)(param_1 + 0x48) == '\0') {
      lVar8 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
      iVar1 = *(int *)(lVar8 + 0x13c8);
      lVar8 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
      if ((iVar1 + 1U <= *(uint *)(lVar8 + 0x13cc)) &&
         (lVar8 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2),
         *(int *)(lVar8 + 0x13c8) + 1U <= (uint)*(ushort *)(*(long *)PTR_DAT_04377550 + 8))) {
        pvVar9 = (void *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pvVar9 = local_60;
        }
        FUN_00866d90(lVar8,uVar5,iVar3,uVar4,0,0,pvVar9);
        lVar8 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
        *(undefined1 *)(lVar8 + 0x24b) = 1;
      }
    }
  }
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
LAB_0086741c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


