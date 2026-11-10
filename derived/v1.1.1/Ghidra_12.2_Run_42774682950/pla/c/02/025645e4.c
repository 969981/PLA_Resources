/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025645e4; name: FUN_025645e4
 */


long * FUN_025645e4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)*param_1;
  *param_1 = (long)plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  plVar6 = (long *)param_2[4];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)param_1[4];
  param_1[4] = (long)plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[6] = param_2[6];
  pcVar4 = (code *)param_1[9];
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)param_2[10];
  }
  else {
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    (*pcVar4)(param_1 + 0xc);
    pcVar4 = (code *)param_2[10];
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_2 + 0xc,param_1 + 0xc);
    lVar5 = param_2[8];
    lVar1 = param_2[9];
    lVar2 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar2;
    param_1[8] = lVar5;
    param_1[9] = lVar1;
  }
  pcVar4 = (code *)param_1[0x19];
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)param_2[0x1a];
  }
  else {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar4)(param_1 + 0x1c);
    pcVar4 = (code *)param_2[0x1a];
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_2 + 0x1c,param_1 + 0x1c);
    lVar5 = param_2[0x18];
    lVar1 = param_2[0x19];
    lVar2 = param_2[0x1b];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = lVar2;
    param_1[0x18] = lVar5;
    param_1[0x19] = lVar1;
  }
  param_1[0x28] = param_2[0x28];
  pcVar4 = (code *)param_1[0x2b];
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)param_2[0x2c];
  }
  else {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (*pcVar4)(param_1 + 0x2e);
    pcVar4 = (code *)param_2[0x2c];
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_2 + 0x2e,param_1 + 0x2e);
    lVar5 = param_2[0x2a];
    lVar1 = param_2[0x2b];
    lVar2 = param_2[0x2d];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = lVar2;
    param_1[0x2a] = lVar5;
    param_1[0x2b] = lVar1;
  }
  pcVar4 = (code *)param_1[0x3b];
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)param_2[0x3c];
  }
  else {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar4)(param_1 + 0x3e);
    pcVar4 = (code *)param_2[0x3c];
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_2 + 0x3e,param_1 + 0x3e);
    lVar5 = param_2[0x3a];
    lVar1 = param_2[0x3b];
    lVar2 = param_2[0x3d];
    param_1[0x3c] = param_2[0x3c];
    param_1[0x3d] = lVar2;
    param_1[0x3a] = lVar5;
    param_1[0x3b] = lVar1;
  }
  lVar5 = param_2[0x4d];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4d] = lVar5;
  lVar5 = param_2[0x4a];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4a] = lVar5;
  plVar6 = (long *)param_2[0x4e];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)param_1[0x4e];
  param_1[0x4e] = (long)plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0x4f] = param_2[0x4f];
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  plVar6 = (long *)param_2[0x52];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)param_1[0x52];
  param_1[0x52] = (long)plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x53) = *(undefined4 *)(param_2 + 0x53);
  return param_1;
}


