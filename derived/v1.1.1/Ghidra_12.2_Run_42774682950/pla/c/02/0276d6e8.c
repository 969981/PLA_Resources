/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276d6e8; name: FUN_0276d6e8
 */


void FUN_0276d6e8(long *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar4 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar4;
  if (lVar4 != 0) {
    FUN_02789e78(lVar4);
    FUN_027870f0();
    puVar5 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)param_1[1];
    if (puVar5 != puVar1) {
      puVar6 = (undefined8 *)((ulong)local_d8 | 4);
      do {
        *(undefined1 *)(puVar6 + 7) = 0;
        *puVar6 = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        local_9b = 1;
        local_68 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        local_90 = 0;
        local_d8[0] = 0;
        local_cc = *(undefined8 *)(puVar5 + 0x19);
        local_c4 = *(undefined8 *)(puVar5 + 0x1b);
        uStack_bc = *(undefined8 *)(puVar5 + 0x1d);
        local_b4 = *(undefined8 *)(puVar5 + 0x1f);
        local_ac = *(undefined8 *)(puVar5 + 0x21);
        uStack_a4 = *(undefined8 *)(puVar5 + 0x23);
        uVar2 = FUN_02786b0c(puVar5[1]);
        local_88 = CONCAT44(local_88._4_4_,puVar5[2]);
        local_9c = *(undefined1 *)(puVar5 + 3);
        local_9b = *(undefined1 *)((long)puVar5 + 0xd);
        local_98 = *(undefined8 *)(puVar5 + 4);
        local_90 = CONCAT44(uVar2,puVar5[6]);
        uStack_d0 = *puVar5;
        local_d4 = 0;
        uStack_70 = CONCAT17(*(undefined1 *)((long)puVar5 + 0x3d),
                             CONCAT16(*(undefined1 *)(puVar5 + 0xf),(undefined6)uStack_70));
        local_68 = puVar5[0xe];
        FUN_02c30490((long)&local_88 + 4,puVar5 + 7);
        FUN_0278a3ac(lVar4,local_d8);
        puVar5 = puVar5 + 0x26;
      } while (puVar1 != puVar5);
    }
    FUN_0278c790(lVar4);
    FUN_0278ec68(lVar4,1);
  }
  return;
}


