/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f21a8; name: FUN_007f21a8
 */


uint FUN_007f21a8(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)param_1[4];
  if ((puVar5 == (undefined1 *)0x0) || ((int)param_1[5] == 0)) {
    return 0;
  }
  uVar2 = *puVar5;
  uVar3 = puVar5[1];
  uVar4 = (**(code **)(*param_1 + 0x58))();
  uVar1 = 0;
  if (CONCAT11(uVar2,uVar3) <= uVar4) {
    uVar1 = (uint)CONCAT11(uVar2,uVar3);
  }
  return uVar1;
}


