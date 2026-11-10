/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00103910; name: FUN_00103910
 */


int FUN_00103910(uint param_1,long param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (uint)(param_1 == 0xffffffff || 0xd < (int)param_1);
  uVar1 = 6;
  if (uVar3 == 0) {
    uVar1 = param_1;
  }
  uVar2 = 0x3b00 >> (ulong)(uVar1 & 0x1f);
  if (((uVar2 & 1) != 0) || ((0xfffff7cbU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
switchD_0010398c_caseD_2:
    iVar6 = 0xa8;
    goto joined_r0x00103a68;
  }
  switch(uVar1) {
  case 0:
    iVar6 = FUN_0010b7b0(0x2c9,10);
    break;
  case 1:
    iVar4 = FUN_0010b7b0(0x244,10);
    iVar5 = FUN_0010b7b0(0xa0,10);
    iVar6 = FUN_0010b7b0(0x80,10);
    iVar6 = iVar4 + iVar5 + iVar6;
    break;
  default:
    goto switchD_0010398c_caseD_2;
  case 6:
    iVar6 = FUN_00147f80();
    goto joined_r0x00103a68;
  case 7:
    iVar6 = FUN_00117f50();
joined_r0x00103a68:
    iVar6 = iVar6 + 0xa8;
joined_r0x00103a68:
    if (param_3 == (int *)0x0) goto LAB_001039b4;
    goto LAB_001039b0;
  case 10:
    iVar6 = FUN_0013e2d0();
    iVar6 = iVar6 + 0xa8;
    goto joined_r0x00103a68;
  }
  iVar6 = iVar6 + 0xa8;
  if (param_3 != (int *)0x0) {
LAB_001039b0:
    *param_3 = iVar6;
  }
LAB_001039b4:
  if ((uVar3 | uVar2 & 1) == 1) {
    iVar4 = (int)param_2;
    if (0x1ffff < param_2) {
      iVar4 = 0x20000;
    }
    iVar5 = 0x20000;
    if (0 < param_2) {
      iVar5 = iVar4;
    }
    iVar4 = 0;
    if ((uVar1 | 2) != 0xb) {
      iVar4 = iVar5;
    }
    iVar6 = iVar6 + iVar4 + iVar5 * 2 + 0xd020;
  }
  return iVar6;
}


