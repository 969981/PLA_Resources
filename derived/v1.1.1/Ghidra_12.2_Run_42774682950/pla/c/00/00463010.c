/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00463010; name: FUN_00463010
 */


undefined8 FUN_00463010(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_b0 [128];
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (((*param_1 == 0) && (param_1[2] == 0)) && (param_1[1] == 0)) {
    return 0;
  }
  iVar4 = FUN_00402590(param_2,"%*snamingAuthority: ",param_3,&DAT_03996322);
  if (iVar4 < 1) {
    return 0;
  }
  if (*param_1 != 0) {
    FUN_00407f40();
    puVar5 = (undefined1 *)FUN_00407e60();
    iVar4 = FUN_00402590(param_2,"%*s  admissionAuthorityId: ",param_3,&DAT_03996322);
    if (iVar4 < 1) {
      return 0;
    }
    FUN_004085d0(auStack_b0,0x80,*param_1,1);
    bVar3 = puVar5 == (undefined1 *)0x0;
    puVar1 = &DAT_039107e8;
    if (bVar3) {
      puVar1 = &DAT_03996322;
      puVar5 = &DAT_03996322;
    }
    puVar2 = &DAT_039a0269;
    if (bVar3) {
      puVar2 = &DAT_03996322;
    }
    iVar4 = FUN_00402590(param_2,"%s%s%s%s\n",puVar5,puVar1,auStack_b0,puVar2);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if (((param_1[2] == 0) ||
      (((iVar4 = FUN_00402590(param_2,"%*s  namingAuthorityText: ",param_3,&DAT_03996322), 0 < iVar4
        && (iVar4 = FUN_0044a730(param_2,param_1[2]), 0 < iVar4)) &&
       (iVar4 = FUN_00402590(param_2,&DAT_0396725e), 0 < iVar4)))) &&
     ((param_1[1] == 0 ||
      (((iVar4 = FUN_00402590(param_2,"%*s  namingAuthorityUrl: ",param_3,&DAT_03996322), 0 < iVar4
        && (iVar4 = FUN_0044a730(param_2,param_1[1]), 0 < iVar4)) &&
       (iVar4 = FUN_00402590(param_2,&DAT_0396725e), 0 < iVar4)))))) {
    return 1;
  }
  return 0;
}


