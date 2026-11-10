/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d05c; name: FUN_0028d05c
 */


void FUN_0028d05c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04373040;
  puVar1 = PTR_DAT_04373038;
  if (0 < *(int *)PTR_DAT_04373040) {
    lVar3 = 0;
    lVar4 = 0x30;
    do {
      FUN_0087cc48(*(long *)puVar1 + lVar4,param_1);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xa8;
    } while (lVar3 < *(int *)puVar2);
  }
  (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)puVar1);
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)puVar1 = 0;
  return;
}


