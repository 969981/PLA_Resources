/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc7a40; name: FUN_02bc7a40
 */


void FUN_02bc7a40(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  VibrationTarget *this;
  long lVar6;
  VibrationNodeConnection *this_00;
  VibrationDeviceHandle *pVVar7;
  undefined8 uVar8;
  long lVar9;
  VibrationNode *pVVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long local_80;
  long local_78;
  undefined8 local_70;
  int local_64;
  
  iVar5 = nn::hid::GetNpadStyleSet((uint *)(param_1 + 0x68));
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x6c) != iVar5)) {
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_02bc8af0(param_1);
    pVVar7 = (VibrationDeviceHandle *)(param_1 + 0x78);
    iVar5 = nn::hid::GetVibrationDeviceHandles
                      (pVVar7,2,(uint *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    *(int *)(param_1 + 0x70) = iVar5;
    if (0 < iVar5) {
      lVar9 = 0;
      do {
        nn::hid::InitializeVibrationDevice(pVVar7);
        lVar9 = lVar9 + 1;
        pVVar7 = pVVar7 + 4;
      } while (lVar9 < *(int *)(param_1 + 0x70));
      if (0 < *(int *)(param_1 + 0x70)) {
        local_78 = param_1 + 0x80;
        local_80 = param_1 + 0xa0;
        lVar9 = 0;
        pVVar7 = (VibrationDeviceHandle *)(param_1 + 0x78);
        do {
          nn::os::LockMutex((MutexType *)&DAT_043f1110);
          plVar14 = *(long **)(param_1 + 8);
          this = (VibrationTarget *)(**(code **)(*plVar14 + 0x10))(plVar14,0x50,8);
          if (this == (VibrationTarget *)0x0) {
            uVar8 = 0;
            local_70 = 0;
            plVar14 = (long *)0x0;
          }
          else {
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0
               )) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02bc7d7c;
            *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar14;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            nn::hid::VibrationTarget::VibrationTarget(this,pVVar7);
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            uVar8 = 0x50;
            local_70 = 8;
          }
          nn::hid::VibrationTarget::GetVibrationDeviceInfo((VibrationDeviceInfo *)this);
          plVar13 = *(long **)(param_1 + 8);
          plVar3 = &local_78;
          if (local_64 != 1) {
            plVar3 = &local_80;
          }
          pVVar10 = *(VibrationNode **)*plVar3;
          this_00 = (VibrationNodeConnection *)(**(code **)(*plVar13 + 0x10))(plVar13,0x38,8);
          if (this_00 == (VibrationNodeConnection *)0x0) {
            plVar13 = (long *)0x0;
            uVar11 = 0;
            uVar12 = 0;
            cVar2 = *(char *)(param_1 + 0x74);
          }
          else {
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0
               )) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02bc7d7c;
            *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar13;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            nn::hid::VibrationNodeConnection::VibrationNodeConnection
                      (this_00,pVVar10,(VibrationNode *)this);
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            uVar11 = 0x38;
            uVar12 = 8;
            cVar2 = *(char *)(param_1 + 0x74);
          }
          if (cVar2 == '\0') {
            nn::hid::VibrationTarget::UnsetVibrationDeviceHandle();
          }
          if (1 < *(ulong *)(param_1 + 0x140)) {
LAB_02bc7d7c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar1 = (undefined8 *)(param_1 + 0xc0 + *(ulong *)(param_1 + 0x140) * 0x40);
          *puVar1 = this;
          puVar1[1] = plVar14;
          puVar1[2] = uVar8;
          puVar1[3] = local_70;
          puVar1[4] = this_00;
          puVar1[5] = plVar13;
          puVar1[6] = uVar11;
          puVar1[7] = uVar12;
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          nn::os::UnlockMutex((MutexType *)&DAT_043f1110);
          lVar9 = lVar9 + 1;
          pVVar7 = pVVar7 + 4;
        } while (lVar9 < *(int *)(param_1 + 0x70));
      }
    }
  }
  return;
}


