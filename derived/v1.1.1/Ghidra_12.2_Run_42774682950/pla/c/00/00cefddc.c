/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cefddc; name: FUN_00cefddc
 */


void FUN_00cefddc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  byte *pbVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar15 = (undefined8 *)*param_1;
  uVar17 = ((long)param_3 - (long)param_2 >> 4) * 0x14c1bacf914c1bad;
  lVar11 = param_1[2];
  if (uVar17 <= (ulong)((lVar11 - (long)puVar15 >> 4) * 0x14c1bacf914c1bad)) {
    uVar14 = (param_1[1] - (long)puVar15 >> 4) * 0x14c1bacf914c1bad;
    puVar18 = (undefined8 *)((long)param_2 + (param_1[1] - (long)puVar15));
    puVar5 = PTR_LAB_04379590;
    plVar16 = (long *)PTR_DAT_043794a8;
    plVar6 = (long *)PTR_DAT_043794a0;
    pbVar7 = PTR_DAT_04379498;
    puVar19 = puVar18;
    if (uVar17 <= uVar14) {
      puVar19 = param_3;
    }
    while( true ) {
      PTR_DAT_04379498 = pbVar7;
      PTR_DAT_043794a0 = (undefined *)plVar6;
      PTR_DAT_043794a8 = (undefined *)plVar16;
      PTR_LAB_04379590 = puVar5;
      if (puVar19 == param_2) break;
      uVar12 = *param_2;
      *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar15 = uVar12;
      FUN_008c4b3c(puVar15 + 2,param_2 + 2);
      uVar12 = param_2[7];
      uVar2 = *(undefined4 *)(param_2 + 8);
      puVar15[5] = param_2[5];
      puVar15[7] = uVar12;
      puVar15[4] = param_2[4];
      uVar12 = param_2[6];
      *(undefined4 *)(puVar15 + 8) = uVar2;
      puVar15[6] = uVar12;
      *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(param_2 + 10);
      *(undefined8 *)((long)puVar15 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
      *(undefined4 *)((long)puVar15 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
      memcpy(puVar15 + 0xc,param_2 + 0xc,0x1e0);
      *(undefined4 *)(puVar15 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      puVar15 = puVar15 + 0x4a;
      param_2 = param_2 + 0x4a;
      puVar5 = PTR_LAB_04379590;
      plVar16 = (long *)PTR_DAT_043794a8;
      plVar6 = (long *)PTR_DAT_043794a0;
      pbVar7 = PTR_DAT_04379498;
    }
    if (uVar14 < uVar17) {
      if (puVar19 == param_3) {
        return;
      }
      FUN_00bac10c(param_1 + 3,param_1[1],puVar18);
      lVar11 = param_1[1] + 0x250;
      param_1[1] = lVar11;
      while (puVar18 = puVar18 + 0x4a, puVar18 != param_3) {
        FUN_00bac10c(param_1 + 3,lVar11,puVar18);
        lVar11 = param_1[1] + 0x250;
        param_1[1] = lVar11;
      }
      return;
    }
    puVar18 = (undefined8 *)param_1[1];
    while (puVar18 != puVar15) {
      puVar19 = puVar18 + -0x48;
      puVar18 = puVar18 + -0x4a;
      puVar19 = (undefined8 *)*puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar19[2] = 0;
          if (((*pbVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar7), iVar10 != 0)) {
            FUN_00100250(puVar5,plVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar7);
          }
          lVar11 = *plVar6;
          *plVar16 = lVar11;
          local_68 = *puVar19;
          FUN_02a44274(lVar11 + 0xd8,&local_68);
        }
      }
    }
    param_1[1] = (long)puVar15;
    return;
  }
  if (puVar15 != (undefined8 *)0x0) {
    puVar19 = (undefined8 *)param_1[1];
    puVar18 = puVar15;
    if (puVar19 != puVar15) {
      do {
        puVar18 = puVar19 + -0x48;
        puVar19 = puVar19 + -0x4a;
        puVar18 = (undefined8 *)*puVar18;
        if (puVar18 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar18 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            puVar18[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar8 = lVar11;
            local_68 = *puVar18;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
      } while (puVar19 != puVar15);
      puVar18 = (undefined8 *)*param_1;
      lVar11 = param_1[2];
    }
    plVar16 = (long *)param_1[3];
    param_1[1] = (long)puVar15;
    uVar14 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar14 & 1) == 0) {
LAB_00cf0184:
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar18,lVar11 - (long)puVar18,0x10);
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00cf0184;
      FUN_02bcc824(plVar16,puVar18,lVar11 - (long)puVar18,0x10);
    }
    lVar11 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uVar14 = param_1[4];
  if (0x7ffffffffffffffe < uVar14) {
    uVar14 = 0x7fffffffffffffff;
  }
  if (uVar14 < uVar17) {
LAB_00cf02ac:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((lVar11 >> 4) * 0x14c1bacf914c1bad) < uVar14 >> 1) {
    uVar13 = (lVar11 >> 4) * 0x2983759f2298375a;
    if (uVar17 <= uVar13) {
      uVar17 = uVar13;
    }
    bVar9 = uVar14 < uVar17;
    uVar14 = uVar17;
    if (bVar9) goto LAB_00cf02ac;
  }
  plVar16 = param_1 + 3;
  lVar11 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar14 * 0x250,0x10);
  if (lVar11 == 0) {
    (**(code **)(*(long *)*plVar16 + 0xb8))();
  }
  *param_1 = lVar11;
  param_1[1] = lVar11;
  param_1[2] = lVar11 + uVar14 * 0x250;
  if (param_2 != param_3) {
    FUN_00bac10c(plVar16,lVar11,param_2);
    lVar11 = param_1[1] + 0x250;
    param_1[1] = lVar11;
    while (param_2 = param_2 + 0x4a, param_2 != param_3) {
      FUN_00bac10c(plVar16,lVar11,param_2);
      lVar11 = param_1[1] + 0x250;
      param_1[1] = lVar11;
    }
  }
  return;
}


