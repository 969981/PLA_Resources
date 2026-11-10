/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022169d0; name: FUN_022169d0
 */


/* WARNING: Removing unreachable block (ram,0x02216a78) */

undefined8 FUN_022169d0(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *this;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  string *psVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  ulong local_a0;
  undefined4 local_98;
  ulong *local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  local_80 = local_80 & 0xffffffff00000000;
  local_88 = param_1;
  lVar8 = FUN_00150ba0(param_1,0xfff0b9d3,&local_80);
  if ((lVar8 != 0xccc2ccc1) || ((int)local_80 == 0)) {
    uVar10 = FUN_022191f0(param_1);
    return uVar10;
  }
  local_90 = &local_88;
  FUN_02218c54(&local_90);
  this = PTR_DAT_04383920;
  puVar3 = PTR_DAT_04383918;
  lVar8 = 0;
  lVar2 = tpidr_el0;
  while( true ) {
    if (lVar8 == 1) {
      pbVar9 = (byte *)FUN_020213bc();
      goto LAB_02216adc;
    }
    if (lVar8 == 0) break;
    FUN_02218fac();
    puVar1 = DAT_043de6e0;
    if ((DAT_043de6d0 & 1) == 0) {
      puVar1 = &DAT_043de6d1;
    }
    FUN_00151a70(local_88,0xfff0b9d8,puVar1);
    FUN_00152090(local_88,0xffffffff);
    while( true ) {
      uVar6 = FUN_0014fef0(local_88);
      iVar7 = FUN_00150310(local_88,uVar6);
      if (iVar7 != 0) {
        local_80 = local_88;
        local_78 = CONCAT44(local_78._4_4_,2);
        local_a0 = local_88;
        local_98 = 3;
        FUN_008ea660(auStack_68,local_88,&local_80,&local_a0,uVar6);
      }
      FUN_0014ff10(local_88,3);
      lVar8 = lVar8 + 1;
      if (lVar8 == 4) {
        FUN_0014ff10(local_88,0);
        return 0;
      }
      if (lVar8 != 2) break;
      pbVar9 = (byte *)FUN_02020d8c();
LAB_02216adc:
      pbVar13 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar13 = pbVar9 + 1;
      }
LAB_02216aec:
      FUN_00151a70(local_88,0xfff0b9d8,pbVar13);
    }
  }
  if (((*puVar3 & 1) != 0) || (iVar7 = __cxa_guard_acquire(puVar3), iVar7 == 0)) goto LAB_02216abc;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0x2e6c6f7308;
  uVar10 = FUN_02020070();
  psVar11 = (string *)FUN_022197e4(&local_80,uVar10);
  std::string::string((string *)this,psVar11);
  lVar5 = local_70;
  plVar4 = DAT_043f1798;
  if (((local_80 & 1) != 0) && (local_70 != 0)) {
    plVar14 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar14 = plVar4;
    }
    uVar12 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar5,0,8);
        goto LAB_02216c9c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar5,0,8);
  }
LAB_02216c9c:
  FUN_00100250(PTR__string_04379718,this,&PTR_LOOP_0411a000);
  __cxa_guard_release(puVar3);
LAB_02216abc:
  pbVar13 = *(byte **)(this + 0x10);
  if ((*this & 1) != 0) goto LAB_02216aec;
  pbVar13 = this + 1;
  goto LAB_02216aec;
}


