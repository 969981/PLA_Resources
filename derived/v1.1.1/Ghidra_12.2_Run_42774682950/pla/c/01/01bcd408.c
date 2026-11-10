/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bcd408; name: FUN_01bcd408
 */


void FUN_01bcd408(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long *local_68;
  
  FUN_01a02dbc(param_1 + 0x250);
  FUN_00ac3fa4(param_1 + 0x260,param_2 + 0x10);
  FUN_01a03034(param_1 + 0x270,param_2 + 0x20);
  FUN_01a032ac(param_1 + 0x280,param_2 + 0x30);
  puVar8 = PTR_DAT_0437a688;
  puVar7 = PTR_DAT_0437a680;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_1 + 0x250);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar14 = *(int *)(lVar11 + 0xc);
    do {
      plVar15 = *(long **)(lVar11 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar6 = puVar5;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01bcd464;
        if (plVar15 == (long *)puVar8) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar14) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01bcd4cc;
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 != 0) {
          uVar13 = (uint)(*(ulong *)(lVar11 + 0x1d0) >> 2) & 1;
          if (*(byte *)(param_1 + 0x290) != uVar13) {
            *(char *)(param_1 + 0x290) = (char)uVar13;
          }
          lVar12 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))();
            lVar11 = *(long *)(param_1 + 0x270);
            goto joined_r0x01bcd5ec;
          }
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01bcd4cc:
      iVar14 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01bcd464:
  lVar11 = *(long *)(param_1 + 0x270);
joined_r0x01bcd5ec:
  if ((lVar11 != 0) && (FUN_00a8f734(&local_68), local_68 != (long *)0x0)) {
    if (((uint)local_68[0x16b] & 1) != (uint)*(byte *)(param_1 + 0x292)) {
      *(byte *)(param_1 + 0x292) = (byte)local_68[0x16b] & 1;
    }
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


