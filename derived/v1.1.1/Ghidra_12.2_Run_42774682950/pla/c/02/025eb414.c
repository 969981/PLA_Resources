/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025eb414; name: FUN_025eb414
 */


void FUN_025eb414(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (iVar1 == 3) {
    FUN_025eb488(param_1,(char)param_2[3]);
    iVar1 = param_2[1];
  }
  if ((iVar1 != 3) && (*param_2 == 3)) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    *(ulong *)(param_1 + 0x260) = *(ulong *)(param_1 + 0x260) & 0xfffffffffffffff8;
  }
  return;
}


