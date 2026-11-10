/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143c574; name: FUN_0143c574
 */


void FUN_0143c574(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  long *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  long *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  long *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar4 = (long *)*param_1;
  *param_1 = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[4];
  param_1[1] = (long)&DAT_cbf29ce484222645;
  param_1[2] = (long)&DAT_03a7bcc2;
  param_1[3] = 1;
  param_1[4] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar5 = param_1 + 8;
  plVar4 = (long *)*plVar5;
  param_1[4] = 0;
  param_1[5] = (long)&DAT_cbf29ce484222645;
  param_1[6] = (long)&DAT_03a7bcc2;
  param_1[7] = 1;
  *plVar5 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *plVar5 = 0;
  param_1[9] = 0;
  plVar4 = (long *)param_1[0xd];
  param_1[10] = (long)&DAT_cbf29ce484222645;
  param_1[0xb] = (long)&DAT_03a7bcc2;
  param_1[0xc] = 1;
  param_1[0xd] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar5 = param_1 + 0x11;
  plVar4 = (long *)*plVar5;
  param_1[0xd] = 0;
  param_1[0xe] = (long)&DAT_cbf29ce484222645;
  param_1[0xf] = (long)&DAT_03a7bcc2;
  param_1[0x10] = 1;
  *plVar5 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *plVar5 = 0;
  param_1[0x12] = 0;
  plVar4 = (long *)param_1[0x16];
  param_1[0x13] = (long)&DAT_cbf29ce484222645;
  param_1[0x14] = (long)&DAT_03a7bcc2;
  param_1[0x15] = 1;
  param_1[0x16] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  plVar4 = (long *)param_1[0x1c];
  param_1[0x19] = (long)&DAT_cbf29ce484222645;
  param_1[0x1a] = (long)&DAT_03a7bcc2;
  param_1[0x1b] = 1;
  param_1[0x1c] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  plVar4 = (long *)param_1[0x2f];
  param_1[0x2c] = (long)&DAT_cbf29ce484222645;
  param_1[0x2d] = (long)&DAT_03a7bcc2;
  param_1[0x2e] = 1;
  param_1[0x2f] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x33];
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = (long)&DAT_cbf29ce484222645;
  param_1[0x31] = (long)&DAT_03a7bcc2;
  param_1[0x32] = 1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x37];
  param_1[0x37] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = (long)&DAT_cbf29ce484222645;
  param_1[0x35] = (long)&DAT_03a7bcc2;
  param_1[0x36] = 1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x3f];
  param_1[0x37] = 0;
  param_1[0x3c] = (long)&DAT_cbf29ce484222645;
  param_1[0x3d] = (long)&DAT_03a7bcc2;
  param_1[0x3e] = 1;
  param_1[0x3f] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x43];
  param_1[0x3f] = 0;
  param_1[0x40] = (long)&DAT_cbf29ce484222645;
  param_1[0x41] = (long)&DAT_03a7bcc2;
  param_1[0x42] = 1;
  param_1[0x43] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  plVar4 = (long *)param_1[0x48];
  param_1[0x45] = (long)&DAT_cbf29ce484222645;
  param_1[0x46] = (long)&DAT_03a7bcc2;
  param_1[0x47] = 1;
  param_1[0x48] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x4c];
  param_1[0x48] = 0;
  param_1[0x49] = (long)&DAT_cbf29ce484222645;
  param_1[0x4a] = (long)&DAT_03a7bcc2;
  param_1[0x4b] = 1;
  param_1[0x4c] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  plVar4 = (long *)param_1[0x51];
  param_1[0x4e] = (long)&DAT_cbf29ce484222645;
  param_1[0x4f] = (long)&DAT_03a7bcc2;
  param_1[0x50] = 1;
  param_1[0x51] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x55];
  param_1[0x51] = 0;
  param_1[0x52] = (long)&DAT_cbf29ce484222645;
  param_1[0x53] = (long)&DAT_03a7bcc2;
  param_1[0x54] = 1;
  param_1[0x55] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x59];
  param_1[0x55] = 0;
  param_1[0x56] = (long)&DAT_cbf29ce484222645;
  param_1[0x57] = (long)&DAT_03a7bcc2;
  param_1[0x58] = 1;
  param_1[0x59] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x65];
  param_1[0x59] = 0;
  param_1[0x62] = (long)&DAT_cbf29ce484222645;
  param_1[99] = (long)&DAT_03a7bcc2;
  param_1[100] = 1;
  param_1[0x65] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x69];
  param_1[0x65] = 0;
  param_1[0x66] = (long)&DAT_cbf29ce484222645;
  param_1[0x67] = (long)&DAT_03a7bcc2;
  param_1[0x68] = 1;
  param_1[0x69] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x6d];
  param_1[0x69] = 0;
  param_1[0x6a] = (long)&DAT_cbf29ce484222645;
  param_1[0x6b] = (long)&DAT_03a7bcc2;
  param_1[0x6c] = 1;
  param_1[0x6d] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x91];
  param_1[0x6d] = 0;
  param_1[0x8e] = (long)&DAT_cbf29ce484222645;
  param_1[0x8f] = (long)&DAT_03a7bcc2;
  param_1[0x90] = 1;
  param_1[0x91] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x71];
  param_1[0x91] = 0;
  param_1[0x6e] = (long)&DAT_cbf29ce484222645;
  param_1[0x6f] = (long)&DAT_03a7bcc2;
  param_1[0x70] = 1;
  param_1[0x71] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x75];
  param_1[0x71] = 0;
  param_1[0x72] = (long)&DAT_cbf29ce484222645;
  param_1[0x73] = (long)&DAT_03a7bcc2;
  param_1[0x74] = 1;
  param_1[0x75] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x79];
  param_1[0x75] = 0;
  param_1[0x76] = (long)&DAT_cbf29ce484222645;
  param_1[0x77] = (long)&DAT_03a7bcc2;
  param_1[0x78] = 1;
  param_1[0x79] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x7d];
  param_1[0x79] = 0;
  param_1[0x7a] = (long)&DAT_cbf29ce484222645;
  param_1[0x7b] = (long)&DAT_03a7bcc2;
  param_1[0x7c] = 1;
  param_1[0x7d] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x85];
  param_1[0x7d] = 0;
  param_1[0x82] = (long)&DAT_cbf29ce484222645;
  param_1[0x83] = (long)&DAT_03a7bcc2;
  param_1[0x84] = 1;
  param_1[0x85] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x89];
  param_1[0x85] = 0;
  param_1[0x86] = (long)&DAT_cbf29ce484222645;
  param_1[0x87] = (long)&DAT_03a7bcc2;
  param_1[0x88] = 1;
  param_1[0x89] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x8d];
  param_1[0x89] = 0;
  param_1[0x8a] = (long)&DAT_cbf29ce484222645;
  param_1[0x8b] = (long)&DAT_03a7bcc2;
  param_1[0x8c] = 1;
  param_1[0x8d] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x8d] = 0;
  local_1a0 = (undefined1 *)0x0;
  puStack_198 = &DAT_cbf29ce484222645;
  local_1b0 = (long *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_190 = (long *)&DAT_03996322;
  puStack_188 = (undefined1 *)0x0;
  local_180 = (undefined1 *)0x0;
  puStack_178 = &DAT_cbf29ce484222645;
  local_170 = (long *)&DAT_03996322;
  puStack_168 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = &DAT_cbf29ce484222645;
  local_150 = (long *)&DAT_03996322;
  puStack_148 = (undefined1 *)0x0;
  local_140 = (undefined1 *)0x0;
  puStack_138 = &DAT_cbf29ce484222645;
  local_130 = (long *)&DAT_03996322;
  puStack_128 = (undefined1 *)0x0;
  local_120 = (undefined1 *)0x0;
  puStack_118 = &DAT_cbf29ce484222645;
  local_110 = (long *)&DAT_03996322;
  puStack_108 = (undefined1 *)0x0;
  local_100 = (undefined1 *)0x0;
  puStack_f8 = &DAT_cbf29ce484222645;
  local_f0 = (long *)&DAT_03996322;
  uStack_e8 = 0;
  local_e0 = 0;
  puStack_d8 = &DAT_cbf29ce484222645;
  local_d0 = &DAT_03996322;
  uStack_c8 = 0;
  local_c0 = 0;
  puStack_b8 = &DAT_cbf29ce484222645;
  local_b0 = &DAT_03996322;
  uStack_a8 = 0;
  local_a0 = 0;
  puStack_98 = &DAT_cbf29ce484222645;
  local_90 = &DAT_03996322;
  uStack_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_60 = &DAT_cbf29ce484222645;
  puStack_58 = &DAT_03996322;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0143dbcc(param_1 + 0x92,&local_1b0);
  FUN_011cc710(&local_1b0);
  plVar4 = (long *)param_1[0xc0];
  param_1[0xc0] = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[0xc4];
  param_1[0xc0] = 0;
  param_1[0xc1] = (long)&DAT_cbf29ce484222645;
  param_1[0xc2] = (long)&DAT_03996322;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[200];
  param_1[0xc4] = 0;
  param_1[0xc5] = (long)&DAT_cbf29ce484222645;
  param_1[0xc6] = (long)&DAT_03996322;
  param_1[199] = 0;
  param_1[200] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xcc];
  param_1[200] = 0;
  param_1[0xc9] = (long)&DAT_cbf29ce484222645;
  param_1[0xca] = (long)&DAT_03996322;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xd0];
  param_1[0xcc] = 0;
  param_1[0xcd] = (long)&DAT_cbf29ce484222645;
  param_1[0xce] = (long)&DAT_03996322;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xd2];
  param_1[0xd0] = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[0xd6];
  param_1[0xd2] = 0;
  param_1[0xd3] = (long)&DAT_cbf29ce484222645;
  param_1[0xd4] = (long)&DAT_03996322;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xda];
  param_1[0xd6] = 0;
  param_1[0xd7] = (long)&DAT_cbf29ce484222645;
  param_1[0xd8] = (long)&DAT_03996322;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xde];
  param_1[0xda] = 0;
  param_1[0xdb] = (long)&DAT_cbf29ce484222645;
  param_1[0xdc] = (long)&DAT_03996322;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xe2];
  param_1[0xde] = 0;
  param_1[0xdf] = (long)&DAT_cbf29ce484222645;
  param_1[0xe0] = (long)&DAT_03996322;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xe4];
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  param_1[0xe4] = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[0xe8];
  param_1[0xe4] = 0;
  param_1[0xe5] = (long)&DAT_cbf29ce484222645;
  param_1[0xe6] = (long)&DAT_03996322;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xec];
  param_1[0xe8] = 0;
  param_1[0xe9] = (long)&DAT_cbf29ce484222645;
  param_1[0xea] = (long)&DAT_03996322;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xf0];
  param_1[0xec] = 0;
  param_1[0xed] = (long)&DAT_cbf29ce484222645;
  param_1[0xee] = (long)&DAT_03996322;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xf4];
  param_1[0xf0] = 0;
  param_1[0xf1] = (long)&DAT_cbf29ce484222645;
  param_1[0xf2] = (long)&DAT_03996322;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xf6];
  param_1[0xf4] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  param_1[0xf6] = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[0xfa];
  param_1[0xf6] = 0;
  param_1[0xf7] = (long)&DAT_cbf29ce484222645;
  param_1[0xf8] = (long)&DAT_03996322;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0xfe];
  param_1[0xfa] = 0;
  param_1[0xfb] = (long)&DAT_cbf29ce484222645;
  param_1[0xfc] = (long)&DAT_03996322;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x102];
  param_1[0xfe] = 0;
  param_1[0xff] = (long)&DAT_cbf29ce484222645;
  param_1[0x100] = (long)&DAT_03996322;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x106];
  param_1[0x102] = 0;
  param_1[0x103] = (long)&DAT_cbf29ce484222645;
  param_1[0x104] = (long)&DAT_03996322;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x106] = 0;
  *(undefined1 *)(param_1 + 0x107) = 0;
  local_f0 = (long *)0x0;
  local_1b0 = (long *)0x0;
  puStack_1a8 = &DAT_cbf29ce484222645;
  local_1a0 = &DAT_03996322;
  puStack_198 = (undefined1 *)0x0;
  local_190 = (long *)0x0;
  puStack_188 = &DAT_cbf29ce484222645;
  local_180 = &DAT_03996322;
  puStack_178 = (undefined1 *)0x0;
  local_170 = (long *)0x0;
  puStack_168 = &DAT_cbf29ce484222645;
  local_160 = &DAT_03996322;
  puStack_158 = (undefined1 *)0x0;
  local_150 = (long *)0x0;
  puStack_148 = &DAT_cbf29ce484222645;
  local_140 = &DAT_03996322;
  puStack_138 = (undefined1 *)0x0;
  local_130 = (long *)0x0;
  puStack_128 = &DAT_cbf29ce484222645;
  local_120 = &DAT_03996322;
  puStack_118 = (undefined1 *)0x0;
  local_110 = (long *)0x0;
  puStack_108 = &DAT_cbf29ce484222645;
  local_100 = &DAT_03996322;
  puStack_f8 = (undefined1 *)0x0;
  FUN_0143def0(param_1 + 0x108,&local_1b0);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_1b0 != (long *)0x0) {
    plVar4 = local_1b0 + 10;
    do {
      iVar3 = (int)*plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_1b0 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[0x121];
  param_1[0x121] = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[0x125];
  param_1[0x121] = 0;
  param_1[0x122] = (long)&DAT_cbf29ce484222645;
  param_1[0x123] = (long)&DAT_03996322;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x129];
  param_1[0x125] = 0;
  param_1[0x126] = (long)&DAT_cbf29ce484222645;
  param_1[0x127] = (long)&DAT_03996322;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x12d];
  param_1[0x129] = 0;
  param_1[0x12a] = (long)&DAT_cbf29ce484222645;
  param_1[299] = (long)&DAT_03996322;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x132];
  param_1[0x12d] = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  param_1[0x12f] = (long)&DAT_cbf29ce484222645;
  param_1[0x130] = (long)&DAT_03a7bcc2;
  param_1[0x131] = 1;
  param_1[0x132] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x136];
  param_1[0x132] = 0;
  param_1[0x133] = (long)&DAT_cbf29ce484222645;
  param_1[0x134] = (long)&DAT_03a7bcc2;
  param_1[0x135] = 1;
  param_1[0x136] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x17a];
  param_1[0x136] = 0;
  param_1[0x177] = (long)&DAT_cbf29ce484222645;
  param_1[0x178] = (long)&DAT_03a7bcc2;
  param_1[0x179] = 1;
  param_1[0x17a] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x17a] = 0;
  local_1a0 = (undefined1 *)0x0;
  puStack_198 = &DAT_cbf29ce484222645;
  local_1b0 = (long *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_190 = (long *)&DAT_03996322;
  puStack_188 = (undefined1 *)0x0;
  local_180 = (undefined1 *)0x0;
  puStack_178 = &DAT_cbf29ce484222645;
  local_170 = (long *)&DAT_03996322;
  puStack_168 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = &DAT_cbf29ce484222645;
  local_150 = (long *)&DAT_03996322;
  puStack_148 = (undefined1 *)0x0;
  local_140 = (undefined1 *)0x0;
  puStack_138 = &DAT_cbf29ce484222645;
  local_130 = (long *)&DAT_03996322;
  puStack_128 = (undefined1 *)0x0;
  local_120 = (undefined1 *)0x0;
  puStack_118 = &DAT_cbf29ce484222645;
  local_110 = (long *)&DAT_03996322;
  puStack_108 = (undefined1 *)0x0;
  local_100 = (undefined1 *)0x0;
  puStack_f8 = &DAT_cbf29ce484222645;
  local_f0 = (long *)&DAT_03996322;
  uStack_e8 = 0;
  local_e0 = 0;
  puStack_d8 = &DAT_cbf29ce484222645;
  local_d0 = &DAT_03996322;
  uStack_c8 = 0;
  local_c0 = 0;
  puStack_b8 = &DAT_cbf29ce484222645;
  local_b0 = &DAT_03996322;
  uStack_a8 = 0;
  local_a0 = 0;
  puStack_98 = &DAT_cbf29ce484222645;
  local_90 = &DAT_03996322;
  uStack_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_60 = &DAT_cbf29ce484222645;
  puStack_58 = &DAT_03996322;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0143dbcc(param_1 + 0x137,&local_1b0);
  FUN_011cc710(&local_1b0);
  plVar4 = (long *)param_1[0x165];
  param_1[0x165] = 0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 10;
    do {
      iVar3 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[0x169];
  param_1[0x165] = 0;
  param_1[0x166] = (long)&DAT_cbf29ce484222645;
  param_1[0x167] = (long)&DAT_03996322;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x16d];
  param_1[0x169] = 0;
  param_1[0x16a] = (long)&DAT_cbf29ce484222645;
  param_1[0x16b] = (long)&DAT_03996322;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x171];
  param_1[0x16d] = 0;
  param_1[0x16e] = (long)&DAT_cbf29ce484222645;
  param_1[0x16f] = (long)&DAT_03996322;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = (long *)param_1[0x175];
  param_1[0x171] = 0;
  param_1[0x172] = (long)&DAT_cbf29ce484222645;
  param_1[0x173] = (long)&DAT_03996322;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x175] = 0;
  *(undefined1 *)(param_1 + 0x176) = 0;
  param_1[0x17b] = 0;
  return;
}


