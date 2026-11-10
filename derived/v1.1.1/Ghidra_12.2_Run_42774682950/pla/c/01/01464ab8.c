/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01464ab8; name: FUN_01464ab8
 */


void FUN_01464ab8(long param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x688) & (1L << ((ulong)*param_2 & 0x3f) ^ 0xffffffffffffffffU);
  *(ulong *)(param_1 + 0x688) = uVar4;
  if ((uVar4 & 0xf) == 0) {
    if ((*PTR_DAT_043796b8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_043796b8);
      if (iVar3 != 0) {
        FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043796b8);
      }
    }
    lVar5 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar5;
    uVar1 = *(uint *)(lVar5 + 0x4c8) & 0xffffffbf;
    if (*(uint *)(lVar5 + 0x4c8) != uVar1) {
      *(uint *)(lVar5 + 0x4c8) = uVar1;
    }
    bVar2 = *param_2;
    if (bVar2 == 0) {
      uVar4 = FUN_0195323c(1);
      if ((uVar4 & 1) != 0) {
        FUN_01464cc8(param_1);
        return;
      }
      FUN_01466348(param_1);
      if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
        lVar5 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
        if (lVar5 == 0) goto LAB_01464c5c;
        FUN_014610bc(*(undefined8 *)(lVar5 + 0x3f50));
      }
      FUN_014667f0(param_1);
      return;
    }
    if (bVar2 == 1) {
      FUN_01464eb0(param_1);
      return;
    }
    if (bVar2 == 2) {
      FUN_01464fa4(param_1);
      return;
    }
    if (bVar2 == 3) {
      FUN_014651ec(param_1);
      return;
    }
  }
  else if ((*param_2 == 0) && ((*(byte *)(param_1 + 0x6d0) & 3) == 0)) {
    lVar5 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar5 != 0) {
      FUN_014610bc(*(undefined8 *)(lVar5 + 0x3f50));
      return;
    }
LAB_01464c5c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


