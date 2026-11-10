/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c9384; name: FUN_019c9384
 */


void FUN_019c9384(undefined8 *param_1,undefined1 *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  *param_2 = 0;
  if (*param_3 != '\0') {
    memcpy(param_2 + 0x10,param_3 + 0x10,0xa0);
    *param_2 = 1;
  }
  uVar7 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_3 + 0xb8);
  *(undefined8 *)(param_2 + 0xb0) = uVar7;
  uVar7 = *(undefined8 *)(param_3 + 0xc0);
  uVar2 = *(undefined8 *)(param_3 + 200);
  uVar1 = *(undefined8 *)(param_3 + 0xd0);
  uVar3 = *(undefined8 *)(param_3 + 0xd8);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xc0) = uVar7;
  *(undefined8 *)(param_2 + 200) = uVar2;
  *(undefined8 *)(param_2 + 0xd0) = uVar1;
  *(undefined8 *)(param_2 + 0xd8) = uVar3;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  FUN_019c86bc(param_2 + 0xe0,param_3 + 0xe0);
  uVar7 = *(undefined8 *)(param_3 + 0x108);
  *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
  *(undefined8 *)(param_2 + 0x108) = uVar7;
  uVar7 = *(undefined8 *)(param_3 + 0xf0);
  *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_3 + 0x100);
  *(undefined8 *)(param_2 + 0xf0) = uVar7;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  FUN_019c86bc(param_2 + 0x110,param_3 + 0x110);
  uVar7 = *(undefined8 *)(param_3 + 0x138);
  *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_3 + 0x128);
  *(undefined8 *)(param_2 + 0x138) = uVar7;
  uVar7 = *(undefined8 *)(param_3 + 0x120);
  *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_3 + 0x130);
  *(undefined8 *)(param_2 + 0x120) = uVar7;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  FUN_019c86bc(param_2 + 0x140,param_3 + 0x140);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


