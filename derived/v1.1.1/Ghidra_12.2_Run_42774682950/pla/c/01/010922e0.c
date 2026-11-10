/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010922e0; name: FUN_010922e0
 */


int FUN_010922e0(undefined4 param_1,ulong *param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  ulong uVar13;
  
  if ((*PTR_DAT_0437a708 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_0437a708);
    if (iVar4 != 0) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
  }
  uVar5 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar5;
  piVar6 = (int *)FUN_010aab54(uVar5,param_1);
  puVar12 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar2 = *puVar12;
  if (uVar2 < 7) {
    uVar13 = *param_2;
    bVar3 = (uVar13 & 1) == 0;
    iVar11 = 0;
    iVar7 = 0;
    iVar4 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    goto LAB_010923bc;
  }
  iVar7 = 0;
  if ((ulong)puVar12[3] != 0) {
    iVar7 = *(int *)((long)piVar6 + (ulong)puVar12[3]);
  }
  if (uVar2 < 9) {
    iVar10 = 0;
    iVar9 = 0;
    iVar8 = 0;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    iVar4 = 0;
    if ((ulong)puVar12[4] != 0) {
      iVar4 = *(int *)((long)piVar6 + (ulong)puVar12[4]);
    }
    if (uVar2 < 0xb) {
      iVar10 = 0;
      iVar9 = 0;
      iVar8 = 0;
      iVar11 = 0;
    }
    else {
      iVar8 = 0;
      if ((ulong)puVar12[5] != 0) {
        iVar8 = *(int *)((long)piVar6 + (ulong)puVar12[5]);
      }
      if (uVar2 < 0xd) {
        iVar10 = 0;
        iVar9 = 0;
        iVar11 = 0;
      }
      else {
        iVar9 = 0;
        if ((ulong)puVar12[6] != 0) {
          iVar9 = *(int *)((long)piVar6 + (ulong)puVar12[6]);
        }
        if (uVar2 < 0xf) {
          iVar10 = 0;
        }
        else {
          iVar10 = 0;
          if ((ulong)puVar12[7] != 0) {
            iVar10 = *(int *)((long)piVar6 + (ulong)puVar12[7]);
          }
          if (0x10 < uVar2) {
            iVar11 = 0;
            if ((ulong)puVar12[8] != 0) {
              iVar11 = *(int *)((long)piVar6 + (ulong)puVar12[8]);
            }
            goto LAB_010923a4;
          }
        }
        iVar11 = 0;
      }
    }
  }
LAB_010923a4:
  uVar13 = *param_2;
  bVar3 = (uVar13 & 1) == 0;
  if (1 < iVar7) {
    iVar7 = 2;
  }
LAB_010923bc:
  iVar1 = 2;
  if (!bVar3) {
    iVar1 = iVar7;
  }
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  if ((uVar13 & 2) != 0) {
    iVar1 = iVar4;
  }
  if (iVar1 <= iVar8) {
    iVar8 = iVar1;
  }
  if ((uVar13 & 4) != 0) {
    iVar1 = iVar8;
  }
  if (iVar1 <= iVar9) {
    iVar9 = iVar1;
  }
  if ((uVar13 & 8) != 0) {
    iVar1 = iVar9;
  }
  if (iVar1 <= iVar10) {
    iVar10 = iVar1;
  }
  if ((uVar13 & 0x10) != 0) {
    iVar1 = iVar10;
  }
  if (iVar1 <= iVar11) {
    iVar11 = iVar1;
  }
  if ((uVar13 & 0x20) != 0) {
    iVar1 = iVar11;
  }
  return iVar1;
}


