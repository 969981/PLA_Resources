/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0098ac84; name: FUN_0098ac84
 */


undefined8 * FUN_0098ac84(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
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
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x2a8,8);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar5 = *param_4;
  FUN_02a76058(puVar4,param_3,uVar5);
  puVar4[0x4d] = 0;
  puVar4[0x4c] = 0;
  *puVar4 = &PTR_LAB_042723f0;
  puVar4[1] = param_2;
  puVar4[0x4b] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x4e] = 0;
  puVar4[0x4f] = 0;
  puVar4[0x50] = 0;
  puVar4[0x51] = uVar5;
  puVar4[0x53] = 0;
  *(undefined4 *)(puVar4 + 0x54) = 0;
  puVar4[9] = &PTR_LAB_04272450;
  puVar4[10] = &PTR_LAB_04272498;
  puVar4[0x52] = 0x3ffffffffffffff;
  puVar4[2] = puVar4;
  puVar4[3] = 0x2a8;
  puVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


