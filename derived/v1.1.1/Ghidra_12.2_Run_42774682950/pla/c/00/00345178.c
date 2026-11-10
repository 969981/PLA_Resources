/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00345178; name: FUN_00345178
 */


void FUN_00345178(long param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar5 == (int *)0x0) {
    iVar6 = *(int *)(param_1 + 0x24);
LAB_003451d4:
    FUN_0032bcac((long *)(param_1 + 0x18),iVar6 + 1);
    piVar5 = *(int **)(param_1 + 0x28);
    iVar6 = *piVar5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar6 = *piVar5;
    if (iVar3 < iVar6) {
      *(int *)(param_1 + 0x20) = iVar3 + 1;
      pbVar4 = *(byte **)(piVar5 + (long)iVar3 * 2 + 2);
      goto joined_r0x00345258;
    }
    if (iVar6 == *(int *)(param_1 + 0x24)) goto LAB_003451d4;
  }
  *piVar5 = iVar6 + 1;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
    pbVar4 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
    }
  }
  else {
    if (*(long *)(lVar7 + 0x70) != 0) {
      FUN_0032cf88(lVar7,0,0x18);
    }
    pbVar4 = (byte *)FUN_0032c850(lVar7,0x18,PTR_LAB_043730d0);
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4[0x10] = 0;
    pbVar4[0x11] = 0;
    pbVar4[0x12] = 0;
    pbVar4[0x13] = 0;
    pbVar4[0x14] = 0;
    pbVar4[0x15] = 0;
    pbVar4[0x16] = 0;
    pbVar4[0x17] = 0;
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
  }
  iVar6 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar6 + 1;
  *(byte **)(*(long *)(param_1 + 0x28) + (long)iVar6 * 8 + 8) = pbVar4;
joined_r0x00345258:
  if (pbVar4 != param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    FUN_00291910(pbVar4,pbVar2,uVar1);
  }
  return;
}


