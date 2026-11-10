/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159c10; name: FUN_00159c10
 */


void FUN_00159c10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 local_38;
  
  if (*(int *)(param_2 + 1) == 3) {
    local_38 = *param_2;
    FUN_00159980(param_1,param_3,param_4);
  }
  iVar2 = FUN_001752d0(param_2,&local_38);
  if (iVar2 != 0) {
    param_2 = param_3;
  }
  FUN_00159980(param_1,param_2,param_4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x159c7c);
  (*pcVar1)();
}


