/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008565ac; name: FUN_008565ac
 */


void FUN_008565ac(long param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_80 [3];
  undefined2 local_68;
  
  *param_2 = 0;
  *param_3 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  lVar3 = *(long *)(param_1 + 0x6e8);
  if (lVar3 == param_1 + 0x6e0) {
LAB_008566a8:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
    return;
  }
  puVar1 = PTR_DAT_04377418 + 0x10;
  uVar2 = FUN_007e3604(param_5);
  if ((uVar2 & 1) == 0) goto LAB_00856628;
  do {
    local_80[0] = puVar1;
    FUN_007e34ac(local_80,0xffffffff);
    local_68 = 0;
    uVar2 = FUN_007e440c(lVar3 + 0x38,local_80);
    if ((uVar2 & 1) != 0) {
      FUN_007e34a4(local_80);
      goto LAB_00856628;
    }
    uVar2 = FUN_007e440c(lVar3 + 0x38,param_5);
    FUN_007e34a4(local_80);
    if ((uVar2 & 1) != 0) goto LAB_00856628;
    while( true ) {
      lVar3 = *(long *)(lVar3 + 8);
      if (lVar3 == param_1 + 0x6e0) goto LAB_008566a8;
      uVar2 = FUN_007e3604(param_5);
      if ((uVar2 & 1) != 0) break;
LAB_00856628:
      uVar2 = FUN_007e440c(lVar3 + 0x18,param_4);
      if ((uVar2 & 1) != 0) {
        *param_2 = *(undefined4 *)(lVar3 + 0x10);
        *param_3 = *(undefined4 *)(lVar3 + 0x14);
        goto LAB_008566a8;
      }
    }
  } while( true );
}


