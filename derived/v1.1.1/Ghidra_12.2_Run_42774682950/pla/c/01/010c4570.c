/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c4570; name: FUN_010c4570
 */


int FUN_010c4570(float param_1,ushort *param_2,long *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar3 = PTR_DAT_0437b228;
  if (((*PTR_DAT_0437b228 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b228);
  }
  puVar5 = PTR_DAT_0437b238;
  puVar4 = PTR_DAT_0437b230;
  *(undefined8 *)PTR_DAT_0437b238 = *(undefined8 *)PTR_DAT_0437b230;
  iVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (iVar6 == 0x1c) {
    lVar13 = 0;
    bVar1 = *puVar3;
    goto joined_r0x010c48c4;
  }
  if (iVar6 < 0x2a) {
    if (iVar6 == 0x20) {
      lVar13 = 1;
      bVar1 = *puVar3;
      goto joined_r0x010c48c4;
    }
  }
  else if (iVar6 != 0x2a) {
    if (iVar6 == 0x36) {
      lVar13 = 3;
      bVar1 = *puVar3;
      goto joined_r0x010c48c4;
    }
    if (iVar6 == 100) {
      lVar13 = 4;
      bVar1 = *puVar3;
      goto joined_r0x010c48c4;
    }
  }
  lVar13 = 2;
  bVar1 = *puVar3;
joined_r0x010c48c4:
  if (((bVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar6 != 0)) {
    FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b228);
  }
  lVar12 = *(long *)puVar4;
  *(long *)puVar5 = lVar12;
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  lVar10 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar10;
  uVar9 = *(byte *)(lVar10 + 0x50) - 1;
  if (uVar9 < 10) {
    lVar10 = *(long *)(&DAT_03a78c38 + (long)(char)uVar9 * 8);
  }
  else {
    lVar10 = 1;
  }
  plVar14 = (long *)(*(long *)(lVar12 + lVar10 * 0x28 + lVar13 * 8 + 0xd8) + 0x68);
  iVar6 = (**(code **)(*plVar14 + 0x20))(plVar14);
  uVar9 = (uint)*param_2;
  if (*param_2 == 0) {
    fVar17 = 0.0;
    iVar11 = 0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = 0.0;
    fVar17 = 0.0;
    iVar11 = 0;
    do {
      while (uVar9 == 0x1b) {
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_0437b240,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar3);
        }
        lVar12 = *(long *)puVar4;
        *(long *)puVar5 = lVar12;
        if (((*PTR_DAT_0437b180 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437b180);
        }
        lVar10 = *(long *)PTR_DAT_0437b188;
        *(long *)PTR_DAT_0437b190 = lVar10;
        uVar9 = *(byte *)(lVar10 + 0x50) - 1;
        if (uVar9 < 10) {
          lVar10 = *(long *)(&DAT_03a78c38 + (long)(char)uVar9 * 8);
        }
        else {
          lVar10 = 1;
        }
        lVar12 = lVar12 + lVar10 * 0x28;
LAB_010c472c:
        plVar14 = (long *)(*(long *)(lVar12 + lVar13 * 8 + 0xd8) + 0x68);
        uVar2 = param_2[1];
joined_r0x010c4850:
        uVar9 = (uint)uVar2;
        param_2 = param_2 + 1;
        if (uVar2 == 0) goto LAB_010c47a8;
      }
      if (uVar9 - 0x11 < 10) {
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_0437b240,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar3);
        }
        lVar12 = *(long *)puVar4;
        *(long *)puVar5 = lVar12;
        if (*param_2 - 0x13 < 8) {
          lVar10 = *(long *)(&DAT_03a78c88 + (long)(short)(*param_2 - 0x13) * 8);
        }
        else {
          lVar10 = 0;
        }
        lVar12 = lVar12 + lVar10 * 0x28;
        goto LAB_010c472c;
      }
      if (uVar9 == 10) {
        iVar11 = iVar11 + 1;
        fVar15 = fVar17;
        if (fVar17 <= fVar16) {
          fVar15 = fVar16;
        }
        fVar17 = 0.0;
        uVar2 = param_2[1];
        fVar16 = fVar15;
        goto joined_r0x010c4850;
      }
      if (uVar9 != 0x10) {
        iVar7 = (**(code **)(*plVar14 + 0x80))(plVar14);
        fVar15 = 0.0;
        if ((param_2[1] | 0x10) != 0x10) {
          iVar8 = (**(code **)(*plVar14 + 0xb0))(plVar14,*param_2);
          fVar15 = (param_1 / (float)iVar6) * (float)iVar8;
        }
        fVar17 = fVar17 + (param_1 / (float)iVar6) * (float)iVar7 + fVar15;
        uVar2 = param_2[1];
        goto joined_r0x010c4850;
      }
      fVar15 = fVar17;
      if (fVar17 <= fVar16) {
        fVar15 = fVar16;
      }
      if (param_2[2] >> 1 == 0x5f00) {
        fVar17 = 0.0;
        iVar11 = iVar11 + 1;
        fVar16 = fVar15;
      }
      param_2 = param_2 + (ulong)param_2[1] + 2;
      uVar9 = (uint)*param_2;
    } while (*param_2 != 0);
  }
LAB_010c47a8:
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar11 + 1;
  }
  return (int)fVar17;
}


