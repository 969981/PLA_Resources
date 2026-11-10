/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03145458; name: FUN_03145458
 */


int FUN_03145458(long param_1,long *param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong local_58;
  ulong uStack_50;
  uint local_48;
  undefined4 uStack_44;
  
  plVar1 = (long *)(param_1 + 0x20);
  local_48 = 0;
  uStack_50 = param_4;
  local_58 = param_3;
  if (param_4 <= param_3) {
    uStack_50 = param_3;
    local_58 = param_4;
  }
  piVar4 = (int *)FUN_0314505c(plVar1,&local_58,&local_48);
  if (*piVar4 == 0) {
    return 0;
  }
  iVar3 = *piVar4 + -1;
  if (iVar3 != 0) {
    iVar2 = FUN_03144d7c(plVar1,PTR_PTR_0434a080,&local_58,&local_48);
    puVar6 = (ulong *)(*plVar1 + (long)iVar2 * 0x18);
    *puVar6 = local_58;
    puVar6[1] = uStack_50;
    *(int *)(*plVar1 + (long)iVar2 * 0x18 + 0x10) = iVar3;
    return iVar3;
  }
  FUN_03145250(plVar1,&local_58);
  if (param_2 == (long *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*param_2 + 0x100))(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = (**(code **)(*param_2 + 0x100))(param_2,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  lVar9 = param_2[0x10];
  if ((long)param_3 < 0) {
    param_3 = param_3 & 0xffffffff;
  }
  else {
    uVar5 = FUN_032c0fa4(param_2 + 0x129,param_3,&local_48);
    param_3 = (ulong)local_48;
    if ((uVar5 & 1) == 0) {
      param_3 = 0xffffff;
    }
  }
  if ((long)param_4 < 0) {
    param_4 = param_4 & 0xffffffff;
  }
  else {
    uVar5 = FUN_032c0fa4(param_2 + 0x129,param_4,&local_48);
    param_4 = (ulong)local_48;
    if ((uVar5 & 1) == 0) {
      param_4 = 0xffffff;
    }
  }
  puVar7 = (undefined8 *)(lVar9 + (param_3 & 0xffffff) * 0x18);
  puVar8 = (undefined8 *)(lVar9 + (param_4 & 0xffffff) * 0x18);
  iVar12 = -(uint)((float)puVar7[2] <= (float)*puVar8);
  iVar13 = -(uint)((float)((ulong)puVar7[2] >> 0x20) <= (float)((ulong)*puVar8 >> 0x20));
  iVar14 = -(uint)((float)((ulong)puVar7[1] >> 0x20) <= (float)puVar8[1]);
  iVar3 = -(uint)((float)puVar8[2] <= (float)*puVar7);
  iVar2 = -(uint)((float)((ulong)puVar8[2] >> 0x20) <= (float)((ulong)*puVar7 >> 0x20));
  iVar11 = -(uint)((float)((ulong)puVar8[1] >> 0x20) <= (float)puVar7[1]);
  uVar10 = CONCAT13((byte)((uint)iVar3 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                    CONCAT12((byte)((uint)iVar3 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                             CONCAT11((byte)((uint)iVar3 >> 8) & (byte)((uint)iVar12 >> 8),
                                      (byte)iVar3 & (byte)iVar12)));
  if ((uVar10 & (uint)(CONCAT17((byte)((uint)iVar2 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                                CONCAT16((byte)((uint)iVar2 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                                         CONCAT15((byte)((uint)iVar2 >> 8) &
                                                  (byte)((uint)iVar13 >> 8),
                                                  CONCAT14((byte)iVar2 & (byte)iVar13,uVar10)))) >>
                      0x20) &
      CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
               CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar14 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar14 >> 8),
                                 (byte)iVar11 & (byte)iVar14)))) != 0) {
    local_48 = (uint)param_4;
    uStack_44 = (undefined4)param_3;
    FUN_030e82d4(param_2,&local_48,1,param_5);
  }
  return 0;
}


