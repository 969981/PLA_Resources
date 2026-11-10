/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ce274; name: FUN_010ce274
 */


bool FUN_010ce274(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [12];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  Sha256Impl aSStack_118 [120];
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined8 local_90;
  undefined **ppuStack_88;
  long local_80;
  long lStack_78;
  undefined1 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  
  lVar8 = FUN_010ce508();
  lVar1 = lVar8 + 0x20;
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,lVar1,8);
  if (lVar9 == 0) {
    bVar7 = false;
  }
  else {
    local_70 = 0;
    local_a0 = &PTR_LAB_041f06d0;
    ppuStack_98 = &PTR_LAB_041f0588;
    local_68 = &DAT_03a78d24;
    local_90 = 0;
    ppuStack_88 = &PTR_LAB_041f0510;
    local_60 = 0x7f;
    uStack_58 = 0;
    local_80 = lVar9;
    lStack_78 = lVar8;
    uVar10 = FUN_010ce5dc(param_1,&local_a0);
    if ((uVar10 & 1) == 0) {
      bVar7 = false;
    }
    else {
      FUN_01150950(auStack_128);
      FUN_01150960(auStack_128);
      FUN_011509cc(auStack_128,lVar9,lVar8,0);
      FUN_01150a18(&local_148,auStack_128);
      puVar3 = (undefined8 *)(lVar9 + lVar8);
      puVar3[2] = local_138;
      puVar3[3] = uStack_130;
      *puVar3 = local_148;
      puVar3[1] = uStack_140;
      local_48 = (long *)0x0;
      auVar11 = FUN_010ce800(&local_48,param_3,lVar1,0);
      bVar7 = false;
      if ((auVar11._8_4_ == 0) && ((auVar11._0_8_ >> 0x20 & 0xff) != 0)) {
        auVar11 = FUN_02a8d6bc(local_48,lVar9,lVar1);
        if ((auVar11._0_8_ >> 0x20 & 0xff) == 0) {
          bVar7 = false;
        }
        else {
          bVar7 = auVar11._8_4_ == 0;
        }
      }
      if (local_48 != (long *)0x0) {
        lVar8 = local_48[0xb];
        piVar2 = (int *)(lVar8 + 0xc);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_118);
    }
    uVar10 = (**(code **)(*param_2 + 0xc0))(param_2);
    if ((uVar10 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(param_2,lVar9,lVar1,8);
        return bVar7;
      }
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar9,lVar1,8);
  }
  return bVar7;
}


