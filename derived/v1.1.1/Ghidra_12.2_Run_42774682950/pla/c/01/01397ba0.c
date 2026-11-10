/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01397ba0; name: FUN_01397ba0
 */


void FUN_01397ba0(undefined8 *param_1,long param_2,long param_3)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  undefined4 local_110 [8];
  undefined8 local_f0;
  undefined1 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined8 local_b6;
  undefined4 local_ae;
  undefined8 local_aa;
  undefined8 local_a2;
  undefined8 local_9a;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_8a;
  long *local_80;
  long local_78;
  
  if (param_2 != 0) {
    local_78 = param_2;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148cdc(&local_80);
    if (local_80 != (long *)0x0) {
      if (*(char *)(param_3 + 0xf) == '\x01') {
        local_f0 = 0;
        local_e0 = 0xffffffffffffffff;
        uStack_d8 = 0x3ffffffff;
        local_c8 = 0x38a;
        local_c4 = 0xff000100000000;
        local_bc = 0xffffffff;
        local_b8 = 0x1ff;
        local_90 = 0xffff;
        local_e8 = 0;
        local_d0 = 0xffffffffffffffff;
        local_8c = 0;
        local_ae = 0xffffffff;
        local_aa = 0;
        local_a2 = 0;
        local_9a = 0;
        local_8a = 0xffff01000100;
        local_b6 = 0xffffffffffffffff;
        if (*(char *)(param_3 + 0x23d) == '\x01') {
          uVar5 = 1;
        }
        else {
          uVar5 = (ushort)*(byte *)(param_3 + 0x23c);
          if (*(byte *)(param_3 + 0x23c) == 0) {
            puVar4 = (undefined8 *)FUN_00d14a3c();
            *(undefined8 *)PTR_DAT_0437b1b8 = *puVar4;
            FUN_00d1450c();
            local_110[0] = 0x630000;
            sVar1 = FUN_01398f98(local_110);
            uVar5 = sVar1 + 1;
          }
        }
        local_c4._0_6_ = CONCAT24(uVar5,(undefined4)local_c4);
        local_e0 = (ulong)*(uint *)(param_3 + 0x20);
        if (*(uint *)(param_3 + 0x20) == 0) {
          local_e0 = 0xffffffffffffffff;
        }
        uVar3 = (ulong)*(uint *)(param_3 + 0x18);
        if (*(uint *)(param_3 + 0x18) == 0) {
          uVar3 = FUN_01123f68(local_80);
        }
        local_d0 = uVar3 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x01397cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_01397ce0 + (ulong)(byte)(&DAT_03a7b3ac)[*(byte *)(param_3 + 0x240)] * 4))
                  (0x1ffffffff,uVar3,*(undefined4 *)(param_3 + 0x24));
        return;
      }
      *param_1 = 0;
      uVar3 = FUN_02a43a5c(local_80[0xb]);
      if ((uVar3 & 1) == 0) {
        return;
      }
      (**(code **)(*local_80 + 0x20))(local_80);
      return;
    }
  }
  *param_1 = 0;
  return;
}


