/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af2ff8; name: FUN_00af2ff8
 */


void FUN_00af2ff8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_2 + 0x38);
  lVar3 = (**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,0x38,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*puVar6 + 0xb8))();
  }
  *param_1 = lVar3;
  param_1[1] = (long)puVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar7 = *puVar6;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar6 = (undefined8 *)*param_5;
  *(undefined8 *)(lVar3 + 0x10) = *puVar6;
  *(undefined8 *)(lVar3 + 0x18) = puVar6[1];
  *(undefined8 *)(lVar3 + 0x20) = puVar6[2];
  plVar5 = (long *)puVar6[3];
  *(long **)(lVar3 + 0x28) = plVar5;
  if (plVar5 == (long *)0x0) {
    *(undefined4 *)(lVar3 + 0x30) = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))();
    *(undefined4 *)(lVar3 + 0x30) = 0;
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar6 = (undefined8 *)*param_1;
  *puVar6 = 0;
  puVar6[1] = param_3;
  return;
}


