/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b9cc; name: FUN_02e9b9cc
 */


void FUN_02e9b9cc(undefined8 *param_1,long param_2,long *param_3,ushort param_4)

{
  ushort uVar1;
  long *plVar2;
  int iVar3;
  ushort uVar4;
  long *plVar5;
  
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined1 *)(param_1 + 6) = 0xff;
  *param_1 = &PTR_FUN_042a8830;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(ushort *)((long)param_1 + 0xee) = *(ushort *)((long)param_1 + 0xee) & 0xfc00;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_3;
  param_1[0x2e] = 0;
  iVar3 = DAT_042a9768 + 1;
  *(int *)((long)param_1 + 0x17c) = DAT_042a9768;
  DAT_042a9768 = iVar3;
  uVar1 = *(ushort *)(param_1 + 0x30) & 0xfc00 | (param_4 & 1) << 6 | 0x10;
  *(ushort *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)((long)param_1 + 0x184) = 0x3f7fc105;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)((long)param_3 + 0xa2) & 0xe) == 0) {
    plVar2 = (long *)param_3[0x11];
    plVar5 = param_3;
    if ((long *)param_3[0x11] == (long *)0x0) goto LAB_02e9bae0;
    do {
      do {
        plVar5 = plVar2;
        if ((*(byte *)((long)plVar5 + 0xa2) & 0xe) != 0) goto LAB_02e9bb20;
        plVar2 = (long *)plVar5[0x11];
      } while ((long *)plVar5[0x11] != (long *)0x0);
LAB_02e9bae0:
      uVar4 = 0;
      plVar2 = (long *)plVar5[0x10];
    } while ((long *)plVar5[0x10] != (long *)0x0);
  }
  else {
LAB_02e9bb20:
    uVar4 = 0x80;
  }
  *(ushort *)(param_1 + 0x30) = uVar4 | uVar1;
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  (**(code **)(*param_3 + 0x10))(param_3);
  *(undefined4 *)(param_1 + 0x22) = 0x42ca0000;
  return;
}


