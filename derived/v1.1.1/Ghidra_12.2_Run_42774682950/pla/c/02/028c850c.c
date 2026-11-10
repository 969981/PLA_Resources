/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c850c; name: FUN_028c850c
 */


undefined1  [16] FUN_028c850c(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar12 = FUN_02a768ac();
  uVar9 = auVar12._0_8_;
  uVar8 = uVar9 >> 0x28;
  if ((uVar9 >> 0x20 & 0xff) == 0) {
    uVar9 = 0;
  }
  else {
    iVar3 = auVar12._8_4_;
    if (iVar3 == 0) {
      auVar12 = (**(code **)(*param_1 + 0x48))(param_1);
      uVar9 = auVar12._0_8_;
      uVar8 = uVar9 >> 0x28;
      if (*(char *)((long)param_1 + 0x1e2) != '\0') {
        nn::fs::CloseFile(param_1[0x1c]);
        *(undefined1 *)((long)param_1 + 0x1e2) = 0;
      }
      iVar3 = auVar12._8_4_;
    }
    uVar9 = uVar9 >> 0x20;
    if ((iVar3 == 0) && ((uVar9 & 0xff) != 0)) {
      plVar7 = (long *)param_1[0x3d];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)param_1[1];
      }
      puVar10 = (uint *)param_1[0x4a];
      uVar2 = *puVar10;
      plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x78,8);
      if (plVar4 == (long *)0x0) {
        plVar7 = (long *)0x0;
        lVar11 = 0;
        lVar5 = 0;
      }
      else {
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
        puVar1 = PTR_DAT_04387fc8 + 0x10;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *plVar4 = (long)puVar1;
        FUN_028c4878(plVar4 + 1);
        plVar4[0xe] = (long)puVar10 + (ulong)uVar2;
        FUN_028c4a3c(plVar4,plVar7);
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        lVar5 = 8;
        lVar11 = 0x78;
      }
      lVar6 = param_1[0x4e];
      param_1[0x4e] = (long)plVar4;
      if (lVar6 != 0) {
        FUN_028c9150(param_1 + 0x4f);
      }
      param_1[0x4f] = (long)plVar7;
      param_1[0x50] = lVar11;
      param_1[0x51] = lVar5;
    }
  }
  auVar13._8_8_ = auVar12._8_8_ & 0xffffffff;
  auVar13._0_8_ = uVar8 << 0x28 | auVar12._0_8_ & 0xffffffff | (uVar9 & 0xff) << 0x20;
  return auVar13;
}


