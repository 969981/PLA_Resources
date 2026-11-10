/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d16bb0; name: FUN_01d16bb0
 */


undefined8 *
FUN_01d16bb0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,int *param_5,
            undefined8 param_6,undefined4 *param_7,char *param_8)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x4b0,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  iVar3 = *param_5;
  uVar7 = *param_3;
  uVar6 = *param_4;
  uVar1 = *param_7;
  FUN_02909348(puVar5,iVar3 == 1 || *param_8 != '\0',1);
  *puVar5 = &PTR_LAB_04275358;
  puVar5[9] = &PTR_LAB_04275480;
  puVar5[10] = &PTR_LAB_04275560;
  FUN_00947cf8(puVar5 + 0x87,uVar7);
  FUN_00947cf8(puVar5 + 0x88,uVar6);
  *(int *)(puVar5 + 0x89) = iVar3;
  puVar5[0x8a] = 0;
  puVar5[0x8b] = 0;
  puVar5[0x8c] = 0;
  puVar5[0x8d] = 0;
  puVar5[0x8e] = 0;
  puVar5[0x8f] = 0;
  puVar5[0x90] = 0;
  puVar5[0x91] = 0;
  puVar5[0x92] = 0;
  *(undefined4 *)(puVar5 + 0x93) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x49c) = 0;
  *(undefined4 *)((long)puVar5 + 0x49f) = 0;
  puVar5[1] = param_2;
  puVar5[2] = puVar5;
  puVar5[3] = 0x4b0;
  puVar5[4] = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return puVar5;
}


