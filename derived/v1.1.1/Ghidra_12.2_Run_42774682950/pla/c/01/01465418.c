/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01465418; name: FUN_01465418
 */


void FUN_01465418(long param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  uVar5 = *(ulong *)(param_1 + 0x688);
  *(ulong *)(param_1 + 0x688) = 1L << ((ulong)*param_2 & 0x3f) | uVar5;
  if ((uVar5 & 0xf) == 0) {
    *(ulong *)(param_1 + 0x6d0) = *(ulong *)(param_1 + 0x6d0) & 0xfffffffffffffffc;
    FUN_02835864();
    if (((*PTR_DAT_043796b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
    lVar7 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar7;
    uVar3 = *(uint *)(lVar7 + 0x4c8) | 0x40;
    if (*(uint *)(lVar7 + 0x4c8) != uVar3) {
      *(uint *)(lVar7 + 0x4c8) = uVar3;
      iVar4 = *(int *)(lVar7 + 0x438);
      if (0 < iVar4) {
        lVar8 = 0;
        uVar5 = 0;
        do {
          lVar1 = *(long *)(lVar7 + 0x488) + lVar8;
          lVar6 = *(long *)(lVar1 + 0x48);
          if (((lVar6 != 0) && (*(char *)(lVar6 + 0x1e1) != '\0')) &&
             ((*(byte *)(lVar1 + 8) >> 6 & 1) != 0)) {
            FUN_00da3780(lVar7 + 0x3c0,uVar5 & 0xffffffff);
            FUN_00da3780(lVar7 + 0x3c0,(int)uVar5 + *(int *)(lVar7 + 0x438));
            iVar4 = *(int *)(lVar7 + 0x438);
          }
          uVar5 = uVar5 + 1;
          lVar8 = lVar8 + 0x70;
        } while ((long)uVar5 < (long)iVar4);
      }
    }
    bVar2 = *param_2;
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        FUN_014669ec(param_1);
        return;
      }
      if (bVar2 == 2) {
        FUN_01465a80(param_1);
        return;
      }
      if (bVar2 == 3) {
        FUN_01465ed0(param_1);
        return;
      }
      return;
    }
    uVar5 = FUN_0195323c(1);
    if ((uVar5 & 1) != 0) {
      FUN_01465780(param_1);
      return;
    }
    FUN_014669ec(param_1);
  }
  else if (*param_2 != 0) {
    return;
  }
  lVar7 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar7 = *(long *)(lVar7 + 0x3f50);
  if (*(char *)(lVar7 + 0x40) != '\0') {
    *(undefined1 *)(lVar7 + 0x40) = 0;
    local_60 = DAT_042116c8;
    puStack_58 = PTR_s_anime_L_ns_time_00_wake_042116d0;
    local_50 = DAT_042116d8;
    local_48 = (long *)0x0;
    FUN_0146119c(lVar7,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = DAT_042116b0;
    puStack_58 = PTR_s_anime_L_ns_time_00_close_042116b8;
    local_50 = DAT_042116c0;
    local_48 = (long *)0x0;
    lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x148);
    if (lVar7 != 0) {
      FUN_0283b1e8(lVar7,&local_60);
    }
  }
  return;
}


