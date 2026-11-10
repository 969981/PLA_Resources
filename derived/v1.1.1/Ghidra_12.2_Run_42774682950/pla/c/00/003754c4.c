/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003754c4; name: FUN_003754c4
 */


void FUN_003754c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00386cec(param_3,param_2,param_4);
  FUN_003755dc(param_1,param_2,0xffffffff,iVar2,param_3,param_4,param_5);
  (**(code **)(*param_5 + 0x28))(param_5,&DAT_038eee42,3);
  if (0 < iVar2) {
    iVar3 = 0;
    while( true ) {
      FUN_003741b0(param_1,param_2,param_3,param_4,iVar3,param_5);
      iVar3 = iVar3 + 1;
      if (iVar2 == iVar3) break;
      if (iVar3 != 0) {
        (**(code **)(*param_5 + 0x28))(param_5,&DAT_0398d5c8,2);
      }
    }
  }
  puVar1 = &UNK_039181c5;
  if (*(char *)(param_1 + 4) != '\0') {
    puVar1 = &DAT_038be0e9;
  }
                    /* WARNING: Could not recover jumptable at 0x003755d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x28))(param_5,puVar1,2);
  return;
}


