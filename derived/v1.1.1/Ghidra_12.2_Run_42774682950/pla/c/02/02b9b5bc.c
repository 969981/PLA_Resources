/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9b5bc; name: FUN_02b9b5bc
 */


void FUN_02b9b5bc(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auStack_90 [96];
  
  (*DAT_043f0778)(auStack_90);
  (*DAT_043f0770)(auStack_90,param_2[2]);
  uVar1 = 5;
  if (param_3[2] != 1) {
    uVar1 = 3;
  }
  uVar2 = 4;
  if (param_3[2] != 1) {
    uVar2 = 2;
  }
  if (*param_3 != 1) {
    uVar1 = uVar2;
  }
  (*DAT_043f0780)(auStack_90,uVar1,param_3[1] == 1);
  (*DAT_043f0788)(auStack_90,param_3[9],param_3[10],param_3[0xb]);
  (*DAT_043f0790)(param_3[5],param_3[6],auStack_90);
  (*DAT_043f0798)(param_3[7],auStack_90);
  (*DAT_043f07a0)(auStack_90,(char)param_3[0x11],param_3[0x10]);
  (*DAT_043f07a8)(auStack_90,param_3 + 0xc);
  fVar3 = (float)param_3[4];
  if (fVar3 <= 0.0) {
    fVar3 = 1.0;
  }
  (*DAT_043f07c0)(fVar3,auStack_90);
  (*DAT_043f07c8)(auStack_90,param_3[3]);
  (*DAT_043f07d0)(param_3[8],auStack_90);
  FUN_02b9b730(param_1,*param_2);
  FUN_02b9b86c(*param_1,*param_2,auStack_90,param_3);
  return;
}


