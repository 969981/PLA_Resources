/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01205c64; name: FUN_01205c64
 */


void FUN_01205c64(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  code *local_88;
  undefined8 uStack_80;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148bf4(&local_b0);
  uVar5 = FUN_010e67cc(local_b0);
  if (local_b0 != (long *)0x0) {
    lVar9 = local_b0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  puVar10 = (undefined8 *)(param_1 + 0x90);
  uVar7 = FUN_012206ac(*puVar10,1,0,0);
  if (((((((uVar7 & 1) == 0) || (uVar7 = FUN_00d5e59c(*puVar10,1,0), (uVar7 & 1) != 0)) &&
        ((uVar7 = FUN_012206ac(*puVar10,1,0,1), (uVar7 & 1) == 0 ||
         (uVar7 = FUN_00d5e59c(*puVar10,1,1), (uVar7 & 1) != 0)))) &&
       ((uVar7 = FUN_012206ac(*puVar10,1,0,2), (uVar7 & 1) == 0 ||
        (uVar7 = FUN_00d5e59c(*puVar10,1,2), (uVar7 & 1) != 0)))) &&
      ((uVar7 = FUN_012206ac(*puVar10,1,0,3), (uVar7 & 1) == 0 ||
       (uVar7 = FUN_00d5e59c(*puVar10,1,3), (uVar7 & 1) != 0)))) &&
     (((uVar7 = FUN_012206ac(*puVar10,1,0,4), (uVar7 & 1) == 0 ||
       (uVar7 = FUN_00d5e59c(*puVar10,1,4), (uVar7 & 1) != 0)) &&
      ((uVar7 = FUN_012206ac(*puVar10,1,0,5), (uVar7 & 1) == 0 ||
       (uVar7 = FUN_00d5e59c(*puVar10,1,5), (uVar7 & 1) != 0)))))) {
    iVar6 = 0;
    do {
      uVar7 = FUN_012206ac(*puVar10,0,uVar5,iVar6);
      if (((uVar7 & 1) != 0) && (uVar7 = FUN_00d5e59c(*puVar10,0,iVar6), (uVar7 & 1) == 0)) {
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x1e);
    uVar7 = FUN_012206ac(*puVar10,1,0,0);
    if ((uVar7 & 1) != 0) {
      FUN_00d5e760(*puVar10,1,0);
    }
    uVar7 = FUN_012206ac(*puVar10,1,0,1);
    if ((uVar7 & 1) != 0) {
      FUN_00d5e760(*puVar10,1,1);
    }
    uVar7 = FUN_012206ac(*puVar10,1,0,2);
    if ((uVar7 & 1) != 0) {
      FUN_00d5e760(*puVar10,1,2);
    }
    uVar7 = FUN_012206ac(*puVar10,1,0,3);
    if ((uVar7 & 1) != 0) {
      FUN_00d5e760(*puVar10,1,3);
    }
    uVar7 = FUN_012206ac(*puVar10,1,0,4);
    if ((uVar7 & 1) != 0) {
      FUN_00d5e760(*puVar10,1,4);
    }
    uVar7 = FUN_012206ac(*puVar10,1,0,5);
    if ((uVar7 & 1) != 0) {
      FUN_00d5e760(*puVar10,1,5);
    }
    uVar8 = *puVar10;
    iVar6 = 0;
    do {
      uVar7 = FUN_012206ac(uVar8,0,uVar5,iVar6);
      if ((uVar7 & 1) != 0) {
        FUN_00d5e760(*puVar10,0,iVar6);
      }
      uVar8 = *puVar10;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x1e);
    FUN_012252a0();
    local_88 = FUN_01206c08;
    uStack_80 = 0;
    local_b0 = (long *)&LAB_012076fc;
    local_a8 = FUN_01207718;
    local_a0 = &LAB_0120771c;
    puStack_98 = &LAB_01207730;
    local_90 = param_1;
    FUN_01205224(param_1,0xd95b11bcf2c7a3a2,&local_b0);
    pcVar4 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      puStack_98 = (undefined1 *)0x0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar4)(&local_90);
    }
  }
  return;
}


