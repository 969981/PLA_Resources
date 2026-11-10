/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7e250; name: FUN_02e7e250
 */


void FUN_02e7e250(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  code *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  float fVar21;
  char local_64 [4];
  
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  uVar12 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x90) = uVar12;
  if (0 < (int)DAT_0440a248) {
    lVar20 = (ulong)((int)DAT_0440a248 - 1) * 0x18;
    iVar11 = (int)DAT_0440a248;
    do {
      iVar11 = iVar11 + -1;
      pcVar18 = *(code **)(DAT_0440a240 + lVar20);
      if (((DAT_0440a318 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0440a318), iVar10 != 0)) {
        DAT_0440a310 = &PTR_LAB_042a7050;
        __cxa_guard_release(&DAT_0440a318);
      }
      (*pcVar18)(&DAT_0440a310,2,*(undefined8 *)(DAT_0440a240 + lVar20 + 8));
      lVar20 = lVar20 + -0x18;
    } while (0 < iVar11);
  }
  uVar8 = FUN_02ec98a8(0);
  uVar4 = DAT_042ab268;
  uVar9 = DAT_042ab258;
  if (DAT_0440a5b8 == '\0') {
    *(undefined4 *)(param_1 + 0xa0) = 0;
LAB_02e7e2c8:
    if (uVar8 != 0) goto LAB_02e7e7c4;
LAB_02e7e2cc:
    uVar8 = *(int *)(param_1 + 0x98) + 1;
    *(uint *)(param_1 + 0x98) = uVar8;
    uVar9 = 0;
    if (DAT_042ab25c != 0) {
      uVar9 = (uint)DAT_0440a1c8 / DAT_042ab25c;
    }
    if ((uVar8 <= uVar9) ||
       (((DAT_0440a7c8 != '\0' && ((DAT_042aa0f0 & 1) == 0)) ||
        ((float)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) / DAT_0440a328 <=
         (float)(uint)DAT_0440a1c8)))) {
      uVar8 = 0;
      iVar11 = (int)DAT_0440a258;
      goto joined_r0x02e7e310;
    }
    FUN_02ec9278(1,1);
    uVar12 = nn::os::GetSystemTick();
    uVar8 = 0;
    *(undefined8 *)(param_1 + 0x88) = uVar12;
  }
  else {
    if ((DAT_0440a7c8 == '\0') || ((DAT_042aa0f0 & 1) != 0)) {
      if (*(long *)(param_1 + 0x90) < *(long *)(param_1 + 0x88)) goto LAB_02e7e2cc;
      fVar21 = ((float)DAT_042ab258 * (float)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88))
               ) / (DAT_0440a328 * 1000.0 * (float)DAT_042ab268) + *(float *)(param_1 + 0xa0);
      uVar8 = (uint)fVar21;
      if (uVar8 != 0) {
        *(float *)(param_1 + 0xa0) = fVar21 - (float)uVar8;
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar9 / uVar4;
      }
      if (uVar8 <= uVar2) goto LAB_02e7e2c8;
    }
    uVar8 = 1;
