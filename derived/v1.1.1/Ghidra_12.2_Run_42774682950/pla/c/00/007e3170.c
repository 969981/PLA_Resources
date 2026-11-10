/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3170; name: FUN_007e3170
 */


undefined8 FUN_007e3170(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_043773e8;
  puVar1 = PTR_DAT_043773e0;
  if (*PTR_DAT_043773e0 != '\0') {
    return 0;
  }
  *(undefined8 *)PTR_DAT_043773e8 = param_1;
  *(ulong *)(puVar2 + 8) = param_2 & 0xffffffff;
  FUN_0081e948(puVar2);
  if (*(int *)PTR_DAT_043773f0 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(PTR_DAT_043773f0 + 8);
  }
  FUN_00824f00(uVar3);
  thunk_FUN_00825008(*(undefined8 *)PTR_DAT_043773f8,uVar3);
  puVar2 = PTR_DAT_04377400;
  *puVar1 = 1;
  *(undefined4 *)puVar2 = 0x13;
  return 1;
}


