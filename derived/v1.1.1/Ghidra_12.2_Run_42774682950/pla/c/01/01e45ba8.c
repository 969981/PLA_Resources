/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e45ba8; name: FUN_01e45ba8
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01e45ba8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined **local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar14 = FUN_01e48240();
  puVar9 = PTR_DAT_0437a590;
  puVar8 = PTR_DAT_0437a588;
  puVar7 = PTR_DAT_0437a580;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar15 = *param_2;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar12 = *(int *)(lVar15 + 0xc);
    do {
      puVar17 = *(undefined8 **)(lVar15 + 0x10);
      if (((*puVar7 & 1) == 0) && (uVar14 = __cxa_guard_acquire(puVar7), (int)uVar14 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar13 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar5), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar14;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar9 = puVar8;
        uVar14 = __cxa_guard_release(puVar7);
      }
      if (puVar17 == (undefined8 *)0x0) {
        return false;
      }
      while (puVar17 != (undefined8 *)puVar9) {
        puVar17 = (undefined8 *)*puVar17;
        uVar14 = 0;
        if (puVar17 == (undefined8 *)0x0) {
          return false;
        }
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 == 0) {
            return false;
          }
          if (*(int *)(lVar15 + 0x230) == 3) {
            local_a0[0] = &PTR_FUN_04287c30;
            local_78 = *(undefined8 *)(lVar15 + 0x298);
            local_88 = *(undefined8 *)(lVar15 + 0x288);
            local_90 = *(undefined8 *)(lVar15 + 0x280);
            local_80 = *(undefined8 *)(lVar15 + 0x290);
            local_70 = *(undefined8 *)(lVar15 + 0x2a0);
            uVar11 = FUN_01e48240(uVar14);
            if (((*PTR_DAT_0437a648 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a648);
            }
            lVar16 = *(long *)PTR_DAT_0437a650;
            *(long *)PTR_DAT_0437a658 = lVar16;
            iVar12 = FUN_02bf7af8(0,*(undefined8 *)(lVar16 + 0x230),local_a0,param_3,uVar11,0,0);
          }
          else {
            if (*(int *)(lVar15 + 0x230) != 1) {
              bVar10 = false;
              goto LAB_01e45d1c;
            }
            local_a0[0] = &PTR_FUN_04287c08;
            local_88 = *(undefined8 *)(lVar15 + 600);
            local_90 = *(undefined8 *)(lVar15 + 0x250);
            uVar4 = (ulong)local_80 >> 0x20;
            local_80 = CONCAT44((int)uVar4,*(undefined4 *)(lVar15 + 0x260));
            uVar11 = FUN_01e48240(uVar14);
            if (((*PTR_DAT_0437a648 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a648);
            }
            lVar16 = *(long *)PTR_DAT_0437a650;
            *(long *)PTR_DAT_0437a658 = lVar16;
            iVar12 = FUN_02bf7384(0,*(undefined8 *)(lVar16 + 0x230),local_a0,param_3,uVar11,0,0);
          }
          bVar10 = iVar12 != 0;
LAB_01e45d1c:
          lVar16 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))((long *)(lVar15 + -0x50));
          }
          return bVar10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar14 = 0;
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
  return false;
}


