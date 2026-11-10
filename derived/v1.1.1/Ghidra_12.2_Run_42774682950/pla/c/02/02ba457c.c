/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba457c; name: FUN_02ba457c
 */


void FUN_02ba457c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = param_1[2];
  uVar1 = *(uint *)(lVar5 + 0xa0);
  uVar6 = (ulong)uVar1;
  lVar8 = *param_1;
  uVar7 = *(ulong *)(*(long *)(lVar5 + 0x98) + 0x138);
  if (uVar1 < 3) {
    uVar7 = uVar7 & uVar1 - 1;
  }
  else {
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar7 / uVar6;
    }
    uVar7 = uVar7 - uVar2 * uVar6;
  }
  pcVar3 = (char *)FUN_02bc0470((long)((uVar7 << 0x20) + -0x200000000) >> 0x20,lVar5 + 0x58);
  if (*pcVar3 != '\0' && *(long *)(pcVar3 + 8) != 0) {
    if (*(long *)(*(long *)(pcVar3 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    plVar4 = (long *)(*DAT_043f0470)();
    if (plVar4 != (long *)0x0) {
      param_1[3] = *plVar4;
      lVar5 = (*DAT_043f00e8)(lVar8 + 0x10,plVar4);
      param_1[4] = lVar5;
      param_1[5] = plVar4[2];
      lVar5 = (*DAT_043f00e8)(lVar8 + 0x10,plVar4 + 2);
      param_1[6] = lVar5;
    }
  }
  return;
}


