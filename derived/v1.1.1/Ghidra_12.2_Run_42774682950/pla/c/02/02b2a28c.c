/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2a28c; name: FUN_02b2a28c
 */


void FUN_02b2a28c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_1;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  uVar5 = *param_3;
  uVar1 = *param_4;
  uVar3 = param_4[1];
  uVar2 = param_4[2];
  plVar4 = (long *)param_4[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  *param_2 = uVar5;
  *(undefined8 *)(param_2 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined8 *)(param_2 + 6) = uVar2;
  *(long **)(param_2 + 8) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


