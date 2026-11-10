/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc8bd4; name: FUN_02dc8bd4
 */


void FUN_02dc8bd4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xd0,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *puVar8 = &PTR_LAB_0429a6a8;
    puVar8[1] = param_2;
    puVar6 = PTR_DAT_04382320;
    *(undefined1 *)(puVar8 + 2) = 1;
    puVar5 = PTR_DAT_0437a0f8;
    *(undefined4 *)((long)puVar8 + 0x14) = 0x3f800000;
    uVar10 = *(undefined8 *)puVar6;
    uVar1 = *(undefined8 *)(puVar6 + 8);
    uVar11 = *(undefined8 *)puVar5;
    uVar2 = *(undefined8 *)(puVar5 + 8);
    *(undefined1 *)(puVar8 + 8) = 0;
    puVar8[4] = uVar10;
    puVar8[5] = uVar1;
    puVar8[6] = uVar11;
    puVar8[7] = uVar2;
    *(undefined8 *)((long)puVar8 + 0x44) = 0x40490fdb40490fdb;
    *(undefined8 *)((long)puVar8 + 0x4c) = 0x40490fdb40490fdb;
    puVar5 = PTR_DAT_0437a518;
    uVar1 = *(undefined8 *)(PTR_DAT_0437a518 + 0x18);
    uVar10 = *(undefined8 *)(PTR_DAT_0437a518 + 0x20);
    uVar2 = *(undefined8 *)(PTR_DAT_0437a518 + 0x28);
    uVar11 = *(undefined8 *)(PTR_DAT_0437a518 + 0x30);
    uVar3 = *(undefined8 *)(PTR_DAT_0437a518 + 0x38);
    puVar8[0xe] = *(undefined8 *)(PTR_DAT_0437a518 + 0x10);
    puVar8[0xf] = uVar1;
    uVar1 = *(undefined8 *)puVar5;
    uVar4 = *(undefined8 *)(puVar5 + 8);
    puVar8[0x12] = uVar11;
    puVar8[0x13] = uVar3;
    puVar8[0xc] = uVar1;
    puVar8[0xd] = uVar4;
    puVar8[0x10] = uVar10;
    puVar8[0x11] = uVar2;
    uVar10 = 0x10;
    uVar11 = 0xd0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *param_1 = puVar8;
  param_1[1] = param_2;
  param_1[2] = uVar11;
  param_1[3] = uVar10;
  return;
}


