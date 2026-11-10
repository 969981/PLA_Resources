/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d028ec; name: FUN_00d028ec
 */


void FUN_00d028ec(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  lVar18 = *(long *)(param_1 + 0x218);
  lVar13 = *(long *)(param_1 + 0x220);
  if (lVar13 != lVar18) {
    puVar17 = *(undefined8 **)(lVar13 + -0x240);
    puVar5 = PTR_LAB_04379590;
    puVar9 = PTR_LAB_04379590;
    if (puVar17 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar5 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      if (iVar10 + -1 == 0) {
        puVar17[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar7;
        *(long *)puVar8 = lVar12;
        local_68 = *puVar17;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
        puVar5 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
      }
    }
    while( true ) {
      PTR_LAB_04379590 = puVar9;
      puVar9 = PTR_LAB_04379590;
      lVar12 = lVar13 + -0x250;
      PTR_LAB_04379590 = puVar5;
      if (lVar12 == lVar18) break;
      puVar17 = *(undefined8 **)(lVar13 + -0x490);
      lVar13 = lVar12;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar5 = PTR_LAB_04379590;
        if (iVar10 + -1 == 0) {
          puVar17[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_68 = *puVar17;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
          puVar5 = PTR_LAB_04379590;
        }
      }
    }
  }
  *(long *)(param_1 + 0x220) = lVar18;
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a0;
  plVar21 = *(long **)(param_2 + 0x28);
  if (plVar21 != (long *)0x0) {
    puVar17 = (undefined8 *)(param_1 + 0x230);
    do {
      if ((char)plVar21[0x50] != '\0') {
        lVar13 = *(long *)(param_1 + 0x220);
        if (lVar13 == *(long *)(param_1 + 0x228)) {
          lVar13 = lVar13 - *(long *)(param_1 + 0x218) >> 4;
          uVar15 = *(ulong *)(param_1 + 0x238);
          if (0x7ffffffffffffffe < uVar15) {
            uVar15 = 0x7fffffffffffffff;
          }
          uVar2 = lVar13 * 0x14c1bacf914c1bad + 1;
          if (uVar15 < uVar2) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar18 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x218) >> 4;
          uVar14 = lVar18 * 0x2983759f2298375a;
          if (uVar2 <= uVar14) {
            uVar2 = uVar14;
          }
          if ((ulong)(lVar18 * 0x14c1bacf914c1bad) < uVar15 >> 1) {
            uVar15 = uVar2;
          }
          if (uVar15 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = (**(code **)(*(long *)*puVar17 + 0x10))((long *)*puVar17,uVar15 * 0x250,0x10);
            if (lVar18 == 0) {
              (**(code **)(*(long *)*puVar17 + 0xb8))();
            }
          }
          lVar12 = lVar18 + lVar13 * 0x10;
          FUN_00cf42fc(puVar17,lVar12,plVar21 + 4);
          lVar13 = lVar12 + 0x250;
          lVar16 = *(long *)(param_1 + 0x218);
          lVar19 = *(long *)(param_1 + 0x220);
          if (lVar19 == lVar16) {
            lVar19 = lVar16;
          }
          else {
            do {
              lVar12 = lVar12 + -0x250;
              lVar19 = lVar19 + -0x250;
              FUN_00cf42fc(puVar17,lVar12,lVar19);
            } while (lVar16 != lVar19);
            lVar16 = *(long *)(param_1 + 0x218);
            lVar19 = *(long *)(param_1 + 0x220);
          }
          *(long *)(param_1 + 0x218) = lVar12;
          lVar12 = *(long *)(param_1 + 0x228);
          *(long *)(param_1 + 0x220) = lVar13;
          *(ulong *)(param_1 + 0x228) = lVar18 + uVar15 * 0x250;
          while (lVar19 != lVar16) {
            puVar20 = *(undefined8 **)(lVar19 + -0x240);
            lVar19 = lVar19 + -0x250;
            if (puVar20 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar20 + 1);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                puVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(puVar7,puVar6,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)puVar6;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_68 = *puVar20;
                FUN_02a44274(lVar13 + 0xd8,&local_68);
              }
            }
          }
          if (lVar16 != 0) {
            lVar12 = lVar12 - lVar16;
            plVar11 = (long *)*puVar17;
            uVar15 = (**(code **)(*plVar11 + 0xc0))();
            if ((uVar15 & 1) != 0) {
              lVar13 = tpidr_el0;
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar13 + 0x38d480)) {
                FUN_02bcc824(plVar11,lVar16,lVar12,0x10);
                goto LAB_00d029a0;
              }
            }
            (**(code **)(*plVar11 + 0x18))(plVar11,lVar16,lVar12,0x10);
          }
        }
        else {
          FUN_00cf42fc(puVar17,lVar13,plVar21 + 4);
          *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 0x250;
        }
      }
LAB_00d029a0:
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  return;
}


