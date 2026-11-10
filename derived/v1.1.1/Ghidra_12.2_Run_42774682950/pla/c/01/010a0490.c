/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a0490; name: FUN_010a0490
 */


float FUN_010a0490(float param_1,int *param_2,ulong param_3,ulong param_4,ulong param_5,uint param_6
                  ,uint param_7)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (((param_6 & 1) == 0) && ((param_7 & 1) == 0)) {
    if (param_1 <= -1.0) {
      param_1 = -1.0;
    }
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    puVar8 = (ushort *)((long)param_2 - (long)*param_2);
    if (*puVar8 < 7) {
      fVar11 = 1.1;
      fVar10 = 0.9;
    }
    else {
      if ((ulong)puVar8[3] == 0) {
        fVar10 = 0.9;
      }
      else {
        fVar10 = *(float *)((long)param_2 + (ulong)puVar8[3]);
      }
      if ((*puVar8 < 9) || ((ulong)puVar8[4] == 0)) {
        fVar11 = 1.1;
      }
      else {
        fVar11 = *(float *)((long)param_2 + (ulong)puVar8[4]);
      }
    }
    fVar9 = (float)(**(code **)PTR_PTR_0437a4c8)(param_1 * 0.5 + 0.5);
    return fVar10 + (fVar11 - fVar10) * fVar9;
  }
  uVar5 = param_3;
  uVar6 = param_4;
  uVar7 = param_5;
  if ((*PTR_DAT_0437a708 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437a708);
    uVar5 = param_3 & 0xffffffff;
    uVar6 = param_4 & 0xffffffff;
    uVar7 = param_5 & 0xffffffff;
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000,uVar7);
      __cxa_guard_release(PTR_DAT_0437a708);
      uVar5 = param_3 & 0xffffffff;
      uVar6 = param_4 & 0xffffffff;
      uVar7 = param_5 & 0xffffffff;
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar3;
  piVar4 = (int *)FUN_010aa4a0(uVar3,uVar5,uVar6,uVar7);
  if ((param_7 & 1) == 0) {
    if ((param_6 & 1) == 0) {
      return 1.0;
    }
    if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) {
      return 0.0;
    }
    uVar1 = ((ushort *)((long)piVar4 - (long)*piVar4))[6];
  }
  else {
    if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) {
      return 0.0;
    }
    uVar1 = ((ushort *)((long)piVar4 - (long)*piVar4))[5];
  }
  fVar11 = 0.0;
  if ((ulong)uVar1 != 0) {
    fVar11 = *(float *)((long)piVar4 + (ulong)uVar1);
  }
  return fVar11;
}


