/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031acf34; name: FUN_031acf34
 */


bool FUN_031acf34(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar3;
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtlineOfSight";
      uVar10 = nn::os::GetSystemTick();
      puVar1[1] = uVar10;
    }
  }
  if ((*(int *)(param_2 + 4) == -1) || (*(int *)(param_2 + 0x10) == -1)) {
    bVar2 = false;
  }
  else {
    uVar10 = param_2[0xe];
    fVar6 = (float)uVar10 - (float)*param_2;
    fVar7 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
    fVar8 = (float)param_2[0xf] - (float)param_2[1];
    fVar9 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
    fVar11 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
    uVar10 = CONCAT44(fVar11,fVar9);
    uVar15 = NEON_frsqrte(uVar10,4);
    fVar14 = (float)uVar15;
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    uVar15 = NEON_frsqrts(uVar10,CONCAT44(fVar16 * fVar16,fVar14 * fVar14),4);
    fVar14 = fVar14 * (float)uVar15;
    fVar16 = fVar16 * (float)((ulong)uVar15 >> 0x20);
    iVar12 = -(uint)(fVar9 <= 0.0);
    iVar13 = -(uint)(fVar11 <= 0.0);
    uVar10 = NEON_frsqrts(uVar10,CONCAT44(fVar16 * fVar16,fVar14 * fVar14),4);
    fVar14 = (float)uVar10 * fVar14;
    fVar16 = (float)((ulong)uVar10 >> 0x20) * fVar16;
    fVar9 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                            CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                     CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar12 >> 8)
                                              ,SUB41(fVar14,0) & ~(byte)iVar12)));
    fVar14 = (float)(CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                              CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                       CONCAT15((byte)((uint)fVar16 >> 8) &
                                                ~(byte)((uint)iVar13 >> 8),
                                                CONCAT14(SUB41(fVar16,0) & ~(byte)iVar13,fVar9))))
                    >> 0x20);
    local_50 = CONCAT44(fVar7 * fVar14,fVar6 * fVar9);
    uStack_48 = CONCAT44(((float)((ulong)param_2[0xf] >> 0x20) - (float)((ulong)param_2[1] >> 0x20))
                         * fVar14,fVar8 * fVar9);
    iVar12 = FUN_031ad0c8(&local_50,param_2 + 0xe,*(int *)(param_2 + 0x10),param_1,param_2,param_3);
    bVar2 = iVar12 == 9;
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar10 = nn::os::GetSystemTick();
      puVar1[1] = uVar10;
    }
  }
  return bVar2;
}


