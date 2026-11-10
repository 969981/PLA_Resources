/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bffbc; name: FUN_032bffbc
 */


void FUN_032bffbc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ushort uVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar5 = *(uint *)((long)param_2 + 0x1c);
  iVar1 = uVar5 + *(int *)(*param_2 + 8) + *(int *)((long)param_1 + 0xc);
  if (iVar1 == 0) goto LAB_032bfff8;
  puVar3 = (uint *)*param_1;
  puVar6 = (uint *)param_2[2];
  if (puVar3 == puVar6) {
    uVar4 = *(ushort *)((long)param_1 + 10);
  }
  else {
    uVar4 = *(ushort *)((long)param_1 + 10);
    if ((uint)uVar4 == (*puVar3 & 0xffff)) {
      puVar3 = *(uint **)(puVar3 + 2);
      *(undefined4 *)(param_1 + 1) = 0;
      uVar4 = 0;
      puVar6 = (uint *)param_2[2];
      uVar2 = 0;
      if (puVar3 == (uint *)param_2[2]) goto LAB_032c0038;
    }
    else {
      uVar2 = uVar4;
      if (puVar3 == puVar6) {
LAB_032c0038:
        puVar3 = puVar6;
        uVar5 = *(uint *)((long)param_2 + 0x1c);
        goto LAB_032bffec;
      }
    }
    uVar4 = uVar2;
    uVar5 = *puVar3;
  }
LAB_032bffec:
  *(ushort *)((long)param_1 + 10) = (short)uVar5 - uVar4;
  *param_1 = puVar3;
LAB_032bfff8:
  *(int *)((long)param_1 + 0xc) = iVar1;
  return;
}


