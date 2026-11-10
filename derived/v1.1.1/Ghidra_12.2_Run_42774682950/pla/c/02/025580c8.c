/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025580c8; name: FUN_025580c8
 */


undefined8 * FUN_025580c8(undefined8 param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x100,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0255829c(puVar9);
  *puVar9 = &PTR_LAB_0425c650;
  puVar9[9] = &PTR_LAB_0425c6d8;
  lVar11 = *param_3;
  puVar9[0xb] = lVar11;
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9[0xc] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0xd] = 0;
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3 + 6,puVar9 + 0x10);
    lVar11 = param_3[2];
    lVar2 = param_3[3];
    lVar3 = param_3[5];
    puVar9[0xe] = param_3[4];
    puVar9[0xf] = lVar3;
    puVar9[0xc] = lVar11;
    puVar9[0xd] = lVar2;
  }
  *(int *)(puVar9 + 0x1c) = (int)param_3[0x12];
  *(undefined1 *)((long)puVar9 + 0xe4) = *(undefined1 *)((long)param_3 + 0x94);
  puVar9[0x1d] = 0;
  *(undefined2 *)(puVar9 + 0x1e) = 0;
  puVar9[1] = param_2;
  puVar9[2] = puVar9;
  puVar9[3] = 0x100;
  puVar9[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  return puVar9;
}


