/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dc5d74; name: FUN_01dc5d74
 */


undefined8 * FUN_01dc5d74(long *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x4b0,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  iVar2 = *param_4;
  uVar6 = *param_2;
  uVar5 = *param_3;
  FUN_02909348(puVar4,iVar2 == 1,1);
  *puVar4 = &PTR_LAB_04275358;
  puVar4[9] = &PTR_LAB_04275480;
  puVar4[10] = &PTR_LAB_04275560;
  FUN_00947cf8(puVar4 + 0x87,uVar6);
  FUN_00947cf8(puVar4 + 0x88,uVar5);
  puVar4[0x93] = 0x42c80000;
  *(int *)(puVar4 + 0x89) = iVar2;
  puVar4[0x8a] = 0;
  puVar4[0x8b] = 0;
  puVar4[0x8c] = 0;
  puVar4[0x8d] = 0;
  puVar4[0x8e] = 0;
  puVar4[0x8f] = 0;
  puVar4[0x90] = 0;
  puVar4[0x91] = 0;
  puVar4[0x92] = 0;
  *(undefined4 *)((long)puVar4 + 0x49f) = 0;
  puVar4[1] = param_1;
  puVar4[2] = puVar4;
  puVar4[3] = 0x4b0;
  puVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return puVar4;
}


