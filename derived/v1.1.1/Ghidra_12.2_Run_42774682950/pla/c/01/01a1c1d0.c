/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1c1d0; name: FUN_01a1c1d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1c1d0(long param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fStack_bc;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_DAT_04379578;
  uVar24 = *(undefined8 *)(param_1 + 0xee60);
  uVar25 = *(undefined8 *)(param_1 + 0xee68);
  local_a0 = *(undefined8 *)(param_1 + 0xee70);
  uStack_98 = *(undefined8 *)(param_1 + 0xee78);
  pcVar2 = (char *)(param_1 + 0xef20);
  local_90 = uVar24;
  uStack_88 = uVar25;
  if (*pcVar2 != '\0') {
    uVar30 = *(undefined8 *)(param_1 + 0xedf8);
    uVar27 = *(undefined8 *)(param_1 + 0xedf0);
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    uVar9 = uStack_98;
    uVar8 = local_a0;
    puVar7 = PTR_DAT_04379588;
    puVar6 = PTR_DAT_04379580;
    lVar12 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar12;
    lVar12 = *(long *)(lVar12 + 200);
    uVar20 = *(undefined8 *)(lVar12 + 0x538);
    uVar15 = *(undefined8 *)(lVar12 + 0x530);
    uVar33 = *(undefined8 *)(param_1 + 0xee08);
    uVar32 = *(undefined8 *)(param_1 + 0xee00);
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar12 = *(long *)puVar6;
    *(long *)puVar7 = lVar12;
    lVar12 = *(long *)(lVar12 + 200);
    uVar21 = *(undefined8 *)(lVar12 + 0x538);
    uVar16 = *(undefined8 *)(lVar12 + 0x530);
    FUN_018fc9a0(&local_60,param_1 + 0x2f0);
    if (local_60 == (long *)0x0) {
      fVar34 = 0.2;
    }
    else {
      fVar34 = *(float *)((long)local_60 + 0x234);
      lVar12 = local_60[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
      fVar34 = fVar34 + 0.2;
    }
    fVar26 = (float)uVar24 + (float)uVar27 + (float)uVar15;
    fVar28 = (float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar27 >> 0x20) +
             (float)((ulong)uVar15 >> 0x20);
    fVar29 = (float)uVar25 + (float)uVar30 + (float)uVar20;
    fVar31 = (float)((ulong)uVar25 >> 0x20) + (float)((ulong)uVar30 >> 0x20) +
             (float)((ulong)uVar20 >> 0x20);
    fVar13 = (float)uVar8 + (float)uVar32 + (float)uVar16;
    fStack_bc = (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar32 >> 0x20) +
                (float)((ulong)uVar16 >> 0x20);
    fVar18 = (float)uVar9 + (float)uVar33 + (float)uVar21;
    fVar22 = (float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar33 >> 0x20) +
             (float)((ulong)uVar21 >> 0x20);
    if (*pcVar2 != '\0') {
      local_80 = 0;
      uStack_78 = 0;
      fVar14 = (float)_DAT_03889740;
      fVar17 = (float)((ulong)_DAT_03889740 >> 0x20);
      local_60 = (long *)CONCAT44(fVar28 + fVar17,fVar26 + fVar14);
      fVar19 = (float)_UNK_03889748;
      fVar23 = (float)((ulong)_UNK_03889748 >> 0x20);
      uStack_58 = CONCAT44(fVar31 + fVar23,fVar29 + fVar19);
      local_70 = CONCAT44(fVar28 + -fVar34,fVar26 + 0.0);
      uStack_68 = CONCAT44(fVar31 + 0.0,fVar29 + 0.0);
      uVar11 = FUN_00ab869c(&local_60,&local_70,&local_80,0x26000);
      if ((uVar11 & 1) != 0) {
        fVar28 = fVar34 + local_80._4_4_;
      }
      if (*pcVar2 != '\0') {
        local_60 = (long *)CONCAT44(fStack_bc + fVar17,fVar13 + fVar14);
        uStack_58 = CONCAT44(fVar22 + fVar23,fVar18 + fVar19);
        local_80 = 0;
        uStack_78 = 0;
        local_70 = CONCAT44(fStack_bc + -fVar34,fVar13 + 0.0);
        uStack_68 = CONCAT44(fVar22 + 0.0,fVar18 + 0.0);
        uVar11 = FUN_00ab869c(&local_60,&local_70,&local_80,0x26000);
        if ((uVar11 & 1) != 0) {
          fStack_bc = fVar34 + local_80._4_4_;
        }
      }
    }
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar12 = *(long *)puVar6;
    *(long *)puVar7 = lVar12;
    lVar12 = *(long *)(lVar12 + 200);
    uVar25 = *(undefined8 *)(lVar12 + 0x538);
    uVar24 = *(undefined8 *)(lVar12 + 0x530);
    local_90 = CONCAT44(fVar28 - ((float)((ulong)*(undefined8 *)(param_1 + 0xedf0) >> 0x20) +
                                 (float)((ulong)uVar24 >> 0x20)),
                        fVar26 - ((float)*(undefined8 *)(param_1 + 0xedf0) + (float)uVar24));
    uStack_88 = CONCAT44(fVar31 - ((float)((ulong)*(undefined8 *)(param_1 + 0xedf8) >> 0x20) +
                                  (float)((ulong)uVar25 >> 0x20)),
                         fVar29 - ((float)*(undefined8 *)(param_1 + 0xedf8) + (float)uVar25));
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar12 = *(long *)puVar6;
    *(long *)puVar7 = lVar12;
    lVar12 = *(long *)(lVar12 + 200);
    uVar25 = *(undefined8 *)(lVar12 + 0x538);
    uVar24 = *(undefined8 *)(lVar12 + 0x530);
    local_a0 = CONCAT44(fStack_bc -
                        ((float)((ulong)*(undefined8 *)(param_1 + 0xee00) >> 0x20) +
                        (float)((ulong)uVar24 >> 0x20)),
                        fVar13 - ((float)*(undefined8 *)(param_1 + 0xee00) + (float)uVar24));
    uStack_98 = CONCAT44(fVar22 - ((float)((ulong)*(undefined8 *)(param_1 + 0xee08) >> 0x20) +
                                  (float)((ulong)uVar25 >> 0x20)),
                         fVar18 - ((float)*(undefined8 *)(param_1 + 0xee08) + (float)uVar25));
  }
  FUN_01a20444(param_1,&local_90,&local_a0);
  return;
}


