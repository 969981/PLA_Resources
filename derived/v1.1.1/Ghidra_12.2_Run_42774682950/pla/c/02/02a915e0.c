/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a915e0; name: FUN_02a915e0
 */


undefined8 * FUN_02a915e0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x470,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_02a48e80(puVar7,*param_2);
  *puVar7 = &PTR_LAB_0427f8c8;
  puVar7[0x82] = 0;
  puVar7[9] = &PTR_LAB_0427f938;
  puVar7[10] = &PTR_LAB_0427f980;
  puVar7[0x83] = 0;
  puVar7[0x84] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar4 = DAT_043f1798;
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar1 = tpidr_el0;
    lVar8 = *(long *)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(long *)(lVar1 + 0x20) = DAT_043f1798;
      lVar8 = lVar4;
    }
  }
  puVar7[0x85] = lVar8;
  *(undefined4 *)(puVar7 + 0x88) = 0;
  puVar7[0x86] = 0xaaaaaaaaaaaaaaa;
  puVar7[0x87] = 0;
  nn::os::InitializeMutex((MutexType *)(puVar7 + 0x89),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(puVar7 + 0x8d));
  puVar7[1] = param_1;
  puVar7[2] = puVar7;
  puVar7[3] = 0x470;
  puVar7[4] = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return puVar7;
}


