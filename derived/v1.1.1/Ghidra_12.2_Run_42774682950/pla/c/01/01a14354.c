/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a14354; name: FUN_01a14354
 */


void FUN_01a14354(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*param_1 != '\0') {
    FUN_01a141d0(param_1 + 0x10,param_2);
    return;
  }
  uVar5 = param_2[2];
  uVar1 = param_2[3];
  uVar6 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = param_2[4];
  uVar5 = param_2[5];
  uVar1 = param_2[6];
  uVar6 = param_2[8];
  *(undefined8 *)(param_1 + 0x48) = param_2[7];
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar6 = param_2[9];
  uVar5 = param_2[10];
  uVar1 = param_2[0xb];
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  pcVar3 = param_1 + 0x78;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  FUN_00b63974(pcVar3,param_2 + 0xd);
  pcVar3 = param_1 + 0x88;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  FUN_00cfa028(pcVar3,param_2 + 0xf);
  *(undefined8 *)(param_1 + 0x98) = param_2[0x11];
  *(undefined8 *)(param_1 + 0xa0) = param_2[0x12];
  *(undefined8 *)(param_1 + 0xa8) = param_2[0x13];
  plVar4 = (long *)param_2[0x14];
  *(long **)(param_1 + 0xb0) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  uVar5 = param_2[0x1d];
  uVar2 = *(undefined4 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0xe8) = param_2[0x1b];
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = param_2[0x19];
  *(undefined8 *)(param_1 + 200) = param_2[0x17];
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  *(undefined8 *)(param_1 + 0xc0) = param_2[0x16];
  uVar5 = param_2[0x18];
  *(undefined8 *)(param_1 + 0xe0) = param_2[0x1a];
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  uVar5 = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  param_1[0x10c] = '\0';
  param_1[0x10d] = '\0';
  param_1[0x10e] = '\0';
  param_1[0x10f] = '\0';
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  FUN_00b63974(param_1 + 0x108,param_2 + 0x1f);
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = '\0';
  param_1[0x123] = '\0';
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  FUN_00cfa028(param_1 + 0x118,param_2 + 0x21);
  *(undefined8 *)(param_1 + 0x128) = param_2[0x23];
  *(undefined8 *)(param_1 + 0x130) = param_2[0x24];
  *(undefined8 *)(param_1 + 0x138) = param_2[0x25];
  plVar4 = (long *)param_2[0x26];
  *(long **)(param_1 + 0x140) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *param_1 = '\x01';
  return;
}


