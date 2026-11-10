/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00168710; name: FUN_00168710
 */


void FUN_00168710(long *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  FUN_00168360();
  uVar2 = param_2[2];
  if ((*param_2 == 7 && (uVar2 & 0x100) == 0) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar2)) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  param_2[2] = (uint)*(byte *)((long)param_1 + 0x3c);
  *param_2 = 7;
  bVar4 = *(byte *)((long)param_1 + 0x3c);
  uVar1 = bVar4 + 2;
  if (*(byte *)(*param_1 + 0xc) < uVar1) {
    if (0xfe < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)uVar1;
    bVar4 = *(byte *)((long)param_1 + 0x3c);
  }
  *(byte *)((long)param_1 + 0x3c) = bVar4 + 2;
  iVar3 = param_2[2];
  iVar5 = FUN_001684a0(param_1,param_3);
  FUN_001674a0(param_1,uVar2 << 0x17 | iVar3 << 6 | iVar5 << 0xe | 0xc);
  if (((*param_3 == 7) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[2])) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  return;
}


