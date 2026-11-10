/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b4b4c; name: FUN_028b4b4c
 */


void FUN_028b4b4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  int *piVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  
  uVar10 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  piVar7 = (int *)*param_3;
  puVar11 = &DAT_cbf29ce484222645;
  *(undefined4 *)((long)param_2 + 0x2c) = 0;
  param_2[4] = 0;
  *param_2 = piVar7;
  param_2[1] = &DAT_cbf29ce484222645;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[2] = &DAT_03996322;
  param_2[3] = 0;
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar7 + uVar9);
    lVar12 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar6 = strlen((char *)(lVar12 + 4));
  bVar2 = *(byte *)(lVar12 + 4);
  if (bVar2 != 0) {
    pbVar8 = (byte *)(lVar12 + 5);
    do {
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar2 != 0);
  }
  param_2[1] = puVar11;
  param_2[2] = (char *)(lVar12 + 4);
  param_2[3] = sVar6;
  param_2[4] = 0;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


