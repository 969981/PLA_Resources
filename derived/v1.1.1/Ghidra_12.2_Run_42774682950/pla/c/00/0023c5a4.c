/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023c5a4; name: FUN_0023c5a4
 */


void FUN_0023c5a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  puVar5 = PTR_DAT_04372ca0;
  puVar4 = PTR_DAT_04372b98;
  bVar2 = *(byte *)(param_1 + 0x14);
  if ((bVar2 & 3) == 0) {
    return;
  }
  puVar11 = *(ushort **)(param_1 + 0x18);
  uVar15 = 0;
  bVar3 = *(byte *)((long)puVar11 + 1);
  puVar1 = puVar11;
  do {
    if ((bVar3 & 1) != 0) {
      plVar13 = *(long **)(puVar1 + 4);
      puVar7 = (undefined8 *)(**(code **)(*plVar13 + 0x48))(plVar13);
      if (((*PTR_DAT_04372b90 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04372b90), iVar6 != 0)) {
        if (((*PTR_DAT_04372a58 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar6 != 0)) {
          *(undefined8 *)PTR_DAT_04372a60 = 0;
          __cxa_guard_release(PTR_DAT_04372a58);
        }
        *(undefined **)puVar4 = PTR_DAT_04372a60;
        __cxa_guard_release(PTR_DAT_04372b90);
      }
      puVar12 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        for (plVar8 = (long *)(**(code **)*puVar7)(puVar7); plVar8 != (long *)0x0;
            plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar4) goto LAB_0023c678;
        }
        puVar12 = (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)0x0;
LAB_0023c678:
      puVar9 = (undefined8 *)(**(code **)(*plVar13 + 0x48))(plVar13);
      if (((*PTR_DAT_04372ca8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04372ca8), iVar6 != 0)) {
        if (((*PTR_DAT_04372a58 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar6 != 0)) {
          *(undefined8 *)PTR_DAT_04372a60 = 0;
          __cxa_guard_release(PTR_DAT_04372a58);
        }
        *(undefined **)puVar5 = PTR_DAT_04372a60;
        __cxa_guard_release(PTR_DAT_04372ca8);
      }
      puVar14 = puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        for (plVar13 = (long *)(**(code **)*puVar9)(puVar9); plVar13 != (long *)0x0;
            plVar13 = (long *)*plVar13) {
          if (plVar13 == (long *)puVar5) goto LAB_0023c6cc;
        }
        puVar14 = (undefined8 *)0x0;
      }
      puVar9 = (undefined8 *)0x0;
LAB_0023c6cc:
      uVar10 = FUN_002362d0(*(undefined8 *)(param_4 + 0xa0),*puVar1 >> 9 & 7);
      if (puVar7 == (undefined8 *)0x0) {
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00236194(uVar10,param_2,param_3,*(long *)(param_4 + 0x20),
                       *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x40),puVar14[2]);
        }
      }
      else {
        FUN_00236054(uVar10,puVar12[2]);
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == (bVar2 & 3)) {
      return;
    }
    puVar1 = puVar11 + uVar15 * 8;
    bVar3 = *(byte *)((long)puVar1 + 1);
  } while( true );
}


