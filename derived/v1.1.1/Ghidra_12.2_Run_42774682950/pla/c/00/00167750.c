/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167750; name: FUN_00167750
 */


void FUN_00167750(long *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((long)param_1 + 0x3c);
  iVar1 = (uint)bVar2 + param_2;
  if ((int)(uint)*(byte *)(*param_1 + 0xc) < iVar1) {
    if (0xfe < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)iVar1;
    bVar2 = *(byte *)((long)param_1 + 0x3c);
  }
  *(byte *)((long)param_1 + 0x3c) = bVar2 + (char)param_2;
  return;
}