LAB_02e7e7c4:
    if (*(long *)(param_1 + 0x88) < *(long *)(param_1 + 0x90)) {
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x90);
    }
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar11 = (int)DAT_0440a258;
joined_r0x02e7e310:
  do {
    DAT_0440a258._0_4_ = iVar11;
    if ((uVar8 != 0) && (0 < iVar11)) {
      lVar20 = (ulong)(iVar11 - 1) * 0x18;
      do {
        pcVar18 = *(code **)(DAT_0440a250 + lVar20);
        iVar11 = iVar11 + -1;
        if (((DAT_0440a318 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0440a318), iVar10 != 0))
        {
          DAT_0440a310 = &PTR_LAB_042a7050;
          __cxa_guard_release(&DAT_0440a318);
        }
        (*pcVar18)(&DAT_0440a310,4,*(undefined8 *)(DAT_0440a250 + lVar20 + 8));
        lVar20 = lVar20 + -0x18;
      } while (0 < iVar11);
    }
    local_64[0] = '\0';
    uVar9 = FUN_02e7ead4(param_1,0,local_64);
    if (DAT_0440a5b4 != '\0' || local_64[0] != '\0') {
      uVar8 = FUN_02ec98a8(0);
      uVar4 = DAT_042ab268;
      uVar2 = DAT_042ab258;
      if (DAT_0440a5b8 == '\0') {
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      else if ((DAT_0440a7c8 == '\0') || ((DAT_042aa0f0 & 1) != 0)) {
        if (*(long *)(param_1 + 0x90) < *(long *)(param_1 + 0x88)) {
          uVar8 = 0;
        }
        else {
          fVar21 = ((float)DAT_042ab258 *
                   (float)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88))) /
                   (DAT_0440a328 * 1000.0 * (float)DAT_042ab268) + *(float *)(param_1 + 0xa0);
          uVar8 = (uint)fVar21;
          if (uVar8 != 0) {
            *(float *)(param_1 + 0xa0) = fVar21 - (float)uVar8;
          }
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = uVar2 / uVar4;
          }
          if (uVar3 < uVar8) goto LAB_02e7eab4;
        }
      }
      else {
LAB_02e7eab4:
        uVar8 = 1;
      }
    }
    uVar12 = FUN_02e80dec(param_1);
    if (((uVar9 | (uint)uVar12) & 1) != 0) {
      uVar13 = (ulong)DAT_0440a0f8;
      if (DAT_0440a0f8 != 0) {
        for (lVar20 = *(long *)(PTR_DAT_04388730 + 0x10); lVar20 != 0;
            lVar20 = *(long *)(lVar20 + 0x10)) {
          if (((*(uint *)(*(long *)(lVar20 + 8) + 0x40) < 2) ||
              (lVar16 = *(long *)(*(long *)(*(long *)(lVar20 + 8) + 0x38) + 8), lVar16 == 0)) &&
             (lVar16 = DAT_0440a410, DAT_0440a410 == 0)) {
            FUN_02e43d1c();
            uVar13 = (ulong)DAT_0440a0f8;
            lVar16 = DAT_0440a410;
            uVar9 = DAT_0440a0f8;
          }
          else {
            uVar9 = (uint)uVar13;
          }
          if (uVar9 != 0) {
            puVar15 = *(ulong **)(lVar16 + 0xa8);
            puVar1 = puVar15 + *(uint *)(lVar16 + 0xb0);
            puVar17 = DAT_0440a0f0;
            do {
              if (puVar15 == puVar1) break;
              if (*puVar17 == *puVar15) {
                *(byte *)(lVar20 + 0x54) = *(byte *)(lVar20 + 0x54) | 1;
                break;
              }
              puVar7 = puVar17 + 1;
              if (*puVar15 <= *puVar17) {
                puVar15 = puVar15 + 1;
                puVar7 = puVar17;
              }
              puVar17 = puVar7;
            } while (puVar17 != DAT_0440a0f0 + uVar13);
          }
        }
        DAT_0440a0f8 = 0;
      }
      if (0 < (int)DAT_0440a268) {
        lVar20 = (ulong)((int)DAT_0440a268 - 1) * 0x18;
        iVar11 = (int)DAT_0440a268;
        do {
          pcVar18 = *(code **)(DAT_0440a260 + lVar20);
          iVar11 = iVar11 + -1;
          if (((DAT_0440a318 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_0440a318), iVar10 != 0)) {
            DAT_0440a310 = &PTR_LAB_042a7050;
            __cxa_guard_release(&DAT_0440a318);
          }
          (*pcVar18)(&DAT_0440a310,8,*(undefined8 *)(DAT_0440a260 + lVar20 + 8));
          lVar20 = lVar20 + -0x18;
        } while (0 < iVar11);
      }
      uVar12 = FUN_02ef380c(DAT_0440a140);
    }
    iVar11 = (int)DAT_0440a278;
    iVar10 = (int)DAT_0440a298;
    if (DAT_0440a498 != '\0') {
      uVar12 = FUN_02eb2954();
      iVar11 = (int)DAT_0440a278;
      iVar10 = (int)DAT_0440a298;
    }
    DAT_0440a278._0_4_ = iVar11;
    DAT_0440a298._0_4_ = iVar10;
    if (uVar8 == 0) {
      if (0 < iVar10) {
        lVar20 = (ulong)(iVar10 - 1) * 0x18;
        do {
          iVar10 = iVar10 + -1;
          pcVar18 = *(code **)(DAT_0440a290 + lVar20);
          if (((DAT_0440a318 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_0440a318), iVar11 != 0)) {
            DAT_0440a310 = &PTR_LAB_042a7050;
            __cxa_guard_release(&DAT_0440a318);
          }
          (*pcVar18)(&DAT_0440a310,0x40,*(undefined8 *)(DAT_0440a290 + lVar20 + 8));
          lVar20 = lVar20 + -0x18;
        } while (0 < iVar10);
      }
      nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
      return;
    }
    if (0 < iVar11) {
      lVar20 = (ulong)(iVar11 - 1) * 0x18;
      do {
        iVar11 = iVar11 + -1;
        pcVar18 = *(code **)(DAT_0440a270 + lVar20);
        if (((DAT_0440a318 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0440a318), iVar10 != 0))
        {
          DAT_0440a310 = &PTR_LAB_042a7050;
          __cxa_guard_release(&DAT_0440a318);
        }
        uVar12 = (*pcVar18)(&DAT_0440a310,0x10,*(undefined8 *)(DAT_0440a270 + lVar20 + 8));
        lVar20 = lVar20 + -0x18;
      } while (0 < iVar11);
    }
    lVar20 = DAT_0440a150;
    iVar11 = *(int *)(param_1 + 0x78) + 1;
    uVar12 = FUN_02f0f418(uVar12,iVar11,DAT_0440a150);
    FUN_02f0f418(uVar12,iVar11,lVar20 + 0x10);
    puVar5 = DAT_0440a158;
    uVar13 = (ulong)*(uint *)(DAT_0440a158 + 1);
    if (*(uint *)(DAT_0440a158 + 1) != 0) {
      puVar14 = (undefined8 *)*DAT_0440a158;
      puVar19 = puVar14;
      do {
        if (*(int *)*puVar19 == 1) {
          FUN_02edbb08((int *)*puVar19,iVar11);
          puVar14 = (undefined8 *)*puVar5;
          uVar13 = (ulong)*(uint *)(puVar5 + 1);
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar14 + uVar13);
    }
    if (DAT_0440a498 != '\0') {
      FUN_02eb2954();
    }
    FUN_02eb2b30();
    FUN_02ec6054(DAT_0440a180);
    plVar6 = DAT_0440b298;
    if ((*(char *)((long)DAT_0440b298 + 0x10c) != '\0') &&
       (uVar13 = nn::os::TryWaitSystemEvent((SystemEventType *)&DAT_0440b2a0), (uVar13 & 1) != 0)) {
      nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(plVar6 + 1));
      iVar11 = nn::audio::GetActiveAudioDeviceChannelCountForOutput();
      if (iVar11 == (int)plVar6[0x21]) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      else {
        *(int *)(plVar6 + 0x21) = iVar11;
        FUN_02ecab68();
      }
    }
    FUN_02f16ef8();
    FUN_02ea6390();
    FUN_02f112d8();
    if (0 < (int)DAT_0440a288) {
      lVar20 = (ulong)((int)DAT_0440a288 - 1) * 0x18;
      iVar11 = (int)DAT_0440a288;
      do {
        iVar11 = iVar11 + -1;
        pcVar18 = *(code **)(DAT_0440a280 + lVar20);
        if (((DAT_0440a318 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0440a318), iVar10 != 0))
        {
          DAT_0440a310 = &PTR_LAB_042a7050;
          __cxa_guard_release(&DAT_0440a318);
        }
        (*pcVar18)(&DAT_0440a310,0x20,*(undefined8 *)(DAT_0440a280 + lVar20 + 8));
        lVar20 = lVar20 + -0x18;
      } while (0 < iVar11);
    }
    uVar8 = uVar8 - 1;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    iVar11 = (int)DAT_0440a258;
  } while( true );
}


