/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a49518; name: FUN_01a49518
 */


undefined8 FUN_01a49518(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  piVar13 = *(int **)(param_1 + 0x28);
  if (piVar13 == (int *)0x0) {
    return 0;
  }
  iVar12 = *piVar13;
  if (iVar12 != 0x17) {
    if (iVar12 == 0xf) {
      return 1;
    }
    if (iVar12 != 7) {
      if (iVar12 == 0x18) {
        return 1;
      }
      return 0;
    }
  }
  FUN_01e4bad0(local_78,piVar13,param_1 + 0x40);
  puVar10 = local_78[0];
  puVar9 = PTR_DAT_0437a258;
  puVar8 = PTR_DAT_0437a250;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (local_78[0] == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)((long)local_78[0] + 0xc) != 0) {
    piVar13 = (int *)((long)local_78[0] + 0xc);
    iVar12 = *(int *)((long)local_78[0] + 0xc);
    do {
      puVar17 = (undefined8 *)puVar10[2];
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar16;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      puVar3 = local_78[0];
      if (puVar17 == (undefined8 *)0x0) {
        uVar16 = 0;
        goto joined_r0x01a49744;
      }
      while (puVar17 != (undefined8 *)puVar9) {
        puVar17 = (undefined8 *)*puVar17;
        if (puVar17 == (undefined8 *)0x0) goto LAB_01a49638;
      }
      iVar11 = *piVar13;
      if (iVar11 == iVar12) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          lVar14 = puVar10[3];
          if (lVar14 != 0) {
            if ((*(char *)(lVar14 + 0x1b3) == '\0') || (*(char *)(lVar14 + 0x1b4) != '\0')) {
              uVar16 = 1;
            }
            else {
              uVar16 = 0;
            }
            lVar15 = *(long *)(lVar14 + 8);
            piVar13 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))();
              puVar3 = local_78[0];
            }
            goto joined_r0x01a49744;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01a49638:
  uVar16 = 0;
  puVar3 = local_78[0];
joined_r0x01a49744:
  if (puVar3 != (undefined8 *)0x0) {
    piVar13 = (int *)(puVar3 + 1);
    do {
      iVar12 = *piVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar2) {
        *piVar13 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      puVar3[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar3;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  return uVar16;
}


