/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f8108; name: FUN_019f8108
 */


void FUN_019f8108(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_00b63974(param_1 + 0x458);
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar13 = *(long *)(param_1 + 0x250);
  lVar14 = *(long *)(param_1 + 600);
  do {
    if (lVar13 == lVar14) {
      return;
    }
    lVar12 = *(long *)(lVar13 + 8);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar15 = *(long **)(lVar12 + 0x10);
        lVar11 = FUN_019fa6c0();
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_019f8178;
          if (plVar15 == (long *)lVar11) break;
          plVar15 = (long *)*plVar15;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 != 0) {
              local_78 = (undefined8 *)0x0;
              uStack_70 = 0;
              FUN_00b63974(&local_78,param_2);
              FUN_00b63974(lVar12 + 0x288,&local_78);
              puVar9 = local_78;
              if (local_78 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_78 + 1);
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
                  local_78[2] = 0;
                  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                    FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar5);
                  }
                  lVar11 = *(long *)puVar6;
                  *(long *)puVar7 = lVar11;
                  local_68 = *puVar9;
                  FUN_02a44274(lVar11 + 0xd8,&local_68);
                }
              }
              lVar11 = *(long *)(lVar12 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
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
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
LAB_019f8178:
    lVar13 = lVar13 + 0x60;
  } while( true );
}


