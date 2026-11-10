/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c946c; name: FUN_011c946c
 */


undefined8 * FUN_011c946c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x670,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar7,*param_2,*param_3,*param_4);
  *puVar7 = &PTR_LAB_041f7878;
  puVar7[9] = &PTR_LAB_041f7918;
  puVar7[10] = &PTR_LAB_041f7960;
  *(undefined8 *)((long)puVar7 + 0x5ac) = 0;
  *(undefined8 *)((long)puVar7 + 0x5b4) = 0;
  *(undefined8 *)((long)puVar7 + 0x5bc) = 0;
  *(undefined4 *)((long)puVar7 + 0x5c4) = 0;
  FUN_011c96c8(puVar7 + 0xb9);
  puVar7[0xc0] = 0;
  puVar7[0xbf] = 0;
  puVar7[0xbe] = 0;
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
  puVar7[0xc1] = lVar8;
  puVar7[0xc2] = 0x1555555555555555;
  puVar7[1] = param_1;
  puVar7[2] = puVar7;
  puVar7[0xc3] = 0;
  *(undefined4 *)(puVar7 + 0xc4) = 0;
  puVar7[0xbd] = 0;
  puVar7[0xcc] = 0;
  puVar7[0xc5] = 0;
  puVar7[0xc6] = 0;
  puVar7[199] = 0;
  puVar7[200] = 0;
  puVar7[0xc9] = 0;
  puVar7[0xbf] = puVar7[0xbe];
  puVar7[0xca] = 0;
  *(undefined1 *)(puVar7 + 0xcb) = 0;
  puVar7[3] = 0x670;
  puVar7[4] = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return puVar7;
}


