/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00169330; name: FUN_00169330
 */


void FUN_00169330(long *param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_2 < 0xc) {
    if ((param_3[4] == param_3[5]) && (*param_3 - 5U < 2)) {
      return;
    }
  }
  else {
    if (param_2 == 0xc) {
      FUN_00167ad0(param_1,param_3);
      if (((*param_3 == 7) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
         ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[2])) {
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
      FUN_00167ca0(param_1,param_3,bVar2 - 1);
      return;
    }
    if (param_2 == 0x14) {
      FUN_00168c20(param_1,param_3);
      return;
    }
    if (param_2 == 0x13) {
      FUN_00168820(param_1,param_3);
      return;
    }
  }
  FUN_001684a0(param_1,param_3);
  return;
}


