/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02955688; name: FUN_02955688
 */


void FUN_02955688(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
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
  if (lVar6 == 0) {
    *param_2 = &PTR_LAB_04276a58;
    uVar3 = *(ushort *)(param_3 + 0xc);
    bVar1 = *(byte *)(param_3 + 0xe);
    bVar2 = *(byte *)(param_3 + 10);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_3 + 8);
    *(ushort *)((long)param_2 + 0xe) = (ushort)bVar1;
    *(ushort *)((long)param_2 + 10) = (ushort)bVar2;
    *(ushort *)((long)param_2 + 0xc) = uVar3;
    memcpy(param_2 + 2,(void *)(param_3 + 0x10),(ulong)uVar3);
    return;
  }
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  *param_2 = &PTR_LAB_04276a58;
  bVar1 = *(byte *)(param_3 + 0xe);
  bVar2 = *(byte *)(param_3 + 10);
  uVar3 = *(ushort *)(param_3 + 0xc);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_3 + 8);
  *(ushort *)((long)param_2 + 0xe) = (ushort)bVar1;
  *(ushort *)((long)param_2 + 10) = (ushort)bVar2;
  *(ushort *)((long)param_2 + 0xc) = uVar3;
  memcpy(param_2 + 2,(void *)(param_3 + 0x10),(ulong)uVar3);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return;
}


