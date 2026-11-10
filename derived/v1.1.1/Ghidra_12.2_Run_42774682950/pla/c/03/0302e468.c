/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302e468; name: FUN_0302e468
 */


void FUN_0302e468(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 local_68;
  
  local_68 = -0x8000000000000000;
  lVar16 = *(long *)(param_1 + 0x4c8);
  lVar18 = *(long *)(param_1 + 0x4d0);
  uVar3 = *(uint *)(lVar18 + 4);
  lVar14 = 0;
  lVar15 = 0;
  if (lVar16 == lVar18 && uVar3 == 0) {
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar4 = 0;
    lVar9 = 0;
    lVar17 = 0;
    uVar7 = 0;
    uVar11 = 0;
    do {
      uVar12 = *(uint *)(lVar16 + ((long)((ulong)uVar11 << 0x20) >> 0x1e) + 0x10);
      if (*(uint *)(*(long *)(param_1 + 0x38) + ((ulong)uVar12 & 0xffffff) * 0xc0 + 0x50) == uVar12)
      {
        pbVar19 = (byte *)(*(long *)(param_1 + 0x38) + ((ulong)uVar12 & 0xffffff) * 0xc0 + 0x88);
        if ((*pbVar19 & 7) == 3) {
          uVar8 = local_68._4_4_;
          uVar1 = uVar7 + 1;
          if ((int)(local_68._4_4_ & 0x3fffffff) <= (int)uVar7) {
            if (0x3ffffffe < (int)uVar7) {
              FUN_032bd0a8(uVar1,lVar6);
            }
            uVar8 = (uVar8 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar8) {
              uVar8 = 0x3fffffff;
            }
            uVar2 = uVar1;
            if ((int)uVar1 <= (int)uVar8) {
              uVar2 = uVar8;
            }
            lVar4 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar17,uVar7,(long)&local_68 + 4);
            lVar6 = lVar4;
            lVar9 = lVar4;
            lVar14 = lVar4;
            lVar15 = lVar4;
            uVar7 = (uint)local_68;
          }
          *(uint *)(lVar9 + (long)(int)uVar7 * 4) = uVar12;
          local_68 = CONCAT44(local_68._4_4_,uVar1);
          bVar10 = *pbVar19 ^ 6;
          lVar17 = lVar4;
          uVar7 = uVar1;
        }
        else {
          bVar10 = *pbVar19 & 0xfd;
        }
        *pbVar19 = bVar10;
      }
      uVar12 = uVar11 + 1;
      if ((0xfe < (int)uVar11) || (*(int *)(lVar16 + 4) <= (int)uVar12)) {
        if (*(long *)(lVar16 + 8) != 0) {
          uVar12 = 0;
          lVar16 = *(long *)(lVar16 + 8);
        }
      }
      uVar11 = uVar12;
    } while ((lVar16 != lVar18) || (uVar3 != uVar12));
  }
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x30))(*(long **)(param_1 + 0x4c0),lVar6,uVar7,1);
  lVar16 = *(long *)(*(long *)(param_1 + 0x4c8) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x4c8) + 8) = 0;
  lVar18 = *(long *)(param_1 + 0x4c8);
  iVar13 = *(int *)(lVar18 + 4);
  if (0 < iVar13) {
    if (0xff < iVar13) {
      iVar13 = 0x100;
    }
    lVar6 = 0;
    do {
      lVar17 = lVar6 * 4;
      lVar6 = lVar6 + 1;
      *(undefined4 *)(lVar18 + lVar17 + 0x10) = 0xffffff;
      lVar18 = *(long *)(param_1 + 0x4c8);
    } while (lVar6 < iVar13);
  }
  *(undefined4 *)(lVar18 + 4) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_1 + 0x4c8);
  if (lVar16 != 0) {
    lVar18 = tpidr_el0;
    do {
      lVar17 = *(long *)(lVar16 + 8);
      lVar6 = *(long *)(lVar18 + 0x38d490);
      if (lVar6 == 0) {
        lVar6 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar6;
      }
      plVar5 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar16,0x410);
      lVar16 = lVar17;
    } while (lVar17 != 0);
  }
  lVar16 = local_68;
  uVar3 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar16) && (lVar15 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar14,uVar3 << 2);
  }
  return;
}


