/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d4038; name: FUN_028d4038
 */


void FUN_028d4038(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar7 = (undefined8 *)(param_2 + 0x38);
  lVar3 = (**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,0x50,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)*puVar7 + 0xb8))();
  }
  *param_1 = lVar3;
  param_1[1] = (long)puVar7;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar8 = *puVar7;
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
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *(undefined8 *)(lVar3 + 0x10) = *param_4;
  *(undefined8 *)(lVar3 + 0x18) = param_4[1];
  *(undefined8 *)(lVar3 + 0x20) = param_4[2];
  plVar5 = (long *)param_4[3];
  *(long **)(lVar3 + 0x28) = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  uVar8 = *param_5;
  *param_5 = 0;
  *(undefined8 *)(lVar3 + 0x30) = uVar8;
  uVar8 = param_5[1];
  uVar6 = param_5[3];
  *(undefined8 *)(lVar3 + 0x40) = param_5[2];
  *(undefined8 *)(lVar3 + 0x48) = uVar6;
  *(undefined8 *)(lVar3 + 0x38) = uVar8;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  puVar7 = (undefined8 *)*param_1;
  *puVar7 = 0;
  puVar7[1] = param_3;
  return;
}


