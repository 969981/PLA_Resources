/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3c17c; name: FUN_01c3c17c
 */


uint FUN_01c3c17c(long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined1 *local_80;
  byte *local_78;
  long *local_68;
  
  puVar8 = PTR_DAT_04381eb0;
  puVar7 = PTR_DAT_04381ea8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x228);
  uVar9 = 0;
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0xc) == 0) {
LAB_01c3c31c:
      uVar9 = 0;
    }
    else {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar15 = *(int *)(lVar12 + 0xc);
      do {
        puVar16 = *(undefined8 **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_01c3c31c;
        while (puVar16 != (undefined8 *)puVar8) {
          puVar16 = (undefined8 *)*puVar16;
          uVar9 = 0;
          if (puVar16 == (undefined8 *)0x0) goto LAB_01c3c1a4;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar15) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
              puVar14 = &DAT_cbf29ce484222645;
              FUN_01c3cda0(&local_80,param_2 + 0x30);
              bVar2 = *local_78;
              while (bVar2 != 0) {
                local_78 = local_78 + 1;
                puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = *local_78;
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              local_80 = puVar14;
              uVar9 = FUN_018c6a78(plVar13,&local_80);
              lVar12 = *(long *)(lVar12 + 8);
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
              break;
            }
            goto LAB_01c3c31c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar9 = 0;
        iVar15 = iVar10;
      } while (iVar10 != 0);
    }
  }
LAB_01c3c1a4:
  return uVar9 & 1;
}


