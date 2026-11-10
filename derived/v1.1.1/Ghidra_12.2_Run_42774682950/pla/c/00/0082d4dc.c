/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082d4dc; name: FUN_0082d4dc
 */


undefined8 FUN_0082d4dc(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  int local_30 [4];
  
  uVar1 = FUN_0082ce64();
  puVar3 = PTR_DAT_04377550;
  if ((uVar1 & 1) != 0) {
    FUN_0082abe0(local_30,*(undefined8 *)PTR_DAT_04377550);
    if (local_30[0] == 0) {
      pcVar2 = "CreateSessionJob::CreateMesh";
      puVar3 = PTR_LAB_04377de0;
    }
    else {
      FUN_0082a238(*(undefined8 *)puVar3);
      FUN_007ee660(param_1 + 0x94,local_30);
      pcVar2 = "CreateSessionJob::DestroyNetwork";
      puVar3 = PTR_FUN_04377dd0;
    }
    *(undefined **)(param_1 + 0x30) = puVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar2;
  }
  return 0;
}


