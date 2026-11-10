/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785870; name: FUN_00785870
 */


void FUN_00785870(long param_1,EventType *param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  undefined *local_d0;
  undefined8 ***local_c8;
  undefined8 ***pppuStack_c0;
  MultiWaitHolderType aMStack_b0 [64];
  undefined1 *local_70;
  undefined8 uStack_68;
  
  FUN_00785cd4(param_1 + 0xe0);
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar4 = FUN_007850e8(param_1,&local_d0);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_007853a8(param_1,&local_d0), (uVar4 & 1) == 0)) {
      pMVar1 = (MutexType *)(param_1 + 0xc0);
      nn::os::LockMutex(pMVar1);
      if (param_2 == (EventType *)0x0) {
        do {
          while( true ) {
            if (*(char *)(param_1 + 0x110) != '\0') goto LAB_007859b8;
            iVar3 = FUN_0078558c(param_1,0);
            if (iVar3 == 0) break;
            if (iVar3 == 1) goto LAB_007859b8;
            if (iVar3 != 2) goto LAB_00785a04;
            lVar5 = extraout_x1_00;
            if (extraout_x1_00 != 0) goto LAB_007859ec;
          }
          lVar5 = FUN_00785674(param_1);
        } while (lVar5 == 0);
      }
      else {
        puVar2 = PTR_DAT_04373170 + 0x10;
        do {
          while( true ) {
            if (*(char *)(param_1 + 0x110) != '\0') goto LAB_007859b8;
            local_70 = (undefined1 *)0x0;
            uStack_68 = 0;
            local_d0 = puVar2;
            local_c8 = &local_c8;
            pppuStack_c0 = &local_c8;
            nn::os::InitializeMultiWaitHolder(aMStack_b0,param_2);
            local_70 = (undefined1 *)&local_d0;
            iVar3 = FUN_0078558c(param_1,&local_d0);
            FUN_00782f18(&local_d0);
            if (iVar3 == 2) break;
            if (iVar3 == 1) goto LAB_007859b8;
            if (iVar3 != 0) {
LAB_00785a04:
                    /* WARNING: Subroutine does not return */
              nn::detail::UnexpectedDefaultImpl("","",0);
            }
            lVar5 = FUN_00785674(param_1);
            if (lVar5 != 0) goto LAB_007859ec;
          }
          lVar5 = extraout_x1;
        } while (extraout_x1 == 0);
      }
LAB_007859ec:
      nn::os::UnlockMutex(pMVar1);
      FUN_00785034(param_1,lVar5);
    }
    else {
      FUN_00785034(param_1,local_d0);
    }
  }
LAB_007859c0:
  FUN_00785d0c(param_1 + 0xe0);
  return;
LAB_007859b8:
  nn::os::UnlockMutex(pMVar1);
  goto LAB_007859c0;
}


