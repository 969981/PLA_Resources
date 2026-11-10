/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f29a8; name: FUN_007f29a8
 */


ulong FUN_007f29a8(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 3);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if (uVar2 < uVar5) {
    lVar1 = param_1[3];
    iVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar5 = (int)lVar1 - iVar3;
  }
  else {
    uVar5 = 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (uVar2 < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x007f2a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    return uVar4;
  }
  return (ulong)uVar5;
}


