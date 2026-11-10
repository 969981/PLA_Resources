/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02623d30; name: FUN_02623d30
 */


bool FUN_02623d30(long param_1,undefined4 param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  uVar4 = FUN_02623ffc(param_1,param_2);
  bVar2 = (uVar4 & 1) != 0;
  if (bVar2) {
    lVar1 = param_1 + 0x68;
    FUN_026240b4(lVar1,*(undefined4 *)(param_1 + 0x78));
    uVar5 = FUN_026240f4();
    FUN_0262410c(uVar5,param_2);
    uVar3 = FUN_02624090();
    FUN_026240b4(lVar1,*(undefined4 *)(param_1 + 0x78));
    plVar6 = (long *)FUN_026240f4();
    (**(code **)(*plVar6 + 0x78))();
    FUN_026240b4(lVar1,*(undefined4 *)(param_1 + 0x78));
    plVar6 = (long *)FUN_026240f4();
    (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
    FUN_026240b4(lVar1,uVar3);
    plVar6 = (long *)FUN_026240f4();
    (**(code **)(*plVar6 + 0x40))();
    *(undefined4 *)(param_1 + 0x78) = uVar3;
  }
  return bVar2;
}


