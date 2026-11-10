/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1c384; name: FUN_02c1c384
 */


undefined8 *
FUN_02c1c384(undefined8 param_1,long *param_2,undefined8 *param_3,undefined4 *param_4,ulong *param_5
            ,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long local_78;
  undefined4 local_70;
  undefined8 local_6c;
  
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
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xe0,8);
  if (puVar7 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar1 = *param_4;
  uVar10 = *param_5;
  uVar2 = *param_6;
  uVar3 = *param_7;
  uVar9 = *param_8;
  FUN_02bbfbb4(puVar7,*param_3);
  *puVar7 = &PTR_LAB_04288c90;
  puVar7[9] = &PTR_LAB_04288cd0;
  FUN_02c1c550(puVar7 + 0x15);
  uVar8 = (long)(puVar7[0x16] - puVar7[0x15]) >> 4;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
    if (uVar10 < uVar8) {
      puVar7[0x16] = puVar7[0x15] + uVar10 * 0x10;
    }
  }
  else {
    FUN_02c1cc94(puVar7 + 0x15,uVar10 - uVar8);
  }
  local_78 = uVar10 << 4;
  local_6c = 0;
  local_70 = uVar2;
  FUN_02bbfe84(puVar7,&local_78,uVar1,uVar3,uVar9);
  puVar7[1] = param_2;
  puVar7[2] = puVar7;
  puVar7[3] = 0xe0;
  puVar7[4] = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return puVar7;
}


