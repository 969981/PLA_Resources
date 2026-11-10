/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f37294; name: FUN_01f37294
 */


bool FUN_01f37294(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_043794a0;
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    bVar6 = true;
  }
  else {
    lVar8 = *param_1;
    uVar10 = *(ulong *)(lVar8 + 0x40);
    lVar9 = *(long *)(lVar8 + 8);
    if (*(long *)(lVar8 + 0x10) == lVar9) {
      lVar12 = 0;
      uVar11 = *(long *)(lVar8 + 0x48) + uVar10;
    }
    else {
      uVar11 = *(long *)(lVar8 + 0x48) + uVar10;
      lVar12 = *(long *)(lVar9 + (uVar10 / 0x66) * 8) + (uVar10 % 0x66) * 0x28;
      lVar14 = *(long *)(lVar9 + (uVar11 / 0x66) * 8) + (uVar11 % 0x66) * 0x28;
      if (lVar14 != lVar12) {
        plVar13 = (long *)(lVar9 + (uVar10 / 0x66) * 8);
        do {
          while( true ) {
            local_90 = (undefined8 *)0x0;
            uStack_88 = 0;
            FUN_008c4b3c(&local_90,lVar12);
            local_80 = (undefined8 *)0x0;
            uStack_78 = 0;
            FUN_00b63bec(&local_80,lVar12 + 0x10);
            puVar5 = local_80;
            local_70 = *(undefined1 *)(lVar12 + 0x20);
            if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
              bVar6 = false;
            }
            else {
              bVar6 = (undefined8 *)*param_2 == local_90;
            }
            if (local_80 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80 + 1);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar4,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar9 = *(long *)puVar4;
                *(long *)PTR_DAT_043794a8 = lVar9;
                local_68 = *puVar5;
                FUN_02a44274(lVar9 + 0xd8,&local_68);
              }
            }
            puVar5 = local_90;
            if (local_90 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_90 + 1);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar4,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar9 = *(long *)puVar4;
                *(long *)PTR_DAT_043794a8 = lVar9;
                local_68 = *puVar5;
                FUN_02a44274(lVar9 + 0xd8,&local_68);
              }
            }
            if (bVar6) goto LAB_01f37444;
            lVar12 = lVar12 + 0x28;
            if (lVar12 - *plVar13 != 0xff0) break;
            plVar13 = plVar13 + 1;
            lVar12 = *plVar13;
            if (lVar14 == lVar12) goto LAB_01f37444;
          }
        } while (lVar14 != lVar12);
LAB_01f37444:
        lVar8 = *param_1;
        uVar11 = *(long *)(lVar8 + 0x40) + *(long *)(lVar8 + 0x48);
      }
    }
    if (*(long *)(lVar8 + 0x10) == *(long *)(lVar8 + 8)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar8 + 8) + (uVar11 / 0x66) * 8) + (uVar11 % 0x66) * 0x28;
    }
    bVar6 = lVar9 == lVar12;
  }
  return bVar6;
}


