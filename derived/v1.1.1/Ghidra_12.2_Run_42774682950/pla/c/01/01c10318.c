/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c10318; name: FUN_01c10318
 */


undefined8 * FUN_01c10318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar8 = (long *)param_2[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar5 = (long *)param_1[3];
  param_1[3] = plVar8;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  uVar7 = param_2[7];
  uVar4 = *(undefined1 *)(param_2 + 8);
  param_1[5] = param_2[5];
  param_1[7] = uVar7;
  param_1[4] = param_2[4];
  uVar7 = param_2[6];
  *(undefined1 *)(param_1 + 8) = uVar4;
  pcVar6 = (code *)param_1[0xb];
  param_1[6] = uVar7;
  if (pcVar6 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar6)(param_1 + 0xe);
  }
  if ((code *)param_2[0xc] != (code *)0x0) {
    (*(code *)param_2[0xc])(param_2 + 0xe,param_1 + 0xe);
    uVar7 = param_2[10];
    uVar1 = param_2[0xb];
    uVar2 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    param_1[10] = uVar7;
    param_1[0xb] = uVar1;
  }
  pcVar6 = (code *)param_1[0x1b];
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)param_2[0x1c];
  }
  else {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (*pcVar6)(param_1 + 0x1e);
    pcVar6 = (code *)param_2[0x1c];
  }
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(param_2 + 0x1e,param_1 + 0x1e);
    uVar7 = param_2[0x1a];
    uVar1 = param_2[0x1b];
    uVar2 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar2;
    param_1[0x1a] = uVar7;
    param_1[0x1b] = uVar1;
  }
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (*(char *)(param_2 + 0x2a) != '\0') {
      *(undefined8 *)((long)param_1 + 0x154) = *(undefined8 *)((long)param_2 + 0x154);
      *(undefined1 *)(param_1 + 0x2a) = 1;
    }
  }
  else if (*(char *)(param_2 + 0x2a) == '\0') {
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_2 + 0x154);
    *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
    *(undefined4 *)((long)param_1 + 0x154) = uVar3;
  }
  FUN_01c104b0(param_1 + 0x2c,param_2 + 0x2c);
  FUN_01c10a8c(param_1 + 0x7c,param_2 + 0x7c);
  return param_1;
}


