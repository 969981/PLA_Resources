/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc0470; name: FUN_02bc0470
 */


uint * FUN_02bc0470(ulong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [12];
  
  switch(*param_2 ^ (int)*param_2 >> 0x1f) {
  case 0:
    return param_2 + 2;
  case 1:
    uVar8 = (*(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 3) * -0x5555555555555555;
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = param_1 / uVar8;
    }
    return (uint *)(*(long *)(param_2 + 2) + (param_1 - uVar7 * uVar8) * 0x18);
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_02bc0e00(param_2 + 2);
  }
  auVar9 = FUN_02bc0e10();
  lVar3 = auVar9._0_8_;
  uVar1 = *(uint *)(lVar3 + 0xa0);
  uVar7 = *(ulong *)(*(long *)(lVar3 + 0x98) + 0x138);
  uVar6 = (uint)uVar7;
  if (uVar1 < 3) {
    uVar6 = uVar6 & uVar1 - 1;
  }
  else {
    iVar2 = 0;
    if ((ulong)uVar1 != 0) {
      iVar2 = (int)(uVar7 / uVar1);
    }
    uVar6 = uVar6 - iVar2 * uVar1;
  }
  pcVar4 = (char *)FUN_02bc0470((long)(int)(uVar6 + auVar9._8_4_),lVar3 + 0x58);
  if (*pcVar4 == '\0' || *(long *)(pcVar4 + 8) == 0) {
    return (uint *)0x0;
  }
  if (*(long *)(*(long *)(pcVar4 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
                    /* WARNING: Could not recover jumptable at 0x02bc0558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (uint *)(*DAT_043f0470)();
  return puVar5;
}


