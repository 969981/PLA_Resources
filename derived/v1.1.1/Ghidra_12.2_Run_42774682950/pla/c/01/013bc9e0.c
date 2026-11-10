/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bc9e0; name: FUN_013bc9e0
 */


void FUN_013bc9e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(short *)(param_1 + 1) = (short)*(undefined4 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 0xc);
  uVar3 = *(undefined1 *)((long)param_2 + 0xe);
  *(undefined1 *)((long)param_1 + 0xd) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = uVar3;
  switch(uVar3) {
  case 0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  case 1:
    FUN_013bc870(param_1 + 2,param_2 + 2);
    return;
  case 2:
    uVar1 = param_2[2];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = uVar4;
    param_1[2] = uVar1;
    return;
  case 3:
    uVar1 = param_2[2];
    uVar4 = param_2[3];
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    param_1[2] = uVar1;
    param_1[3] = uVar4;
    uVar1 = param_2[6];
    uVar4 = param_2[7];
    uVar2 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar2;
    param_1[6] = uVar1;
    param_1[7] = uVar4;
    uVar1 = param_2[10];
    uVar4 = param_2[0xb];
    uVar2 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    param_1[10] = uVar1;
    param_1[0xb] = uVar4;
    return;
  case 4:
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  return;
}


