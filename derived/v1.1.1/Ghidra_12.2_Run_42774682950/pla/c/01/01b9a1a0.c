/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9a1a0; name: FUN_01b9a1a0
 */


void FUN_01b9a1a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_01b385b8(param_1,param_3);
  param_1[0xc6] = &PTR_LAB_04243280;
  param_1[199] = &PTR_LAB_042432e0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)((long)param_1 + 0x644) = 0;
  FUN_0177e8a8(param_1 + 0xc9);
  *param_1 = &PTR_FUN_04242ba8;
  param_1[0xd4] = 0;
  param_1[9] = &PTR_LAB_04242d38;
  param_1[10] = &PTR_FUN_04242e18;
  param_1[0xc6] = &PTR_LAB_04242e40;
  param_1[199] = &PTR_LAB_04242ea0;
  param_1[0xc9] = &PTR_LAB_04242ee8;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xea] = &DAT_cbf29ce484222645;
  param_1[0xeb] = &DAT_cbf29ce484222645;
  puVar2 = PTR_DAT_0437a0d0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar2 = PTR_DAT_0437a0d8;
  param_1[0xee] = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[0xef] = *(undefined8 *)(puVar2 + 8);
  plVar1 = *(long **)(puVar2 + 0x18);
  param_1[0xf0] = *(undefined8 *)(puVar2 + 0x10);
  param_1[0xf1] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xf2) = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  FUN_01b9a45c(param_1 + 0xf8);
  *(undefined4 *)((long)param_1 + 0x824) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined4 *)((long)param_1 + 0x87c) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)((long)param_1 + 0x884) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)((long)param_1 + 0x81f) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined8 *)((long)param_1 + 0x8bc) = 0;
  *(undefined8 *)((long)param_1 + 0x8c1) = 0;
  *(undefined8 *)((long)param_1 + 0x88c) = 0;
  *(undefined8 *)((long)param_1 + 0x894) = 0;
  *(undefined8 *)((long)param_1 + 0x89c) = 0;
  *(undefined8 *)((long)param_1 + 0x8a4) = 0;
  *(undefined8 *)((long)param_1 + 0x8ac) = 0;
  *(undefined8 *)((long)param_1 + 0x8b4) = 0;
  *(undefined4 *)((long)param_1 + 0x8cf) = 0;
  *(undefined4 *)((long)param_1 + 0x8cc) = 0;
  *(undefined4 *)((long)param_1 + 0x8d4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x11b) = 0;
  *(undefined1 *)((long)param_1 + 0x8da) = 0;
  FUN_01b9a54c(param_1 + 0x11c);
  FUN_01b9a54c(param_1 + 0x123);
  *(undefined4 *)(param_1 + 299) = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  *(undefined4 *)((long)param_1 + 0x953) = 0;
  *(undefined1 *)((long)param_1 + 0x95c) = 1;
  *(undefined8 *)((long)param_1 + 0x95d) = 0;
  *(undefined8 *)((long)param_1 + 0x965) = 0;
  *(undefined4 *)((long)param_1 + 0x96c) = 0;
  FUN_01b9a63c(param_1 + 0x12e);
  *(undefined4 *)(param_1 + 0x155) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x13b) = 0;
  param_1[0x13c] = &DAT_cbf29ce484222645;
  param_1[0x13d] = &DAT_cbf29ce484222645;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  param_1[0x151] = &DAT_cbf29ce484222645;
  *(undefined1 *)(param_1 + 0x152) = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  *(undefined1 *)((long)param_1 + 0xaac) = 0;
  param_1[0x15b] = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  param_1[0x15d] = &DAT_cbf29ce484222645;
  param_1[0x15e] = &DAT_03996322;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  *(undefined2 *)(param_1 + 0x162) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xb1c,0,1);
  param_1[0x165] = 0;
  *(undefined1 *)(param_1 + 0x166) = 0;
  param_1[0x167] = &DAT_cbf29ce484222645;
  FUN_01b9a810(param_1,param_2);
  return;
}


