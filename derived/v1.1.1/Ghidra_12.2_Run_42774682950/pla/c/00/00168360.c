/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00168360; name: FUN_00168360
 */


int FUN_00168360(long *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  
  FUN_00167ad0();
  if (*param_2 == 7) {
    if (param_2[4] == param_2[5]) {
      return param_2[2];
    }
    if ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2]) {
      FUN_00167ca0(param_1,param_2);
      goto LAB_00168428;
    }
  }
  FUN_00167ad0(param_1,param_2);
  if (((*param_2 == 7) && (((uint)param_2[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  bVar2 = bVar1 + 1;
  if (*(byte *)(*param_1 + 0xc) <= bVar1) {
    if (0xfd < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"function or expression needs too many registers");
    }
    *(byte *)(*param_1 + 0xc) = bVar2;
    bVar2 = *(char *)((long)param_1 + 0x3c) + 1;
  }
  *(byte *)((long)param_1 + 0x3c) = bVar2;
  FUN_00167ca0(param_1,param_2,bVar2 - 1);
LAB_00168428:
  return param_2[2];
}


