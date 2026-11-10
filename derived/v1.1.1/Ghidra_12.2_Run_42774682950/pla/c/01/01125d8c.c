/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01125d8c; name: FUN_01125d8c
 */


void FUN_01125d8c(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_44;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  local_44 = 0;
  uVar8 = *(undefined8 *)PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = uVar8;
  lVar9 = FUN_01147f0c(uVar8,&local_44);
  pMVar1 = (MutexType *)(lVar9 + 0xa0);
  nn::os::LockMutex(pMVar1);
  plVar10 = *(long **)(lVar9 + 0x60);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,&DAT_03a78f84);
  }
  puVar4 = *(uint **)(lVar9 + 0x10);
  uVar12 = (long)puVar4 - (long)*(uint **)(lVar9 + 8);
  if (0 < (long)uVar12) {
    puVar11 = *(uint **)(lVar9 + 8);
    puVar14 = puVar4;
    do {
      puVar13 = puVar11 + (uVar12 / 0x60) * 0xc;
      if (*puVar13 == 0x2dbe7204) goto LAB_01125e68;
      puVar3 = puVar13 + 0xc;
      if (0x2dbe7203 < *puVar13) {
        puVar3 = puVar11;
        puVar14 = puVar13;
      }
      uVar12 = (long)puVar14 - (long)puVar3;
      puVar11 = puVar3;
    } while (0 < (long)uVar12);
  }
  puVar13 = puVar4;
LAB_01125e68:
  if ((puVar13 == (uint *)0x0) || (puVar4 == puVar13)) {
    nn::os::UnlockMutex(pMVar1);
    plVar10 = *(long **)(lVar9 + 0x60);
  }
  else {
    uVar8 = *(undefined8 *)(puVar13 + 2);
    uVar15 = *(undefined8 *)(puVar13 + 8);
    local_c0 = PTR_DAT_0437e438 + 0x10;
    uStack_54 = *puVar13;
    puVar2 = PTR_DAT_0437e440 + 0x10;
    local_60 = 0;
    local_58 = 0;
    local_68 = puVar2;
    if (uStack_54 != 0) {
      uVar12 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar12 != 1) &&
          (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
          uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar12 != 2)) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar12 != 3)) {
        FUN_010d3e10(&local_68);
        for (lVar5 = uVar12 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
          (**(code **)(local_68 + 0x10))(&local_68);
        }
      }
    }
    puStack_a8 = PTR_DAT_0437e448 + 0x10;
    local_90 = 0;
    local_b0 = 0;
    local_78 = CONCAT44(uStack_54,uStack_54);
    uStack_70 = 0;
    local_b8 = PTR_DAT_0437e450 + 0x10;
    local_a0 = uVar8;
    uStack_98 = uVar15;
    local_88 = puVar2;
    uStack_80 = local_60;
    local_58 = uStack_54;
    cVar6 = FUN_010d7784(&local_c0,param_1 + 0x68,0x4b00);
    nn::os::UnlockMutex(pMVar1);
    if (cVar6 != '\0') {
      return;
    }
    plVar10 = *(long **)(lVar9 + 0x60);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x50))(plVar10,&DAT_03a78f84);
  }
  return;
}


