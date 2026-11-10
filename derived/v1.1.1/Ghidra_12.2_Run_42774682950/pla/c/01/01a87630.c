/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a87630; name: FUN_01a87630
 */


bool FUN_01a87630(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x1a0))();
  if (((uVar2 & 1) == 0) || (uVar2 = (**(code **)(*param_1 + 0x1a8))(param_1), (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)((long)param_1 + 0x914) == 0;
  }
  return bVar1;
}


