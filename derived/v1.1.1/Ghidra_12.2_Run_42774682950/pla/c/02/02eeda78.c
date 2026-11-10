/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeda78; name: FUN_02eeda78
 */


long * FUN_02eeda78(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  short *psVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  plVar8 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
  uVar2 = *(uint *)(plVar8 + 1);
  uVar10 = *(uint *)((long)plVar8 + 0xc);
  if (uVar10 <= uVar2) {
    iVar1 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar1 = 1;
    }
    uVar10 = iVar1 + uVar10;
    lVar6 = (*DAT_0442d148)(0,*plVar8,(ulong)uVar10 * 0x28);
    if (lVar6 == 0) {
      return (long *)0x0;
    }
    *plVar8 = lVar6;
    *(uint *)((long)plVar8 + 0xc) = uVar10;
  }
  if (uVar10 <= uVar2) {
    return (long *)0x0;
  }
  uVar11 = (ulong)*(uint *)(plVar8 + 1);
  lVar6 = *plVar8;
  *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) + 1;
  plVar8 = (long *)(lVar6 + uVar11 * 0x28);
  if (plVar8 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar12 = lVar6 + uVar11 * 0x28;
  *(undefined2 *)(plVar8 + 2) = 0;
  *plVar8 = 0;
  plVar8[1] = 0;
  pbVar13 = (byte *)(lVar12 + 0x12);
  *pbVar13 = *pbVar13 & 0xfc;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  if (param_1 == (long *)0x0) {
    *plVar8 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    plVar7 = (long *)*plVar8;
    *plVar8 = (long)param_1;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  sVar5 = *(short *)((long)param_1 + 0x10c);
  bVar3 = *pbVar13;
  *pbVar13 = bVar3 & 0xfe | sVar5 != 1;
  sVar4 = *(short *)((long)param_1 + 0x10c);
  *pbVar13 = bVar3 & 0xfc | sVar5 != 1 | (sVar4 == 0) << 1;
  psVar9 = (short *)(lVar6 + uVar11 * 0x28 + 0x10);
  *psVar9 = 1;
  if (sVar4 == 0) {
    return plVar8;
  }
  if (sVar5 == 1) {
    return plVar8;
  }
  sVar4 = *(short *)((long)param_1 + 0x10c);
  sVar5 = FUN_02eedecc((long)param_1 + 0x10e);
  sVar5 = sVar5 + sVar4;
  if (sVar5 < 2) {
    sVar5 = 1;
  }
  *psVar9 = sVar5;
  return plVar8;
}


