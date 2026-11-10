/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1e670; name: FUN_00b1e670
 */


uint FUN_00b1e670(char param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ushort *puVar11;
  long lVar12;
  undefined1 *puVar13;
  uint uVar14;
  long local_40 [2];
  long *local_28;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e656d0(local_40);
  if (local_40[0] != 0) {
    FUN_00b1e8cc(&local_28);
    if (local_40[0] != 0) {
      FUN_02a43934();
    }
    if (local_28 != (long *)0x0) {
      if (param_1 == '\0') {
        piVar7 = (int *)FUN_00b1e13c(local_28);
      }
      else {
        piVar7 = (int *)FUN_00b1e15c();
      }
      if (((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
          (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar8 == 0)) ||
         (puVar1 = (uint *)((long)piVar7 + uVar8), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
         puVar1 == (uint *)0x0)) {
        param_2 = (undefined1 *)0x0;
LAB_00b1e7fc:
        bVar5 = true;
      }
      else {
        if (*puVar1 != 0) {
          uVar8 = 0;
          puVar9 = &DAT_cbf29ce484222645;
          do {
            piVar7 = (int *)((long)(puVar1 + uVar8 + 1) + (ulong)puVar1[uVar8 + 1]);
            puVar11 = (ushort *)((long)piVar7 - (long)*piVar7);
            if ((*puVar11 < 5) || ((ulong)puVar11[2] == 0)) {
              lVar12 = 0;
            }
            else {
              puVar2 = (uint *)((long)piVar7 + (ulong)puVar11[2]);
              lVar12 = (long)puVar2 + (ulong)*puVar2;
            }
            bVar4 = *(byte *)(lVar12 + 4);
            puVar13 = &DAT_cbf29ce484222645;
            if (bVar4 != 0) {
              puVar13 = &DAT_cbf29ce484222645;
              pbVar10 = (byte *)(lVar12 + 5);
              do {
                puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar10;
                pbVar10 = pbVar10 + 1;
              } while (bVar4 != 0);
            }
            if (puVar13 == param_2) {
              puVar1 = (uint *)((long)piVar7 + (ulong)puVar11[0x21]);
              lVar12 = (long)puVar1 + (ulong)*puVar1;
              if (*(char *)(lVar12 + 4) == '\0') {
LAB_00b1e7f8:
                param_2 = (undefined1 *)0x1;
              }
              else {
                lVar3 = 0;
                if (puVar11[0x21] != 0 && 0x42 < *puVar11) {
                  lVar3 = lVar12;
                }
                bVar4 = *(byte *)(lVar3 + 4);
                if (bVar4 == 0) goto LAB_00b1e7f8;
                pbVar10 = (byte *)(lVar3 + 5);
                do {
                  puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
                  bVar4 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                } while (bVar4 != 0);
                param_2 = (undefined1 *)(ulong)(puVar9 != (undefined1 *)0xaf66d54c8606f9a7);
              }
              goto LAB_00b1e7fc;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != *puVar1);
        }
        bVar5 = false;
      }
      uVar14 = (uint)param_2;
      uVar8 = FUN_02a43a5c(local_28[0xb]);
      if ((uVar8 & 1) != 0) {
        (**(code **)(*local_28 + 0x20))(local_28);
      }
      if (bVar5) goto LAB_00b1e6c8;
    }
  }
  uVar14 = 0;
LAB_00b1e6c8:
  return uVar14 & 1;
}


