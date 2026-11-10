/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01372b5c; name: FUN_01372b5c
 */


undefined8 * FUN_01372b5c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x21c0,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_00d408b8(puVar4,*param_2,*param_3,*param_4);
  *puVar4 = &PTR_FUN_04207d08;
  *(undefined1 *)((long)puVar4 + 0x5ab) = 0;
  puVar4[9] = &PTR_LAB_04207da8;
  puVar4[10] = &PTR_LAB_04207df0;
  puVar4[0xb6] = 0;
  FUN_0137ce90(puVar4 + 0xb7);
  FUN_0137ce90(puVar4 + 0xbe);
  FUN_0137ce90(puVar4 + 0xc5);
  FUN_0137ce90(puVar4 + 0xcc);
  FUN_0137ce90(puVar4 + 0xd3);
  FUN_0137ce90(puVar4 + 0xda);
  FUN_0137ce90(puVar4 + 0xe1);
  FUN_0137ce90(puVar4 + 0xe8);
  FUN_0137ce90(puVar4 + 0xef);
  FUN_0137ce90(puVar4 + 0xf6);
  puVar4[0x111] = 0;
  puVar4[0x110] = 0;
  puVar4[0x10f] = 0;
  puVar4[0x10e] = 0;
  puVar4[0x11e] = 0;
  puVar4[0x11f] = 0;
  puVar4[0x120] = 0;
  puVar4[0x121] = 0;
  puVar4[0xfd] = 0;
  puVar4[0xfe] = 0;
  puVar4[0xff] = 0;
  puVar4[0x100] = 0;
  puVar4[0x101] = 0;
  FUN_0137af08(puVar4 + 0x12e);
  FUN_0137af08(puVar4 + 0x22f);
  FUN_0137af08(puVar4 + 0x330);
  puVar4[0x437] = 0;
  puVar4[0x436] = 0;
  puVar4[0x435] = 0;
  puVar4[0x434] = 0;
  puVar4[0x431] = 0;
  puVar4[0x432] = 0;
  *(undefined4 *)(puVar4 + 0x433) = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0x21c0;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


