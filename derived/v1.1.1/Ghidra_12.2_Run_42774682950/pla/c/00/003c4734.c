/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c4734; name: FUN_003c4734
 */


undefined1  [16] FUN_003c4734(long param_1,ulong *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  void *__src;
  void *__dest;
  ulong uVar7;
  undefined1 auVar8 [16];
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  undefined4 local_48;
  
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if ((*param_2 & 1) == 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (void *)param_2[2];
  }
  else {
    uVar3 = param_2[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = (void *)param_2[2];
    if (uVar3 < 0x17) {
      local_60 = (ulong)(byte)((int)uVar3 << 1);
      __dest = (void *)((ulong)&local_60 | 1);
      if (uVar3 != 0) goto LAB_003c47cc;
    }
    else {
      uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
      local_60 = uVar7 | 1;
      uStack_58 = uVar3;
      local_50 = __dest;
LAB_003c47cc:
      memcpy(__dest,__src,uVar3);
    }
    *(undefined1 *)((long)__dest + uVar3) = 0;
  }
  local_70 = 0;
  local_68 = 0;
  plVar4 = (long *)(param_1 + 0x38);
  plVar6 = (long *)*plVar4;
  local_48 = param_3;
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar4;
    do {
      uVar3 = FUN_003c4ec4(plVar6 + 4,&local_60);
      lVar1 = 8;
      if ((uVar3 & 1) == 0) {
        lVar1 = 0;
        plVar5 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar1);
    } while (plVar6 != (long *)0x0);
    if (plVar5 != plVar4) {
      uVar3 = FUN_003c4ec4(&local_60,plVar5 + 4);
      plVar4 = &local_70;
      if ((uVar3 & 1) == 0) {
        plVar4 = plVar5 + 8;
      }
      lVar1 = *plVar4;
      lVar2 = plVar4[1];
      goto joined_r0x003c485c;
    }
  }
  lVar2 = CONCAT44(uStack_64,local_68);
  lVar1 = local_70;
joined_r0x003c485c:
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  auVar8._8_8_ = lVar2;
  auVar8._0_8_ = lVar1;
  return auVar8;
}


