/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c179e0; name: FUN_02c179e0
 */


void FUN_02c179e0(long param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar16 = param_1 + 0x140;
  do {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_02c18634(&local_78,lVar16);
    if (local_78 != (undefined8 *)0x0) {
      FUN_02c188ac(&local_68);
      plVar8 = local_68;
      puVar13 = local_78;
      if (local_68 != (long *)0x0) {
        pMVar1 = (MutexType *)(local_68 + 0xd);
        nn::os::LockMutex(pMVar1);
        if ((int)plVar8[0x18] != 0) {
          lVar11 = plVar8[0x11];
          lVar12 = plVar8[0x12];
          if (lVar12 != lVar11) {
            uVar10 = 0;
            do {
              puVar14 = (undefined8 *)(lVar11 + uVar10 * 0x38);
              puVar13 = (undefined8 *)*puVar14;
              uVar15 = puVar14[1] - (long)puVar13;
              if (0 < (long)uVar15) {
                uVar15 = uVar15 >> 3;
                do {
                  uVar15 = uVar15 - 1;
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
                } while (0 < (long)uVar15);
                lVar11 = plVar8[0x11];
                lVar12 = plVar8[0x12];
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < (ulong)((lVar12 - lVar11 >> 3) * 0x6db6db6db6db6db7));
          }
          *(undefined4 *)(plVar8 + 0x18) = 0;
        }
        nn::os::UnlockMutex(pMVar1);
        puVar13 = local_78;
        if (local_68 != (long *)0x0) {
          lVar11 = local_68[0xb];
          piVar2 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
            puVar13 = local_78;
          }
        }
      }
      if (puVar13 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar13 + 1);
        do {
          iVar9 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar13[2] = 0;
          local_78 = puVar13;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar11 = *(long *)puVar6;
          *(long *)puVar7 = lVar11;
          local_68 = (long *)*puVar13;
          FUN_02a44274(lVar11 + 0xd8,&local_68);
        }
      }
    }
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != param_1 + 0x240);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_02c17bd4(param_1,&local_78);
  return;
}


