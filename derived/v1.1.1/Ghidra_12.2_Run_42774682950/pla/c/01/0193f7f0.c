/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0193f7f0; name: FUN_0193f7f0
 */


void FUN_0193f7f0(long *param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)(param_2 + 0x38);
  lVar3 = (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,0x30,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*puVar5 + 0xb8))();
  }
  *param_1 = lVar3;
  param_1[1] = (long)puVar5;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar6 = *puVar5;
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  uVar6 = *param_3;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(int *)(lVar3 + 0x10) = (int)uVar6;
  FUN_008802f0((undefined8 *)(lVar3 + 0x18),param_4);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_4 + 0x10);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar5 = (undefined8 *)*param_1;
  *puVar5 = 0;
  puVar5[1] = (long)*(int *)(puVar5 + 2);
  return;
}


