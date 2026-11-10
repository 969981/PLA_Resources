/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2110; name: FUN_007f2110
 */


ulong FUN_007f2110(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)param_1[4];
  uVar4 = 0;
  if (puVar6 != (undefined1 *)0x0) {
    if ((int)param_1[5] == 0) {
      uVar4 = 0;
    }
    else {
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
      uVar4 = 0;
      if (CONCAT11(uVar1,uVar2) <= uVar3) {
        uVar4 = (uint)CONCAT11(uVar1,uVar2);
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 5) - uVar4;
  if ((*(uint *)(param_1 + 5) < uVar4 || uVar3 == 0) && uVar4 == 0) {
    uVar3 = 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if (uVar4 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x007f2194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x60))(param_1);
    return uVar5;
  }
  return (ulong)uVar3;
}


