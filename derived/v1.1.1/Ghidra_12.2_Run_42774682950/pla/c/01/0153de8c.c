/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0153de8c; name: FUN_0153de8c
 */


void FUN_0153de8c(long *param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  int iVar17;
  undefined1 *local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  long *local_68;
  
  puVar8 = PTR_DAT_0437f890;
  puVar7 = PTR_DAT_0437f888;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar16 = *param_1;
  lVar11 = *(long *)(lVar16 + 0x98);
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
LAB_0153deb8:
    plVar14 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar17 = *(int *)(lVar11 + 0xc);
    do {
      puVar10 = *(undefined8 **)(lVar11 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar10 == (undefined8 *)0x0) goto LAB_0153deb8;
      while (puVar10 != (undefined8 *)puVar8) {
        puVar10 = (undefined8 *)*puVar10;
        plVar14 = (long *)0x0;
        if (puVar10 == (undefined8 *)0x0) goto LAB_0153debc;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar17) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar14 = (long *)0x0;
          if (*(long *)(lVar11 + 0x18) != 0) {
            plVar14 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar14 = (long *)0x0;
      iVar17 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0153debc:
  puVar10 = (undefined8 *)FUN_01517f48(plVar14 + 0x32,lVar16 + 0x68);
  uVar13 = *puVar10;
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  FUN_0153e0bc(&local_68,uVar13);
  if (local_68 != (long *)0x0) {
    puVar15 = &DAT_cbf29ce484222645;
    local_78 = strlen((char *)(lVar16 + 0x480));
    bVar2 = *(byte *)(lVar16 + 0x480);
    if (bVar2 != 0) {
      pbVar12 = (byte *)(lVar16 + 0x481);
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar2 != 0);
    }
    local_70 = (long *)0x0;
    local_88 = puVar15;
    pcStack_80 = (char *)(lVar16 + 0x480);
    FUN_0153c220(local_68,&local_88);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))(local_68);
    }
  }
  return;
}


