/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02558d4c; name: FUN_02558d4c
 */


undefined8 * FUN_02558d4c(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x110,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0255829c(puVar7);
  *puVar7 = &PTR_LAB_0425c7c0;
  puVar7[9] = &PTR_LAB_0425c848;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  FUN_00b63974(puVar7 + 0xb,param_3);
  puVar7[0xe] = 0;
  puVar7[0xd] = 0;
  FUN_00b63bec(puVar7 + 0xd,param_3 + 0x10);
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x11] = 0;
  if (*(code **)(param_3 + 0x30) != (code *)0x0) {
    (**(code **)(param_3 + 0x30))(param_3 + 0x40,puVar7 + 0x14);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    puVar7[0x12] = *(undefined8 *)(param_3 + 0x30);
    puVar7[0x13] = uVar3;
    puVar7[0x10] = uVar1;
    puVar7[0x11] = uVar2;
  }
  *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(param_3 + 0xa0);
  *(undefined1 *)((long)puVar7 + 0x104) = *(undefined1 *)(param_3 + 0xa4);
  *(undefined1 *)((long)puVar7 + 0x105) = 0;
  puVar7[1] = param_2;
  puVar7[2] = puVar7;
  puVar7[3] = 0x110;
  puVar7[4] = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return puVar7;
}


