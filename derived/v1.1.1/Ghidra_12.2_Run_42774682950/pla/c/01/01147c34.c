/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01147c34; name: FUN_01147c34
 */


void FUN_01147c34(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  uVar2 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar2;
  FUN_02a7b8f8(&local_78,uVar2,param_2);
  *(undefined8 *)(param_1 + 0xa8) = local_78;
  *(undefined4 *)(param_1 + 0xc0) = local_60;
  *(undefined8 *)(param_1 + 0xb0) = local_70;
  *(undefined8 *)(param_1 + 0xb8) = uStack_68;
  *(undefined8 *)(param_1 + 200) = local_58;
  *(undefined8 *)(param_1 + 0xd0) = local_50;
  plVar3 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = local_48;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  uVar2 = local_40;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = uStack_30;
  *(undefined8 *)(param_1 + 0xf8) = local_28;
  *(undefined8 *)(param_1 + 0xe8) = local_38;
  FUN_02a8f1d0((undefined8 *)(param_1 + 0xa8));
  FUN_01147f14(*(undefined8 *)(param_1 + 0x100));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x220));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x228));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x230));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x238));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x240));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x248));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x250));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 600));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x260));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x268));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x270));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x278));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x280));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x288));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x290));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x298));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2a0));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2a8));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2b0));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2b8));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2c0));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2c8));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2d0));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2d8));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2e0));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2e8));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2f0));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x2f8));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x300));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x308));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x310));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x318));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 800));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x328));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x330));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x338));
  FUN_010e0530(*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0x248));
  FUN_010cd044(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x340));
  return;
}


