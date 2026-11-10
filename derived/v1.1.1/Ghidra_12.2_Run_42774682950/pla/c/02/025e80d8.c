/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e80d8; name: FUN_025e80d8
 */


void FUN_025e80d8(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  lVar7 = *(long *)(param_1 + 0x1f8);
  iVar6 = 0;
  if (lVar7 != 0) {
    fVar10 = *(float *)(lVar7 + 0x6c) - *(float *)(lVar7 + 0x68);
    if (*(float *)(param_1 + 0x20c) <= fVar10) {
      fVar9 = (float)FUN_025e974c();
      if (fVar9 + -1.0 <= fVar10) {
        fVar9 = (float)FUN_025e974c();
        iVar6 = 2;
        if (fVar9 <= fVar10) {
          iVar6 = 3;
        }
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x218);
  if (iVar1 != iVar6) {
    if (*(long *)(param_1 + 0x228) != 0) {
      lVar7 = *(long *)(param_1 + 0x1f8);
      if (lVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(uint)(1.0 - *(float *)(lVar7 + 0x68) / *(float *)(lVar7 + 0x6c));
      }
      bVar2 = *(byte *)(param_1 + 0x279);
      if (((*PTR_DAT_04379578 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379578), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      uVar5 = *(undefined8 *)PTR_DAT_04379580;
      *(undefined8 *)PTR_DAT_04379588 = uVar5;
      uVar3 = FUN_00956f14(uVar5,0,0);
      FUN_025e9260(*(undefined8 *)(param_1 + 0x228),CONCAT44(iVar6,iVar1),
                   (ulong)bVar2 << 0x28 | uVar8 | (ulong)(uVar3 & 1) << 0x20);
    }
    *(int *)(param_1 + 0x218) = iVar6;
  }
  return;
}


