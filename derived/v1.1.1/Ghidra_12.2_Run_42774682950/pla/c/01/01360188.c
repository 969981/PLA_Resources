/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01360188; name: FUN_01360188
 */


void FUN_01360188(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  ushort *puVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long *local_78 [2];
  long *local_68;
  long *local_58;
  
  puVar5 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01149008(&local_68);
  plVar4 = local_68;
  if ((param_3 != (undefined1 *)0x41c3449234dfd965) && (param_3 != (undefined1 *)0x82ab2bbbae9c39f2)
     ) {
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
    FUN_01e656d0(local_78);
    plVar4 = local_68;
    if (local_78[0] != (long *)0x0) {
      FUN_00b1e8cc(&local_58);
      if (local_78[0] != (long *)0x0) {
        FUN_02a43934();
      }
      plVar4 = local_68;
      if (local_58 != (long *)0x0) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
        FUN_01148cdc(local_78);
        cVar8 = FUN_01123ce8(local_78[0]);
        if ((local_78[0] != (long *)0x0) &&
           (uVar10 = FUN_02a43a5c(local_78[0][0xb]), (uVar10 & 1) != 0)) {
          (**(code **)(*local_78[0] + 0x20))(local_78[0]);
        }
        if (cVar8 == '\0') {
          piVar11 = (int *)FUN_00b1e13c(local_58);
        }
        else {
          piVar11 = (int *)FUN_00b1e15c();
        }
        if ((((piVar11 != (int *)0x0) && (4 < *(ushort *)((long)piVar11 - (long)*piVar11))) &&
            (uVar10 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar10 != 0)) &&
           ((puVar1 = (uint *)((long)piVar11 + uVar10),
            puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1), puVar1 != (uint *)0x0 &&
            (uVar10 = (ulong)*puVar1, *puVar1 != 0)))) {
          uVar17 = 0;
          do {
            piVar11 = (int *)((long)(puVar1 + uVar17 + 1) + (ulong)puVar1[uVar17 + 1]);
            puVar13 = (ushort *)((long)piVar11 - (long)*piVar11);
            if ((*puVar13 < 5) || ((ulong)puVar13[2] == 0)) {
              lVar15 = 0;
            }
            else {
              puVar2 = (uint *)((long)piVar11 + (ulong)puVar13[2]);
              lVar15 = (long)puVar2 + (ulong)*puVar2;
            }
            bVar3 = *(byte *)(lVar15 + 4);
            puVar16 = &DAT_cbf29ce484222645;
            if (bVar3 != 0) {
              puVar16 = &DAT_cbf29ce484222645;
              pbVar14 = (byte *)(lVar15 + 5);
              do {
                puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
                bVar3 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar3 != 0);
            }
            if (puVar16 == param_3) {
              if ((*puVar13 < 0x15) || ((ulong)puVar13[10] == 0)) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined4 *)((long)piVar11 + (ulong)puVar13[10]);
              }
              FUN_010ecfdc(local_68,param_1,param_2,uVar12);
              uVar10 = (ulong)*puVar1;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar10);
        }
        uVar10 = FUN_02a43a5c(local_58[0xb]);
        plVar4 = local_68;
        if ((uVar10 & 1) != 0) {
          (**(code **)(*local_58 + 0x20))(local_58);
          plVar4 = local_68;
        }
      }
    }
  }
  if ((plVar4 != (long *)0x0) && (uVar10 = FUN_02a43a5c(plVar4[0xb]), (uVar10 & 1) != 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}


