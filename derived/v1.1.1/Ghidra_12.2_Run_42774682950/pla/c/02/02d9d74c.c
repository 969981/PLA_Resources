/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d9d74c; name: FUN_02d9d74c
 */


bool FUN_02d9d74c(long *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  ushort uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  short sVar16;
  
  puVar3 = PTR_DAT_04388528;
  if (((*PTR_DAT_04388528 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04388528), iVar9 != 0))
  {
    FUN_00100250(PTR_FUN_04388540,PTR_DAT_04388530,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04388528);
  }
  puVar5 = PTR_DAT_04388538;
  puVar4 = PTR_DAT_04388530;
  lVar12 = *(long *)PTR_DAT_04388530;
  *(long *)PTR_DAT_04388538 = lVar12;
  if (lVar12 != 0) {
    psVar10 = (short *)(**(code **)(*param_1 + 0x10))(param_1);
    if (psVar10 == (short *)0x0) {
      sVar16 = 0;
    }
    else {
      sVar16 = *psVar10;
    }
    lVar12 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar8 = 0;
    uVar13 = 0x8000;
    uVar14 = 1;
    uVar15 = 1;
    do {
      uVar15 = uVar15 | uVar13;
      uVar1 = uVar8 & uVar15 & 0xffff;
      bVar6 = uVar13 != uVar1;
      uVar13 = uVar13 >> 1;
      if (uVar14 != uVar1 && bVar6) {
        uVar15 = 0;
      }
      uVar8 = uVar15 ^ uVar8;
      uVar15 = uVar14 << 1;
      uVar14 = uVar15 & 0xfffe;
    } while (uVar14 < uVar13);
    sVar7 = FUN_02bcba34(uVar8,lVar12 + 2,0x10e);
    if (sVar16 == sVar7) {
      lVar12 = (**(code **)(*param_1 + 0x10))(param_1);
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ushort)*(byte *)(lVar12 + 2) | (*(byte *)(lVar12 + 3) & 0xf) << 8;
      }
      if (((DAT_04408d98 ^ uVar11) & 0xfff) != 0) {
        lVar12 = (**(code **)(*param_1 + 0x10))(param_1);
        if (lVar12 == 0) {
          uVar11 = 0;
          bVar2 = *puVar3;
        }
        else {
          uVar11 = (ushort)*(byte *)(lVar12 + 2) | (*(byte *)(lVar12 + 3) & 0xf) << 8;
          bVar2 = *puVar3;
        }
        if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04388528), iVar9 != 0)) {
          FUN_00100250(PTR_FUN_04388540,PTR_DAT_04388530,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04388528);
        }
        lVar12 = *(long *)puVar4;
        *(long *)puVar5 = lVar12;
        uVar11 = *(ushort *)(lVar12 + 0x50) ^ uVar11;
        if ((uVar11 & 0xf) == 0) {
          if ((uVar11 & 0xf0) == 0) {
            return (uVar11 & 0xf00) == 0;
          }
          return true;
        }
      }
    }
  }
  return false;
}


