/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cda0c4; name: FUN_00cda0c4
 */


undefined8 FUN_00cda0c4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  FUN_00be5694(&local_28);
  if (local_28 == (long *)0x0) {
LAB_00cda20c:
    uVar10 = 0;
  }
  else {
    uVar8 = (**(code **)(*local_28 + 0x158))();
    if ((uVar8 & 1) == 0) {
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      FUN_01a2bf84(&local_40,local_28 + 0xb9);
      FUN_009c685c(&local_30,&local_40);
      puVar5 = local_40;
      if (local_40 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40 + 1);
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
          local_40[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_18 = *puVar5;
          FUN_02a44274(lVar9 + 0xd8,&local_18);
        }
      }
      if ((local_30 == (long *)0x0) ||
         (((uVar6 = FUN_01a50dc8(local_30,local_30 + 0x74), uVar6 < 0x100 || ((uVar6 & 0xff) == 0))
          && (uVar8 = FUN_01a5a2e4(local_30), (uVar8 & 1) == 0)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (local_30 != (long *)0x0) {
        lVar9 = local_30[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
      if (!bVar3) goto LAB_00cda20c;
    }
    uVar10 = 1;
  }
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return uVar10;
}


