/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc0910; name: FUN_02bc0910
 */


undefined8
FUN_02bc0910(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = 0;
  switch(param_2) {
  case 0:
    uVar4 = 1;
    puVar5 = *(undefined8 **)*param_3;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    *(undefined1 *)(param_4 + 2) = *(undefined1 *)(puVar5 + 2);
    *param_4 = uVar1;
    param_4[1] = uVar2;
switchD_02bc093c_caseD_1:
    return uVar4;
  case 1:
    goto switchD_02bc093c_caseD_1;
  default:
    FUN_02bc0970(0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x2bc0968);
    (*pcVar3)();
  }
}


