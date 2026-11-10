/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab8ccc; name: FUN_01ab8ccc
 */


void FUN_01ab8ccc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined1 local_59;
  
  lVar7 = *(long *)(PTR_DAT_04379570 + 8);
  local_61 = (undefined1)*(undefined8 *)PTR_DAT_04379570;
  uStack_60 = (undefined7)((ulong)*(undefined8 *)PTR_DAT_04379570 >> 8);
  local_59 = (undefined1)lVar7;
  plVar8 = (long *)*param_2;
  if (plVar8 == (long *)0x0) {
    plVar9 = (long *)param_2[1];
  }
  else {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    plVar9 = (long *)param_2[1];
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((long)param_2 + 0x14);
  plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0x228) + 0x10))
                             (*(long **)(param_1 + 0x228),0x50,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x228) + 0xb8))();
  }
  *plVar5 = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x228);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar5[2] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar5[3] = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  *(undefined4 *)(plVar5 + 4) = uVar1;
  *(undefined4 *)((long)plVar5 + 0x24) = uVar2;
  *(undefined1 *)(plVar5 + 5) = 0;
  plVar5[7] = lVar7;
  plVar5[8] = -1;
  *(ulong *)((long)plVar5 + 0x31) = CONCAT17(local_59,uStack_60);
  *(ulong *)((long)plVar5 + 0x29) = CONCAT17(local_61,uStack_68);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  plVar5[1] = param_1 + 0x210;
  lVar7 = *(long *)(param_1 + 0x210);
  *plVar5 = lVar7;
  *(long **)(lVar7 + 8) = plVar5;
  *(long **)(param_1 + 0x210) = plVar5;
  *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 1;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return;
}


