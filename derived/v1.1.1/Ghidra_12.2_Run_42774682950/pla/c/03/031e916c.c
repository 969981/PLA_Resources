/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e916c; name: FUN_031e916c
 */


void FUN_031e916c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *local_70;
  undefined8 local_68;
  
  iVar2 = (int)param_1[1];
  lVar6 = *param_1;
  iVar3 = iVar2;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar2) {
    lVar6 = FUN_031ef6b4(PTR_PTR_0434a080,iVar2 + 1,lVar6,iVar2);
    *param_1 = lVar6;
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  uVar12 = *param_2;
  puVar8 = (undefined8 *)(lVar6 + (long)iVar3 * 0x50);
  puVar8[1] = param_2[1];
  *puVar8 = uVar12;
  uVar15 = param_2[3];
  uVar12 = param_2[2];
  *(undefined1 *)(puVar8 + 8) = 0;
  puVar8[3] = uVar15;
  puVar8[2] = uVar12;
  uVar5 = FUN_001d4c1c(param_1 + 4,param_2,iVar2);
  *(undefined4 *)((long)puVar8 + 0x44) = uVar5;
  local_70 = (int *)0x0;
  local_68 = -0x8000000000000000;
  FUN_001d58f0(param_1 + 8,param_2,&local_70);
  puVar4 = PTR_PTR_0434a080;
  if ((int)local_68 != 0) {
    lVar6 = (long)(int)local_68 << 2;
    piVar9 = local_70;
    do {
      iVar3 = *piVar9;
      puVar8 = (undefined8 *)(param_1[2] + (long)iVar3 * 0x50);
      iVar10 = -(uint)((float)*param_2 <= (float)puVar8[2]);
      iVar13 = -(uint)((float)((ulong)*param_2 >> 0x20) <= (float)((ulong)puVar8[2] >> 0x20));
      iVar14 = -(uint)((float)param_2[1] <= (float)puVar8[3]);
      iVar16 = -(uint)((float)*puVar8 <= (float)param_2[2]);
      iVar17 = -(uint)((float)((ulong)*puVar8 >> 0x20) <= (float)((ulong)param_2[2] >> 0x20));
      iVar18 = -(uint)((float)puVar8[1] <= (float)param_2[3]);
      uVar11 = CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar10 >> 0x18),
                        CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar10 >> 0x10),
                                 CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar10 >> 8),
                                          (byte)iVar16 & (byte)iVar10)));
      if ((uVar11 & (uint)(CONCAT17((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                                    CONCAT16((byte)((uint)iVar17 >> 0x10) &
                                             (byte)((uint)iVar13 >> 0x10),
                                             CONCAT15((byte)((uint)iVar17 >> 8) &
                                                      (byte)((uint)iVar13 >> 8),
                                                      CONCAT14((byte)iVar17 & (byte)iVar13,uVar11)))
                                   ) >> 0x20) &
          CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
                   CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar14 >> 0x10),
                            CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar14 >> 8),
                                     (byte)iVar18 & (byte)iVar14)))) != 0) {
        iVar13 = (int)param_1[0xd];
        lVar7 = param_1[0xc];
        iVar10 = iVar13 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) <= iVar13) {
          lVar7 = FUN_031ef8e8(puVar4,iVar10,lVar7,iVar13,(long)param_1 + 0x6c);
          iVar13 = (int)param_1[0xd];
          param_1[0xc] = lVar7;
        }
        piVar1 = (int *)(lVar7 + (long)iVar13 * 8);
        *(int *)(param_1 + 0xd) = iVar10;
        *piVar1 = iVar2;
        piVar1[1] = iVar3;
        FUN_031ed2e8(*param_3,iVar2,iVar3);
      }
      piVar9 = piVar9 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  lVar6 = local_68;
  uVar11 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_70 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_70,uVar11 << 2);
  }
  return;
}


