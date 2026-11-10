/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1ee90; name: FUN_01a1ee90
 */


void FUN_01a1ee90(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float extraout_s0;
  undefined8 uVar9;
  float fVar10;
  float extraout_var;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = FUN_00fa1ccc();
  puVar2 = PTR_DAT_04379578;
  uVar11 = *(undefined8 *)(lVar6 + 0xd8);
  uVar9 = *(undefined8 *)(lVar6 + 0xd0);
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar4 = PTR_DAT_04379588;
  puVar3 = PTR_DAT_04379580;
  lVar6 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar6;
  lVar6 = *(long *)(lVar6 + 200);
  fVar8 = (float)*(undefined8 *)(param_1 + 0xee70) + (float)*(undefined8 *)(lVar6 + 0x530);
  fVar10 = (float)*(undefined8 *)(param_1 + 0xee78) + (float)*(undefined8 *)(lVar6 + 0x538);
  FUN_01a168cc(param_1,0);
  fVar12 = extraout_s0 - fVar8;
  fVar13 = extraout_var - fVar10;
  fVar8 = fVar8 - (float)uVar9;
  fVar10 = fVar10 - (float)uVar11;
  fVar8 = (float)FUN_00aacd40(fVar10 * fVar12 - fVar8 * fVar13,fVar8 * fVar12 + fVar10 * fVar13);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar7 = (ulong)(fVar8 * (fVar10 / *(float *)PTR_FloatDegree180_04372ce0));
  pcVar1 = (char *)(param_1 + 0xefb1);
  if (*(float *)(PTR_SinCosSampleTable_04372ce8 + (uVar7 >> 0x18 & 0xff) * 0x10) +
      *(float *)((long)(PTR_SinCosSampleTable_04372ce8 + (uVar7 >> 0x18 & 0xff) * 0x10) + 8) *
      (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08 <= 0.0) {
    if (*pcVar1 != '\0') {
      *pcVar1 = '\0';
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      lVar6 = *(long *)puVar3;
      *(long *)puVar4 = lVar6;
      *(undefined1 *)(*(long *)(lVar6 + 200) + 0x56c) = 1;
    }
  }
  else if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar6 = *(long *)puVar3;
    *(long *)puVar4 = lVar6;
    *(undefined1 *)(*(long *)(lVar6 + 200) + 0x56c) = 1;
  }
  return;
}


