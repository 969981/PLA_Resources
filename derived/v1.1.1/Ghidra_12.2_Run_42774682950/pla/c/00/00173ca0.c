/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173ca0; name: FUN_00173ca0
 */


void FUN_00173ca0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 local_38;
  
  iVar2 = FUN_00173af0();
  if (iVar2 != 0) {
    return;
  }
  if ((param_5 - 0xdU < 5) || (param_5 == 0x13)) {
    if (*(int *)(param_2 + 1) != 3) goto LAB_00173d30;
    local_38 = *param_2;
    if (*(int *)(param_3 + 1) == 3) goto LAB_00173d4c;
LAB_00173d58:
    iVar2 = FUN_001752d0(param_3,&local_38);
    if (iVar2 == 0) {
LAB_00173d68:
      FUN_00159c10(param_1,param_2,param_3,"perform bitwise operation on");
    }
  }
  else {
    if (param_5 != 0x16) goto LAB_00173d90;
    FUN_00159be0(param_1,param_2,param_3);
LAB_00173d30:
    iVar2 = FUN_001752d0(param_2,&local_38);
    if (iVar2 == 0) goto LAB_00173d68;
    if (*(int *)(param_3 + 1) != 3) goto LAB_00173d58;
LAB_00173d4c:
    local_38 = *param_3;
  }
  FUN_00159c80(param_1,param_2,param_3);
LAB_00173d90:
  FUN_00159c10(param_1,param_2,param_3,"perform arithmetic on");
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x173da8);
  (*pcVar1)();
}


