/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dd220; name: FUN_027dd220
 */


void FUN_027dd220(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  local_28 = param_2;
  lVar5 = FUN_00e9439c(&local_58,param_2,&local_28);
  *param_1 = lVar5;
  lVar7 = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *param_1;
  }
  FUN_02c653d0(lVar7,*param_4);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_38);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_01123d00(local_38,&local_58);
  lVar7 = *param_1;
  FUN_02c625a0(lVar7,&local_58);
  FUN_02c63e2c(lVar7);
  FUN_02c5bdd8(lVar7);
  local_60 = 0;
  uVar6 = FUN_02c62bb4(lVar7,*param_3,(long)&local_60 + 4,&local_60);
  if ((uVar6 & 1) != 0) {
    FUN_02c62bd4(lVar7,local_60 & 0xffffffff);
    FUN_027dd150(lVar7);
  }
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


